// ============================================================
// File Name: Buffer.sv
//
// ============================================================
// ************************************************************
// 
// ************************************************************

        
module Buffer(input logic clk,
        input logic         chipselect, read, read_enable,
        input logic [3:0]   address,
        input logic [31:0] output1, output2, output3,
        input logic out_ram_wr1, out_ram_wr2, out_ram_wr3,
		input logic [11:0]  input_ram_rd_add1, input_ram_rd_add2, input_ram_rd_add3,
		input logic [11:0]  input_ram_wr_add1, input_ram_wr_add2, input_ram_wr_add3,
        
        output logic [31:0]  readdata);

    logic[31:0] finalRead;
    logic       ram1_wren, ram2_wren, ram3_wren;
    logic[11:0] ram1_rdaddress, ram2_rdaddress, ram3_rdaddress;
    logic[11:0] ram1_wraddress, ram2_wraddress, ram3_wraddress;
    logic       ram1_rden, ram2_rden, ram3_rden;
    logic[31:0] ram1_q, ram2_q, ram3_q;
    logic       read_cycle1, read_cycle2, read_cycle3;

    RAM output_ram1(.clock(clk), .data(output1), .rdaddress(ram1_rdaddress),
        .rden(ram1_rden), .wraddress(ram1_wraddress), .wren(ram1_wren),
        .q(ram1_q));
    RAM output_ram2(.clock(clk), .data(output2), .rdaddress(ram2_rdaddress),
        .rden(ram2_rden), .wraddress(ram2_wraddress), .wren(ram2_wren),
        .q(ram2_q));
    RAM output_ram3(.clock(clk), .data(output3), .rdaddress(ram3_rdaddress),
        .rden(ram3_rden), .wraddress(ram3_wraddress), .wren(ram3_wren),
        .q(ram3_q));

    initial begin
        ram1_wren = 0; ram2_wren = 0; ram3_wren = 0;
        ram1_rden = 0; ram2_rden = 0; ram3_rden = 0;
        read_cycle1 = 1; read_cycle2 = 1; read_cycle3 = 1;
        ram1_wraddress = 0; ram2_wraddress = 0; ram3_wraddress = 0;
        ram1_rdaddress = 0; ram2_rdaddress = 0; ram3_rdaddress = 0;
    end

    always_ff @(posedge clk) begin
        if(out_ram_wr1)
            if(ram1_wren)
                ram1_wraddress <= ram1_wraddress + 1;
            else
                ram1_wren <= 1;
        else
            if(ram1_wren)begin
                ram1_wren <= 0;
                ram1_wraddress <= ram1_wraddress + 1;
            end

        if(out_ram_wr2)
            if(ram2_wren)
                ram2_wraddress <= ram2_wraddress + 1;
            else
                ram2_wren <= 1;
        else
            if(ram2_wren)begin
                ram2_wren <= 0;
                ram2_wraddress <= ram2_wraddress + 1;
            end

        if(out_ram_wr3)
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
            ram1_rden = 1; 
        end
    end

    always_ff @(posedge clk) begin
        readdata <= finalRead;
        if(chipselect && read) begin
            case(address)
                0 : readdata <= finalRead;
                4 : readdata <= input_ram_rd_add1;
                5 : readdata <= input_ram_rd_add2;
                6 : readdata <= input_ram_rd_add3;
                7 : readdata <= input_ram_wr_add1;
                8 : readdata <= input_ram_wr_add2;
                9 : readdata <= input_ram_wr_add3;
                10 : readdata <= ram1_rdaddress;
                11 : readdata <= ram2_rdaddress;
                12 : readdata <= ram3_rdaddress;
                13 : readdata <= ram1_wraddress;
                14 : readdata <= ram2_wraddress;
                15 : readdata <= ram3_wraddress;

                1 : begin
                    if(ram1_rdaddress <= ram1_wraddress) begin
                        if(read_cycle1) begin
                            ram1_rdaddress <= ram1_rdaddress + 1;
                            read_cycle1 <= 0;
                        end
                        else begin
                            finalRead <= ram1_q;
                            read_cycle1 <= 1;
                        end
                    end
                    if(ram1_rdaddress == ram1_wraddress)begin
                        ram1_rden <= 0;
                        ram2_rden <= 1;
                    end
                end

                2 : begin
                    if(ram2_rdaddress <= ram2_wraddress) begin
                        if(read_cycle2) begin
                            ram2_rdaddress <= ram2_rdaddress + 1;
                            read_cycle2 <= 0;
                        end
                        else begin
                            finalRead <= ram2_q;
                            read_cycle2 <= 1;
                        end
                    end
                    if(ram2_rdaddress == ram2_wraddress)begin
                        ram2_rden <= 0;
                        ram3_rden <= 1;
                    end
                end

                3 : if(ram3_rdaddress <= ram3_wraddress) begin
                    if(read_cycle3) begin
                        ram3_rdaddress <= ram3_rdaddress + 1;
                        read_cycle3 <= 0;
                    end
                    else begin
                        finalRead <= ram3_q;
                        read_cycle3 <= 1;
                    end
                end
               default : readdata <= 255; 
            endcase
        end
    end
endmodule
