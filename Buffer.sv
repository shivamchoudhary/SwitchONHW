module Buffer(	input logic clk,
					input logic [7:0] result1, result2, result3,
					input logic chipselect, read, 
					input logic [2:0] address,
					input logic en1, en2, en3,
					input logic [7:0] data1, data2, data3,
					
					output logic [7:0] hex1, hex2, hex3, hex4, hex5, hex6,
					output logic [7:0] readdata);

	logic ramrd1, ramrd2, ramrd3;					
	logic ramwr1, ramwr2, ramwr3;
	logic ramdata1, ramdata2, ramdata3;	
	logic[13:0] wrcount1, wrcount2, wrcount3;
	logic[13:0] rdcount1, rdcount2, rdcount3;
	
	initial begin
		rdcount1 <= 0; rdcount2 <= 0; rdcount3 <= 0;
		wrcount1 <= 0; wrcount2 <= 0; wrcount3 <= 0;
		ramrd1 = 1; ramrd2 = 1; ramrd3 = 1;
		ramwr1 = 1; ramwr2 = 1; ramwr3 = 1;
	end
	
	RAM ram1(.clock(clk), .data(result1), .rdaddress(rdcount1), .rden(ramrd1), .wraddress(wrcount1), .wren(ramwr1), .q(ramdata1));
	RAM ram2(.clock(clk), .data(result2), .rdaddress(rdcount2), .rden(ramrd2), .wraddress(wrcount2), .wren(ramwr2), .q(ramdata2));
	RAM ram3(.clock(clk), .data(result3), .rdaddress(rdcount3), .rden(ramrd3), .wraddress(wrcount3), .wren(ramwr3), .q(ramdata3));
	
	always_ff @(posedge clk)begin				//dequeue from fifo and display on led
		hex1 <= seven_segment(data1[1:0]);
		hex2 <= seven_segment(data2[1:0]);
		hex3 <= seven_segment(data3[1:0]);

		//if there is a value on the output port display value on the monitor
		//set ramwrite to 1 which writes data in the ram set count of values to 1
		if(en1 && (result1 == 1)) begin  														
			hex4 <= seven_segment(result1[1:0]);				
			wrcount1 <= wrcount1 + 1;
		end																
		else	begin
			hex4 <= 0;
		end

		if(en2 && (result2 == 2)) begin 
			hex5 <= seven_segment(result2[1:0]);
			wrcount2 <= wrcount2 + 1;
		end
		else begin
			hex5 <= 0;
		end
		
		if(en3 && (result3 == 3)) begin 
			hex6 <= seven_segment(result3[1:0]);
			wrcount3 <= wrcount3 + 1;
		end
		else begin
			hex6 <= 0;
		end
	end
	
	always_ff @(posedge clk) begin
		if(chipselect && read) begin	
			case(address)
				3'b110 : readdata <= wrcount1;
				3'b101 : readdata <= wrcount2;
				3'b100 : readdata <= wrcount3;
				3'b001 : 
					if (rdcount1 < wrcount1) begin
						readdata <= ramdata1;
						rdcount1 <= rdcount1 + 1;
					end
					else begin
						readdata <= 255;
					end
				3'b010 : 
					if (rdcount2 < wrcount2) begin
						readdata <= ramdata2;
						rdcount2 <= rdcount2+1;
					end
					else begin
						readdata <= 255;
					end
				3'b011 : 
					if (rdcount3 < wrcount3) begin
						readdata <= ramdata3;
						rdcount3 <= rdcount3+1;
					end
					else begin
						readdata <= 255;
					end
				default : readdata <= 8'b11111111;
			endcase
		end
	end
		
	function int seven_segment(int value);
		case(value)
			2'b00 : return 63;
			2'b01 : return 6;
			2'b10 : return 91;
			2'b11 : return 79;
		endcase
	endfunction 
endmodule