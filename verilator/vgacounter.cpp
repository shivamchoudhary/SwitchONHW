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
    int num_packets = 15;
    srand((unsigned) time(&t));
    // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
        if(i>=10 && i<10+2*num_packets && i%2==0){
            top->write=1;
            top->chipselect = 1;
            top->address = i/2%3+1;
            top->writedata = rand()+1;
        }
        else if(i>=12+2*num_packets && i<14+2*num_packets && i%2==0){
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

    int ram1_size = top->v__DOT__buffer__DOT__ram1_wraddress;
    int ram2_size = top->v__DOT__buffer__DOT__ram2_wraddress;
    int ram3_size = top->v__DOT__buffer__DOT__ram3_wraddress;
    int j = 1;


    for(int i = 100; i < 200; i++)
    {   
        if(i < 112){
            top->chipselect = 1;
            top->address = 14;
            top->write = 1;
        }else if(j <= ram1_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 1;
            top->read = 1;
        }
        else if(j > ram1_size && j <= ram1_size + ram2_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 2;
            top->read = 1;
        }
        else if(j > ram1_size + ram2_size && j <= ram1_size + ram2_size + ram3_size){
            top->write = 0;
            top->chipselect = 1;
            top->address = 3;
            top->read = 1;
        }else{
            top->write = 0;
            top->chipselect = 0;
            top->address = 0;
            top->read = 0;
        }

        if(i>=112 && i%4==3)
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
