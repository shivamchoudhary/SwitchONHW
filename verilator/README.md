## Verilator Simulation code.


Naming convention is the part of module the signal is for followed by
the use of the signal, written in camel case. For example, fifo_in

We create simulation of all the .sv files(including IP Cores) that we use in the
project. Install GTK-Wave and edit the Makefile to create the executables.

Always compile down with individual test files because that helps in keeping the 
process tightly integrated with the code.


As of now we can simulate Scheduler, VGA_LED and Buffer,MUX, RAM,FIFO
 i.e the full suite. 


