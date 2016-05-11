// ============================================================
// File Name: Buffer.sv
//
// ============================================================
// ************************************************************
// 
// ************************************************************

        
module Buffer(input logic clk,
        input logic         chipselect, read, read_enable, reset_rams,
        input logic [3:0]   address, 
        input logic [31:0]  outp[4],
        input logic         out_ram_wr[4],
	    input logic [31:0]	total_time,

        output logic [31:0] readdata);
		  
    logic[11:0]     ram0_rdaddress, ram1_rdaddress, ram2_rdaddress, ram3_rdaddress;
    logic[11:0]     ram0_wraddress, ram1_wraddress, ram2_wraddress, ram3_wraddress;
	 logic       ram0_wren, ram1_wren, ram2_wren, ram3_wren;
    logic       ram0_rden, ram1_rden, ram2_rden, ram3_rden;
    logic[31:0] ram0_q, ram1_q, ram2_q, ram3_q;
    logic       read_cycle0, read_cycle1, read_cycle2, read_cycle3;

    RAM output_ram0(.clock(clk), .data(outp[0]), .rdaddress(ram0_rdaddress),
        .rden(ram0_rden), .wraddress(ram0_wraddress), .wren(ram0_wren),
        .q(ram0_q));
    RAM output_ram1(.clock(clk), .data(outp[1]), .rdaddress(ram1_rdaddress),
        .rden(ram1_rden), .wraddress(ram1_wraddress), .wren(ram1_wren),
        .q(ram1_q));
    RAM output_ram2(.clock(clk), .data(outp[2]), .rdaddress(ram2_rdaddress),
        .rden(ram2_rden), .wraddress(ram2_wraddress), .wren(ram2_wren),
        .q(ram2_q));
    RAM output_ram3(.clock(clk), .data(outp[3]), .rdaddress(ram3_rdaddress),
        .rden(ram3_rden), .wraddress(ram3_wraddress), .wren(ram3_wren),
        .q(ram3_q));

    initial begin
	      ram0_wraddress = 0; ram1_wraddress = 0; ram2_wraddress = 0; ram3_wraddress = 0;
			ram0_rdaddress = 0; ram1_rdaddress = 0; ram2_rdaddress = 0; ram3_rdaddress = 0;
        ram0_wren = 0; ram1_wren = 0; ram2_wren = 0; ram3_wren = 0;
        ram0_rden = 0; ram1_rden = 0; ram2_rden = 0; ram3_rden = 0;
        read_cycle0 = 1; read_cycle1 = 1; read_cycle2 = 1; read_cycle3 = 1;
    end

    always_ff @(posedge clk) begin
			if(reset_rams)begin
				ram0_wraddress <= 0; ram1_wraddress <= 0; ram2_wraddress <= 0; ram3_wraddress <= 0;
			end
        if(out_ram_wr[0])
            if(ram0_wren)
                ram0_wraddress <= ram0_wraddress + 1;
            else
                ram0_wren <= 1;
        else
            if(ram0_wren)begin
                ram0_wren <= 0;
                ram0_wraddress <= ram0_wraddress + 1;
            end

        if(out_ram_wr[1])
            if(ram1_wren)
                ram1_wraddress <= ram1_wraddress + 1;
            else
                ram1_wren <= 1;
        else
            if(ram1_wren)begin
                ram1_wren <= 0;
                ram1_wraddress <= ram1_wraddress + 1;
            end

        if(out_ram_wr[2])
            if(ram2_wren)
                ram2_wraddress <= ram2_wraddress + 1;
            else
                ram2_wren <= 1;
        else
            if(ram2_wren)begin
                ram2_wren <= 0;
                ram2_wraddress <= ram2_wraddress + 1;
            end

        if(out_ram_wr[3])
            if(ram3_wren)
                ram3_wraddress <= ram3_wraddress + 1;
            else
                ram3_wren <= 1;
        else
            if(ram3_wren)begin
                ram3_wren <= 0;
                ram3_wraddress <= ram3_wraddress + 1;
            end
    end

    always_ff @(posedge clk) begin
        if(read_enable)begin
            ram0_rden <= 1; ram1_rden = 1; ram2_rden = 1; ram3_rden = 1;
        end
    end

    always_ff @(posedge clk) begin
		if(reset_rams)begin
			ram0_rdaddress <= 0; ram1_rdaddress <= 0; ram2_rdaddress <= 0; ram3_rdaddress <= 0;
		end
        if(chipselect && read) begin
            case(address)
                7 : readdata <= total_time;
                8 : readdata <= ram0_rdaddress;
                9 : readdata <= ram1_rdaddress;
                10 : readdata <= ram2_rdaddress;
                11 : readdata <= ram3_rdaddress;
                12 : readdata <= ram0_wraddress;
                13 : readdata <= ram1_wraddress;
                14 : readdata <= ram2_wraddress;
                15 : readdata <= ram3_wraddress;

                0 : begin
                    if(ram0_rdaddress <= ram0_wraddress) begin
                        if(read_cycle0) begin
                            ram0_rdaddress <= ram0_rdaddress + 1;
                            read_cycle0 <= 0;
                             readdata <= ram0_q;
                       end
                        else begin
                            read_cycle0 <= 1;
                        end
                    end
						  else
								readdata <= ram0_q;
                end
					 
                1 : begin
                    if(ram1_rdaddress <= ram1_wraddress) begin
                        if(read_cycle1) begin
                            ram1_rdaddress <= ram1_rdaddress + 1;
                            read_cycle1 <= 0;
                             readdata <= ram1_q;
                       end
                        else begin
                            read_cycle1 <= 1;
                        end
                    end
						  else
								readdata <= ram1_q;
                end

                2 : begin
                    if(ram2_rdaddress <= ram2_wraddress) begin
                        if(read_cycle2) begin
                            ram2_rdaddress <= ram2_rdaddress + 1;
                            read_cycle2 <= 0;
                            readdata <= ram2_q;
                        end
                        else begin
                            read_cycle2 <= 1;
                        end
                    end
						  else
								readdata <= ram2_q;
                end

                3 : begin
						 if(ram3_rdaddress <= ram3_wraddress) begin
							  if(read_cycle3) begin
									ram3_rdaddress <= ram3_rdaddress + 1;
									read_cycle3 <= 0;
									readdata <= ram3_q;
							  end
							  else begin
									read_cycle3 <= 1;
							  end
						 end
						 else
								readdata <= ram3_q;
					end
               default : readdata <= 255; 
            endcase
        end
    end
endmodule
