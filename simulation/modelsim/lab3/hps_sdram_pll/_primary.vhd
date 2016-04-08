library verilog;
use verilog.vl_types.all;
entity hps_sdram_pll is
    generic(
        DEVICE_FAMILY   : string  := "Cyclone V";
        IS_HHP_HPS      : string  := "true";
        GENERIC_PLL     : string  := "true";
        REF_CLK_FREQ    : string  := "25.0 MHz";
        REF_CLK_PERIOD_PS: integer := 40000;
        PLL_MEM_CLK_FREQ_STR: string  := "400.0 MHz";
        PLL_WRITE_CLK_FREQ_STR: string  := "400.0 MHz";
        PLL_DR_CLK_FREQ_STR: string  := "";
        PLL_MEM_CLK_FREQ_SIM_STR: string  := "2500 ps";
        PLL_WRITE_CLK_FREQ_SIM_STR: string  := "2500 ps";
        PLL_DR_CLK_FREQ_SIM_STR: string  := "0 ps";
        MEM_CLK_PHASE   : string  := "0 ps";
        WRITE_CLK_PHASE : string  := "1875 ps";
        DR_CLK_PHASE    : string  := ""
    );
    port(
        global_reset_n  : in     vl_logic;
        pll_ref_clk     : in     vl_logic;
        pll_mem_clk     : out    vl_logic;
        pll_write_clk   : out    vl_logic;
        pll_write_clk_pre_phy_clk: out    vl_logic;
        pll_addr_cmd_clk: out    vl_logic;
        pll_avl_clk     : out    vl_logic;
        pll_config_clk  : out    vl_logic;
        pll_locked      : out    vl_logic;
        afi_clk         : out    vl_logic;
        pll_mem_phy_clk : out    vl_logic;
        afi_phy_clk     : out    vl_logic;
        pll_avl_phy_clk : out    vl_logic;
        afi_half_clk    : out    vl_logic
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of DEVICE_FAMILY : constant is 1;
    attribute mti_svvh_generic_type of IS_HHP_HPS : constant is 1;
    attribute mti_svvh_generic_type of GENERIC_PLL : constant is 1;
    attribute mti_svvh_generic_type of REF_CLK_FREQ : constant is 1;
    attribute mti_svvh_generic_type of REF_CLK_PERIOD_PS : constant is 1;
    attribute mti_svvh_generic_type of PLL_MEM_CLK_FREQ_STR : constant is 1;
    attribute mti_svvh_generic_type of PLL_WRITE_CLK_FREQ_STR : constant is 1;
    attribute mti_svvh_generic_type of PLL_DR_CLK_FREQ_STR : constant is 1;
    attribute mti_svvh_generic_type of PLL_MEM_CLK_FREQ_SIM_STR : constant is 1;
    attribute mti_svvh_generic_type of PLL_WRITE_CLK_FREQ_SIM_STR : constant is 1;
    attribute mti_svvh_generic_type of PLL_DR_CLK_FREQ_SIM_STR : constant is 1;
    attribute mti_svvh_generic_type of MEM_CLK_PHASE : constant is 1;
    attribute mti_svvh_generic_type of WRITE_CLK_PHASE : constant is 1;
    attribute mti_svvh_generic_type of DR_CLK_PHASE : constant is 1;
end hps_sdram_pll;
