module Scheduler(	input logic clk,
						input logic [7:0] data0, data1, data2, data3,
						output logic [2:0] sel0, sel1, sel2, sel3,
						output logic en0, en1, en2, en3,
						output logic rdreq0, rdreq1, rdreq2, rdreq3);
	
	function int set_rd(int address, int in);
		case(address)
			2'b00 : begin
						if(!en0)begin
							en0 = 1;
							sel0 = in;
							return 1;
						end
						else	return 0;
						end
			2'b01 : begin
						if(!en1)begin
							en1 = 1;
							sel1 = in;
							return 1;
						end
						else	return 0;
						end
			2'b10 : begin
						if(!en2)begin
							en2 = 1;
							sel2 = in;
							return 1;
						end
						else	return 0;
						end
			2'b11 : begin
						if(!en3)begin
							en3 = 1;
							sel3 = in;
							return 1;
						end
						else	return 0;			
						end
		endcase
	endfunction
	
	always_ff @(posedge clk) begin
		rdreq0 = 0; rdreq1 = 0; rdreq2 = 0; rdreq3 = 0;
		en0 = 0; en1 = 0; en2 = 0; en3 = 0;
		rdreq0 = set_rd(data0[1:0], 00);
		rdreq1 = set_rd(data1[1:0], 01);
		rdreq2 = set_rd(data2[1:0], 10);
		rdreq3 = set_rd(data3[1:0], 11);
	end	
endmodule