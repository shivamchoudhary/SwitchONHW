library verilog;
use verilog.vl_types.all;
entity fifo_to_packet is
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        out_ready       : in     vl_logic;
        out_valid       : out    vl_logic;
        out_data        : out    vl_logic_vector(7 downto 0);
        out_startofpacket: out    vl_logic;
        out_endofpacket : out    vl_logic;
        fifo_readdata   : in     vl_logic_vector(35 downto 0);
        fifo_read       : out    vl_logic;
        fifo_empty      : in     vl_logic
    );
end fifo_to_packet;
