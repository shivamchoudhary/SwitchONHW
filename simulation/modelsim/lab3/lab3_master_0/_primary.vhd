library verilog;
use verilog.vl_types.all;
entity lab3_master_0 is
    generic(
        USE_PLI         : integer := 0;
        PLI_PORT        : integer := 50000;
        FIFO_DEPTHS     : integer := 2
    );
    port(
        clk_clk         : in     vl_logic;
        clk_reset_reset : in     vl_logic;
        master_address  : out    vl_logic_vector(31 downto 0);
        master_readdata : in     vl_logic_vector(31 downto 0);
        master_read     : out    vl_logic;
        master_write    : out    vl_logic;
        master_writedata: out    vl_logic_vector(31 downto 0);
        master_waitrequest: in     vl_logic;
        master_readdatavalid: in     vl_logic;
        master_byteenable: out    vl_logic_vector(3 downto 0);
        master_reset_reset: out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of USE_PLI : constant is 1;
    attribute mti_svvh_generic_type of PLI_PORT : constant is 1;
    attribute mti_svvh_generic_type of FIFO_DEPTHS : constant is 1;
end lab3_master_0;
