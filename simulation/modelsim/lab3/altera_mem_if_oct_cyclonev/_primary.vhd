library verilog;
use verilog.vl_types.all;
entity altera_mem_if_oct_cyclonev is
    generic(
        OCT_TERM_CONTROL_WIDTH: integer := 0
    );
    port(
        oct_rzqin       : in     vl_logic;
        parallelterminationcontrol: out    vl_logic_vector;
        seriesterminationcontrol: out    vl_logic_vector
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of OCT_TERM_CONTROL_WIDTH : constant is 1;
end altera_mem_if_oct_cyclonev;
