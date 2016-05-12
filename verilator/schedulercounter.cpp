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
    top->clk = 1;
    top->write_enable = 1;
    top->reset_rams = 0;

    // run simulation for 100 clock periods
    for(int i = 0; i < 24; i++)
    {   
        if (i==8){
            top->input_ram_wr_add[0][0] = 2;
            top->input_ram_wr_add[1][1] = 2;
            top->input_ram_wr_add[2][2] = 2;
            top->input_ram_wr_add[3][3] = 2;
        }

        if(top->input_ram_rd_add[0][0] == 0)
            top->inp[0][0] = 1;
        else
            top->inp[0][0] = 0;
        if(top->input_ram_rd_add[1][1] == 0)
            top->inp[1][1] = 2;
        else
            top->inp[1][1] = 0;
        if(top->input_ram_rd_add[2][2] == 0)
            top->inp[2][2] = 3;
        else
            top->inp[2][2] = 0;
        if(top->input_ram_rd_add[3][3] == 0)
            top->inp[3][3] = 4;
        else
            top->inp[3][3] = 0;

        for(int clk = 0; clk < 2; ++clk)
        {
            top->eval();
            tfp->dump((2 * i) + clk);
            if (clk==1){
                top->clk =!top->clk;
            }
        }
    }
    for(int j = 0; j < 4; j++){
        for(int k = 0; k < 4; k++){
            top->input_ram_rd_add[j][k] = 0;
        }
    }
    top->input_ram_wr_add[0][0] = 0;
    top->input_ram_wr_add[1][1] = 0;
    top->input_ram_wr_add[2][2] = 0;
    top->input_ram_wr_add[3][3] = 0;
    top->total_time = 0;

    for(int i = 24; i < 96; i++)
    {   
        if (i==32){
            top->input_ram_wr_add[0][0] = 2;
            top->input_ram_wr_add[1][0] = 2;
            top->input_ram_wr_add[2][0] = 2;
            top->input_ram_wr_add[3][0] = 2;
        }
        if(top->input_ram_rd_add[0][0] == 0)
            top->inp[0][0] = 1;
        else
            top->inp[0][0] = 0;
        if(top->input_ram_rd_add[1][0] == 0)
            top->inp[1][0] = 2;
        else
            top->inp[1][0] = 0;
        if(top->input_ram_rd_add[2][0] == 0)
            top->inp[2][0] = 3;
        else
            top->inp[2][0] = 0;
        if(top->input_ram_rd_add[3][0] == 0)
            top->inp[3][0] = 4;
        else
            top->inp[3][0] = 0;


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
