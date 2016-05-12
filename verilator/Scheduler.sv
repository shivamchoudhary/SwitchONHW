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
        input logic         write_enable,
        input logic [1:0]   reset_rams,
        input logic [11:0]  input_ram_wr_add[4][4],

        output logic [31:0] total_time,
        output logic        out_ram_wr[4],
        output logic [31:0] outp[4],
        output logic [11:0] input_ram_rd_add[4][4],
        output logic        input_ram_rden[4][4]);

    //Write cycle, to make sure that the signal is stable on the output wires
    //of the RAMs. It usually takes three clock cycles for the data to
    //stabilize: one clock for the address to be incremented, second for the
    //data to be appear on the output wire. Theoritically, it should take two,
    //but sometimes there was a delay and it didnt. Hence, added the third.
    logic [1:0] write_cycle;
    // For end of packets.
    logic       eop[4];
    // Source packet information.
    logic [1:0] sport[4];
    // To determine if the total time should be incremented.
    logic       time_inc;

    initial begin
        write_cycle = 0;
        for(int i=0; i<4; i++) begin
            eop[i] = 1;
            sport[i] = 0;
        end
    end
 
    always_ff @(posedge clk) begin
        // Reset ram code. Not being used.
        if(reset_rams) begin
            for(int i=0; i<4; i++) begin
                for(int j=0; j<4; j++) begin
                    input_ram_rd_add[i][j] = 0;
                end
            end
        end 

        // If the write enable is high.
        if(write_enable) begin
            time_inc = 0;
            for(int i=0; i<4; i++)begin
                for(int j=0; j<4; j++)begin
                    // We tried setting these read signals high once and for
                    // all in the beginning, but if the ram is empty this
                    // tends to go low. Hence, doing this in every cycle. May
                    // be a better way, but going with brute force to avoid
                    // any unnecessary nuisance,
                    input_ram_rden[i][j] = 1;
                    // time_inc = 1 if for any ram, the read address is less
                    // than the right address, which means there is data to be
                    // read.
                    time_inc = time_inc | 
                               (input_ram_rd_add[i][j] < input_ram_wr_add[i][j]);
                end
            end
            total_time = total_time + time_inc;

            if(write_cycle==2) begin
                write_cycle = 0;
                // Here i represents the output rams and corresponding j,i
                // represent the input ram from which the information is
                // flowing. So, in essence internally its a 16x4 flow network.
                for(int i=0; i<4; i++)begin
                    for(int j=0; j<4; j++) begin
                        //Similar to the code in VGA_LED.
                        //If eop is reached and there is a next packet, set
                        //eop low and set the port informtion.
                        if(eop[i] && inp[j][i] && 
                                input_ram_rd_add[j][i] < input_ram_wr_add[j][i]) begin
                            eop[i] = 0;
                            sport[i] = j;
                        end
                        // If eop is not reached(eop is low), check from which
                        // input roam is the information is flowing, transfer
                        // the word and increment the address for the next
                        // word. Also, if the word is empty, set eop high.
                        if(!eop[i] && sport[i]==j)begin
                            outp[i] = inp[j][i];
                            out_ram_wr[i] = 1;
                            input_ram_rd_add[j][i] = input_ram_rd_add[j][i] + 1;
                            if(!inp[j][i])begin
                                eop[i] = 1;
								break;
                            end
                        end
                    end
                end
            end
            else begin
                write_cycle = write_cycle + 1;
                for(int i=0; i<4; i++) begin
                    // Set write enable signals to the rams low.
                    out_ram_wr[i] = 0;
                end
            end
        end
    end
endmodule
