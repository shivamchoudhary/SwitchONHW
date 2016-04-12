module VGA_LED(input logic        clk,
	       input logic 	  reset,
			 input logic [7:0] writedata,
	       input logic 	  write, read,
	       input 		  chipselect,
	       input logic [2:0]  address,
			
	       output logic [7:0] VGA_R, VGA_G, VGA_B,
	       output logic 	  VGA_CLK, VGA_HS, VGA_VS, VGA_BLANK_n,
	       output logic 	  VGA_SYNC_n,
			 output logic [7:0] readdata);

	logic [7:0] din0, din1, din2, din3;				//inputs to the four fifos
	logic [7:0] data0, data1, data2, data3;		//outputs from the four fifos
	logic [2:0] sel0, sel1, sel2, sel3;				//select lines to the four multiplexers
	logic rdreq0, rdreq1, rdreq2, rdreq3;			//enables enqueue in the queue
	logic wrreq0, wrreq1, wrreq2, wrreq3;			//enables dequeue in the queue
	logic empty0, empty1, empty2, empty3, 
	logic full0, full1, full2, full3;
	logic en0, en1, en2, en3;
	logic [7:0] result0, result1, result2, result3;
	logic [1:0] usedw0, usedw1, usedw2, usedw3; 
	logic [7:0] hex0, hex1, hex2, hex3,
				   hex4, hex5, hex6, hex7;
					
	initial begin
		wrreq0 <= 0; wrreq1 <= 0; wrreq2 <= 0; wrreq3 <= 0;
		rdreq0 = 0; rdreq1 = 0; rdreq2 = 0; rdreq3 = 0;
		en0 = 0; en1 = 0; en2 = 0; en3 = 0;
	end

	Fifo fifo0(.clock(clk), .data(din0), .rdreq(rdreq0), .wrreq(wrreq0), .empty(empty0), .full(full0), .q(data0), .usedw(usedw0));	
	Fifo fifo1(.clock(clk), .data(din1), .rdreq(rdreq1), .wrreq(wrreq1), .empty(empty1), .full(full1), .q(data1), .usedw(usedw0));	
	Fifo fifo2(.clock(clk), .data(din2), .rdreq(rdreq2), .wrreq(wrreq2), .empty(empty2), .full(full2), .q(data2), .usedw(usedw0));	
	Fifo fifo3(.clock(clk), .data(din3), .rdreq(rdreq3), .wrreq(wrreq3), .empty(empty3), .full(full3), .q(data3), .usedw(usedw0));	

	megamux megamux0(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel0), .result(result0));
	megamux megamux1(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel1), .result(result1));
	megamux megamux2(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel2), .result(result2));
	megamux megamux3(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel3), .result(result3));
	
	Scheduler scheduler(.*);
	Buffer buffer(.*);
   Packet_Display packet_Display(.clk50(clk), .*);
	
   always_ff @(posedge clk)begin			//Enqueue to the fifo 
			if (chipselect && write) begin
				case(address)
					3'b000 : begin
						wrreq0 <= 1;
						din0 <= writedata;
					end
					3'b001 : begin
						wrreq1 <= 1;
						din1 <= writedata;
					end
					3'b010 : begin
						wrreq2 <= 1;
						din2 <= writedata;
					end
					3'b011 : begin
						wrreq3 <= 1;
						din3 <= writedata;
					end
					default : begin
						wrreq0 <= 0; wrreq1 <= 0; wrreq2 <= 0; wrreq3 <= 0;
					end
				endcase
			end
			else begin
				wrreq0 <= 0; wrreq1 <= 0; wrreq2 <= 0; wrreq3 <= 0;
			end
		end 
		
endmodule