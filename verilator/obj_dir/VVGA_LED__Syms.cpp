// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVGA_LED__Syms.h"
#include "VVGA_LED.h"

// FUNCTIONS
VVGA_LED__Syms::VVGA_LED__Syms(VVGA_LED* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scope names
    __Vscope_v__buffer__ram1__altsyncram_component.configure(this,name(),"v.buffer.ram1.altsyncram_component");
    __Vscope_v__buffer__ram2__altsyncram_component.configure(this,name(),"v.buffer.ram2.altsyncram_component");
    __Vscope_v__buffer__ram3__altsyncram_component.configure(this,name(),"v.buffer.ram3.altsyncram_component");
    __Vscope_v__input_ram1__altsyncram_component.configure(this,name(),"v.input_ram1.altsyncram_component");
    __Vscope_v__input_ram2__altsyncram_component.configure(this,name(),"v.input_ram2.altsyncram_component");
    __Vscope_v__input_ram3__altsyncram_component.configure(this,name(),"v.input_ram3.altsyncram_component");
}
