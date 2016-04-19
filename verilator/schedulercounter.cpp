//For easy interfacing with the scheduler.
#include "VScheduler.h" 
#include "verilated.h" 
#include "verilated_vcd_c.h" 

int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    VScheduler* top = new VScheduler();

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("scheduler.vcd");
    // initialize simulation inputs
    top->clk    = 1;
    top->empty1 = 0;
     // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
        if (i>=10 &&i<12){
                top->data1=1;
                top->data2 = 1;
                top->data3 =1;
                
        }
        else if (i>=12 &&i<14){
                top->data1 = 2;
                top->data3 = 1;
                top->data2=1;

                
        }
        else if (i>=14 &&i<16){
                top->data1=1;
                top->data2=2;
                top->data3=1;
        }
        else if (i>=16 &&i<18){
                top->data1 =3;
                top->data2=3;
                top->data3 = 1;
        }
        else if (i>=18 &&i<20){
                top->data1 =2;
                top->data2=3;
                top->data3 = 1;
        }
        else{
                top->data3=0;
                top->data1=0;
                top->data2=0;
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
