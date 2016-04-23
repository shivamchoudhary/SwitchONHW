module Buffer(	input logic clk,
					input logic [31:0] result1, result2, result3,
					input logic chipselect, read,
					input logic [3:0] address,
					input logic en1, en2, en3,
					input logic [31:0] data1, data2, data3,
					
					output logic [7:0] hex1, hex2, hex3, hex4, hex5, hex6,
					output logic [31:0] readdata);

	logic ramrd1, ramrd2, ramrd3;					
	logic read1, read2, read3;
	logic [31:0] ramdata1, ramdata2, ramdata3;	
	logic[11:0] wrcount1, wrcount2, wrcount3;
	logic[11:0] rdcount1, rdcount2, rdcount3;
	
	initial begin
		rdcount1 = 0; rdcount2 = 0; rdcount3 = 0;
		wrcount1 = 0; wrcount2 = 0; wrcount3 = 0;
		ramrd1 = 1; ramrd2 = 1; ramrd3 = 1;
		read1 = 0; read2 = 0; read3 = 0;
	end
	
	RAM ram1(.clock(clk), .data(result1), .rdaddress(rdcount1), .rden(ramrd1), .wraddress(wrcount1), .wren(en1), .q(ramdata1));
	RAM ram2(.clock(clk), .data(result2), .rdaddress(rdcount2), .rden(ramrd2), .wraddress(wrcount2), .wren(en2), .q(ramdata2));
	RAM ram3(.clock(clk), .data(result3), .rdaddress(rdcount3), .rden(ramrd3), .wraddress(wrcount3), .wren(en3), .q(ramdata3));
	
	always_ff @(posedge clk)begin				//dequeue from fifo and display on led
		hex1 <= seven_segment(data1[1:0]);
		hex2 <= seven_segment(data2[1:0]);
		hex3 <= seven_segment(data3[1:0]);
		
		if(en1) begin
			hex4 <= seven_segment(result1[1:0]);
			wrcount1 <= wrcount1 + 1;
		end
		else
			hex4 <= 0;
		if(en2) begin
			hex5 <= seven_segment(result2[1:0]);
			wrcount2 <= wrcount2 + 1;
		end
		else
			hex5 <= 0;
		if(en3) begin
			hex6 <= seven_segment(result3[1:0]);
			wrcount3 <= wrcount3 + 1;
		end
		else
			hex6 <= 0;
	end
	
	always_ff @(posedge clk) begin
		ramrd1 <= 1; ramrd2 <= 1; ramrd3 <= 1;
		if(chipselect && read) begin	
			case(address)
				8: readdata <= rdcount1;
				9: readdata <= rdcount2;
				10: readdata <= rdcount3;
				11: readdata <= wrcount1;
				12: readdata <= wrcount2;
				13: readdata <= wrcount3;
				1 : 
					if(rdcount1 < wrcount1)
						if(!read1) begin
							readdata <= ramdata1;
							read1 <= 1;
						end
						else begin
							read1 <= 0;
							rdcount1 <= rdcount1 + 1;
						end
					else
						readdata <= 255;
						
				2 : 
					if(rdcount2 < wrcount2)
						if(!read2) begin
							readdata <= ramdata2;
							read2 <= 1;
						end
						else begin
							read2 <= 0;
							rdcount2 <= rdcount2 + 1;
						end
					else
						readdata <= 255;
				3 : 
					if(rdcount3 < wrcount3)		
						if(!read3) begin
							readdata <= ramdata3;
							read3 <= 1;
						end
						else begin
							read3 <= 0;
							rdcount3 <= rdcount3 + 1;
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
