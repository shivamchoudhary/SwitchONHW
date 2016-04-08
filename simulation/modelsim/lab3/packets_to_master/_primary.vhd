library verilog;
use verilog.vl_types.all;
entity packets_to_master is
    generic(
        EXPORT_MASTER_SIGNALS: integer := 0
    );
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
        address         : out    vl_logic_vector(31 downto 0);
        readdata        : in     vl_logic_vector(31 downto 0);
        read            : out    vl_logic;
        write           : out    vl_logic;
        byteenable      : out    vl_logic_vector(3 downto 0);
        writedata       : out    vl_logic_vector(31 downto 0);
        waitrequest     : in     vl_logic;
        readdatavalid   : in     vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of EXPORT_MASTER_SIGNALS : constant is 1;
end packets_to_master;
