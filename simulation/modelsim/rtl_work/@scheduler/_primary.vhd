library verilog;
use verilog.vl_types.all;
entity Scheduler is
    port(
        clk             : in     vl_logic;
        data0           : in     vl_logic_vector(7 downto 0);
        data1           : in     vl_logic_vector(7 downto 0);
        data2           : in     vl_logic_vector(7 downto 0);
        data3           : in     vl_logic_vector(7 downto 0);
        sel0            : out    vl_logic_vector(2 downto 0);
        sel1            : out    vl_logic_vector(2 downto 0);
        sel2            : out    vl_logic_vector(2 downto 0);
        sel3            : out    vl_logic_vector(2 downto 0);
        en0             : out    vl_logic;
        en1             : out    vl_logic;
        en2             : out    vl_logic;
        en3             : out    vl_logic;
        rdreq0          : out    vl_logic;
        rdreq1          : out    vl_logic;
        rdreq2          : out    vl_logic;
        rdreq3          : out    vl_logic
    );
end Scheduler;
