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
		ramrd1 = 1; ramrd2 = 1; ramrd3 = 1;
		ramwr1 = 0; ramwr2 = 0; ramwr3 = 0;
	end
	
	RAM ram1(.clock(clk), .data(result1), .rdaddress(rdcount1), .rden(ramrd1), .wraddress(wrcount1), .wren(ramwr1), .q(ramdata1), .aclr(aclr));
	RAM ram2(.clock(clk), .data(result2), .rdaddress(rdcount2), .rden(ramrd2), .wraddress(wrcount2), .wren(ramwr2), .q(ramdata2), .aclr(aclr));
	RAM ram3(.clock(clk), .data(result3), .rdaddress(rdcount3), .rden(ramrd3), .wraddress(wrcount3), .wren(ramwr3), .q(ramdata3), .aclr(aclr));
	
	always_ff @(posedge clk)begin				//dequeue from fifo and display on led
		hex1 <= seven_segment(data1[1:0]);
		hex2 <= seven_segment(data2[1:0]);
		hex3 <= seven_segment(data3[1:0]);

		//if there is a value on the output port display value on the monitor
		//set ramwrite to 1 which writes data in the ram set count of values to 1
		if(ramwr1) begin
			wrcount1 <= wrcount1 + 1;
			if(ramen1)
				hex4 <= seven_segment(result1[1:0]);															
			else
				ramwr1 <= 0;
		end
		else if(ramen1) begin 
				ramwr1 <= 1;
				hex4 <= seven_segment(result1[1:0]);
			end
		
		if(ramwr2) begin
			wrcount2 <= wrcount2 + 1;
			if(ramen2)
				hex5 <= seven_segment(result2[1:0]);															
			else 
				ramwr2 <= 0;
		end
		else if(ramen2) begin 
				ramwr2 <= 1;
				hex5 <= seven_segment(result2[1:0]);
		end
		
		if(ramwr3) begin
			wrcount3 <= wrcount3 + 1;
			if(ramen3) 
				hex6 <= seven_segment(result3[1:0]);															
			else 
				ramwr3 <= 0;
		end
		else if(ramen3) begin 
				ramwr3 <= 1;
				hex6 <= seven_segment(result3[1:0]);
		end
	end
	
	always_ff @(posedge clk) begin
		if(chipselect && read) begin	
			case(address)
				3'b111 : aclr <= 1;
				3'b000 : readdata <= rdcount1;
				3'b110 : readdata <= wrcount1;
				3'b101 : readdata <= wrcount2;
				3'b100 : readdata <= wrcount3;
				3'b001 : 
					if (!read1)begin
						read1 <= 1;
						if(rdcount1 < wrcount1) begin
							readdata <= ramdata1;
							rdcount1 <= rdcount1 + 1;
						end
						else
							readdata <= 255;
					end
					else begin
						read1 <= 0;
						if(rdcount1 < wrcount1) begin
							readdata <= ramdata1;
						end
						else
							readdata <= 255;
					end
				3'b010 : 
					if (!read2)begin
						read2 <= 1;
						if(rdcount2 < wrcount2) begin
							readdata <= ramdata2;
							rdcount2 <= rdcount2 + 1;
						end
						else
							readdata <= 255;
					end
					else begin
						read2 <= 0;
						if(rdcount2 < wrcount2) begin
							readdata <= ramdata2;
						end
						else
							readdata <= 255;
					end
				3'b011 : 
					if (!read3)begin
						read3 <= 1;
						if(rdcount3 < wrcount3) begin
							readdata <= ramdata3;
							rdcount3 <= rdcount3 + 1;
						end
						else
							readdata <= 255;
					end
					else begin
						read3 <= 0;
						if(rdcount3 < wrcount3) begin
							readdata <= ramdata3;
						end
						else
							readdata <= 255;
					end
				default : readdata <= 252;
			endcase
		end
		else
			readdata <= 251;
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