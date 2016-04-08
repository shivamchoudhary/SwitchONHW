library verilog;
use verilog.vl_types.all;
entity hps_sdram is
    port(
        pll_ref_clk     : in     vl_logic;
        global_reset_n  : in     vl_logic;
        soft_reset_n    : in     vl_logic;
        mem_a           : out    vl_logic_vector(14 downto 0);
        mem_ba          : out    vl_logic_vector(2 downto 0);
        mem_ck          : out    vl_logic_vector(0 downto 0);
        mem_ck_n        : out    vl_logic_vector(0 downto 0);
        mem_cke         : out    vl_logic_vector(0 downto 0);
        mem_cs_n        : out    vl_logic_vector(0 downto 0);
        mem_dm          : out    vl_logic_vector(3 downto 0);
        mem_ras_n       : out    vl_logic_vector(0 downto 0);
        mem_cas_n       : out    vl_logic_vector(0 downto 0);
        mem_we_n        : out    vl_logic_vector(0 downto 0);
        mem_reset_n     : out    vl_logic;
        mem_dq          : inout  vl_logic_vector(31 downto 0);
        mem_dqs         : inout  vl_logic_vector(3 downto 0);
        mem_dqs_n       : inout  vl_logic_vector(3 downto 0);
        mem_odt         : out    vl_logic_vector(0 downto 0);
        oct_rzqin       : in     vl_logic
    );
end hps_sdram;
