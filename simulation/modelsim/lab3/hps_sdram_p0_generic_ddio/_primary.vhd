library verilog;
use verilog.vl_types.all;
entity hps_sdram_p0_generic_ddio is
    generic(
        WIDTH           : integer := 1
    );
    port(
        datain          : in     vl_logic_vector;
        halfratebypass  : in     vl_logic;
        dataout         : out    vl_logic_vector;
        clk_hr          : in     vl_logic_vector;
        clk_fr          : in     vl_logic_vector
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of WIDTH : constant is 1;
end hps_sdram_p0_generic_ddio;
