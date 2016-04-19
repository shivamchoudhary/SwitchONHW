module VGA_LED(input            clk,
        input logic             reset,
        input logic [7:0]       writedata,
        input logic             write,
        input logic             read,
        input                   chipselect,
        input logic [2:0]       address,
        output logic [7:0]      VGA_R, VGA_G, VGA_B,
        output logic            VGA_CLK, VGA_HS,VGA_VS,VGA_BLANK_n,
        output logic            VGA_SYNC_n,
        output logic [7:0]      readdata

);
        logic [7:0] din1, din2, din3; //Inputs to the three FIFO's
        logic [7:0] data0,data1,data2,data3;
        logic [1:0] sel1, sel2, sel3; //Select lines to the MUXES.
        logic rdreq1, rdreq2,rdreq3;
        logic wrreq1,wrreq2,wrreq3;
        logic empty1,empty2,empty3;
        logic full1,full2,full3;
        logic en1,en2,en3;
        logic [7:0] result1,result2,result3;
        logic [1:0] usedw1,usedw2,usedw3;
        logic [7:0] muxin1,muxin2,muxin3;
        logic [7:0] hex1,hex2,hex3,hex4,hex5,hex6;
        initial begin
                data0=0;
                wrreq1=0; wrreq2=0;wrreq3=0;
                rdreq1 = 0;rdreq2=0;rdreq3=0;
        end
        Fifo fifo1(.clock(clk), .data(din1), .rdreq(rdreq1), .wrreq(wrreq1),
                .empty(empty1), .full(full1), .q(data1), .usedw(usedw1));	
	Fifo fifo2(.clock(clk), .data(din2), .rdreq(rdreq2), .wrreq(wrreq2), 
                .empty(empty2), .full(full2), .q(data2), .usedw(usedw2));	
	Fifo fifo3(.clock(clk), .data(din3), .rdreq(rdreq3), .wrreq(wrreq3),
                .empty(empty3), .full(full3), .q(data3), .usedw(usedw3));	


        Scheduler scheduler(.*);
        Buffer buffer(.*);
        always_ff @(posedge clk) begin
                if (chipselect && write) begin
                        case(address)
                                3'b01: begin 
                                        wrreq1 <=1;
                                        din1 <= writedata;
                                        if (wrreq2)
                                                wrreq2 <=0;
                                        if (wrreq3)
                                                wrreq3<=0;
                                end
                                3'b10: begin
                                        wrreq2 <=1;
                                        din2<= writedata;
                                        if (wrreq1)
                                                wrreq1 <=0;
                                        if (wrreq3)
                                                wrreq3<=0;
                                end
                                3'b11: begin
                                        wrreq3 <=1;
                                        din3<=writedata;
                                        if (wrreq1)
                                                wrreq1 <=0;
                                        if (wrreq2)
                                                wrreq2<=0;
                       
                                end
                                default: begin
                                        wrreq1 <=0;wrreq2 <=0;wrreq3 <=0;
                                end
                        endcase
                end
                else begin
                        wrreq1<=0;wrreq2<=0;wrreq3<=0;
                end
        end
        always_ff @(posedge clk) begin
                muxin1 <=data1;
                muxin2 <=data2;
                muxin3 <=data3;

        end
endmodule


        
