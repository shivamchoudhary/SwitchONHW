//For easy interfacing with the Scheduler
#include "Valtsyncram.h" 
#include "verilated.h" 
#include "verilated_vcd_c.h" 
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

    // init top verilog instance
    Valtsyncram* top = new Valtsyncram();

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("ram.vcd");

    // initialize simulation inputs
    top->clock0   = 5;
     // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
        for(int clk = 0; clk < 2; ++clk)
        {
            top->eval();
            tfp->dump((2 * i) + clk);
         }
    }
    tfp->close();
}
