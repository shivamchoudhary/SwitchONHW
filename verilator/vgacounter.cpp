#include "VVGA_LED.h"
#include "verilated.h" 
#include "verilated_vcd_c.h" 
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include <set>
// This is required otherwise the module doesn't get instantiated and the linker
// throws an error.
vluint64_t main_time = 0;       // Current simulation time
        // This is a 64-bit integer to reduce wrap over issues and
        // allow modulus.  You can also use a double, if you wish.
        double sc_time_stamp () {       // Called by $time in Verilog
            return main_time;           // converts to double, to match
                                        // what SystemC does
        }
bool high;
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
    int result1,result2,result3=0;0;0;
    std::vector<int> packet1;
    std::vector<int> packet2;
    std::vector<int> packet3;
    top->clk    = 1;
    top->chipselect = 1;
    top->write =1;
    top->reset =0;
    top->read = 0;
    srand((unsigned) time(&t));
    // run simulation for 100 clock periods
    for(int i = 0; i < 100; i++)
    {   
        if(top->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result!=0){
                result1 = top->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result;
                packet1.push_back(result1);
        }
            
        
        if(top->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result!=0){
                result2 = top->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result;
                packet2.push_back(result2);
        }
        
        if(top->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result!=0){
                result3 = top->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result;
                packet3.push_back(result3);
        }
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
                    high=false;
            }
         }
    }

    std::set <int> s1;
    std::set<int>s2;
    std::set<int>s3;
    
    unsigned size1 = packet1.size();
    for( unsigned i = 0; i < size1; ++i ) s1.insert( packet1[i] );
        packet1.assign( s1.begin(), s1.end() );
    
    unsigned size2 = packet2.size();
    for( unsigned i = 0; i < size2; ++i ) s2.insert( packet2[i] );
        packet2.assign( s2.begin(), s2.end() );

    unsigned size3 = packet3.size();
    for( unsigned i = 0; i < size3; ++i ) s3.insert( packet3[i] );
        packet3.assign( s3.begin(), s3.end() );

    size1 = packet1.size();
    size2 = packet2.size();
    size3 = packet3.size();
    
    cout<<"THIS IS PACKET SIZE FOR 1:   "<<packet1.size()<<endl;
    cout<<"THIS IS PACKET SIZE FOR 2:   "<<packet2.size()<<endl;
    cout<<"THIS IS PACKET SIZE FOR 3:   "<<packet3.size()<<endl;
    cout<<"TOTAL NUMBER OF PACKETS RECEIVED:    "<<size1+size2+size3<<endl;
    
    unsigned mask =(1<<2)-1; 
    for(unsigned i=0; i<size1; i++){
        int value = packet1[i]&mask;
        if(value!=1){
                cout<<"THIS PACKET IS IN THE WRONG PLACE of PACKET1!!!     "<<packet1[i]<<endl;
        }
        
    }

    for(unsigned i=0; i<size2; i++){
        int value = packet2[i]&mask;
        if(value!=2 & value!= 0){
                cout<<"THIS PACKET IS IN THE WRONG PLACE of PACKET2!!!     "<<packet2[i]<<endl;
        }
        
    }

    for(unsigned i=0; i<size3; i++){
        int value = packet3[i]&mask;
        if(value!=3){
                cout<<"THIS PACKET IS IN THE WRONG PLACE of PACKET3!!!     "<<packet3[i]<<endl;
        }
        
    }
 
    tfp->close();
}
