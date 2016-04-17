module Buffer(	input logic clk,
					input logic [7:0] result1, result2, result3,
					input logic chipselect, read, 
					input logic [2:0] address,
					input logic ramen1, ramen2, ramen3,
					input logic [7:0] data1, data2, data3,
					
					output logic [7:0] hex1, hex2, hex3, hex4, hex5, hex6,
					output logic [7:0] readdata);

	logic ramrd1, ramrd2, ramrd3;					
	logic ramwr1, ramwr2, ramwr3;
	logic aclr;
	logic read1, read2, read3;
	logic ramdata1, ramdata2, ramdata3;	
	logic[13:0] wrcount1, wrcount2, wrcount3;
	logic[13:0] rdcount1, rdcount2, rdcount3;
	
	initial begin
		rdcount1 <= 0; rdcount2 <= 0; rdcount3 <= 0;
		wrcount1 <= 0; wrcount2 <= 0; wrcount3 <= 0;
		ramrd1 <= 1; ramrd2 <= 1; ramrd3 <= 1;
		ramwr1 <= 0; ramwr2 <= 0; ramwr3 <= 0;
		read1 <= 0; read2 <= 0; read3 <= 0;
		aclr <= 0;;
	end
	
	RAM ram1(.clock(clk), .data(result1), .rdaddress(rdcount1), .rden(ramrd1), .wraddress(wrcount1), .wren(ramen1), .q(ramdata1), .aclr(aclr));
	RAM ram2(.clock(clk), .data(result2), .rdaddress(rdcount2), .rden(ramrd2), .wraddress(wrcount2), .wren(ramen2), .q(ramdata2), .aclr(aclr));
	RAM ram3(.clock(clk), .data(result3), .rdaddress(rdcount3), .rden(ramrd3), .wraddress(wrcount3), .wren(ramen3), .q(ramdata3), .aclr(aclr));
	
	always_ff @(posedge clk)begin				//dequeue from fifo and display on led
		hex1 <= seven_segment(data1[1:0]);
		hex2 <= seven_segment(data2[1:0]);
		hex3 <= seven_segment(data3[1:0]);

		if(ramen1) begin
			hex4 <= seven_segment(result1[1:0]);
			wrcount1 <= wrcount1 + 1;
		end
		if(ramen2) begin
			hex5 <= seven_segment(result2[1:0]);
			wrcount2 <= wrcount2 + 1;
		end
		if(ramen3) begin
			hex6 <= seven_segment(result3[1:0]);
			wrcount3 <= wrcount3 + 1;
		end
	end
	
	always_ff @(posedge clk) begin
		ramrd1 <= 1; ramrd2 <= 1; ramrd3 <= 1;
		if(chipselect && read) begin	
			case(address)
				3'b000 : readdata <= rdcount1;
				3'b110 : readdata <= wrcount1;
				3'b101 : readdata <= wrcount2;
				3'b100 : readdata <= wrcount3;
				3'b001 : 
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
						
				3'b010 : 
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
				3'b011 : 
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