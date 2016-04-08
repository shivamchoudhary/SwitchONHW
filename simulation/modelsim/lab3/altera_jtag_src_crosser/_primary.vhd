library verilog;
use verilog.vl_types.all;
entity altera_jtag_src_crosser is
    generic(
        WIDTH           : integer := 8;
        SYNC_DEPTH      : integer := 3
    );
    port(
        sink_clk        : in     vl_logic;
        sink_reset_n    : in     vl_logic;
        sink_valid      : in     vl_logic;
        sink_data       : in     vl_logic_vector;
        src_clk         : in     vl_logic;
        src_reset_n     : in     vl_logic;
        src_valid       : out    vl_logic;
        src_data        : out    vl_logic_vector
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of WIDTH : constant is 1;
    attribute mti_svvh_generic_type of SYNC_DEPTH : constant is 1;
end altera_jtag_src_crosser;
