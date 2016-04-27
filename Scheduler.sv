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
    input logic [31:0] input1, input2, input3,
    input logic [11:0] input_ram_wr_add1, input_ram_wr_add2, input_ram_wr_add3,
        
    output logic [11:0] input_ram_rd_add1, input_ram_rd_add2, input_ram_rd_add3,
    output logic [1:0]  mux_sel1, mux_sel2, mux_sel3,
    output logic        out_ram_wr1, out_ram_wr2, out_ram_wr3,
    output logic        input_ram_rden1, input_ram_rden2, input_ram_rden3);

	logic write_cycle;
	logic ram_not_empty1, ram_not_empty2, ram_not_empty3;

	initial begin
		write_cycle = 0;
		input_ram_rd_add1 = 1; input_ram_rd_add2 = 1; input_ram_rd_add3 = 1;
	end 
	
	function logic set_rd(logic[31:0] data, logic[1:0] in, logic size);
		if(data)
			case(data[1:0])
				2'b01 : begin

					if(!out_ram_wr1 && size)begin
						out_ram_wr1 = 1;
						mux_sel1 = in;
						return 1;
					end
					else
						return 0;
				end

				2'b10 : begin
					if(!out_ram_wr2 && size)begin
						out_ram_wr2 = 1;
						mux_sel2 = in;
					return 1;
					end
					else 
						return 0;
				end

				2'b11 : begin
					if(!out_ram_wr3 && size)begin
						out_ram_wr3 = 1;
							mux_sel3 = in;
						return 1;
					end
					else 
						return 0;			
				end

				2'b00 : begin
					if(!out_ram_wr2 && size)begin
						out_ram_wr2 = 1;
						mux_sel2 = in;
						return 1;
					end
					else 
						return 0;
				end
				
				default : return 0;
			endcase
    else
			return 1;
	endfunction
	
    always_ff @(posedge clk) begin 
        if(write_cycle) begin
        // Init en's to Zero. We later set these to 1 as an data becomes available
        // on the corresponding output port. 
        // Makes sure that more than one packet is not sent to the same o/p port in 
        // one clock cycle.
        // en1 = 0; en2 = 0; en3 = 0;	
        // Similar to en. But, sel is an external signal to Scheduler and is required
        // in megamux and setting ramen1.
        // sel1 = 0; sel2 = 0; sel3 = 0;
        // Analyze each incoming packet and send them through the crossbar.	
            write_cycle = 0;
            if(input_ram_rd_add1 < input_ram_wr_add1)
                ram_not_empty1 = 1;
            if(input_ram_rd_add2 < input_ram_wr_add2)
                ram_not_empty2 = 1;
            if(input_ram_rd_add3 < input_ram_wr_add3)
                ram_not_empty3 = 1;
            if(set_rd(input1, 01, ram_not_empty1) && ram_not_empty1)
                input_ram_rd_add1 = input_ram_rd_add1 + 1;
            if(set_rd(input2, 10, ram_not_empty2) && ram_not_empty2)
                input_ram_rd_add2 = input_ram_rd_add2 + 1; 
            if(set_rd(input3, 11, ram_not_empty3) && ram_not_empty3)
                input_ram_rd_add3 = input_ram_rd_add3 + 1;
        end
        else begin
            write_cycle = write_cycle + 1;
            mux_sel1 = 0; mux_sel2 = 0; mux_sel3 = 0;
            out_ram_wr1 = 0; out_ram_wr2 = 0; out_ram_wr3 = 0;	
        end	
    end
endmodule
