library verilog;
use verilog.vl_types.all;
entity altera_jtag_control_signal_crosser is
    generic(
        SYNC_DEPTH      : integer := 3
    );
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        async_control_signal: in     vl_logic;
        sense_pos_edge  : in     vl_logic;
        sync_control_signal: out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of SYNC_DEPTH : constant is 1;
end altera_jtag_control_signal_crosser;
