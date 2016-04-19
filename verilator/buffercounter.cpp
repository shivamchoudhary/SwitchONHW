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
     
    // initialize simulation inputs
    top->clk    = 0;
     // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++){

        // Place a dummy data on write bus. You need to write first.
        // Write to RAM 1
        //RAM 1
        if (i>10&&i<=14){
                top->en1 = 1; //Enable ramen1 for 1 clock cycles
                top ->result1 = 2; //Put data on the result signal
        }
        else{
                top->en1=0; //Toggle ramen1
                top->result1 = 0; //Toggle result 1
        }
        //RAM 2
        if (i>=15 && i<=19){
                top->en2 = 1;
                top->result2 = 1;

        }
        else{
                top->en2 = 0;
                top->result2 = 0;
        }
        //RAM3 
        if (i>20 && i<=24){
                top->en3=1;
                top->result3=1;
        }
        else{
                top->en3 = 0;
                top->result3=0;
        }
        // Generate read signals
        
        if(i>10&&i<19){
                top->chipselect=1;
                top->read = 1;
                top->address = 1;
        }
        else{
                top->chipselect = 0;
                top->address =7;
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
