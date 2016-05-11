//START_MODULE_NAME------------------------------------------------------------
//
// Module Name     :  Scheduler
//
// Description     :  Reads values from FIFO and schedules to prevent
//                    collisions.
//
// Limitation      :  Testing Required
// 
// Results expected:  TDB
// //
//END_MODULE_NAME--------------------------------------------------------------


module Scheduler(input logic clk,
        input logic [31:0]  inp[4][4],
        input logic         write_enable, reset_rams,
        input logic [11:0]  input_ram_wr_add[4][4],

        output logic [31:0] total_time,
        output logic        out_ram_wr[4],
        output logic [31:0] outp[4],
        output logic [11:0] input_ram_rd_add[4][4],
        output logic        input_ram_rden[4][4]);

    logic [1:0] write_cycle;
    logic       eop[4];
    logic [1:0] sport[4];
    logic       time_inc;

    initial begin
        write_cycle = 0;
        for(int i=0; i<4; i++) begin
            eop[i] = 1;
            sport[i] = 0;
        end
    end
 
    always_ff @(posedge clk) begin
        if(reset_rams) begin
            for(int i=0; i<4; i++) begin
                for(int j=0; j<4; j++) begin
                    input_ram_rd_add[i][j] = 0;
                end
            end
        end 

        if(write_enable) begin
            time_inc = 0;
            for(int i=0; i<4; i++)begin
                for(int j=0; j<4; j++)begin
                    input_ram_rden[i][j] = 1;
                    time_inc = time_inc | 
                               (input_ram_rd_add[i][j] < input_ram_wr_add[i][j]);
                end
            end
            total_time = total_time + time_inc;

            if(write_cycle==2) begin
                write_cycle = 0;
                for(int i=0; i<4; i++)begin
                    for(int j=0; j<4; j++) begin
                        if(eop[i] && inp[j][i] && 
                                input_ram_rd_add[j][i] < input_ram_wr_add[j][i]) begin
                            eop[i] = 0;
                            sport[i] = j;
                        end
                        if(!eop[i] && sport[i]==j)begin
                            outp[i] = inp[j][i];
                            out_ram_wr[i] = 1;
                            input_ram_rd_add[j][i] = input_ram_rd_add[j][i] + 1;
                            if(!inp[j][i])begin
                                eop[i] = 1;
                                j = 4;
                            end
                        end
                    end
                end
            end
            else begin
                write_cycle = write_cycle + 1;
                for(int i=0; i<4; i++) begin
                    out_ram_wr[i] = 0;
                end
            end
        end
    end
endmodule
