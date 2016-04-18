#include "VVGA_LED.h"
#include "verilated.h" 
#include "verilated_vcd_c.h" 
int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    VVGA_LED* top = new VVGA_LED();
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("vgaled.vcd");
    // initialize simulation inputs
    top->clk    = 1;
    // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)

    {   
        if (i>=10 &&i<16){
                top->chipselect = 1;
                top->write = 1;
        }
        else{
                top->chipselect = 0;
                top->write = 0;
        }
        if (i>=10 &&i<12){
                top->address =1;
                top->writedata = 2;

        }
        else if (i>=12 &&i<14){
                top->address=2;
                top->writedata = 2;
                        
        }
        else if(i>=14&&i<16){
                top->address=3;
                top->writedata = 1;
        }
        else{
                top->address=0;
                top->writedata=0;
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
    tfp->close();
}
