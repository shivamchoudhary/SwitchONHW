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
        input logic [31:0]  input1, input2, input3,
        input logic [11:0]  input_ram_wr_add1, input_ram_wr_add2, input_ram_wr_add3,
        input logic         write_enable,

        output logic        out_ram_wr1, out_ram_wr2, out_ram_wr3,
        output logic [31:0] output1, output2, output3,
        output logic [11:0] input_ram_rd_add1, input_ram_rd_add2, input_ram_rd_add3,
        output logic        input_ram_rden1, input_ram_rden2, input_ram_rden3); 
    
    logic empty1, empty2, empty3;
    logic write_cycle;

    initial begin
        write_cycle = 0;
        output1 = 0; output2 = 0; output3 = 0;
        out_ram_wr1 = 0; out_ram_wr2 = 0; out_ram_wr3 = 0;
        input_ram_rd_add1 = 0; input_ram_rd_add2 = 0; input_ram_rd_add3 = 0;
    end

    function logic set_rd(logic [31:0] data, logic empty);
        if(!empty)
            case(data[1:0])
                2'b00 : if(!out_ram_wr2) begin
                    output2 = data;
                    out_ram_wr2 = 1;
                    return 1;
                end
                else
                    return 0;
                2'b10 : if(!out_ram_wr2) begin
                    output2 = data;
                    out_ram_wr2 = 1;
                    return 1;
                end
                else
                    return 0;
                2'b01 : if(!out_ram_wr1) begin
                    output1 = data;
                    out_ram_wr1 = 1;
                    return 1;
                end
                else
                    return 0;
                2'b11 : if(!out_ram_wr3) begin
                    output3 = data;
                    out_ram_wr3 = 1;
                    return 1;
                end
                else
                    return 0;
            endcase
        else
            return 0;
    endfunction

    always_ff @(posedge clk) begin
        input_ram_rden1 = 1; input_ram_rden2 = 1; input_ram_rden3 = 1;
        //all packets have been written to RAM
        if(write_enable)begin
            if(write_cycle) begin
                write_cycle = 0;
                if(input_ram_rd_add1 < input_ram_wr_add1)
                    empty1 = 0;
                else
                    empty1 = 1;
                if(input_ram_rd_add2 < input_ram_wr_add2)
                    empty2 = 0;
                else
                    empty2 = 1;
                if(input_ram_rd_add3 < input_ram_wr_add3)
                    empty3 = 0;
                else
                    empty3 = 1;

                input_ram_rd_add1 = input_ram_rd_add1 + set_rd(input1, empty1);
                input_ram_rd_add2 = input_ram_rd_add2 + set_rd(input2, empty2);
                input_ram_rd_add3 = input_ram_rd_add3 + set_rd(input3, empty3);
            end
            else begin
                write_cycle = 1;
                out_ram_wr1 = 0; out_ram_wr2 = 0; out_ram_wr3 = 0;
            end
        end
    end
endmodule
