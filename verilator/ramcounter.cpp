//For easy interfacing with the Scheduler
#include "VRAM.h" 
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
    VRAM* top = new VRAM();

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("ram.vcd");

    // initialize simulation inputs
    top->clock   = 0;
     // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
            if (i>=2 && i<4){
                    top->data = 0xA;
                    top->wren = 0x1;
                    top->wraddress = 0x1;
            }
            else if (i>=4 && i<6){
                    top->data = 0xB;
                    top->wren = 0x1;
                    top->wraddress = 0x2;
            }
            else{
                    top->data = 0;
                    top->wren = 0;
            }

            if (i>=6 && i<8){
                    top->rden = 0x1;
                    top->rdaddress = 0x1;
            }
            else if (i>=8 && i<10){
                    top->rden = 0x1;
                    top->rdaddress = 0x2;
            }
            else{
                    top->rden = 0;
            }

        
        for(int clk = 0; clk < 2; ++clk){
            top->eval();
            tfp->dump((2 * i) + clk);
            if (clk==1){
                    top->clock =!top->clock;
            }
         }

    }

    tfp->close();
}
