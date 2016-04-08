library verilog;
use verilog.vl_types.all;
entity lab3_mm_interconnect_0_addr_router_default_decode is
    generic(
        DEFAULT_CHANNEL : integer := 0;
        \DEFAULT_WR_CHANNEL\: integer := -1;
        \DEFAULT_RD_CHANNEL\: integer := -1;
        DEFAULT_DESTID  : integer := 0
    );
    port(
        default_destination_id: out    vl_logic_vector(0 downto 0);
        default_wr_channel: out    vl_logic_vector(2 downto 0);
        default_rd_channel: out    vl_logic_vector(2 downto 0);
        default_src_channel: out    vl_logic_vector(2 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of DEFAULT_CHANNEL : constant is 1;
    attribute mti_svvh_generic_type of \DEFAULT_WR_CHANNEL\ : constant is 1;
    attribute mti_svvh_generic_type of \DEFAULT_RD_CHANNEL\ : constant is 1;
    attribute mti_svvh_generic_type of DEFAULT_DESTID : constant is 1;
end lab3_mm_interconnect_0_addr_router_default_decode;
