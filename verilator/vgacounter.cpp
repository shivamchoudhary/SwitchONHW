#include "VVGA_LED.h"
#include "verilated.h" 
#include "verilated_vcd_c.h" 
#include <stdlib.h>
#include <time.h>
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
    top->chipselect = 1;
    top->write =1;
    top->reset =0;
    top->read = 0;
    srand((unsigned) time(&t));
    // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
        if (i>=10 && i<12 && i%2==0){
                top->address = 1;
                top->writedata = rand()+1;
        }
        else if (i>=12 && i<14 && i%2==0){
                top->address = 2;
                top->writedata = rand()+1;
        }
        else if (i>=14 && i<16 && i%2==0){
                top->address = 3;
                top->writedata = rand()+1;
        }
        else if (i>=16 && i<18 && i%2==0){
                top->address = 1;
                top->writedata = rand()+1;
        }
        else if (i>=18 && i<20 && i%2==0){
                top->address = 2;
                top->writedata = rand()+1;
        }
        else if (i>=20 && i<22 && i%2==0){
                top->address = 3;
                top->writedata = rand()+1;
        }
        else if (i>=22 && i<24 && i%2==0){
                top->address = 1;
                top->writedata = rand()+1;
        }
        else if (i>=24 && i<26 && i%2==0){
                top->address = 2;
                top->writedata = rand()+1;
        }
        else if (i>=26 && i<28 && i%2==0){
                top->address = 3;
                top->writedata = rand()+1;
        }
        else{
                top->address =0;
                top->writedata = 0;

        }
//*/  
    //for(int i = 0; i < 100; i++)

    //{   
        //if (i>=10 &&i<12){
                //top->address = 1;
                //top->writedata = 14;
        //}

        //else if (i>=12 &&i <14){
                //top->address = 2;
                //top->writedata = 1;
        //}
        //else if (i>=14 && i<16){
                //top->address = 3;
                //top->writedata = 3;
        //}
        //else if (i>=16 && i<18){
                //top->address = 1;
                //top->writedata = 7;
        //}
        //else if (i>=18 && i<20){
                //top->address = 2;
                //top->writedata = 6;
        //}
        //else if (i>=20 && i<22){
                //top->address = 3;
                //top->writedata = 33;
        //}
        //else if (i>=22 && i<24){
                //top->address = 1;
                //top->writedata = 30;
        //}
        //else if (i>=24 && i<26){
                //top->address = 2;
                //top->writedata = 34;
        //}
        //else if (i>=26 && i<28){
                //top->address = 3;
                //top->writedata = 62;
        //}
        //else{
                //top->address =0;
                //top->writedata = 0;

        //}
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
