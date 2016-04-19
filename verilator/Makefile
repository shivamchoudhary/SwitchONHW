vgaled:
	verilator -Wno-lint -cc -trace VGA_LED.sv  --exe vgacounter.cpp 
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
	verilator -Wno-INITIALDLY -Wno-lint -Wno-MULTIDRIVEN --top-module scfifo -cc --trace scfifo.v --exe fifocounter.cpp  
	make -j -C obj_dir/ -f Vscfifo.mk Vscfifo
	obj_dir/Vscfifo
clean:
	rm -rf obj_dir
	rm -f  *.vcd
