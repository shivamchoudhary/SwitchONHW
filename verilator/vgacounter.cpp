#include "VVGA_LED.h"
#include "verilated.h" 
#include "verilated_vcd_c.h" 
#include <stdlib.h>
#include <time.h>
#include <iostream>
// This is required otherwise the module doesn't get instantiated and the linker
// throws an error.
vluint64_t main_time = 0;       // Current simulation time
        // This is a 64-bit integer to reduce wrap over issues and
        // allow modulus.  You can also use a double, if you wish.
        double sc_time_stamp () {       // Called by $time in Verilog
            return main_time;           // converts to double, to match
                                        // what SystemC does
        }
int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    time_t t;
    // init top verilog instance
    VVGA_LED* top = new VVGA_LED();
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("vgaled.vcd");
    // initialize simulation inputs
    top->clk    = 1;
    top->write = 0;
    top->reset =0;
    top->read = 0;
    int num_packets = 10;
    srand((unsigned) time(&t));
    // run simulation for 100 clock periods
    for(int i = 0; i < 300; i++)
    {   
        if(i>=8 && i<8+8*num_packets){
            top->write=1;
            top->chipselect = 1;
            //top->address = 1;
            if(i%8==0)
                top->address = i/8%4;
            if(i%2 == 0 && i%8 < 6)
                top->writedata = rand()+1;
            else if(i%8 == 6)
                top->writedata = 0;
        }
        else if(i>=10+8*num_packets && i<12+8*num_packets && i%2==0){
                top->write=1;
                top->chipselect = 1;
                top->address =15;
                top->writedata = 0;
        }
        else if(i%2 == 0){
                top->write=0;
                top->chipselect = 0;
                top->address =0;
                top->writedata = 0;
        }
        
        for(int clk = 0; clk < 2; ++clk)
        {
            top->eval();
            tfp->dump((2 * i) + clk);
            if (clk==1){
                    top->clk =!top->clk;
            }
         }
    }

    int ram0_size = top->v__DOT__buffer__DOT__ram0_wraddress;
    int ram1_size = top->v__DOT__buffer__DOT__ram1_wraddress;
    int ram2_size = top->v__DOT__buffer__DOT__ram2_wraddress;
    int ram3_size = top->v__DOT__buffer__DOT__ram3_wraddress;
    int j = 0;


    for(int i = 300; i < 600; i++)
    {   
        if(i < 312){
            top->chipselect = 1;
            top->address = 14;
            top->write = 1;
        }else if(j < ram0_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 0;
            if(i%6 < 4)
                top->read = 1;
            else
                top->read = 0;
        }
        else if(j >= ram0_size && j < ram1_size + ram0_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 1;
            if(i%6 < 4)
                top->read = 1;
            else
                top->read = 0;
        }
        else if(j >= ram1_size + ram0_size && j < ram1_size + ram2_size + ram0_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 2;
            if(i%6 < 4)
                top->read = 1;
            else
                top->read = 0;
        }
        else if(j >= ram1_size + ram0_size + ram2_size && j < ram1_size + ram2_size + ram3_size + ram0_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 3;
            if(i%6 < 4)
                top->read = 1;
            else
                top->read = 0;
        }else if(i >= 590 && i<592){
            top->write = 1;
            top->chipselect = 1;
            top->address = 13;
            top->read = 0;
        }else{
            top->write = 0;
            top->chipselect = 0;
            top->address = 0;
            top->read = 0;
        }

        if(i>312 && i%6==5)
            j++;
        
        for(int clk = 0; clk < 2; ++clk)
        {
            top->eval();
            tfp->dump((2 * i) + clk);
            if (clk==1){
                    top->clk =!top->clk;
            }
         }
    }
    tfp->close();
}
