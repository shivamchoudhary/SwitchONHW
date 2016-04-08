library verilog;
use verilog.vl_types.all;
entity altera_mem_if_hhp_qseq_synth_top is
    generic(
        APB_DATA_WIDTH  : integer := 32;
        APB_ADDR_WIDTH  : integer := 32;
        AVL_DATA_WIDTH  : integer := 32;
        AVL_ADDR_WIDTH  : integer := 16;
        AVL_MMR_DATA_WIDTH: integer := 32;
        AVL_MMR_ADDR_WIDTH: integer := 8;
        MEM_IF_DQS_WIDTH: integer := 1;
        MEM_IF_DQ_WIDTH : integer := 8;
        MEM_IF_DM_WIDTH : integer := 1;
        MEM_IF_CS_WIDTH : integer := 1
    );
    attribute mti_svvh_generic_type : integer;
    attribute mti_svvh_generic_type of APB_DATA_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of APB_ADDR_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of AVL_DATA_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of AVL_ADDR_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of AVL_MMR_DATA_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of AVL_MMR_ADDR_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of MEM_IF_DQS_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of MEM_IF_DQ_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of MEM_IF_DM_WIDTH : constant is 1;
    attribute mti_svvh_generic_type of MEM_IF_CS_WIDTH : constant is 1;
end altera_mem_if_hhp_qseq_synth_top;
