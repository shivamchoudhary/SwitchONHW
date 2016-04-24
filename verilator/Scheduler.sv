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
  input logic [31:0] fifo_out1, fifo_out2, fifo_out3,
  input logic [1:0] fifo_size1, fifo_size2, fifo_size3,
  output logic [1:0] mux_sel1, mux_sel2, mux_sel3,
  output logic out_ram_wr1, out_ram_wr2, out_ram_wr3,
  output logic fifo_rd1, fifo_rd2, fifo_rd3);

	logic[1:0] write_cycle;
	
	initial begin
		write_cycle = 0;
	end 
	
	function logic set_rd(logic[31:0] data, logic[1:0] in, logic[1:0] size);
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
			return 0;
	endfunction
	
	always_ff @(posedge clk) 
		if(write_cycle==2) begin
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
		    fifo_rd1 = set_rd(fifo_out1, 01, fifo_size1);
		    fifo_rd2 = set_rd(fifo_out2, 10, fifo_size2);
		    fifo_rd3 = set_rd(fifo_out3, 11, fifo_size3);
		end
		else begin
			write_cycle = write_cycle + 1;
			mux_sel1 = 0; mux_sel2 = 0; mux_sel3 = 0;
			out_ram_wr1 = 0; out_ram_wr2 = 0; out_ram_wr3 = 0;	
			fifo_rd1 = 0; fifo_rd2 = 0; fifo_rd3 = 0;
		end	
endmodule
