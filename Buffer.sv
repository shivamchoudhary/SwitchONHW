module Buffer(	input logic clk,
					input logic [7:0] result0, result1, result2, result3,
					input logic chipselect, read, 
					input logic [2:0] address,
					input logic en0, en1, en2, en3,
					input logic [7:0] data0, data1, data2, data3,
					
					output logic [7:0] hex0, hex1, hex2, hex3, hex4, hex5, hex6, hex7,
					output logic [7:0] readdata);

	logic ramrd0, ramrd1, ramrd2, ramrd3;					
	logic ramwr0, ramwr1, ramwr2, ramwr3;
	logic ramdata0, ramdata1, ramdata2, ramdata3;	
	logic[13:0] wrcount0, wrcount1, wrcount2, wrcount3;
	logic[13:0] rdcount0, rdcount1, rdcount2, rdcount3;
	
	initial begin
		rdcount0 <= 0; rdcount1 <= 0; rdcount2 <= 0; rdcount3 <= 0;
		wrcount0 <= 0; wrcount1 <= 0; wrcount2 <= 0; wrcount3 <= 0;
	end
	
	RAM ram0(.clock(clk), .data(result0), .rdaddress(rdcount0), .rden(ramrd0), .wraddress(wrcount0), .wren(ramwr0), .q(ramdata0));
	RAM ram1(.clock(clk), .data(result1), .rdaddress(rdcount1), .rden(ramrd1), .wraddress(wrcount1), .wren(ramwr1), .q(ramdata1));
	RAM ram2(.clock(clk), .data(result2), .rdaddress(rdcount2), .rden(ramrd2), .wraddress(wrcount2), .wren(ramwr2), .q(ramdata2));
	RAM ram3(.clock(clk), .data(result3), .rdaddress(rdcount3), .rden(ramrd3), .wraddress(wrcount3), .wren(ramwr3), .q(ramdata3));
	
	always_ff @(posedge clk)begin				//dequeue from fifo and display on led
		hex0 <= seven_segment(data0[1:0]);
		hex1 <= seven_segment(data1[1:0]);
		hex2 <= seven_segment(data2[1:0]);
		hex3 <= seven_segment(data3[1:0]);

		if(en0) begin  									//if there is a value on the output port
			hex4 <= seven_segment(result0[1:0]);	//display value on the monitor
			ramwr0 <= 1;									//set ramwrite to 1 which writes data in the ram
			wrcount0 <= wrcount0 + 1;							//set count of values to 1
		end
		else	begin
			hex4 <= 0;
			ramwr0 <= 0;
		end

		if(en1) begin 
			hex5 <= seven_segment(result1[1:0]);
			ramwr1 <= 1;
			wrcount1 <= wrcount1 + 1;
		end
		else begin
			hex5 <= 0;
			ramwr1 <= 0;
		end		
		if(en2) begin 
			hex6 <= seven_segment(result2[1:0]);
			ramwr2 <= 1;
			wrcount2 <= wrcount2 + 1;
		end
		else begin
			hex6 <= 0;
			ramwr2 <= 0;
		end
		if(en3) begin 
			hex7 <= seven_segment(result3[1:0]);
			ramwr3 <= 1;
			wrcount3 <= wrcount3 + 1;
		end
		else begin
			hex7 <= 0;
			ramwr3 <= 0;
		end
	end
	
	always_ff @(posedge clk) begin
		if(chipselect && read) begin	
			case(address)
				3'b111 : readdata <= wrcount0;
				3'b110 : readdata <= wrcount1;
				3'b101 : readdata <= wrcount2;
				3'b100 : readdata <= wrcount3;
				3'b000 : 
					if (rdcount0 <= wrcount0) begin
						ramrd0 <= 1;
						readdata <= ramdata0;
						rdcount0 <= rdcount0+1;
					end
					else begin
						ramrd0 <= 0;
						readdata <= 0;
					end
				3'b001 : 
					if (rdcount1 <= wrcount1) begin
						ramrd1 <= 1;
						readdata <= ramdata1;
						rdcount1 <= rdcount1 + 1;
					end
					else begin
						ramrd1 <= 0;
						readdata <= 1;
					end
				3'b010 : 
					if (rdcount2 <= wrcount2) begin
						ramrd2 <= 1;
						readdata <= ramdata2;
						rdcount2 <= rdcount2+1;
					end
					else begin
						ramrd2 <= 0;
						readdata <= 2;
					end
				3'b011 : 
					if (rdcount3 <= wrcount3) begin
						ramrd3 <= 1;
						readdata <= ramdata3;
						rdcount3 <= rdcount3+1;
					end
					else begin
						ramrd3 <= 0;
						readdata <= 3;
					end
				default : readdata <= 8'b00000000;
			endcase
		end
		else begin
			ramrd0 = 0; ramrd1 = 0; ramrd2 = 0; ramrd3 = 0; 
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