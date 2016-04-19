//For easy interfacing with the Scheduler
#include "Vscfifo.h" 
#include "verilated.h" 
#include "verilated_vcd_c.h" 
vluint64_t main_time =0;
double sc_time_stamp(){
        return main_time;
}
int main(int argc, char** argv)
{
    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vscfifo* top = new Vscfifo();
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("fifo.vcd");

    // initialize simulation inputs
    top->clock    = 1;
     // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
        if (i>10 && i<20){
                top->data=1;
                top->wrreq = 1;
        }
        else{
                top->data = 0;
                top->wrreq = 0;
        }
        

        for(int clk = 0; clk < 2; ++clk)
        {
            top->eval();
            tfp->dump((2 * i) + clk);
            if (clk==1){
                    top->clock =!top->clock;
            }
         }
    }
    tfp->close();
}
