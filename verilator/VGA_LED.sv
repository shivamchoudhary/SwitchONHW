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
	logic [31:0]   input00, input01, input02, input03;
	logic [31:0]   input10, input11, input12, input13;
	logic [31:0]   input20, input21, input22, input23;
	logic [31:0]   input30, input31, input32, input33;
   logic [11:0]    input_ram_rd_add00, input_ram_rd_add01, input_ram_rd_add02, input_ram_rd_add03;
   logic [11:0]    input_ram_rd_add10, input_ram_rd_add11, input_ram_rd_add12, input_ram_rd_add13;
   logic [11:0]    input_ram_rd_add20, input_ram_rd_add21, input_ram_rd_add22, input_ram_rd_add23;
   logic [11:0]    input_ram_rd_add30, input_ram_rd_add31, input_ram_rd_add32, input_ram_rd_add33;
   logic           input_ram_rden00, input_ram_rden01, input_ram_rden02, input_ram_rden03;
   logic           input_ram_rden10, input_ram_rden11, input_ram_rden12, input_ram_rden13;
   logic           input_ram_rden20, input_ram_rden21, input_ram_rden22, input_ram_rden23;
   logic           input_ram_rden30, input_ram_rden31, input_ram_rden32, input_ram_rden33;
   logic [31:0]    input_ram_wr_in00, input_ram_wr_in01, input_ram_wr_in02, input_ram_wr_in03;
   logic [31:0]    input_ram_wr_in10, input_ram_wr_in11, input_ram_wr_in12, input_ram_wr_in13;
   logic [31:0]    input_ram_wr_in20, input_ram_wr_in21, input_ram_wr_in22, input_ram_wr_in23;
   logic [31:0]    input_ram_wr_in30, input_ram_wr_in31, input_ram_wr_in32, input_ram_wr_in33;
   logic [11:0]    input_ram_wr_add00, input_ram_wr_add01, input_ram_wr_add02, input_ram_wr_add03;
   logic [11:0]    input_ram_wr_add10, input_ram_wr_add11, input_ram_wr_add12, input_ram_wr_add13;
   logic [11:0]    input_ram_wr_add20, input_ram_wr_add21, input_ram_wr_add22, input_ram_wr_add23;
   logic [11:0]    input_ram_wr_add30, input_ram_wr_add31, input_ram_wr_add32, input_ram_wr_add33;
   logic           input_ram_wren00, input_ram_wren01, input_ram_wren02, input_ram_wren03;
   logic           input_ram_wren10, input_ram_wren11, input_ram_wren12, input_ram_wren13;
   logic           input_ram_wren20, input_ram_wren21, input_ram_wren22, input_ram_wren23;
   logic           input_ram_wren30, input_ram_wren31, input_ram_wren32, input_ram_wren33;

	logic           out_ram_wr0, out_ram_wr1, out_ram_wr2, out_ram_wr3;
	logic [31:0]    output0, output1, output2, output3;

   logic [7:0]     hex1, hex2, hex3, hex4, hex5, hex6;
   logic           write_enable, read_enable, reset_rams;
	logic [31:0]	 total_time;

	initial begin
		reset_rams = 0;
	   write_enable = 0;
	   read_enable = 0;
		total_time = 0;
		input_ram_wren0 = 0; input_ram_wren1 = 0; input_ram_wren2 = 0; input_ram_wren3 = 0;
		input_ram_wr_add0 = 0; input_ram_wr_add1 = 0; input_ram_wr_add2 = 0; input_ram_wr_add3 = 0;
      input_ram_rd_add0 = 0; input_ram_rd_add1 = 0; input_ram_rd_add2 = 0; input_ram_rd_add3 = 0;
	end

   RAM input_ram00(.clock(clk), .data(input_ram_wr_in00),
        .rdaddress(input_ram_rd_add00), .rden(input_ram_rden00),
          .wraddress(input_ram_wr_add00), .wren(input_ram_wren00), .q(input00));
   RAM input_ram01(.clock(clk), .data(input_ram_wr_in01),
        .rdaddress(input_ram_rd_add01), .rden(input_ram_rden01),
          .wraddress(input_ram_wr_add01), .wren(input_ram_wren01), .q(input01));
   RAM input_ram02(.clock(clk), .data(input_ram_wr_in02),
        .rdaddress(input_ram_rd_add02), .rden(input_ram_rden02),
          .wraddress(input_ram_wr_add02), .wren(input_ram_wren02), .q(input02));
   RAM input_ram03(.clock(clk), .data(input_ram_wr_in03),
        .rdaddress(input_ram_rd_add03), .rden(input_ram_rden03),
          .wraddress(input_ram_wr_add03), .wren(input_ram_wren03), .q(input03));
   RAM input_ram10(.clock(clk), .data(input_ram_wr_in10),
        .rdaddress(input_ram_rd_add10), .rden(input_ram_rden10),
          .wraddress(input_ram_wr_add10), .wren(input_ram_wren10), .q(input10));
   RAM input_ram11(.clock(clk), .data(input_ram_wr_in11),
        .rdaddress(input_ram_rd_add11), .rden(input_ram_rden11),
          .wraddress(input_ram_wr_add11), .wren(input_ram_wren11), .q(input11));
   RAM input_ram12(.clock(clk), .data(input_ram_wr_in12),
        .rdaddress(input_ram_rd_add12), .rden(input_ram_rden12),
          .wraddress(input_ram_wr_add12), .wren(input_ram_wren12), .q(input12));
   RAM input_ram13(.clock(clk), .data(input_ram_wr_in13),
        .rdaddress(input_ram_rd_add13), .rden(input_ram_rden13),
          .wraddress(input_ram_wr_add13), .wren(input_ram_wren13), .q(input13));
   RAM input_ram20(.clock(clk), .data(input_ram_wr_in20),
        .rdaddress(input_ram_rd_add20), .rden(input_ram_rden20),
          .wraddress(input_ram_wr_add20), .wren(input_ram_wren20), .q(input20));
   RAM input_ram21(.clock(clk), .data(input_ram_wr_in21),
        .rdaddress(input_ram_rd_add21), .rden(input_ram_rden21),
          .wraddress(input_ram_wr_add21), .wren(input_ram_wren21), .q(input21));
   RAM input_ram22(.clock(clk), .data(input_ram_wr_in22),
        .rdaddress(input_ram_rd_add22), .rden(input_ram_rden22),
          .wraddress(input_ram_wr_add22), .wren(input_ram_wren22), .q(input22));
   RAM input_ram23(.clock(clk), .data(input_ram_wr_in23),
        .rdaddress(input_ram_rd_add23), .rden(input_ram_rden23),
          .wraddress(input_ram_wr_add23), .wren(input_ram_wren23), .q(input23));
   RAM input_ram30(.clock(clk), .data(input_ram_wr_in30),
        .rdaddress(input_ram_rd_add30), .rden(input_ram_rden30),
          .wraddress(input_ram_wr_add30), .wren(input_ram_wren30), .q(input30));
   RAM input_ram31(.clock(clk), .data(input_ram_wr_in31),
        .rdaddress(input_ram_rd_add31), .rden(input_ram_rden31),
          .wraddress(input_ram_wr_add31), .wren(input_ram_wren31), .q(input31));
   RAM input_ram32(.clock(clk), .data(input_ram_wr_in32),
        .rdaddress(input_ram_rd_add32), .rden(input_ram_rden32),
          .wraddress(input_ram_wr_add32), .wren(input_ram_wren32), .q(input32));
   RAM input_ram33(.clock(clk), .data(input_ram_wr_in33),
        .rdaddress(input_ram_rd_add33), .rden(input_ram_rden33),
          .wraddress(input_ram_wr_add33), .wren(input_ram_wren33), .q(input33));

   Scheduler scheduler(.*);
	Buffer buffer(.*);
   Packet_Display packet_Display(.clk50(clk), .*);

	always_ff @(posedge clk)begin
		if(reset_rams)begin
			reset_rams = 0;
		end

		if(input_ram_wren0)begin
			input_ram_wren0 = 0;
			input_ram_wr_add0 = input_ram_wr_add0 + 1;
		end
		if(input_ram_wren1)begin
			input_ram_wren1 = 0;
			input_ram_wr_add1 = input_ram_wr_add1 + 1;
		end
		if(input_ram_wren2)begin
			input_ram_wren2 = 0;
			input_ram_wr_add2 = input_ram_wr_add2 + 1;
		end
		if(input_ram_wren3)begin
			input_ram_wren3 = 0;
			input_ram_wr_add3 = input_ram_wr_add3 + 1;
		end
		if (chipselect && write) begin
			case(address)
				0 : begin
					input_ram_wren0 = 1;
					input_ram_wr_in0 = writedata[31:0];
				end
				1 : begin
					input_ram_wren1 = 1;
					input_ram_wr_in1 = writedata[31:0];
				end
			
				2 : begin
					input_ram_wren2 = 1; 				
					input_ram_wr_in2 = writedata[31:0];
				end
				
				3 : begin
					input_ram_wren3 = 1; 				
					input_ram_wr_in3 = writedata[31:0];		
				end
				15 : write_enable = 1;
				 14 : read_enable = 1;
				 13 : begin 
					  input_ram_wr_add0 = 0; input_ram_wr_add1 = 0; input_ram_wr_add2 = 0; input_ram_wr_add3 = 0;
					  	reset_rams = 1;
				 end
				default : begin
					input_ram_wren0 = 0; input_ram_wren1 = 0; input_ram_wren2 = 0; input_ram_wren3 = 0;
				end
			endcase
		end
		else begin
            input_ram_wren0 = 0; input_ram_wren1 = 0; input_ram_wren2 = 0; input_ram_wren3 = 0;
		end
	end
endmodule
