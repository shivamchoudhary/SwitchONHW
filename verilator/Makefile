# SwitchON hardware simulation file. Compiles all the modules individually or 
# can compile them into one top module.

# List all the warning flags with the reason to skip them.

WFLAGS= -Wno-INITIALDLY -Wno-lint -Wno-MULTIDRIVEN -Wno-UNOPTFLAT -Wno-COMBDLY

# Warning Flags Description(http://www.veripool.org/projects/verilator/wiki/
# Manual-verilator)
# 1)-Wno-INITIALDLY:-
#	Warns that you have a delayed assignment inside of an initial or final 
#	block.If this message is suppressed, Verilator will convert this to a 
#	non-delayed assignment. See also the COMBDLY warning.Ignoring this 
#	warning may make Verilator simulations differ from other simulaors.
#	Our Observation:
#	----------------
#	Since some of the Altera modules (more than hundreds)did not have 
#	this explicitly set we disabled it, and have not faced any issue as such.
# 
# 2)-Wno-lint:-
# 	Disable all lint related warning messages, and all style warnings. 
# 	This is equivalent to "-Wno-ALWCOMBORDER -Wno-CASEINCOMPLETE
# 	-Wno-CASEOVERLAP -Wno-CASEX -Wno-CASEWITHX -Wno-CMPCONST -Wno-ENDLABEL
# 	-Wno-IMPLICIT -Wno-LITENDIAN -Wno-PINCONNECTEMPTY -Wno-PINMISSING 
# 	-Wno-SYNCASYNCNET -Wno-UNDRIVEN -Wno-UNSIGNED -Wno-UNUSED -Wno-WIDTH"
# 	plus the list shown for Wno-style.
#	It is strongly recommended you cleanup your code rather than using this
#	option, it is only intended to be use when running test-cases of code 
#	received from third parties.
#
# 3)-Wno-MULTIDRIVEN:-
# 	Warns that the specified signal comes from multiple always blocks. This
# 	is often unsupported by synthesis tools, and is considered bad style. 
# 	It will also cause longer runtimes due to reduced optimizations.Ignoring
# 	this warning will only slow simulations, it will simulate correctly.
#
# 4)-Wno-UNOPTFLAT:-
# 	Warns that due to some construct, optimization of the specified signal 
# 	or block is disabled. The construct should be cleaned up to improve 
# 	runtime.A less obvious case of this is when a module instantiates 
# 	two submodules. Inside submodule A, signal I is input and signal O is
# 	output. Likewise in submodule B, signal O is an input and I is an output.
# 	A loop exists and a UNOPT warning will result if AI & AO both come from 
# 	and go to combinatorial blocks in both submodules, even if they are 
# 	unrelated always blocks. This affects performance because Verilator 
# 	would have to evaluate each submodule multiple times to stabilize the 
# 	signals crossing between the modules.Ignoring this warning will only 
# 	slow simulations, it will simulate correctly.
# 5)-Wno-COMBDLY:-
# 	Warns that you have a delayed assignment inside of a combinatorial block.
# 	Using delayed assignments in this way is considered bad form, and may 
# 	lead to the simulator not matching synthesis. If this message is
# 	suppressed, Verilator, like synthesis, will convert this to a 
# 	non-delayed assignment, which may result in logic races or other nasties
# 	.See http://www.sunburst-design.com/papers/CummingsSNUG2000SJ_NBA_rev1_2.pdf
#	Ignoring this warning may make Verilator simulations differ from other
#	simulators.


TOPMODULE=VGA_LED # Name of the TOP MODULE into which all modules will be mushed.


# Define individual modules below with the appropriate simulators.
# Notation to define simulation file is <modulenamecounter.cpp>

# TOP level module depends on Fifo.v Scheduler.v Buffer.v megamux.v
VGA_LED_SIM=vgacounter.cpp # Define the simulation file you for this module.
vgaled:
	verilator $(WFLAGS) -top-module $(TOPMODULE) -I altera_mf.v -cc -trace VGA_LED.sv \
		--exe $(VGA_LED_SIM) 
	make -j -C obj_dir/ -f VVGA_LED.mk  VVGA_LED 
	obj_dir/VVGA_LED

# The RAM's on the output port of the Switch
buffer_SIM=buffercounter.cpp # Define the simulation file you for this module.
buffer: 
	verilator -Wno-lint -cc --trace Buffer.sv --exe $(buffer_SIM)$
	make -j -C obj_dir/ -f VBuffer.mk VBuffer
	obj_dir/VBuffer

#Compiles the scheduler depends on None. This is the Crossbar switch 
scheduler_SIM=schedulercounter.cpp
scheduler:
	verilator -Wno-lint -cc --trace Scheduler.sv --exe $(scheduler_SIM)$
	make -j -C obj_dir/ -f VScheduler.mk VScheduler
	obj_dir/VScheduler

# Compiles into Altera's scfifo depends on scfifo.v
fifo_SIM=fifocounter.cpp
fifo:
	verilator -Wno-INITIALDLY -Wno-lint -Wno-MULTIDRIVEN --top-module Fifo \
		-cc --trace Fifo.v --exe $(fifo_SIM) 
	make -j -C obj_dir/ -f VFifo.mk VFifo
	obj_dir/VFifo
# Compiles the Megamuxes
mux_SIM=muxcounter.cpp
mux:
	verilator -Wno-lint -cc --trace lpm_mux.v --top-module lpm_mux --exe \
		$(mux_SIM)$ 
	make -j -C obj_dir/ -f Vlpm_mux.mk Vlpm_mux
	obj_dir/Vlpm_mux

#Compiles the scheduler depends on None. This is the Crossbar switch 
test_rand=testrandomcounter.cpp
random:
	verilator -Wno-lint -cc --trace test_random.sv --exe $(test_rand)$
	make -j -C obj_dir/ -f Vtest_random.mk Vtest_random
	obj_dir/Vtest_random

clean:
	rm -rf obj_dir
	rm -f  *.vcd
