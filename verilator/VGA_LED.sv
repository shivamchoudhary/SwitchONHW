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
    logic [31:0]    inp[4][4], outp[4], input_ram_wr_in[4][4];
    logic [11:0]    input_ram_rd_add[4][4], input_ram_wr_add[4][4];
    logic           input_ram_rden[4][4], input_ram_wren[4][4];
	logic           out_ram_wr[4];

    // logic signals to enable write and read to the output RAM.
    logic           write_enable, read_enable;
    // signal to reset rams. Not being used right now. Was giving us problems.
    // We burn the hardware again after each test run of packets.
    // The only visible option.
    logic [1:0]     reset_rams;
    //  Calculates the number of clock cycles it takes to transfer the entire
    //  data from the input rams. Necessary to calculate the effective speed.
    logic [31:0]    total_time;
    logic [1:0]     port[4];
    logic           eop[4];

	initial begin
		reset_rams = 0; write_enable = 0; read_enable = 0; total_time = 0;
        for(int i=0; i<4; i++)begin
            for(int j=0; j<4; j++)begin
                input_ram_rd_add[i][j] = 0;
                input_ram_wr_add[i][j] = 0;
                input_ram_rden[i][j] = 0;
                input_ram_wren[i][j] = 0;
            end
            port[i] = 0;
            eop[i] = 1;
        end
	end

    //Incoming packets modeled as 16 rams, 1 for each combination of input and
    //output port
   RAM input_ram00(.clock(clk), .data(input_ram_wr_in[0][0]),
        .rdaddress(input_ram_rd_add[0][0]), .rden(input_ram_rden[0][0]),
          .wraddress(input_ram_wr_add[0][0]), .wren(input_ram_wren[0][0]), .q(inp[0][0]));
   RAM input_ram01(.clock(clk), .data(input_ram_wr_in[0][1]),
        .rdaddress(input_ram_rd_add[0][1]), .rden(input_ram_rden[0][1]),
          .wraddress(input_ram_wr_add[0][1]), .wren(input_ram_wren[0][1]), .q(inp[0][1]));
   RAM input_ram02(.clock(clk), .data(input_ram_wr_in[0][2]),
        .rdaddress(input_ram_rd_add[0][2]), .rden(input_ram_rden[0][2]),
          .wraddress(input_ram_wr_add[0][2]), .wren(input_ram_wren[0][2]), .q(inp[0][2]));
   RAM input_ram03(.clock(clk), .data(input_ram_wr_in[0][3]),
        .rdaddress(input_ram_rd_add[0][3]), .rden(input_ram_rden[0][3]),
          .wraddress(input_ram_wr_add[0][3]), .wren(input_ram_wren[0][3]), .q(inp[0][3]));
   RAM input_ram10(.clock(clk), .data(input_ram_wr_in[1][0]),
        .rdaddress(input_ram_rd_add[1][0]), .rden(input_ram_rden[1][0]),
          .wraddress(input_ram_wr_add[1][0]), .wren(input_ram_wren[1][0]), .q(inp[1][0]));
   RAM input_ram11(.clock(clk), .data(input_ram_wr_in[1][1]),
        .rdaddress(input_ram_rd_add[1][1]), .rden(input_ram_rden[1][1]),
          .wraddress(input_ram_wr_add[1][1]), .wren(input_ram_wren[1][1]), .q(inp[1][1]));
   RAM input_ram12(.clock(clk), .data(input_ram_wr_in[1][2]),
        .rdaddress(input_ram_rd_add[1][2]), .rden(input_ram_rden[1][2]),
          .wraddress(input_ram_wr_add[1][2]), .wren(input_ram_wren[1][2]), .q(inp[1][2]));
   RAM input_ram13(.clock(clk), .data(input_ram_wr_in[1][3]),
        .rdaddress(input_ram_rd_add[1][3]), .rden(input_ram_rden[1][3]),
          .wraddress(input_ram_wr_add[1][3]), .wren(input_ram_wren[1][3]), .q(inp[1][3]));
   RAM input_ram20(.clock(clk), .data(input_ram_wr_in[2][0]),
        .rdaddress(input_ram_rd_add[2][0]), .rden(input_ram_rden[2][0]),
          .wraddress(input_ram_wr_add[2][0]), .wren(input_ram_wren[2][0]), .q(inp[2][0]));
   RAM input_ram21(.clock(clk), .data(input_ram_wr_in[2][1]),
        .rdaddress(input_ram_rd_add[2][1]), .rden(input_ram_rden[2][1]),
          .wraddress(input_ram_wr_add[2][1]), .wren(input_ram_wren[2][1]), .q(inp[2][1]));
   RAM input_ram22(.clock(clk), .data(input_ram_wr_in[2][2]),
        .rdaddress(input_ram_rd_add[2][2]), .rden(input_ram_rden[2][2]),
          .wraddress(input_ram_wr_add[2][2]), .wren(input_ram_wren[2][2]), .q(inp[2][2]));
   RAM input_ram23(.clock(clk), .data(input_ram_wr_in[2][3]),
        .rdaddress(input_ram_rd_add[2][3]), .rden(input_ram_rden[2][3]),
          .wraddress(input_ram_wr_add[2][3]), .wren(input_ram_wren[2][3]), .q(inp[2][3]));
   RAM input_ram30(.clock(clk), .data(input_ram_wr_in[3][0]),
        .rdaddress(input_ram_rd_add[3][0]), .rden(input_ram_rden[3][0]),
          .wraddress(input_ram_wr_add[3][0]), .wren(input_ram_wren[3][0]), .q(inp[3][0]));
   RAM input_ram31(.clock(clk), .data(input_ram_wr_in[3][1]),
        .rdaddress(input_ram_rd_add[3][1]), .rden(input_ram_rden[3][1]),
          .wraddress(input_ram_wr_add[3][1]), .wren(input_ram_wren[3][1]), .q(inp[3][1]));
   RAM input_ram32(.clock(clk), .data(input_ram_wr_in[3][2]),
        .rdaddress(input_ram_rd_add[3][2]), .rden(input_ram_rden[3][2]),
          .wraddress(input_ram_wr_add[3][2]), .wren(input_ram_wren[3][2]), .q(inp[3][2]));
   RAM input_ram33(.clock(clk), .data(input_ram_wr_in[3][3]),
        .rdaddress(input_ram_rd_add[3][3]), .rden(input_ram_rden[3][3]),
          .wraddress(input_ram_wr_add[3][3]), .wren(input_ram_wren[3][3]), .q(inp[3][3]));

   Scheduler scheduler(.*);
	Buffer buffer(.*);

	always_ff @(posedge clk)begin
		if(reset_rams == 1) begin
			reset_rams = 2;
		end
		else if(reset_rams == 2)begin
			reset_rams = 0;
		end

        for(int i=0; i<4; i++) begin
            for(int j=0; j<4; j++) begin
                if(input_ram_wren[i][j])begin
                    input_ram_wren[i][j] = 0;
                    input_ram_wr_add[i][j] = input_ram_wr_add[i][j] + 1;
                end
            end
        end

		if (chipselect && write) begin
			case(address)
				0 : begin
				    // If the previous packet has finished
				    // transferring (characterized by 32 bit zero values, the
				    // port information has to be re-established from the
				    // packet header.
                    if(eop[0] && writedata) begin
                        eop[0] = 0;
                        port[0] = writedata[1:0];
                    end
                    // If in between transfer of a packet, continue
                    // transferring to the same port.
                    if(!eop[0]) begin
                        for(int i=0; i<4; i++)begin
                            if(port[0] == i) begin
                                input_ram_wr_in[0][i] = writedata;
                                input_ram_wren[0][i] = 1;
                            end
                        end
                    end
                    // If the end of packet is reached(32 bit zero value), eop
                    // signal is set to high. In the next cycle the port
                    // information will be re-established.
                    if(!writedata)begin
                        eop[0] = 1;
                    end
				end

				1 : begin
                    if(eop[1] && writedata) begin
                        eop[1] = 0;
                        port[1] = writedata[1:0];
                    end
                    if(!eop[1]) begin
                        for(int i=0; i<4; i++)begin
                            if(port[1] == i) begin
                                input_ram_wr_in[1][i] = writedata;
                                input_ram_wren[1][i] = 1;
                            end
                        end
                    end
                    if(!writedata)begin
                        eop[1] = 1;
                    end
				end
			
				2 : begin
                    if(eop[2] && writedata) begin
                        eop[2] = 0;
                        port[2] = writedata[1:0];
                    end
                    if(!eop[2]) begin
                        for(int i=0; i<4; i++)begin
                            if(port[2] == i) begin
                                input_ram_wr_in[2][i] = writedata;
                                input_ram_wren[2][i] = 1;
                            end
                        end
                    end
                    if(!writedata)begin
                        eop[2] = 1;
                    end
				end
				
				3 : begin
                    if(eop[3] && writedata) begin
                        eop[3] = 0;
                        port[3] = writedata[1:0];
                    end
                    if(!eop[3]) begin
                        for(int i=0; i<4; i++)begin
                            if(port[3] == i) begin
                                input_ram_wr_in[3][i] = writedata;
                                input_ram_wren[3][i] = 1;
                            end
                        end
                    end
                    if(!writedata)begin
                        eop[3] = 1;
                    end
				end
				// Special signal to control the flow of data within the
				// switch from input port to output port. Required to
				// specifically determine the number of cycles it took for
				// data transfer and hence the speed.
                15 : write_enable = 1;
                // Controls the read from the output rams. Not really
                // necessary, but we have added this in our user space code
                // and may have a valid use case.
				14 : read_enable = 1;
				// Reset all rams. Not being used.
				13 : begin 
                    for(int i=0; i<4; i++)begin
                        for(int j=0; j<4; j++)begin
                            input_ram_wr_add[i][j] = 0;
                        end
                    end
					reset_rams = 1;
				 end
			endcase
		end
		else begin
		    // Disable rights to all rams, if write was low.
            for(int i=0; i<4; i++)begin
                for(int j=0; j<4; j++)begin
                    input_ram_wren[i][j] = 0;
                end
            end
        end
	end
endmodule
