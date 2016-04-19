#Compile all the modules into a single vgaled module. Disable few warnings 
#because the IP Cores we are using don't have arbit coding styles. So it becomes
#important to compile them without warnings.
vgaled:
	verilator -Wno-INITIALDLY -Wno-lint -Wno-MULTIDRIVEN --top-module VGA_LED -cc -trace VGA_LED.sv  --exe vgacounter.cpp 
	make -j -C obj_dir/ -f VVGA_LED.mk  VVGA_LED 
	obj_dir/VVGA_LED
buffer: 
	verilator -Wno-lint -cc --trace Buffer.sv --exe buffercounter.cpp
	make -j -C obj_dir/ -f VBuffer.mk VBuffer
	obj_dir/VBuffer

scheduler:
	verilator -Wno-lint -cc --trace Scheduler.sv --exe schedulercounter.cpp
	make -j -C obj_dir/ -f VScheduler.mk VScheduler
	obj_dir/VScheduler
fifo:
	verilator -Wno-INITIALDLY -Wno-lint -Wno-MULTIDRIVEN --top-module Fifo -cc --trace Fifo.v --exe fifocounter.cpp  
	make -j -C obj_dir/ -f VFifo.mk VFifo
	obj_dir/VFifo
clean:
	rm -rf obj_dir
	rm -f  *.vcd
