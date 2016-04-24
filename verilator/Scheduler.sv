module Scheduler(	input logic clk,
						input logic [31:0] data1, data2, data3,
						input logic [1:0] usedw1, usedw2, usedw3,
						output logic [1:0] sel1, sel2, sel3,
						output logic en1, en2, en3,
						output logic rdreq1, rdreq2, rdreq3);
	
	logic written;
	
	initial begin
		written = 0;
	end 
	
	function logic set_rd(logic[31:0] data, logic[1:0] in, logic[1:0] empty);
		if(data)
            case(data[1:0])
                2'b01 : begin
                            if(!en1 && empty)begin
                                en1 = 1;
                                sel1 = in;
                                return 1;
                            end
                            else
                                return 0;
                        end
                2'b10 : begin
                            if(!en2 && empty)begin
                                en2 = 1;
                                sel2 = in;
                                return 1;
                            end
                            else 
                                return 0;
                        end
                2'b11 : begin
                            if(!en3 && empty)begin
                                en3 = 1;
                                sel3 = in;
                                return 1;
                            end
                            else 
                                return 0;			
                        end
                2'b00 : begin
                            if(!en2 && empty)begin
                                en2 = 1;
                                sel2 = in;
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
		if(!written) begin
	// Init en's to Zero. We later set these to 1 as an data becomes available on the corresponding output port. 
	// Makes sure that more than one packet is not sent to the same o/p port in one clock cycle.
//		en1 = 0; en2 = 0; en3 = 0;	
	// Similar to en. But, sel is an external signal to Scheduler and is required in megamux and setting ramen1.
//		sel1 = 0; sel2 = 0; sel3 = 0;
	// Analyze each incoming packet and send them through the crossbar.	
    		written = 1;
		    rdreq1 = set_rd(data1, 01, usedw1);
		    rdreq2 = set_rd(data2, 10, usedw2);
		    rdreq3 = set_rd(data3, 11, usedw3);
		end
		else begin
			written = 0;
			sel1 = 0; sel2 = 0; sel3 = 0;
			en1 = 0; en2 = 0; en3 = 0;	
			rdreq1 = 0; rdreq2 = 0; rdreq3 = 0;
		end	
endmodule
