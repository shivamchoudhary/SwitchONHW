module VGA_LED(input            clk,
        input logic             reset,
        input logic [7:0]       writedata,
        input logic             write,read,
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
        logic ramen1,ramen2,ramen3;
        logic [7:0] result1,result2,result3;
        logic [1:0] usedw1,usedw2,usedw3;
        logic [7:0] hex1,hex2,hex3,hex4,hex5,hex6;
        initial begin
                data0=0;
                wrreq1=0; wrreq2=0;wrreq3=0;
                rdreq1 = 0;rdreq2=0;rdreq3=0;
        end

        Scheduler scheduler(.*);
endmodule


        
