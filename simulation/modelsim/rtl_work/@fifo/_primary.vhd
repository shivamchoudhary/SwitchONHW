library verilog;
use verilog.vl_types.all;
entity Fifo is
    port(
        clock           : in     vl_logic;
        data            : in     vl_logic_vector(7 downto 0);
        rdreq           : in     vl_logic;
        wrreq           : in     vl_logic;
        empty           : out    vl_logic;
        full            : out    vl_logic;
        q               : out    vl_logic_vector(7 downto 0);
        aclr            : in     vl_logic;
        usedw           : out    vl_logic_vector(1 downto 0)
    );
end Fifo;
