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

	logic [7:0] din1, din2, din3;				//inputs to the four fifos
	logic [7:0] data0, data1, data2, data3;		//outputs from the four fifos
	logic [1:0] sel1, sel2, sel3;				//select lines to the four multiplexers
	logic rdreq1, rdreq2, rdreq3;			//enables enqueue in the queue
	logic wrreq1, wrreq2, wrreq3;			//enables dequeue in the queue
	logic empty1, empty2, empty3; 
	logic full1, full2, full3;
	logic ramen1, ramen2, ramen3;
	logic [7:0] result1, result2, result3;
	logic [1:0] usedw1, usedw2, usedw3; 
	logic [7:0] hex1, hex2, hex3,
				   hex4, hex5, hex6;
					
	initial begin
		data0 <= 0;
		wrreq1 <= 0; wrreq2 <= 0; wrreq3 <= 0;
		rdreq1 <= 0; rdreq2 <= 0; rdreq3 <= 0;
	end

	Fifo fifo1(.clock(clk), .data(din1), .rdreq(rdreq1), .wrreq(wrreq1), .empty(empty1), .full(full1), .q(data1), .usedw(usedw1));	
	Fifo fifo2(.clock(clk), .data(din2), .rdreq(rdreq2), .wrreq(wrreq2), .empty(empty2), .full(full2), .q(data2), .usedw(usedw2));	
	Fifo fifo3(.clock(clk), .data(din3), .rdreq(rdreq3), .wrreq(wrreq3), .empty(empty3), .full(full3), .q(data3), .usedw(usedw3));	

	megamux megamux1(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel1), .result(result1));
	megamux megamux2(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel2), .result(result2));
	megamux megamux3(.data0x(data0),	.data1x(data1), .data2x(data2), .data3x(data3), .sel(sel3), .result(result3));
	
	Scheduler scheduler(.*);
	Buffer buffer(.*);
   Packet_Display packet_Display(.clk50(clk), .*);
	
   always_ff @(posedge clk)begin			//Enqueue to the fifo 
		if (chipselect && write) begin   // Data is on the avalon bus
			case(address) 						// Check the address sent from userspace
				3'b001 : begin 				// FIFO1
					wrreq1 <= 1; 				// Set Write Request FIFO1 to 1
					din1 <= writedata;		// Send data on din1 (after one clock cycle)
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
					wrreq1 <= 0; wrreq2 <= 0; wrreq3 <= 0;
				end
			endcase
		end
		else begin
			wrreq1 <= 0; wrreq2 <= 0; wrreq3 <= 0;
		end
	end
   // ramen1 controls the input to RAM 1 if sel1 is enabled
	always_ff @(posedge clk) begin 
		ramen1 <= (sel1[0] || sel1[1]) && !empty1;
		ramen2 <= (sel2[0] || sel2[1]) && !empty2;
		ramen3 <= (sel3[0] || sel3[1]) && !empty3;
	end		
endmodule
