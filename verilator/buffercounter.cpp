#include "VBuffer.h" 
#include "verilated.h" 
#include "verilated_vcd_c.h" 
#include "iostream"
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
    VBuffer* top = new VBuffer();

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("buffer.vcd");
    top->read_enable = 1;
     
    // initialize simulation inputs
    top->clk    = 1;
     // run simulation for 100 clock periods
    int add = 0;
    for(int i = 0; i < 100; i++){

        // Place a dummy data on write bus. You need to write first.
        // Write to RAM 1
        //RAM 0 & RAM 1
        if (i>=10 && i<14){
                top->out_ram_wr[0] = 1; //Enable ramen1 for 1 clock cycles
                top->outp[0] = 1; //Put data on the result signal
                
                top->out_ram_wr[1] = 1;
                top->outp[1] = 2;
        }
        else{
                top->out_ram_wr[0]=0; //Toggle ramen1
                top->outp[0] = 0; //Toggle result 1
        }
        //RAM 2 & RAM 3 
        if (i>=14 && i<18){
                top->out_ram_wr[2] = 1;
                top->outp[2] = 3;

                top->out_ram_wr[3] = 1;
                top->outp[3] = 4;
        }
        else{
                top->out_ram_wr[2] = 0;
                top->outp[2] = 0;
        }
        // Generate read signals
        if(i>=20 && i<36){
                top->chipselect = 1;
                top->read = 1;
                top->address = add;
                if(i%4 == 3)
                    add = add + 1;
                printf("%i\n", add);
        }
        else{
                top->chipselect = 0;
                top->address = 0;
                top->read = 0;

        }
        for(int clk = 0; clk < 2; ++clk)
        {
            top->eval();
            tfp->dump((2 * i) + clk);
            if (clk==1){
                    top->clk = !top->clk;
            }
         }
    }
    tfp->close();
}
