library verilog;
use verilog.vl_types.all;
entity altera_avalon_st_packets_to_bytes is
    generic(
        CHANNEL_WIDTH   : integer := 8;
        ENCODING        : integer := 0
    );
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        in_ready        : out    vl_logic;
        in_valid        : in     vl_logic;
        in_data         : in     vl_logic_vector(7 downto 0);
        in_channel      : in     vl_logic_vector;
        in_startofpacket: in     vl_logic;
        in_endofpacket  : in     vl_logic;
        out_ready       : in     vl_logic;
        out_valid       : out    vl_logic;
        out_data        : out    vl_logic_vector(7 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of CHANNEL_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of ENCODING : constant is 1;
end altera_avalon_st_packets_to_bytes;
