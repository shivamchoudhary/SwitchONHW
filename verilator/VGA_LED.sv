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
	logic [31:0]    fifo_in1, fifo_in2, fifo_in3;						
	logic [31:0]    fifo_out1, fifo_out2, fifo_out3;		
	logic [1:0]     fifo_size1, fifo_size2, fifo_size3; 
	logic           fifo_rd1, fifo_rd2, fifo_rd3;						
	logic           fifo_wr1, fifo_wr2, fifo_wr3;					
	logic           fifo_empty1, fifo_empty2, fifo_empty3; 
	logic           fifo_full1, fifo_full2, fifo_full3;

    logic [31:0]    input1, input2, input3;
    logic [11:0]    input_ram_rd_add1, input_ram_rd_add2, input_ram_rd_add3;
    logic           input_ram_rden1, input_ram_rden2, input_ram_rden3;
    logic [31:0]    input_ram_wr_in1, input_ram_wr_in2, input_ram_wr_in3;
    logic [11:0]    input_ram_wr_add1, input_ram_wr_add2, input_ram_wr_add3;
    logic           input_ram_wren1, input_ram_wren2, input_ram_wren3;

	logic           out_ram_wr1, out_ram_wr2, out_ram_wr3;
	logic [31:0]    output1, output2, output3;

    logic [7:0]     hex1, hex2, hex3, hex4, hex5, hex6;
    logic           write_enable, read_enable;
					
	initial begin
	    write_enable = 0;
	    read_enable = 0;
		fifo_wr1 = 0; fifo_wr2 = 0; fifo_wr3 = 0;
		fifo_rd1 = 0; fifo_rd2 = 0; fifo_rd3 = 0;
		input_ram_wr_add1 = 0; input_ram_wr_add2 = 0; input_ram_wr_add3 = 0;
	end

    RAM input_ram1(.clock(clk), .data(input_ram_wr_in1), 
        .rdaddress(input_ram_rd_add1), .rden(input_ram_rden1),
          .wraddress(input_ram_wr_add1), .wren(input_ram_wren1), .q(input1));
    RAM input_ram2(.clock(clk), .data(input_ram_wr_in2), 
        .rdaddress(input_ram_rd_add2), .rden(input_ram_rden2),
          .wraddress(input_ram_wr_add2), .wren(input_ram_wren2), .q(input2));
    RAM input_ram3(.clock(clk), .data(input_ram_wr_in3), 
        .rdaddress(input_ram_rd_add3), .rden(input_ram_rden3),
          .wraddress(input_ram_wr_add3), .wren(input_ram_wren3), .q(input3));

    Fifo fifo1(.clock(clk), .data(fifo_in1), .rdreq(fifo_rd1), .wrreq(fifo_wr1), 
        .empty(fifo_empty1), .full(fifo_full1), .q(fifo_out1), .usedw(fifo_size1));	
    Fifo fifo2(.clock(clk), .data(fifo_in2), .rdreq(fifo_rd2), .wrreq(fifo_wr2), 
        .empty(fifo_empty2), .full(fifo_full2), .q(fifo_out2), .usedw(fifo_size2));	
    Fifo fifo3(.clock(clk), .data(fifo_in3), .rdreq(fifo_rd3), .wrreq(fifo_wr3), 
        .empty(fifo_empty3), .full(fifo_full3), .q(fifo_out3), .usedw(fifo_size3));	

    Scheduler scheduler(.*);
	Buffer buffer(.*);
    Packet_Display packet_Display(.clk50(clk), .*);
	
    always_ff @(posedge clk)begin
		if(input_ram_wren1)begin
			input_ram_wren1 <= 0;
			input_ram_wr_add1 <= input_ram_wr_add1 + 1;	
		end
		if(input_ram_wren2)begin
			input_ram_wren2 <= 0;
			input_ram_wr_add2 <= input_ram_wr_add2 + 1;	
		end
		if(input_ram_wren3)begin
			input_ram_wren3 <= 0;
			input_ram_wr_add3 <= input_ram_wr_add3 + 1;	
		end
		if (chipselect && write) begin   
			case(address) 						
				1 : begin 				
					input_ram_wren1 <= 1; 				
					input_ram_wr_in1 <= writedata[31:0];
				end
			
				2 : begin
					input_ram_wren2 <= 1; 				
					input_ram_wr_in2 <= writedata[31:0];
				end
				
				3 : begin
					input_ram_wren3 <= 1; 				
					input_ram_wr_in3 <= writedata[31:0];		
				end
                15 : write_enable <= 1;
                14 : read_enable <= 1;
				default : begin
					input_ram_wren1 <= 0; input_ram_wren2 <= 0; input_ram_wren3 <= 0;
				end
			endcase
		end
		else begin
			input_ram_wren1 <= 0; input_ram_wren2 <= 0; input_ram_wren3 <= 0;
		end
	end
endmodule
