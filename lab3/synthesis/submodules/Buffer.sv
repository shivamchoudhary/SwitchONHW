
// ============================================================
// File Name: Buffer.sv
//
// ============================================================
// ************************************************************
// 
// ************************************************************

        
module Buffer(input logic clk,
  input logic [31:0]  output1, output2, output3,
  input logic         chipselect, read,
  input logic [3:0]   address,
  input logic         out_ram_wr1, out_ram_wr2, out_ram_wr3,
  input logic [31:0]  fifo_out1, fifo_out2, fifo_out3,

  output logic [7:0]  hex1, hex2, hex3, hex4, hex5, hex6,
  output logic [31:0] readdata);

  logic ram_rd1, ram_rd2, ram_rd3;					
  logic read_cycle1, read_cycle2, read_cycle3;
  logic [31:0] ram_out1, ram_out2, ram_out3;	
  logic[11:0] ram_wr_add1, ram_wr_add2, ram_wr_add3;
  logic[11:0] ram_rd_add1, ram_rd_add2, ram_rd_add3;

  initial begin
    ram_rd_add1 = 0; ram_rd_add2 = 0; ram_rd_add3 = 0;
    ram_wr_add1 = 0; ram_wr_add2 = 0; ram_wr_add3 = 0;
    ram_rd1 = 1; ram_rd2 = 1; ram_rd3 = 1;
    read_cycle1 = 0; read_cycle2 = 0; read_cycle3 = 0;
  end
  //Connect RAMS
  RAM ram1(.clock(clk), .data(output1), .rdaddress(ram_rd_add1), .rden(ram_rd1),
          .wraddress(ram_wr_add1), .wren(out_ram_wr1),.q(ram_out1));
  RAM ram2(.clock(clk), .data(output2), .rdaddress(ram_rd_add2), .rden(ram_rd2),
          .wraddress(ram_wr_add2), .wren(out_ram_wr2), .q(ram_out2));
  RAM ram3(.clock(clk), .data(output3), .rdaddress(ram_rd_add3), .rden(ram_rd3),
          .wraddress(ram_wr_add3), .wren(out_ram_wr3), .q(ram_out3));

        //dequeue from fifo and display on led
  always_ff @(posedge clk)begin
    hex1 <= seven_segment(fifo_out1[1:0]);
    hex2 <= seven_segment(fifo_out2[1:0]);
    hex3 <= seven_segment(fifo_out3[1:0]);

    if(out_ram_wr1) begin
      hex4 <= seven_segment(output1[1:0]);
      ram_wr_add1 <= ram_wr_add1 + 1;
    end
    else
      hex4 <= 0;
    if(out_ram_wr2) begin
      hex5 <= seven_segment(output2[1:0]);
      ram_wr_add2 <= ram_wr_add2 + 1;
    end
    else
      hex5 <= 0;
    if(out_ram_wr3) begin
      hex6 <= seven_segment(output3[1:0]);
      ram_wr_add3 <= ram_wr_add3 + 1;
    end
    else
      hex6 <= 0;
    end
always_ff @(posedge clk) begin
  ram_rd1 <= 1; ram_rd2 <= 1; ram_rd3 <= 1;
  if(chipselect && read) begin	
    case(address)
      8:  readdata <= ram_rd_add1;
      9:  readdata <= ram_rd_add2;
      10: readdata <= ram_rd_add3;
      11: readdata <= ram_wr_add1;
      12: readdata <= ram_wr_add2;
      13: readdata <= ram_wr_add3;
      1 :
        if(ram_rd_add1 < ram_wr_add1)
          if(!read_cycle1) begin
            readdata <= ram_out1;
            read_cycle1 <= 1;
          end
			  else begin
				 read_cycle1 <= 0;
				 ram_rd_add1 <= ram_rd_add1 + 1;
			  end
        else
          readdata <= 255;
                
      2 : 
        if(ram_rd_add2 < ram_wr_add2)
          if(!read_cycle2) begin
            readdata <= ram_out2;
            read_cycle2 <= 1;
          end
          else begin
            read_cycle2 <= 0;
            ram_rd_add2 <= ram_rd_add2 + 1;
          end
        else
          readdata <= 255;
			 
      3 : 
        if(ram_rd_add3 < ram_wr_add3)		
          if(!read_cycle3) begin
            readdata <= ram_out3;
            read_cycle3 <= 1;
          end
          else begin
            read_cycle3 <= 0;
            ram_rd_add3 <= ram_rd_add3 + 1;
          end
        else
          readdata <= 255;				
      
		default : readdata <= 252;
    endcase
  end

  else
    readdata <= 251;
  end
       

  function logic[7:0] seven_segment(logic[1:0] value);
    case(value)
      2'b00 : return 63;
      2'b01 : return 6;
      2'b10 : return 91;
      2'b11 : return 79;
    endcase
  endfunction 

endmodule
