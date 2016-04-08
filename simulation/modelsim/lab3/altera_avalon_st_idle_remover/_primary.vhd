library verilog;
use verilog.vl_types.all;
entity altera_avalon_st_idle_remover is
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        in_ready        : out    vl_logic;
        in_valid        : in     vl_logic;
        in_data         : in     vl_logic_vector(7 downto 0);
        out_ready       : in     vl_logic;
        out_valid       : out    vl_logic;
        out_data        : out    vl_logic_vector(7 downto 0)
    );
end altera_avalon_st_idle_remover;
