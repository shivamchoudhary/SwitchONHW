// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VVGA_LED__Syms_H_
#define _VVGA_LED__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VVGA_LED.h"

// SYMS CLASS
class VVGA_LED__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VVGA_LED*                      TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_v__buffer__ram1__altsyncram_component;
    VerilatedScope __Vscope_v__buffer__ram2__altsyncram_component;
    VerilatedScope __Vscope_v__buffer__ram3__altsyncram_component;
    VerilatedScope __Vscope_v__input_ram1__altsyncram_component;
    VerilatedScope __Vscope_v__input_ram2__altsyncram_component;
    VerilatedScope __Vscope_v__input_ram3__altsyncram_component;
    
    // CREATORS
    VVGA_LED__Syms(VVGA_LED* topp, const char* namep);
    ~VVGA_LED__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
