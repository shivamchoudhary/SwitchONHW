library verilog;
use verilog.vl_types.all;
entity fifo_buffer_single_clock_fifo is
    generic(
        FIFO_DEPTHS     : integer := 2;
        FIFO_WIDTHU     : integer := 1
    );
    port(
        aclr            : in     vl_logic;
        clock           : in     vl_logic;
        data            : in     vl_logic_vector(35 downto 0);
        rdreq           : in     vl_logic;
        wrreq           : in     vl_logic;
        empty           : out    vl_logic;
        full            : out    vl_logic;
        q               : out    vl_logic_vector(35 downto 0)
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of FIFO_DEPTHS : constant is 1;
    attribute mti_svvh_generic_type of FIFO_WIDTHU : constant is 1;
end fifo_buffer_single_clock_fifo;
