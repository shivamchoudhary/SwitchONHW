library verilog;
use verilog.vl_types.all;
entity VGA_LED is
    port(
        clk             : in     vl_logic;
        reset           : in     vl_logic;
        writedata       : in     vl_logic_vector(7 downto 0);
        write           : in     vl_logic;
        chipselect      : in     vl_logic;
        address         : in     vl_logic_vector(2 downto 0);
        VGA_R           : out    vl_logic_vector(7 downto 0);
        VGA_G           : out    vl_logic_vector(7 downto 0);
        VGA_B           : out    vl_logic_vector(7 downto 0);
        VGA_CLK         : out    vl_logic;
        VGA_HS          : out    vl_logic;
        VGA_VS          : out    vl_logic;
        VGA_BLANK_n     : out    vl_logic;
        VGA_SYNC_n      : out    vl_logic
    );
end VGA_LED;
