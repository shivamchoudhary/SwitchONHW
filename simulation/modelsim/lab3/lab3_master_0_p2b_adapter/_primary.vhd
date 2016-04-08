library verilog;
use verilog.vl_types.all;
entity lab3_master_0_p2b_adapter is
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        in_ready        : out    vl_logic;
        in_valid        : in     vl_logic;
        in_data         : in     vl_logic_vector(7 downto 0);
        in_startofpacket: in     vl_logic;
        in_endofpacket  : in     vl_logic;
        out_ready       : in     vl_logic;
        out_valid       : out    vl_logic;
        out_data        : out    vl_logic_vector(7 downto 0);
        out_startofpacket: out    vl_logic;
        out_endofpacket : out    vl_logic;
        out_channel     : out    vl_logic_vector(7 downto 0)
    );
end lab3_master_0_p2b_adapter;
