transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+/home/user3/spring16/aj2672/lab3-qsys {/home/user3/spring16/aj2672/lab3-qsys/SoCKit_top.v}
vlog -vlog01compat -work work +incdir+/home/user3/spring16/aj2672/lab3-qsys {/home/user3/spring16/aj2672/lab3-qsys/Fifo.v}
vlog -vlog01compat -work work +incdir+/home/user3/spring16/aj2672/lab3-qsys {/home/user3/spring16/aj2672/lab3-qsys/megamux.v}
vlib lab3
vmap lab3 lab3
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/lab3.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_reset_controller.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_reset_synchronizer.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_sc_fifo.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_master_0.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_master_0_p2b_adapter.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_master_0_b2p_adapter.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_packets_to_master.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_packets_to_bytes.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_bytes_to_packets.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_master_0_timing_adt.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_jtag_interface.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_jtag_dc_streaming.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_jtag_sld_node.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_jtag_streaming.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_clock_crosser.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_pipeline_base.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_idle_remover.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_avalon_st_idle_inserter.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_hps_0.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_hps_0_hps_io.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_altdqdqs.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_acv_ldc.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_generic_ddio.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_acv_hard_io_pads.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_acv_hard_addr_cmd_pads.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_mem_if_hhp_qseq_synth_top.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_clock_pair_generator.v}
vlog -vlog01compat -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0_acv_hard_memphy.v}
vlog -sv -work work +incdir+/home/user3/spring16/aj2672/lab3-qsys {/home/user3/spring16/aj2672/lab3-qsys/Scheduler.sv}
vlog -sv -work work +incdir+/home/user3/spring16/aj2672/lab3-qsys/output_files {/home/user3/spring16/aj2672/lab3-qsys/output_files/Packet_Display.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_irq_mapper.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_width_adapter.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_address_alignment.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_burst_uncompressor.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_arbitrator.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0_rsp_xbar_mux.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0_rsp_xbar_demux.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0_cmd_xbar_mux.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0_cmd_xbar_demux.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_burst_adapter.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0_id_router.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_mm_interconnect_0_addr_router.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_slave_agent.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_master_agent.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_axi_master_ni.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_slave_translator.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_merlin_master_translator.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/VGA_LED.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_p0.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/hps_sdram_pll.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_mem_if_hard_memory_controller_top_cyclonev.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_mem_if_dll_cyclonev.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altdq_dqs2_acv_connect_to_hard_phy_cyclonev.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/altera_mem_if_oct_cyclonev.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_hps_0_hps_io_border.sv}
vlog -sv -work lab3 +incdir+/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules {/home/user3/spring16/aj2672/lab3-qsys/lab3/synthesis/submodules/lab3_hps_0_fpga_interfaces.sv}

