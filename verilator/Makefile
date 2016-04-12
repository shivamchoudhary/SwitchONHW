test:
	verilator -Wall --cc --trace counter.sv --exe counter_tb.cpp
build:
	make -j -C obj_dir/ -f Vcounter.mk Vcounter

run:
	obj_dir/Vcounter
clean:
	rm -rf obj_dir
	rm -f  counter.vcd
