library verilog;
use verilog.vl_types.all;
entity lab3_mm_interconnect_0_rsp_xbar_mux is
    port(
        sink0_valid     : in     vl_logic;
        sink0_data      : in     vl_logic_vector(122 downto 0);
        sink0_channel   : in     vl_logic_vector(2 downto 0);
        sink0_startofpacket: in     vl_logic;
        sink0_endofpacket: in     vl_logic;
        sink0_ready     : out    vl_logic;
        src_valid       : out    vl_logic;
        src_data        : out    vl_logic_vector(122 downto 0);
        src_channel     : out    vl_logic_vector(2 downto 0);
        src_startofpacket: out    vl_logic;
        src_endofpacket : out    vl_logic;
        src_ready       : in     vl_logic;
        clk             : in     vl_logic;
        reset           : in     vl_logic
    );
end lab3_mm_interconnect_0_rsp_xbar_mux;
