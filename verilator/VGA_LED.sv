module VGA_LED(input logic      clk,
	        input logic 	    reset,
			input logic [31:0]  writedata,
	        input logic 	    write, read, 
	        input               chipselect,
	        input logic [3:0]   address,
			
	        output logic [7:0]  VGA_R, VGA_G, VGA_B,
	        output logic 	    VGA_CLK, VGA_HS, VGA_VS, VGA_BLANK_n,
	        output logic 	    VGA_SYNC_n,
            output logic [31:0] readdata);

    // Naming convention is the part of module the signal is for followed by
    // the use of the signal, written in camel case. For example, fifo_in
	logic [31:0] fifo_in1, fifo_in2, fifo_in3;						//inputs to the four fifos
	logic [31:0] fifo_out0, fifo_out1, fifo_out2, fifo_out3;		//outputs from the four fifos
	logic [1:0] fifo_size1, fifo_size2, fifo_size3; 
	logic fifo_rd1, fifo_rd2, fifo_rd3;						//enables enqueue in the queue
	logic fifo_wr1, fifo_wr2, fifo_wr3;						//enables dequeue in the queue
	logic fifo_empty1, fifo_empty2, fifo_empty3; 
	logic fifo_full1, fifo_full2, fifo_full3;

    logic input1, input2, input3;
    logic input_ram_in1, input_ram_in2, input_ram_in3;
    logic input_ram_rd_add1, input_ram_rd_add2, input_ram_rd_add3;
    logic input_ram_rden1, input_ram_rden2, input_ram_rden3;
    logic input_ram_wr_add1, input_ram_wr_add2, input_ram_wr_add3;
    logic input_ram_wren1, input_ram_wren2, input_ram_wren3;

	logic out_ram_wr1, out_ram_wr2, out_ram_wr3;
	logic [1:0] mux_sel1, mux_sel2, mux_sel3;						//select lines to the four multiplexers
	logic [31:0] output1, output2, output3;

    logic [7:0] hex1, hex2, hex3, hex4, hex5, hex6;
					
	initial begin
		fifo_out0 = 0;
		fifo_wr1 = 0; fifo_wr2 = 0; fifo_wr3 = 0;
		fifo_rd1 = 0; fifo_rd2 = 0; fifo_rd3 = 0;
	end

	Fifo fifo1(.clock(clk), .data(fifo_in1), .rdreq(fifo_rd1), .wrreq(fifo_wr1), 
	    .empty(fifo_empty1), .full(fifo_full1), .q(fifo_out1), .usedw(fifo_size1));	
	Fifo fifo2(.clock(clk), .data(fifo_in2), .rdreq(fifo_rd2), .wrreq(fifo_wr2), 
	    .empty(fifo_empty2), .full(fifo_full2), .q(fifo_out2), .usedw(fifo_size2));	
	Fifo fifo3(.clock(clk), .data(fifo_in3), .rdreq(fifo_rd3), .wrreq(fifo_wr3), 
	    .empty(fifo_empty3), .full(fifo_full3), .q(fifo_out3), .usedw(fifo_size3));	

	megamux megamux1(.data0x(fifo_out0), .data1x(fifo_out1), .data2x(fifo_out2), 
	    .data3x(fifo_out3), .sel(mux_sel1), .result(output1));
	megamux megamux2(.data0x(fifo_out0), .data1x(fifo_out1), .data2x(fifo_out2), 
	    .data3x(fifo_out3), .sel(mux_sel2), .result(output2));
	megamux megamux3(.data0x(fifo_out0), .data1x(fifo_out1), .data2x(fifo_out2), 
	    .data3x(fifo_out3), .sel(mux_sel3), .result(output3));
	
    RAM input_ram1(.clock(clk), .data(input_ram_in1), 
        .rdaddress(input_ram_rd_add1), .rden(input_ram_rden1),
          .wraddress(input_ram_wr_add1), .wren(input_ram_wren1),.q(input1));
    RAM input_ram2(.clock(clk), .data(input_ram_in2), 
        .rdaddress(input_ram_rd_add2), .rden(input_ram_rden2),
          .wraddress(input_ram_wr_add2), .wren(input_ram_wren2),.q(input2));
    RAM input_ram3(.clock(clk), .data(input_ram_in3), 
        .rdaddress(input_ram_rd_add3), .rden(input_ram_rden3),
          .wraddress(input_ram_wr_add3), .wren(input_ram_wren3),.q(input3));
	
    Scheduler scheduler(.*);
	Buffer buffer(.*);
    Packet_Display packet_Display(.clk50(clk), .*);
	
    always_ff @(posedge clk)begin			//Enqueue to the fifo 
		if (chipselect && write) begin   // Data is on the avalon bus
			case(address[2:0]) 						// Check the address sent from userspace
				3'b001 : begin 				// FIFO1
					fifo_wr1 <= 1; 				// Set Write Request FIFO1 to 1
					fifo_in1 <= writedata[31:0];		// Send data on din1 (after one clock cycle)
					if (fifo_wr2)
						fifo_wr2 <= 0;
					if (fifo_wr3)
						fifo_wr3 <= 0;
				end
				3'b010 : begin
					fifo_wr2 <= 1;
					fifo_in2 <= writedata[31:0];
					if (fifo_wr1)
						fifo_wr1 <= 0;
					if (fifo_wr3)
						fifo_wr3 <= 0;
				end
				3'b011 : begin
					fifo_wr3 <= 1;
					fifo_in3 <= writedata[31:0];
					if (fifo_wr2)
						fifo_wr2 <= 0;
					if (fifo_wr1)
						fifo_wr1 <= 0;					
				end
				default : begin
					fifo_wr1 <= 0; fifo_wr2 <= 0; fifo_wr3 <= 0;
				end
			endcase
		end
		else begin
			fifo_wr1 <= 0; fifo_wr2 <= 0; fifo_wr3 <= 0;
		end
	end
endmodule
