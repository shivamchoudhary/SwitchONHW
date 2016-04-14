module Scheduler(	input logic clk,
						input logic [7:0] data1, data2, data3,
						input logic empty1, empty2, empty3,
						output logic [2:0] sel1, sel2, sel3,
						output logic en1, en2, en3,
						output logic rdreq1, rdreq2, rdreq3);
	
	function int set_rd(int data, int in, int empty);
		case(data[1:0])
			2'b01 : begin
						if(!en1 && !empty)begin
							en1 = 1;
							sel1 = in;
							return 1;
						end
						else	return 0;
						end
			2'b10 : begin
						if(!en2 && !empty)begin
							en2 = 1;
							sel2 = in;
							return 1;
						end
						else	return 0;
						end
			2'b11 : begin
						if(!en3 && !empty)begin
							en3 = 1;
							sel3 = in;
							return 1;
						end
						else	return 0;			
						end
			default : begin
							return 1;
						end
		endcase
	endfunction
	
	always_ff @(posedge clk) begin
		rdreq1 = 0; rdreq2 = 0; rdreq3 = 0;
		en1 = 0; en2 = 0; en3 = 0;
		rdreq1 = set_rd(data1, 01, empty1);
		rdreq2 = set_rd(data2, 10, empty2);
		rdreq3 = set_rd(data3, 11, empty3);
	end	
endmodule