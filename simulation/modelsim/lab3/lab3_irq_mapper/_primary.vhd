library verilog;
use verilog.vl_types.all;
entity lab3_irq_mapper is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        sender_irq      : out    vl_logic_vector(31 downto 0)
    );
end lab3_irq_mapper;
