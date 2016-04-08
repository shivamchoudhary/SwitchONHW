library verilog;
use verilog.vl_types.all;
entity altera_avalon_st_jtag_interface is
    generic(
        PURPOSE         : integer := 0;
        UPSTREAM_FIFO_SIZE: integer := 0;
        DOWNSTREAM_FIFO_SIZE: integer := 0;
        MGMT_CHANNEL_WIDTH: integer := -1;
        USE_PLI         : integer := 0;
        PLI_PORT        : integer := 50000
    );
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        source_ready    : in     vl_logic;
        source_data     : out    vl_logic_vector(7 downto 0);
        source_valid    : out    vl_logic;
        sink_data       : in     vl_logic_vector(7 downto 0);
        sink_valid      : in     vl_logic;
        sink_ready      : out    vl_logic;
        resetrequest    : out    vl_logic;
        debug_reset     : out    vl_logic;
        mgmt_valid      : out    vl_logic;
        mgmt_channel    : out    vl_logic_vector;
        mgmt_data       : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of PURPOSE : constant is 1;
    attribute mti_svvh_generic_type of UPSTREAM_FIFO_SIZE : constant is 1;
    attribute mti_svvh_generic_type of DOWNSTREAM_FIFO_SIZE : constant is 1;
    attribute mti_svvh_generic_type of MGMT_CHANNEL_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of USE_PLI : constant is 1;
    attribute mti_svvh_generic_type of PLI_PORT : constant is 1;
end altera_avalon_st_jtag_interface;
