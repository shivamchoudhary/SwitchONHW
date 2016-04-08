library verilog;
use verilog.vl_types.all;
entity packets_to_fifo is
    port(
        clk             : in     vl_logic;
        reset_n         : in     vl_logic;
        in_ready        : out    vl_logic;
        in_valid        : in     vl_logic;
        in_data         : in     vl_logic_vector(7 downto 0);
        in_startofpacket: in     vl_logic;
        in_endofpacket  : in     vl_logic;
        address         : out    vl_logic_vector(31 downto 0);
        readdata        : in     vl_logic_vector(31 downto 0);
        read            : out    vl_logic;
        write           : out    vl_logic;
        byteenable      : out    vl_logic_vector(3 downto 0);
        writedata       : out    vl_logic_vector(31 downto 0);
        waitrequest     : in     vl_logic;
        readdatavalid   : in     vl_logic;
        fifo_writedata  : out    vl_logic_vector(35 downto 0);
        fifo_write      : out    vl_logic;
        fifo_write_waitrequest: in     vl_logic
    );
end packets_to_fifo;
