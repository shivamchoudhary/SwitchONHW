buffer: 
	verilator -Wno-lint -cc --trace Buffer.sv --exe buffercounter.cpp
	make -j -C obj_dir/ -f VBuffer.mk VBuffer
	obj_dir/VBuffer

scheduler:
	verilator -Wno-lint -cc --trace Scheduler.sv --exe counter.cpp
	make -j -C obj_dir/ -f VScheduler.mk VScheduler
	obj_dir/VScheduler
test:
	verilator -Wall --cc --trace Test.sv --exe counter_tb.cpp
build:
	make -j -C obj_dir/ -f VTest.mk VTest
dff:
	verilator -Wall -cc --trace Dff.sv --exe counter.cpp
	make -j -C obj_dir/ -f VDff.mk VDff
	obj_dir/VDff
run_dff:
	obj_dir/Vdff
run:
	obj_dir/VScheduler
clean:
	rm -rf obj_dir
	rm -f  *.vcd
