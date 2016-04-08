library verilog;
use verilog.vl_types.all;
entity fifo_buffer is
    generic(
        FIFO_DEPTHS     : integer := 2;
        FIFO_WIDTHU     : integer := 1
    );
    port(
        avalonmm_read_slave_read: in     vl_logic;
        avalonmm_write_slave_write: in     vl_logic;
        avalonmm_write_slave_writedata: in     vl_logic_vector(35 downto 0);
        reset_n         : in     vl_logic;
        wrclock         : in     vl_logic;
        avalonmm_read_slave_readdata: out    vl_logic_vector(35 downto 0);
        avalonmm_read_slave_waitrequest: out    vl_logic;
        avalonmm_write_slave_waitrequest: out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of FIFO_DEPTHS : constant is 1;
    attribute mti_svvh_generic_type of FIFO_WIDTHU : constant is 1;
end fifo_buffer;
