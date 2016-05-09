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
        input logic         write_enable,
        input logic [11:0]  input_ram_wr_add1, input_ram_wr_add2, input_ram_wr_add3,
		  
		  output logic [31:0]	 total_time,
        output logic        out_ram_wr1, out_ram_wr2, out_ram_wr3,
        output logic [31:0] output1, output2, output3,
        output logic [11:0] input_ram_rd_add1, input_ram_rd_add2, input_ram_rd_add3,
        output logic        input_ram_rden1, input_ram_rden2, input_ram_rden3);

    logic [1:0] write_cycle;
    logic [1:0] dport1, dport2, dport3;
    logic       in_packet1, in_packet2, in_packet3;

    initial begin
        write_cycle = 0;
        dport1 = 0; dport2 = 0; dport3 = 0;
        in_packet1 = 0; in_packet2 = 0; in_packet3 = 0;
        input_ram_rd_add1 = 0; input_ram_rd_add2 = 0; input_ram_rd_add3 = 0;
    end

    function logic[1:0] set_rd(logic [31:0] data, logic[1:0] dport);
        case(dport)
            0 : begin
                output2 = data;
                out_ram_wr2 = 1;
                if(!data)begin
                    in_packet2 = 0;
                    return 0;
                end
                return 2;
            end
            1 : begin
                output1 = data;
                out_ram_wr1 = 1;
                if(!data) begin
                    in_packet1 = 0;
                    return 0;
                end
                return 1;
            end
            2 : begin
                output2 = data;
                out_ram_wr2 = 1;
                if(!data)begin
                    in_packet2 = 0;
                    return 0;
                end
                return 2;
            end
            3 : begin
                output3 = data;
                out_ram_wr3 = 1;
                if(!data)begin
                    in_packet3 = 0;
                    return 0;
                end
                return 3;
            end
        endcase
    endfunction

    function logic[1:0] check_port(logic[1:0] dport);
        case(dport)
            0 : begin
                if(!in_packet2) begin
                    in_packet2 = 1;
                    return 2;
                end
                else return 0;
            end
            1 : begin
                if(!in_packet1) begin
                    in_packet1 = 1;
                    return 1;
                end
                else return 0;
            end
            2 : begin
                if(!in_packet2) begin
                    in_packet2 = 1;
                    return 2;
                end
                else return 0;
            end
            3 : begin
                if(!in_packet3) begin
                    in_packet3 = 1;
                    return 3;
                end
                else return 0;
            end
            default : return 1;
        endcase
    endfunction
    
    always_ff @(posedge clk) begin
        input_ram_rden1 = 1; input_ram_rden2 = 1; input_ram_rden3 = 1;
        if(write_enable) begin
				if(!((input_ram_rd_add1 == input_ram_wr_add1)&&
					(input_ram_rd_add1 == input_ram_wr_add1)&&
						(input_ram_rd_add1 == input_ram_wr_add1)))
						total_time = total_time + 1;
            if(write_cycle==2) begin
                write_cycle = 0;
                if(!dport1 && (input_ram_rd_add1 < input_ram_wr_add1)) begin
                    dport1 = check_port(input1[1:0]);
                end
                if(!dport2 && (input_ram_rd_add2 < input_ram_wr_add2)) begin
                    dport2 = check_port(input2[1:0]);
                end
                if(!dport3 && (input_ram_rd_add3 < input_ram_wr_add3)) begin
                    dport3 = check_port(input3[1:0]);
                end

                if(dport1)begin
                    dport1 = set_rd(input1, dport1);
                    input_ram_rd_add1 = input_ram_rd_add1 + 1;
                end
                if(dport2) begin
                    dport2 = set_rd(input2, dport2);
                    input_ram_rd_add2 = input_ram_rd_add2 + 1;
                end
                if(dport3) begin
                    dport3 = set_rd(input3, dport3);
                    input_ram_rd_add3 = input_ram_rd_add3 + 1;
                end
            end
            else begin
                write_cycle = write_cycle + 1;
                out_ram_wr1 = 0; out_ram_wr2 = 0; out_ram_wr3 = 0;
            end
        end
    end
endmodule
