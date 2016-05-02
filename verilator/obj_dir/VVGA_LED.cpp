// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGA_LED.h for the primary calling header

#include "VVGA_LED.h"          // For This
#include "VVGA_LED__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VVGA_LED) {
    VVGA_LED__Syms* __restrict vlSymsp = __VlSymsp = new VVGA_LED__Syms(this, name());
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    writedata = VL_RAND_RESET_I(32);
    write = VL_RAND_RESET_I(1);
    read = VL_RAND_RESET_I(1);
    chipselect = VL_RAND_RESET_I(1);
    address = VL_RAND_RESET_I(4);
    VGA_R = VL_RAND_RESET_I(8);
    VGA_G = VL_RAND_RESET_I(8);
    VGA_B = VL_RAND_RESET_I(8);
    VGA_CLK = VL_RAND_RESET_I(1);
    VGA_HS = VL_RAND_RESET_I(1);
    VGA_VS = VL_RAND_RESET_I(1);
    VGA_BLANK_n = VL_RAND_RESET_I(1);
    VGA_SYNC_n = VL_RAND_RESET_I(1);
    readdata = VL_RAND_RESET_I(32);
    v__DOT__fifo_in1 = VL_RAND_RESET_I(32);
    v__DOT__fifo_in2 = VL_RAND_RESET_I(32);
    v__DOT__fifo_in3 = VL_RAND_RESET_I(32);
    v__DOT__fifo_rd1 = VL_RAND_RESET_I(1);
    v__DOT__fifo_rd2 = VL_RAND_RESET_I(1);
    v__DOT__fifo_rd3 = VL_RAND_RESET_I(1);
    v__DOT__fifo_wr1 = VL_RAND_RESET_I(1);
    v__DOT__fifo_wr2 = VL_RAND_RESET_I(1);
    v__DOT__fifo_wr3 = VL_RAND_RESET_I(1);
    v__DOT__input_ram_rd_add1 = VL_RAND_RESET_I(12);
    v__DOT__input_ram_rd_add2 = VL_RAND_RESET_I(12);
    v__DOT__input_ram_rd_add3 = VL_RAND_RESET_I(12);
    v__DOT__input_ram_rden1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram_rden2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram_rden3 = VL_RAND_RESET_I(1);
    v__DOT__input_ram_wr_in1 = VL_RAND_RESET_I(32);
    v__DOT__input_ram_wr_in2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram_wr_in3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram_wr_add1 = VL_RAND_RESET_I(12);
    v__DOT__input_ram_wr_add2 = VL_RAND_RESET_I(12);
    v__DOT__input_ram_wr_add3 = VL_RAND_RESET_I(12);
    v__DOT__input_ram_wren1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram_wren2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram_wren3 = VL_RAND_RESET_I(1);
    v__DOT__out_ram_wr1 = VL_RAND_RESET_I(1);
    v__DOT__out_ram_wr2 = VL_RAND_RESET_I(1);
    v__DOT__out_ram_wr3 = VL_RAND_RESET_I(1);
    v__DOT__mux_sel1 = VL_RAND_RESET_I(2);
    v__DOT__mux_sel2 = VL_RAND_RESET_I(2);
    v__DOT__mux_sel3 = VL_RAND_RESET_I(2);
    v__DOT__hex1 = VL_RAND_RESET_I(8);
    v__DOT__hex2 = VL_RAND_RESET_I(8);
    v__DOT__hex3 = VL_RAND_RESET_I(8);
    v__DOT__hex4 = VL_RAND_RESET_I(8);
    v__DOT__hex5 = VL_RAND_RESET_I(8);
    v__DOT__hex6 = VL_RAND_RESET_I(8);
    v__DOT__fifo_out0 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa2b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__init_temp = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_output_latch = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a = VL_RAND_RESET_I(12);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b = VL_RAND_RESET_I(12);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_ecc_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_ecc_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_address_a = VL_RAND_RESET_I(12);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048,v__DOT__input_ram1__DOT__altsyncram_component__DOT__ram_initf);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__file_desc = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__init_file_b_port = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__wa_mult_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__wa_mult_x_ii = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__wa_mult_x_iii = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__add_reg_a_mult_wa = VL_RAND_RESET_Q(44);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__add_reg_b_mult_wb = VL_RAND_RESET_Q(44);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa = VL_RAND_RESET_Q(44);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb = VL_RAND_RESET_Q(44);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_flag = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(169,v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_ram_block_type = VL_RAND_RESET_Q(57);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byte_size = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__init_i = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i4 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__k = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__k2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__k3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__k4 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_div_wa = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_div_wb = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j_plus_i2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j2_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j3_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j_plus_i2_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j2_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j3_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__j3_plus_i5_div_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_count = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa2b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__init_temp = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_output_latch = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a = VL_RAND_RESET_I(12);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b = VL_RAND_RESET_I(12);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_ecc_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_ecc_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_address_a = VL_RAND_RESET_I(12);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048,v__DOT__input_ram2__DOT__altsyncram_component__DOT__ram_initf);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__file_desc = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__init_file_b_port = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__wa_mult_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__wa_mult_x_ii = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__wa_mult_x_iii = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__add_reg_a_mult_wa = VL_RAND_RESET_Q(44);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__add_reg_b_mult_wb = VL_RAND_RESET_Q(44);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa = VL_RAND_RESET_Q(44);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb = VL_RAND_RESET_Q(44);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_flag = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(169,v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_ram_block_type = VL_RAND_RESET_Q(57);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byte_size = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__init_i = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i4 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__k = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__k2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__k3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__k4 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_div_wa = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_div_wb = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j_plus_i2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j2_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j3_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j_plus_i2_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j2_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j3_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__j3_plus_i5_div_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_count = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa2b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__init_temp = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_output_latch = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a = VL_RAND_RESET_I(12);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b = VL_RAND_RESET_I(12);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_ecc_reg_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_ecc_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_address_a = VL_RAND_RESET_I(12);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048,v__DOT__input_ram3__DOT__altsyncram_component__DOT__ram_initf);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__file_desc = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__init_file_b_port = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__wa_mult_x = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__wa_mult_x_ii = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__wa_mult_x_iii = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__add_reg_a_mult_wa = VL_RAND_RESET_Q(44);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__add_reg_b_mult_wb = VL_RAND_RESET_Q(44);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa = VL_RAND_RESET_Q(44);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb = VL_RAND_RESET_Q(44);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_flag = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(169,v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_ram_block_type = VL_RAND_RESET_Q(57);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byte_size = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = VL_RAND_RESET_I(1);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__init_i = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i4 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__k = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__k2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__k3 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__k4 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_div_wa = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_div_wb = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j_plus_i2 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j2_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j3_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j_plus_i2_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j2_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j3_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__j3_plus_i5_div_b = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_count = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_RAND_RESET_Q(64);
    v__DOT__fifo1__DOT__scfifo_component__DOT__sclr = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__fifo1__DOT__scfifo_component__DOT__count_id = VL_RAND_RESET_I(2);
    v__DOT__fifo1__DOT__scfifo_component__DOT__read_id = VL_RAND_RESET_I(2);
    v__DOT__fifo1__DOT__scfifo_component__DOT__write_id = VL_RAND_RESET_I(2);
    v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__almost_full_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__almost_empty_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = VL_RAND_RESET_I(32);
    v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1 = VL_RAND_RESET_I(2);
    v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2 = VL_RAND_RESET_I(2);
    v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency3 = VL_RAND_RESET_I(2);
    v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count = VL_RAND_RESET_I(32);
    v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency2 = VL_RAND_RESET_I(1);
    v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready = VL_RAND_RESET_I(4);
    v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown = VL_RAND_RESET_I(4);
    v__DOT__fifo1__DOT__scfifo_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__fifo1__DOT__scfifo_component__DOT____Vlvbound4 = VL_RAND_RESET_I(32);
    v__DOT__fifo2__DOT__scfifo_component__DOT__sclr = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__fifo2__DOT__scfifo_component__DOT__count_id = VL_RAND_RESET_I(2);
    v__DOT__fifo2__DOT__scfifo_component__DOT__read_id = VL_RAND_RESET_I(2);
    v__DOT__fifo2__DOT__scfifo_component__DOT__write_id = VL_RAND_RESET_I(2);
    v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__almost_full_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__almost_empty_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = VL_RAND_RESET_I(32);
    v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1 = VL_RAND_RESET_I(2);
    v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2 = VL_RAND_RESET_I(2);
    v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency3 = VL_RAND_RESET_I(2);
    v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count = VL_RAND_RESET_I(32);
    v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency2 = VL_RAND_RESET_I(1);
    v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready = VL_RAND_RESET_I(4);
    v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown = VL_RAND_RESET_I(4);
    v__DOT__fifo2__DOT__scfifo_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__fifo2__DOT__scfifo_component__DOT____Vlvbound4 = VL_RAND_RESET_I(32);
    v__DOT__fifo3__DOT__scfifo_component__DOT__sclr = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__fifo3__DOT__scfifo_component__DOT__count_id = VL_RAND_RESET_I(2);
    v__DOT__fifo3__DOT__scfifo_component__DOT__read_id = VL_RAND_RESET_I(2);
    v__DOT__fifo3__DOT__scfifo_component__DOT__write_id = VL_RAND_RESET_I(2);
    v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__almost_full_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__almost_empty_flag = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = VL_RAND_RESET_I(32);
    v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1 = VL_RAND_RESET_I(2);
    v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2 = VL_RAND_RESET_I(2);
    v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency3 = VL_RAND_RESET_I(2);
    v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count = VL_RAND_RESET_I(32);
    v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency2 = VL_RAND_RESET_I(1);
    v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready = VL_RAND_RESET_I(4);
    v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown = VL_RAND_RESET_I(4);
    v__DOT__fifo3__DOT__scfifo_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__fifo3__DOT__scfifo_component__DOT____Vlvbound4 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128,v__DOT__megamux1__DOT__sub_wire2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    v__DOT__megamux1__DOT__LPM_MUX_component__DOT__result_pipe[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result = VL_RAND_RESET_I(32);
    v__DOT__megamux1__DOT__LPM_MUX_component__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    v__DOT__megamux2__DOT__LPM_MUX_component__DOT__result_pipe[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result = VL_RAND_RESET_I(32);
    v__DOT__megamux2__DOT__LPM_MUX_component__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    v__DOT__megamux3__DOT__LPM_MUX_component__DOT__result_pipe[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result = VL_RAND_RESET_I(32);
    v__DOT__megamux3__DOT__LPM_MUX_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__scheduler__DOT__write_cycle = VL_RAND_RESET_I(1);
    v__DOT__scheduler__DOT__ram_not_empty1 = VL_RAND_RESET_I(1);
    v__DOT__scheduler__DOT__ram_not_empty2 = VL_RAND_RESET_I(1);
    v__DOT__scheduler__DOT__ram_not_empty3 = VL_RAND_RESET_I(1);
    v__DOT__scheduler__DOT__read1 = VL_RAND_RESET_I(1);
    v__DOT__scheduler__DOT__read2 = VL_RAND_RESET_I(1);
    v__DOT__scheduler__DOT__read3 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram_rd1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram_rd2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram_rd3 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__read_cycle1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__read_cycle2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__read_cycle3 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram_wr_add1 = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram_wr_add2 = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram_wr_add3 = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram_rd_add1 = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram_rd_add2 = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram_rd_add3 = VL_RAND_RESET_I(12);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa2b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__init_temp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_output_latch = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_ecc_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_ecc_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_address_a = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048,v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__ram_initf);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__file_desc = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__init_file_b_port = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__wa_mult_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__wa_mult_x_ii = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__wa_mult_x_iii = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__add_reg_a_mult_wa = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__add_reg_b_mult_wb = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_flag = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(169,v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_ram_block_type = VL_RAND_RESET_Q(57);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byte_size = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__init_i = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i4 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__k = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__k2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__k3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__k4 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_div_wa = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_div_wb = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j_plus_i2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j2_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j3_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j_plus_i2_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j2_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j3_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__j3_plus_i5_div_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_count = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa2b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__init_temp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_output_latch = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_ecc_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_ecc_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_address_a = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048,v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__ram_initf);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__file_desc = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__init_file_b_port = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__wa_mult_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__wa_mult_x_ii = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__wa_mult_x_iii = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__add_reg_a_mult_wa = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__add_reg_b_mult_wb = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_flag = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(169,v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_ram_block_type = VL_RAND_RESET_Q(57);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byte_size = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__init_i = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i4 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__k = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__k2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__k3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__k4 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_div_wa = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_div_wb = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j_plus_i2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j2_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j3_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j_plus_i2_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j2_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j3_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__j3_plus_i5_div_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_count = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa2b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__init_temp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_output_latch = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_ecc_reg_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_ecc_tmp_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_address_a = VL_RAND_RESET_I(12);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_tmp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_tmp = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out_a = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048,v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__ram_initf);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__file_desc = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__init_file_b_port = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__wa_mult_x = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__wa_mult_x_ii = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__wa_mult_x_iii = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__add_reg_a_mult_wa = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__add_reg_b_mult_wb = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__add_reg_a_mult_wa_pl_wa = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__add_reg_b_mult_wb_pl_wb = VL_RAND_RESET_Q(44);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_flag = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(169,v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_ram_block_type = VL_RAND_RESET_Q(57);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byte_size = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = VL_RAND_RESET_I(1);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a_idx = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__init_i = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i4 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__k = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__k2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__k3 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__k4 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_div_wa = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_div_wb = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j_plus_i2 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j2_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j3_plus_i5 = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j_plus_i2_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j2_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j3_plus_i5_div_a = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__j3_plus_i5_div_b = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_count = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_high = VL_RAND_RESET_I(32);
    v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_RAND_RESET_Q(64);
    v__DOT__packet_Display__DOT__hcount = VL_RAND_RESET_I(26);
    v__DOT__packet_Display__DOT__vcount = VL_RAND_RESET_I(26);
    v__DOT__packet_Display__DOT__topCol = VL_RAND_RESET_I(1);
    v__DOT__packet_Display__DOT__botCol = VL_RAND_RESET_I(1);
    v__DOT__packet_Display__DOT__segment = VL_RAND_RESET_I(8);
    __Vdly__v__DOT__input_ram_wr_add1 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__input_ram_wren1 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__input_ram_wr_add2 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__input_ram_wren2 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__input_ram_wr_add3 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__input_ram_wren3 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__read_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__count_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1 = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2 = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown = VL_RAND_RESET_I(4);
    __Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready = VL_RAND_RESET_I(4);
    __Vdlyvset__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__read_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__count_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1 = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2 = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown = VL_RAND_RESET_I(4);
    __Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready = VL_RAND_RESET_I(4);
    __Vdlyvset__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__read_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__count_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count = VL_RAND_RESET_I(32);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_id = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1 = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2 = VL_RAND_RESET_I(2);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown = VL_RAND_RESET_I(4);
    __Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready = VL_RAND_RESET_I(4);
    __Vdlyvset__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0 = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__buffer__DOT__ram_wr_add1 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__buffer__DOT__ram_wr_add2 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__buffer__DOT__ram_wr_add3 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__buffer__DOT__ram_rd_add1 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__buffer__DOT__ram_rd_add2 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__buffer__DOT__ram_rd_add3 = VL_RAND_RESET_I(12);
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VVGA_LED::__Vconfigure(VVGA_LED__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VVGA_LED::~VVGA_LED() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VVGA_LED::eval() {
    VVGA_LED__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VVGA_LED::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VVGA_LED::_eval_initial_loop(VVGA_LED__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VVGA_LED::_initial__TOP(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_initial__TOP\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at VGA_LED.sv:36
    vlTOPp->v__DOT__fifo_out0 = 0;
    vlTOPp->v__DOT__fifo_wr1 = 0;
    vlTOPp->v__DOT__fifo_wr2 = 0;
    vlTOPp->v__DOT__fifo_wr3 = 0;
    vlTOPp->v__DOT__fifo_rd1 = 0;
    vlTOPp->v__DOT__fifo_rd2 = 0;
    vlTOPp->v__DOT__fifo_rd3 = 0;
    vlTOPp->v__DOT__input_ram_wr_add1 = 0;
    vlTOPp->v__DOT__input_ram_wr_add2 = 0;
    vlTOPp->v__DOT__input_ram_wr_add3 = 0;
    // INITIAL at altera_mf.v:3436
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_a = 0x1000;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_b = 0x1000;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_ram_block_type = VL_ULL(0x4155544f);
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0] = 0x43415245;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1] = 0x4f4e545f;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2] = 0x44;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3] = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4] = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5] = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byte_size = 8;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__wa_mult_x = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i = 0;
    while (VL_GTS_III(1,32,32, 0x1000, vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i)) {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data[(0xfff 
									      & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i)] 
	    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__wa_mult_x;
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i);
    }
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_address_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_ULL(0);
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_a = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_b = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse1 = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_count = 0;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 = 1;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 = 1;
    // INITIAL at altera_mf.v:3436
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_a = 0x1000;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_b = 0x1000;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_ram_block_type = VL_ULL(0x4155544f);
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0] = 0x43415245;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1] = 0x4f4e545f;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2] = 0x44;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3] = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4] = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5] = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byte_size = 8;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__wa_mult_x = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i = 0;
    while (VL_GTS_III(1,32,32, 0x1000, vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i)) {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data[(0xfff 
									      & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i)] 
	    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__wa_mult_x;
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i);
    }
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_address_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_ULL(0);
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_a = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_b = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse1 = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_count = 0;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 = 1;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 = 1;
    // INITIAL at altera_mf.v:3436
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_a = 0x1000;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_b = 0x1000;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_ram_block_type = VL_ULL(0x4155544f);
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0] = 0x43415245;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1] = 0x4f4e545f;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2] = 0x44;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3] = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4] = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5] = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byte_size = 8;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__wa_mult_x = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i = 0;
    while (VL_GTS_III(1,32,32, 0x1000, vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i)) {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data[(0xfff 
									      & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i)] 
	    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__wa_mult_x;
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i);
    }
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_address_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_ULL(0);
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_a = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_b = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse1 = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_count = 0;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 = 1;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 = 1;
    // INITIAL at altera_mf.v:2295
    // Function: FEATURE_FAMILY_STRATIX at altera_mf.v:2298
    // Function: IS_FAMILY_STRATIX at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIX_HC at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIXGX at altera_mf.v:1844
    // Function: FEATURE_FAMILY_CYCLONE at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIXII at altera_mf.v:1844
    // Function: FEATURE_FAMILY_MAXII at altera_mf.v:1844
    // Function: FEATURE_FAMILY_CYCLONEII at altera_mf.v:1844
    // Function: IS_FAMILY_CYCLONEII at altera_mf.v:1883
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:1883
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_MAXII at altera_mf.v:1857
    // Function: FEATURE_FAMILY_MAXV at altera_mf.v:1857
    // Function: IS_FAMILY_MAXV at altera_mf.v:1870
    // Function: IS_FAMILY_STRATIXII at altera_mf.v:1779
    // Function: IS_FAMILY_HARDCOPYII at altera_mf.v:1779
    // Function: FEATURE_FAMILY_STRATIXIIGX at altera_mf.v:1779
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:1779
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_STRATIXIIGX at altera_mf.v:1714
    // Function: IS_FAMILY_ARRIAGX at altera_mf.v:1714
    // Function: IS_FAMILY_CYCLONE at altera_mf.v:1701
    // Function: IS_FAMILY_STRATIXGX at altera_mf.v:1688
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family = 1;
    // Function: IS_VALID_FAMILY at altera_mf.v:2309
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[0] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[1] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[2] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[3] = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__i = 4;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = 1;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 = 1;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency2 = 1;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count = 0;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_full_flag = 1;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_empty_flag = 0;
    // INITIAL at altera_mf.v:2295
    // Function: FEATURE_FAMILY_STRATIX at altera_mf.v:2298
    // Function: IS_FAMILY_STRATIX at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIX_HC at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIXGX at altera_mf.v:1844
    // Function: FEATURE_FAMILY_CYCLONE at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIXII at altera_mf.v:1844
    // Function: FEATURE_FAMILY_MAXII at altera_mf.v:1844
    // Function: FEATURE_FAMILY_CYCLONEII at altera_mf.v:1844
    // Function: IS_FAMILY_CYCLONEII at altera_mf.v:1883
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:1883
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_MAXII at altera_mf.v:1857
    // Function: FEATURE_FAMILY_MAXV at altera_mf.v:1857
    // Function: IS_FAMILY_MAXV at altera_mf.v:1870
    // Function: IS_FAMILY_STRATIXII at altera_mf.v:1779
    // Function: IS_FAMILY_HARDCOPYII at altera_mf.v:1779
    // Function: FEATURE_FAMILY_STRATIXIIGX at altera_mf.v:1779
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:1779
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_STRATIXIIGX at altera_mf.v:1714
    // Function: IS_FAMILY_ARRIAGX at altera_mf.v:1714
    // Function: IS_FAMILY_CYCLONE at altera_mf.v:1701
    // Function: IS_FAMILY_STRATIXGX at altera_mf.v:1688
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family = 1;
    // Function: IS_VALID_FAMILY at altera_mf.v:2309
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[0] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[1] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[2] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[3] = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__i = 4;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = 1;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 = 1;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency2 = 1;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count = 0;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_full_flag = 1;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_empty_flag = 0;
    // INITIAL at altera_mf.v:2295
    // Function: FEATURE_FAMILY_STRATIX at altera_mf.v:2298
    // Function: IS_FAMILY_STRATIX at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIX_HC at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIXGX at altera_mf.v:1844
    // Function: FEATURE_FAMILY_CYCLONE at altera_mf.v:1844
    // Function: FEATURE_FAMILY_STRATIXII at altera_mf.v:1844
    // Function: FEATURE_FAMILY_MAXII at altera_mf.v:1844
    // Function: FEATURE_FAMILY_CYCLONEII at altera_mf.v:1844
    // Function: IS_FAMILY_CYCLONEII at altera_mf.v:1883
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:1883
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_MAXII at altera_mf.v:1857
    // Function: FEATURE_FAMILY_MAXV at altera_mf.v:1857
    // Function: IS_FAMILY_MAXV at altera_mf.v:1870
    // Function: IS_FAMILY_STRATIXII at altera_mf.v:1779
    // Function: IS_FAMILY_HARDCOPYII at altera_mf.v:1779
    // Function: FEATURE_FAMILY_STRATIXIIGX at altera_mf.v:1779
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:1779
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_STRATIXIIGX at altera_mf.v:1714
    // Function: IS_FAMILY_ARRIAGX at altera_mf.v:1714
    // Function: IS_FAMILY_CYCLONE at altera_mf.v:1701
    // Function: IS_FAMILY_STRATIXGX at altera_mf.v:1688
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family = 1;
    // Function: IS_VALID_FAMILY at altera_mf.v:2309
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[0] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[1] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[2] = 0;
    // Function: FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM at altera_mf.v:2321
    // Function: FEATURE_FAMILY_STRATIXIII at altera_mf.v:2091
    // Function: FEATURE_FAMILY_CYCLONEIII at altera_mf.v:2091
    // Function: IS_FAMILY_CYCLONEIII at altera_mf.v:1818
    // Function: IS_FAMILY_CYCLONEIIILS at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVGX at altera_mf.v:1818
    // Function: FEATURE_FAMILY_CYCLONEIVE at altera_mf.v:1818
    // Function: FEATURE_FAMILY_MAX10FPGA at altera_mf.v:1818
    // Function: IS_FAMILY_MAX10FPGA at altera_mf.v:1987
    // Function: IS_FAMILY_CYCLONEIVE at altera_mf.v:1805
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_CYCLONEIVGX at altera_mf.v:1792
    // Function: IS_FAMILY_STRATIXIII at altera_mf.v:1727
    // Function: FEATURE_FAMILY_STRATIXIV at altera_mf.v:1727
    // Function: FEATURE_FAMILY_HARDCOPYIII at altera_mf.v:1727
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_HARDCOPYIII at altera_mf.v:1935
    // Function: IS_FAMILY_STRATIXIV at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIAIIGX at altera_mf.v:1896
    // Function: FEATURE_FAMILY_HARDCOPYIV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_STRATIXV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAV at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIAIIGZ at altera_mf.v:1896
    // Function: FEATURE_FAMILY_ARRIA10 at altera_mf.v:1896
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIA10 at altera_mf.v:1766
    // Function: IS_FAMILY_ARRIAIIGZ at altera_mf.v:1909
    // Function: IS_FAMILY_ARRIAV at altera_mf.v:1974
    // Function: FEATURE_FAMILY_CYCLONEV at altera_mf.v:1974
    // Function: IS_FAMILY_CYCLONEV at altera_mf.v:1961
    // Function: IS_FAMILY_STRATIXV at altera_mf.v:1753
    // Function: FEATURE_FAMILY_ARRIAVGZ at altera_mf.v:1753
    // Function: IS_FAMILY_ARRIAVGZ at altera_mf.v:1740
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    // Function: IS_FAMILY_HARDCOPYIV at altera_mf.v:1948
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[3] = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__i = 4;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = 1;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 = 1;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency2 = 1;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count = 0;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_full_flag = 1;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_empty_flag = 0;
    // INITIAL at Scheduler.sv:28
    vlTOPp->v__DOT__scheduler__DOT__write_cycle = 0;
    vlTOPp->v__DOT__input_ram_rd_add1 = 0;
    vlTOPp->v__DOT__input_ram_rd_add2 = 0;
    vlTOPp->v__DOT__input_ram_rd_add3 = 0;
    vlTOPp->v__DOT__mux_sel1 = 0;
    vlTOPp->v__DOT__mux_sel2 = 0;
    vlTOPp->v__DOT__mux_sel3 = 0;
    vlTOPp->v__DOT__out_ram_wr1 = 0;
    vlTOPp->v__DOT__out_ram_wr2 = 0;
    vlTOPp->v__DOT__out_ram_wr3 = 0;
    vlTOPp->v__DOT__scheduler__DOT__ram_not_empty1 = 0;
    vlTOPp->v__DOT__scheduler__DOT__ram_not_empty2 = 0;
    vlTOPp->v__DOT__scheduler__DOT__ram_not_empty3 = 0;
    vlTOPp->v__DOT__scheduler__DOT__read1 = 0;
    vlTOPp->v__DOT__scheduler__DOT__read2 = 0;
    vlTOPp->v__DOT__scheduler__DOT__read3 = 0;
    // INITIAL at Buffer.sv:28
    vlTOPp->v__DOT__buffer__DOT__ram_rd_add1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram_rd_add2 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram_rd_add3 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram_wr_add1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram_wr_add2 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram_wr_add3 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram_rd1 = 1;
    vlTOPp->v__DOT__buffer__DOT__ram_rd2 = 1;
    vlTOPp->v__DOT__buffer__DOT__ram_rd3 = 1;
    vlTOPp->v__DOT__buffer__DOT__read_cycle1 = 0;
    vlTOPp->v__DOT__buffer__DOT__read_cycle2 = 0;
    vlTOPp->v__DOT__buffer__DOT__read_cycle3 = 0;
    // INITIAL at altera_mf.v:3436
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_a = 0x1000;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_b = 0x1000;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_ram_block_type = VL_ULL(0x4155544f);
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0] = 0x43415245;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1] = 0x4f4e545f;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2] = 0x44;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byte_size = 8;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__wa_mult_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i = 0;
    while (VL_GTS_III(1,32,32, 0x1000, vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i)) {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data[(0xfff 
										& vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i)] 
	    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__wa_mult_x;
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i);
    }
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_address_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_ULL(0);
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_count = 0;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 = 1;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 = 1;
    // INITIAL at altera_mf.v:3436
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_a = 0x1000;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_b = 0x1000;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_ram_block_type = VL_ULL(0x4155544f);
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0] = 0x43415245;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1] = 0x4f4e545f;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2] = 0x44;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byte_size = 8;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__wa_mult_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i = 0;
    while (VL_GTS_III(1,32,32, 0x1000, vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i)) {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data[(0xfff 
										& vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i)] 
	    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__wa_mult_x;
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i);
    }
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_address_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_ULL(0);
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_count = 0;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 = 1;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 = 1;
    // INITIAL at altera_mf.v:3436
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_a = 0x1000;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_b = 0x1000;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_ram_block_type = VL_ULL(0x4155544f);
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0] = 0x43415245;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1] = 0x4f4e545f;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2] = 0x44;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5] = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byte_size = 8;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__wa_mult_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i = 0;
    while (VL_GTS_III(1,32,32, 0x1000, vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i)) {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data[(0xfff 
										& vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i)] 
	    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__wa_mult_x;
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i);
    }
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_address_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a = VL_ULL(0);
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_a = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_b = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse1 = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_count = 0;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 = 1;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 = 1;
    // INITIAL at Packet_Display.sv:61
    vlTOPp->VGA_SYNC_n = 1;
}

void VVGA_LED::_settle__TOP__1(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_settle__TOP__1\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5407
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    // ALWAYS at altera_mf.v:5757
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    // ALWAYS at altera_mf.v:5407
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    // ALWAYS at altera_mf.v:5757
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    // ALWAYS at altera_mf.v:5407
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    // ALWAYS at altera_mf.v:5757
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    // ALWAYS at altera_mf.v:5407
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    // ALWAYS at altera_mf.v:5757
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    // ALWAYS at altera_mf.v:5407
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    // ALWAYS at altera_mf.v:5757
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    // ALWAYS at altera_mf.v:5407
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev = 0;
    // ALWAYS at altera_mf.v:5757
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev = 0;
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
}

void VVGA_LED::_combo__TOP__2(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_combo__TOP__2\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
    // ALWAYS at altera_mf.v:4353
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)));
}

void VVGA_LED::_sequent__TOP__3(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__3\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout,0,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__in,1,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__size,0,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout,0,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__in,1,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__size,0,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout,0,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__in,1,0);
    VL_SIG8(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__size,0,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__429__Vfuncout,7,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__429__value,1,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__430__Vfuncout,7,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__430__value,1,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__431__Vfuncout,7,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__431__value,1,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__432__Vfuncout,7,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__432__value,1,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__433__Vfuncout,7,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__433__value,1,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__434__Vfuncout,7,0);
    VL_SIG8(__Vfunc_v__DOT__buffer__DOT__seven_segment__434__value,1,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__read_cycle1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__read_cycle2,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__read_cycle3,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a,0,0);
    VL_SIG8(__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a,0,0);
    VL_SIG(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__data,31,0);
    VL_SIG(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__data,31,0);
    VL_SIG(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__data,31,0);
    // Body
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->__Vdly__v__DOT__input_ram_wr_add1 = vlTOPp->v__DOT__input_ram_wr_add1;
    vlTOPp->__Vdly__v__DOT__input_ram_wren1 = vlTOPp->v__DOT__input_ram_wren1;
    vlTOPp->__Vdly__v__DOT__input_ram_wr_add2 = vlTOPp->v__DOT__input_ram_wr_add2;
    vlTOPp->__Vdly__v__DOT__input_ram_wren2 = vlTOPp->v__DOT__input_ram_wren2;
    vlTOPp->__Vdly__v__DOT__input_ram_wr_add3 = vlTOPp->v__DOT__input_ram_wr_add3;
    vlTOPp->__Vdly__v__DOT__input_ram_wren3 = vlTOPp->v__DOT__input_ram_wren3;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1;
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__read_id 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__count_id 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__read_id 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__count_id 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__read_id 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__count_id 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready;
    vlTOPp->__Vdlyvset__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0 = 0;
    vlTOPp->__Vdlyvset__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0 = 0;
    vlTOPp->__Vdlyvset__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0 = 0;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add1 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd_add1;
    __Vdly__v__DOT__buffer__DOT__read_cycle1 = vlTOPp->v__DOT__buffer__DOT__read_cycle1;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add2 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd_add2;
    __Vdly__v__DOT__buffer__DOT__read_cycle2 = vlTOPp->v__DOT__buffer__DOT__read_cycle2;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add3 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd_add3;
    __Vdly__v__DOT__buffer__DOT__read_cycle3 = vlTOPp->v__DOT__buffer__DOT__read_cycle3;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add1 
	= vlTOPp->v__DOT__buffer__DOT__ram_wr_add1;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add2 
	= vlTOPp->v__DOT__buffer__DOT__ram_wr_add2;
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add3 
	= vlTOPp->v__DOT__buffer__DOT__ram_wr_add3;
    // ALWAYS at Scheduler.sv:87
    vlTOPp->v__DOT__input_ram_rden1 = 1;
    vlTOPp->v__DOT__input_ram_rden2 = 1;
    vlTOPp->v__DOT__input_ram_rden3 = 1;
    if (vlTOPp->v__DOT__scheduler__DOT__write_cycle) {
	vlTOPp->v__DOT__scheduler__DOT__write_cycle = 0;
	if (((IData)(vlTOPp->v__DOT__input_ram_rd_add1) 
	     < (IData)(vlTOPp->v__DOT__input_ram_wr_add1))) {
	    vlTOPp->v__DOT__scheduler__DOT__ram_not_empty1 = 1;
	}
	if (((IData)(vlTOPp->v__DOT__input_ram_rd_add2) 
	     < (IData)(vlTOPp->v__DOT__input_ram_wr_add2))) {
	    vlTOPp->v__DOT__scheduler__DOT__ram_not_empty2 = 1;
	}
	if (((IData)(vlTOPp->v__DOT__input_ram_rd_add3) 
	     < (IData)(vlTOPp->v__DOT__input_ram_wr_add3))) {
	    vlTOPp->v__DOT__scheduler__DOT__ram_not_empty3 = 1;
	}
	// Function: set_rd at Scheduler.sv:106
	__Vfunc_v__DOT__scheduler__DOT__set_rd__426__size 
	    = vlTOPp->v__DOT__scheduler__DOT__ram_not_empty1;
	__Vfunc_v__DOT__scheduler__DOT__set_rd__426__in = 1;
	__Vfunc_v__DOT__scheduler__DOT__set_rd__426__data 
	    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b;
	{
	    if ((0 != __Vfunc_v__DOT__scheduler__DOT__set_rd__426__data)) {
		if ((2 & __Vfunc_v__DOT__scheduler__DOT__set_rd__426__data)) {
		    if ((1 & __Vfunc_v__DOT__scheduler__DOT__set_rd__426__data)) {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr3)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__size))) {
			    vlTOPp->v__DOT__out_ram_wr3 = 1;
			    vlTOPp->v__DOT__mux_sel3 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__426__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 1;
			    goto __Vlabel1;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 0;
			    goto __Vlabel1;
			}
		    } else {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr2)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__size))) {
			    vlTOPp->v__DOT__out_ram_wr2 = 1;
			    vlTOPp->v__DOT__mux_sel2 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__426__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 1;
			    goto __Vlabel1;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 0;
			    goto __Vlabel1;
			}
		    }
		} else {
		    if ((1 & __Vfunc_v__DOT__scheduler__DOT__set_rd__426__data)) {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr1)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__size))) {
			    vlTOPp->v__DOT__out_ram_wr1 = 1;
			    vlTOPp->v__DOT__mux_sel1 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__426__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 1;
			    goto __Vlabel1;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 0;
			    goto __Vlabel1;
			}
		    } else {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr2)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__426__size))) {
			    vlTOPp->v__DOT__out_ram_wr2 = 1;
			    vlTOPp->v__DOT__mux_sel2 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__426__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 1;
			    goto __Vlabel1;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 0;
			    goto __Vlabel1;
			}
		    }
		}
	    } else {
		__Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout = 0;
		goto __Vlabel1;
	    }
	}
	__Vlabel1: ;
	vlTOPp->v__DOT__scheduler__DOT__read1 = __Vfunc_v__DOT__scheduler__DOT__set_rd__426__Vfuncout;
	// Function: set_rd at Scheduler.sv:107
	__Vfunc_v__DOT__scheduler__DOT__set_rd__427__size 
	    = vlTOPp->v__DOT__scheduler__DOT__ram_not_empty2;
	__Vfunc_v__DOT__scheduler__DOT__set_rd__427__in = 2;
	__Vfunc_v__DOT__scheduler__DOT__set_rd__427__data 
	    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b;
	{
	    if ((0 != __Vfunc_v__DOT__scheduler__DOT__set_rd__427__data)) {
		if ((2 & __Vfunc_v__DOT__scheduler__DOT__set_rd__427__data)) {
		    if ((1 & __Vfunc_v__DOT__scheduler__DOT__set_rd__427__data)) {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr3)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__size))) {
			    vlTOPp->v__DOT__out_ram_wr3 = 1;
			    vlTOPp->v__DOT__mux_sel3 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__427__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 1;
			    goto __Vlabel2;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 0;
			    goto __Vlabel2;
			}
		    } else {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr2)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__size))) {
			    vlTOPp->v__DOT__out_ram_wr2 = 1;
			    vlTOPp->v__DOT__mux_sel2 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__427__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 1;
			    goto __Vlabel2;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 0;
			    goto __Vlabel2;
			}
		    }
		} else {
		    if ((1 & __Vfunc_v__DOT__scheduler__DOT__set_rd__427__data)) {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr1)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__size))) {
			    vlTOPp->v__DOT__out_ram_wr1 = 1;
			    vlTOPp->v__DOT__mux_sel1 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__427__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 1;
			    goto __Vlabel2;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 0;
			    goto __Vlabel2;
			}
		    } else {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr2)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__427__size))) {
			    vlTOPp->v__DOT__out_ram_wr2 = 1;
			    vlTOPp->v__DOT__mux_sel2 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__427__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 1;
			    goto __Vlabel2;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 0;
			    goto __Vlabel2;
			}
		    }
		}
	    } else {
		__Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout = 0;
		goto __Vlabel2;
	    }
	}
	__Vlabel2: ;
	vlTOPp->v__DOT__scheduler__DOT__read2 = __Vfunc_v__DOT__scheduler__DOT__set_rd__427__Vfuncout;
	// Function: set_rd at Scheduler.sv:108
	__Vfunc_v__DOT__scheduler__DOT__set_rd__428__size 
	    = vlTOPp->v__DOT__scheduler__DOT__ram_not_empty3;
	__Vfunc_v__DOT__scheduler__DOT__set_rd__428__in = 3;
	__Vfunc_v__DOT__scheduler__DOT__set_rd__428__data 
	    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b;
	{
	    if ((0 != __Vfunc_v__DOT__scheduler__DOT__set_rd__428__data)) {
		if ((2 & __Vfunc_v__DOT__scheduler__DOT__set_rd__428__data)) {
		    if ((1 & __Vfunc_v__DOT__scheduler__DOT__set_rd__428__data)) {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr3)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__size))) {
			    vlTOPp->v__DOT__out_ram_wr3 = 1;
			    vlTOPp->v__DOT__mux_sel3 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__428__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 1;
			    goto __Vlabel3;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 0;
			    goto __Vlabel3;
			}
		    } else {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr2)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__size))) {
			    vlTOPp->v__DOT__out_ram_wr2 = 1;
			    vlTOPp->v__DOT__mux_sel2 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__428__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 1;
			    goto __Vlabel3;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 0;
			    goto __Vlabel3;
			}
		    }
		} else {
		    if ((1 & __Vfunc_v__DOT__scheduler__DOT__set_rd__428__data)) {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr1)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__size))) {
			    vlTOPp->v__DOT__out_ram_wr1 = 1;
			    vlTOPp->v__DOT__mux_sel1 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__428__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 1;
			    goto __Vlabel3;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 0;
			    goto __Vlabel3;
			}
		    } else {
			if (((~ (IData)(vlTOPp->v__DOT__out_ram_wr2)) 
			     & (IData)(__Vfunc_v__DOT__scheduler__DOT__set_rd__428__size))) {
			    vlTOPp->v__DOT__out_ram_wr2 = 1;
			    vlTOPp->v__DOT__mux_sel2 
				= __Vfunc_v__DOT__scheduler__DOT__set_rd__428__in;
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 1;
			    goto __Vlabel3;
			} else {
			    __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 0;
			    goto __Vlabel3;
			}
		    }
		}
	    } else {
		__Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout = 0;
		goto __Vlabel3;
	    }
	}
	__Vlabel3: ;
	vlTOPp->v__DOT__scheduler__DOT__read3 = __Vfunc_v__DOT__scheduler__DOT__set_rd__428__Vfuncout;
    } else {
	vlTOPp->v__DOT__scheduler__DOT__write_cycle = 1;
	vlTOPp->v__DOT__mux_sel1 = 0;
	vlTOPp->v__DOT__mux_sel2 = 0;
	vlTOPp->v__DOT__mux_sel3 = 0;
	vlTOPp->v__DOT__out_ram_wr1 = 0;
	vlTOPp->v__DOT__out_ram_wr2 = 0;
	vlTOPp->v__DOT__out_ram_wr3 = 0;
	if (vlTOPp->v__DOT__scheduler__DOT__read1) {
	    vlTOPp->v__DOT__scheduler__DOT__read1 = 0;
	    vlTOPp->v__DOT__input_ram_rd_add1 = (0xfff 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__input_ram_rd_add1)));
	}
	if (vlTOPp->v__DOT__scheduler__DOT__read2) {
	    vlTOPp->v__DOT__input_ram_rd_add2 = (0xfff 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__input_ram_rd_add2)));
	    vlTOPp->v__DOT__scheduler__DOT__read2 = 0;
	}
	if (vlTOPp->v__DOT__scheduler__DOT__read3) {
	    vlTOPp->v__DOT__scheduler__DOT__read3 = 0;
	    vlTOPp->v__DOT__input_ram_rd_add3 = (0xfff 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__input_ram_rd_add3)));
	}
    }
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    // ALWAYS at altera_mf.v:4385
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 1;
    // ALWAYS at altera_mf.v:4386
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 1;
    // ALWAYS at altera_mf.v:4409
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    // ALWAYS at altera_mf.v:4419
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_a = 1;
    // ALWAYS at altera_mf.v:4477
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    // ALWAYS at altera_mf.v:4385
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 1;
    // ALWAYS at altera_mf.v:4386
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 1;
    // ALWAYS at altera_mf.v:4409
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    // ALWAYS at altera_mf.v:4419
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_a = 1;
    // ALWAYS at altera_mf.v:4477
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    // ALWAYS at altera_mf.v:4385
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 1;
    // ALWAYS at altera_mf.v:4386
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 1;
    // ALWAYS at altera_mf.v:4409
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    // ALWAYS at altera_mf.v:4419
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_a = 1;
    // ALWAYS at altera_mf.v:4477
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    // ALWAYS at altera_mf.v:4385
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 1;
    // ALWAYS at altera_mf.v:4386
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 1;
    // ALWAYS at altera_mf.v:4409
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    // ALWAYS at altera_mf.v:4419
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_a = 1;
    // ALWAYS at altera_mf.v:4477
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    // ALWAYS at altera_mf.v:4385
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 1;
    // ALWAYS at altera_mf.v:4386
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 1;
    // ALWAYS at altera_mf.v:4409
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    // ALWAYS at altera_mf.v:4419
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_a = 1;
    // ALWAYS at altera_mf.v:4477
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    // ALWAYS at altera_mf.v:4385
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg = 1;
    // ALWAYS at altera_mf.v:4386
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg = 1;
    // ALWAYS at altera_mf.v:4409
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_a = 0;
    // ALWAYS at altera_mf.v:4419
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_a = 1;
    // ALWAYS at altera_mf.v:4477
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out = 0;
    // ALWAYS at altera_mf.v:4396
    __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a 
	= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a)));
    // ALWAYS at altera_mf.v:4396
    __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a 
	= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a)));
    // ALWAYS at altera_mf.v:4396
    __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a 
	= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a)));
    // ALWAYS at altera_mf.v:4396
    __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a 
	= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a)));
    // ALWAYS at altera_mf.v:4396
    __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a 
	= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a)));
    // ALWAYS at altera_mf.v:4396
    __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a 
	= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a)));
    // ALWAYS at altera_mf.v:4662
    vlTOPp->__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
	= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b)));
    // ALWAYS at altera_mf.v:4662
    vlTOPp->__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
	= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b)));
    // ALWAYS at altera_mf.v:4662
    vlTOPp->__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
	= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b)));
    // ALWAYS at altera_mf.v:4662
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
	= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b)));
    // ALWAYS at altera_mf.v:4662
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
	= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b)));
    // ALWAYS at altera_mf.v:4662
    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
	= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b)));
    // ALWAYS at altera_mf.v:4421
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_a = 1;
    // ALWAYS at altera_mf.v:4421
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_a = 1;
    // ALWAYS at altera_mf.v:4421
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_a = 1;
    // ALWAYS at altera_mf.v:4421
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_a = 1;
    // ALWAYS at altera_mf.v:4421
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_a = 1;
    // ALWAYS at altera_mf.v:4421
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_a = 1;
    // ALWAYS at altera_mf.v:4371
    if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b) {
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    }
    if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1) {
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    }
    // ALWAYS at altera_mf.v:4371
    if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b) {
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    }
    if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1) {
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    }
    // ALWAYS at altera_mf.v:4371
    if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b) {
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    }
    if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1) {
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    }
    // ALWAYS at altera_mf.v:4371
    if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b) {
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    }
    if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1) {
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    }
    // ALWAYS at altera_mf.v:4371
    if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b) {
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    }
    if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1) {
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    }
    // ALWAYS at altera_mf.v:4371
    if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b) {
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b = 0;
    }
    if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1) {
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal)));
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 = 0;
    }
    // ALWAYS at altera_mf.v:4365
    if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a) {
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    }
    if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1) {
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    }
    // ALWAYS at altera_mf.v:4365
    if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a) {
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    }
    if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1) {
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    }
    // ALWAYS at altera_mf.v:4365
    if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a) {
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    }
    if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1) {
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    }
    // ALWAYS at altera_mf.v:4365
    if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a) {
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    }
    if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1) {
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    }
    // ALWAYS at altera_mf.v:4365
    if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a) {
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    }
    if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1) {
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    }
    // ALWAYS at altera_mf.v:4365
    if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a) {
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 0;
    }
    if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1) {
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal)));
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 = 0;
    }
    // ALWAYS at altera_mf.v:4478
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = 0;
    // ALWAYS at altera_mf.v:4479
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    // ALWAYS at altera_mf.v:4654
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_b = 1;
    // ALWAYS at altera_mf.v:4478
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = 0;
    // ALWAYS at altera_mf.v:4479
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    // ALWAYS at altera_mf.v:4654
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_b = 1;
    // ALWAYS at altera_mf.v:4478
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = 0;
    // ALWAYS at altera_mf.v:4479
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    // ALWAYS at altera_mf.v:4654
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_b = 1;
    // ALWAYS at altera_mf.v:4478
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = 0;
    // ALWAYS at altera_mf.v:4479
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    // ALWAYS at altera_mf.v:4654
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_b = 1;
    // ALWAYS at altera_mf.v:4478
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = 0;
    // ALWAYS at altera_mf.v:4479
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    // ALWAYS at altera_mf.v:4654
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_b = 1;
    // ALWAYS at altera_mf.v:4478
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b = 0;
    // ALWAYS at altera_mf.v:4479
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x = 0;
    // ALWAYS at altera_mf.v:4654
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_b = 1;
    // ALWAYS at Buffer.sv:69
    if (((IData)(vlTOPp->chipselect) & (IData)(vlTOPp->read))) {
	if (((((((((4 == (IData)(vlTOPp->address)) 
		   | (5 == (IData)(vlTOPp->address))) 
		  | (6 == (IData)(vlTOPp->address))) 
		 | (7 == (IData)(vlTOPp->address))) 
		| (8 == (IData)(vlTOPp->address))) 
	       | (9 == (IData)(vlTOPp->address))) | 
	      (0xa == (IData)(vlTOPp->address))) | 
	     (0xb == (IData)(vlTOPp->address)))) {
	    vlTOPp->readdata = ((4 == (IData)(vlTOPp->address))
				 ? (IData)(vlTOPp->v__DOT__input_ram_rd_add1)
				 : ((5 == (IData)(vlTOPp->address))
				     ? (IData)(vlTOPp->v__DOT__input_ram_rd_add2)
				     : ((6 == (IData)(vlTOPp->address))
					 ? (IData)(vlTOPp->v__DOT__input_ram_rd_add3)
					 : ((7 == (IData)(vlTOPp->address))
					     ? (IData)(vlTOPp->v__DOT__input_ram_wr_add1)
					     : ((8 
						 == (IData)(vlTOPp->address))
						 ? (IData)(vlTOPp->v__DOT__input_ram_wr_add2)
						 : 
						((9 
						  == (IData)(vlTOPp->address))
						  ? (IData)(vlTOPp->v__DOT__input_ram_wr_add3)
						  : 
						 ((0xa 
						   == (IData)(vlTOPp->address))
						   ? (IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add1)
						   : (IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add2))))))));
	} else {
	    if ((0xc == (IData)(vlTOPp->address))) {
		vlTOPp->readdata = vlTOPp->v__DOT__buffer__DOT__ram_rd_add3;
	    } else {
		if ((0xd == (IData)(vlTOPp->address))) {
		    vlTOPp->readdata = vlTOPp->v__DOT__buffer__DOT__ram_wr_add1;
		} else {
		    if ((0xe == (IData)(vlTOPp->address))) {
			vlTOPp->readdata = vlTOPp->v__DOT__buffer__DOT__ram_wr_add2;
		    } else {
			if ((0xf == (IData)(vlTOPp->address))) {
			    vlTOPp->readdata = vlTOPp->v__DOT__buffer__DOT__ram_wr_add3;
			} else {
			    if ((1 == (IData)(vlTOPp->address))) {
				if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add1) 
				     < (IData)(vlTOPp->v__DOT__buffer__DOT__ram_wr_add1))) {
				    if (vlTOPp->v__DOT__buffer__DOT__read_cycle1) {
					vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add1 
					    = (0xfff 
					       & ((IData)(1) 
						  + (IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add1)));
					__Vdly__v__DOT__buffer__DOT__read_cycle1 = 0;
				    } else {
					vlTOPp->readdata 
					    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_b;
					__Vdly__v__DOT__buffer__DOT__read_cycle1 = 1;
				    }
				} else {
				    vlTOPp->readdata = 0xff;
				}
			    } else {
				if ((2 == (IData)(vlTOPp->address))) {
				    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add2) 
					 < (IData)(vlTOPp->v__DOT__buffer__DOT__ram_wr_add2))) {
					if (vlTOPp->v__DOT__buffer__DOT__read_cycle2) {
					    vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add2 
						= (0xfff 
						   & ((IData)(1) 
						      + (IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add2)));
					    __Vdly__v__DOT__buffer__DOT__read_cycle2 = 0;
					} else {
					    vlTOPp->readdata 
						= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_b;
					    __Vdly__v__DOT__buffer__DOT__read_cycle2 = 1;
					}
				    } else {
					vlTOPp->readdata = 0xff;
				    }
				} else {
				    if ((3 == (IData)(vlTOPp->address))) {
					if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add3) 
					     < (IData)(vlTOPp->v__DOT__buffer__DOT__ram_wr_add3))) {
					    if (vlTOPp->v__DOT__buffer__DOT__read_cycle3) {
						vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add3 
						    = 
						    (0xfff 
						     & ((IData)(1) 
							+ (IData)(vlTOPp->v__DOT__buffer__DOT__ram_rd_add3)));
						__Vdly__v__DOT__buffer__DOT__read_cycle3 = 0;
					    } else {
						vlTOPp->readdata 
						    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_b;
						__Vdly__v__DOT__buffer__DOT__read_cycle3 = 1;
					    }
					} else {
					    vlTOPp->readdata = 0xff;
					}
				    } else {
					vlTOPp->readdata = 0xfc;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlTOPp->readdata = 0xfb;
    }
    // ALWAYS at Buffer.sv:43
    // Function: seven_segment at Buffer.sv:44
    __Vfunc_v__DOT__buffer__DOT__seven_segment__429__value 
	= (3 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b);
    {
	if ((2 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__429__value))) {
	    if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__429__value))) {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__429__Vfuncout = 0x4f;
		goto __Vlabel4;
	    } else {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__429__Vfuncout = 0x5b;
		goto __Vlabel4;
	    }
	} else {
	    if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__429__value))) {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__429__Vfuncout = 6;
		goto __Vlabel4;
	    } else {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__429__Vfuncout = 0x3f;
		goto __Vlabel4;
	    }
	}
    }
    __Vlabel4: ;
    vlTOPp->v__DOT__hex1 = __Vfunc_v__DOT__buffer__DOT__seven_segment__429__Vfuncout;
    // Function: seven_segment at Buffer.sv:45
    __Vfunc_v__DOT__buffer__DOT__seven_segment__430__value 
	= (3 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b);
    {
	if ((2 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__430__value))) {
	    if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__430__value))) {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__430__Vfuncout = 0x4f;
		goto __Vlabel5;
	    } else {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__430__Vfuncout = 0x5b;
		goto __Vlabel5;
	    }
	} else {
	    if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__430__value))) {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__430__Vfuncout = 6;
		goto __Vlabel5;
	    } else {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__430__Vfuncout = 0x3f;
		goto __Vlabel5;
	    }
	}
    }
    __Vlabel5: ;
    vlTOPp->v__DOT__hex2 = __Vfunc_v__DOT__buffer__DOT__seven_segment__430__Vfuncout;
    // Function: seven_segment at Buffer.sv:46
    __Vfunc_v__DOT__buffer__DOT__seven_segment__431__value 
	= (3 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b);
    {
	if ((2 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__431__value))) {
	    if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__431__value))) {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__431__Vfuncout = 0x4f;
		goto __Vlabel6;
	    } else {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__431__Vfuncout = 0x5b;
		goto __Vlabel6;
	    }
	} else {
	    if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__431__value))) {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__431__Vfuncout = 6;
		goto __Vlabel6;
	    } else {
		__Vfunc_v__DOT__buffer__DOT__seven_segment__431__Vfuncout = 0x3f;
		goto __Vlabel6;
	    }
	}
    }
    __Vlabel6: ;
    vlTOPp->v__DOT__hex3 = __Vfunc_v__DOT__buffer__DOT__seven_segment__431__Vfuncout;
    if (vlTOPp->v__DOT__out_ram_wr1) {
	// Function: seven_segment at Buffer.sv:49
	__Vfunc_v__DOT__buffer__DOT__seven_segment__432__value 
	    = (3 & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result);
	{
	    if ((2 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__432__value))) {
		if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__432__value))) {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__432__Vfuncout = 0x4f;
		    goto __Vlabel7;
		} else {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__432__Vfuncout = 0x5b;
		    goto __Vlabel7;
		}
	    } else {
		if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__432__value))) {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__432__Vfuncout = 6;
		    goto __Vlabel7;
		} else {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__432__Vfuncout = 0x3f;
		    goto __Vlabel7;
		}
	    }
	}
	__Vlabel7: ;
	vlTOPp->v__DOT__hex4 = __Vfunc_v__DOT__buffer__DOT__seven_segment__432__Vfuncout;
	vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add1 
	    = (0xfff & ((IData)(1) + (IData)(vlTOPp->v__DOT__buffer__DOT__ram_wr_add1)));
    } else {
	vlTOPp->v__DOT__hex4 = 0;
    }
    if (vlTOPp->v__DOT__out_ram_wr2) {
	// Function: seven_segment at Buffer.sv:55
	__Vfunc_v__DOT__buffer__DOT__seven_segment__433__value 
	    = (3 & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result);
	{
	    if ((2 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__433__value))) {
		if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__433__value))) {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__433__Vfuncout = 0x4f;
		    goto __Vlabel8;
		} else {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__433__Vfuncout = 0x5b;
		    goto __Vlabel8;
		}
	    } else {
		if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__433__value))) {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__433__Vfuncout = 6;
		    goto __Vlabel8;
		} else {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__433__Vfuncout = 0x3f;
		    goto __Vlabel8;
		}
	    }
	}
	__Vlabel8: ;
	vlTOPp->v__DOT__hex5 = __Vfunc_v__DOT__buffer__DOT__seven_segment__433__Vfuncout;
	vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add2 
	    = (0xfff & ((IData)(1) + (IData)(vlTOPp->v__DOT__buffer__DOT__ram_wr_add2)));
    } else {
	vlTOPp->v__DOT__hex5 = 0;
    }
    if (vlTOPp->v__DOT__out_ram_wr3) {
	// Function: seven_segment at Buffer.sv:61
	__Vfunc_v__DOT__buffer__DOT__seven_segment__434__value 
	    = (3 & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result);
	{
	    if ((2 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__434__value))) {
		if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__434__value))) {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__434__Vfuncout = 0x4f;
		    goto __Vlabel9;
		} else {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__434__Vfuncout = 0x5b;
		    goto __Vlabel9;
		}
	    } else {
		if ((1 & (IData)(__Vfunc_v__DOT__buffer__DOT__seven_segment__434__value))) {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__434__Vfuncout = 6;
		    goto __Vlabel9;
		} else {
		    __Vfunc_v__DOT__buffer__DOT__seven_segment__434__Vfuncout = 0x3f;
		    goto __Vlabel9;
		}
	    }
	}
	__Vlabel9: ;
	vlTOPp->v__DOT__hex6 = __Vfunc_v__DOT__buffer__DOT__seven_segment__434__Vfuncout;
	vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add3 
	    = (0xfff & ((IData)(1) + (IData)(vlTOPp->v__DOT__buffer__DOT__ram_wr_add3)));
    } else {
	vlTOPp->v__DOT__hex6 = 0;
    }
    // ALWAYS at altera_mf.v:4404
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 | (IData)(vlTOPp->v__DOT__out_ram_wr1))) {
	__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
    // ALWAYS at altera_mf.v:4404
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 | (IData)(vlTOPp->v__DOT__out_ram_wr2))) {
	__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
    // ALWAYS at altera_mf.v:4404
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 | (IData)(vlTOPp->v__DOT__out_ram_wr3))) {
	__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
    // ALWAYS at altera_mf.v:4404
    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 | (IData)(vlTOPp->v__DOT__input_ram_wren1))) {
	__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
    // ALWAYS at altera_mf.v:4404
    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 | (IData)(vlTOPp->v__DOT__input_ram_wren2))) {
	__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
    // ALWAYS at altera_mf.v:4404
    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 | (IData)(vlTOPp->v__DOT__input_ram_wren3))) {
	__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	    = (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a)));
    }
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1;
    vlTOPp->v__DOT__buffer__DOT__read_cycle1 = __Vdly__v__DOT__buffer__DOT__read_cycle1;
    vlTOPp->v__DOT__buffer__DOT__read_cycle2 = __Vdly__v__DOT__buffer__DOT__read_cycle2;
    vlTOPp->v__DOT__buffer__DOT__read_cycle3 = __Vdly__v__DOT__buffer__DOT__read_cycle3;
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= __Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= __Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= __Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= __Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= __Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= __Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    // ALWAYS at altera_mf.v:5807
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_b 
	= ((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag)
	    ? 0 : vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_b);
    // ALWAYS at altera_mf.v:5807
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_b 
	= ((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag)
	    ? 0 : vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_b);
    // ALWAYS at altera_mf.v:5807
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_b 
	= ((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag)
	    ? 0 : vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_b);
    // ALWAYS at altera_mf.v:5807
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b 
	= ((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag)
	    ? 0 : vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_b);
    // ALWAYS at altera_mf.v:5807
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b 
	= ((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag)
	    ? 0 : vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_b);
    // ALWAYS at altera_mf.v:5807
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b 
	= ((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag)
	    ? 0 : vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_b);
    // ALWAYS at altera_mf.v:4435
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = 0;
    // ALWAYS at altera_mf.v:4435
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = 0;
    // ALWAYS at altera_mf.v:4435
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = 0;
    // ALWAYS at altera_mf.v:4435
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = 0;
    // ALWAYS at altera_mf.v:4435
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = 0;
    // ALWAYS at altera_mf.v:4435
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag = 0;
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[0] = vlTOPp->v__DOT__fifo_out0;
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[1] = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b;
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[2] = (IData)(
							  (((QData)((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b)) 
							    << 0x20) 
							   | (QData)((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b))));
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[3] = (IData)(
							  ((((QData)((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b)) 
							     << 0x20) 
							    | (QData)((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b))) 
							   >> 0x20));
}

void VVGA_LED::_sequent__TOP__4(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__4\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_id 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id;
    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag 
	= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_id 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id;
    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag 
	= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_id 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id;
    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag 
	= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag;
}

void VVGA_LED::_sequent__TOP__5(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__5\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:2943
    if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag) {
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_id 
	    = (3 & (((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__sclr) 
		     | (3 <= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id)))
		     ? 0 : ((IData)(1) + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id))));
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag = 0;
    }
    // ALWAYS at altera_mf.v:2943
    if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag) {
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_id 
	    = (3 & (((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__sclr) 
		     | (3 <= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id)))
		     ? 0 : ((IData)(1) + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id))));
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag = 0;
    }
    // ALWAYS at altera_mf.v:2943
    if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag) {
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_id 
	    = (3 & (((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__sclr) 
		     | (3 <= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id)))
		     ? 0 : ((IData)(1) + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id))));
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag = 0;
    }
    // ALWAYS at altera_mf.v:2953
    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family)))) {
	if ((1 & (~ ((~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
		     & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag))))) {
	    if ((VL_ULL(0) < VL_TIME_Q())) {
		vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
		    = ((4 >= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))
		        ? vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
		       [(IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id)]
		        : 0);
	    }
	}
    }
    // ALWAYS at altera_mf.v:2953
    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family)))) {
	if ((1 & (~ ((~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
		     & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag))))) {
	    if ((VL_ULL(0) < VL_TIME_Q())) {
		vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
		    = ((4 >= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))
		        ? vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
		       [(IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id)]
		        : 0);
	    }
	}
    }
    // ALWAYS at altera_mf.v:2953
    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family)))) {
	if ((1 & (~ ((~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
		     & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag))))) {
	    if ((VL_ULL(0) < VL_TIME_Q())) {
		vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
		    = ((4 >= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))
		        ? vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
		       [(IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id)]
		        : 0);
	    }
	}
    }
    // ALWAYS at altera_mf.v:4698
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    // ALWAYS at altera_mf.v:4698
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    // ALWAYS at altera_mf.v:4698
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    // ALWAYS at altera_mf.v:4698
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    // ALWAYS at altera_mf.v:4698
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    // ALWAYS at altera_mf.v:4698
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = 0;
    // ALWAYS at altera_mf.v:5775
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_output_latch 
	= (((((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	      == (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)) 
	     & (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a)) 
	    & (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b))
	    ? vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a
	    : vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b);
    // ALWAYS at altera_mf.v:5775
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_output_latch 
	= (((((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	      == (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)) 
	     & (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a)) 
	    & (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b))
	    ? vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a
	    : vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b);
    // ALWAYS at altera_mf.v:5775
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_output_latch 
	= (((((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	      == (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)) 
	     & (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a)) 
	    & (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b))
	    ? vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a
	    : vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b);
    // ALWAYS at altera_mf.v:5775
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_output_latch 
	= (((((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	      == (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)) 
	     & (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a)) 
	    & (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b))
	    ? vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a
	    : vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b);
    // ALWAYS at altera_mf.v:5775
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_output_latch 
	= (((((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	      == (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)) 
	     & (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a)) 
	    & (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b))
	    ? vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a
	    : vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b);
    // ALWAYS at altera_mf.v:5775
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_output_latch 
	= (((((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	      == (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)) 
	     & (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a)) 
	    & (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b))
	    ? vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a
	    : vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b);
}

void VVGA_LED::_sequent__TOP__6(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__6\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__v__DOT__packet_Display__DOT__hcount,25,0);
    VL_SIG(__Vdly__v__DOT__packet_Display__DOT__vcount,25,0);
    // Body
    __Vdly__v__DOT__packet_Display__DOT__hcount = vlTOPp->v__DOT__packet_Display__DOT__hcount;
    __Vdly__v__DOT__packet_Display__DOT__vcount = vlTOPp->v__DOT__packet_Display__DOT__vcount;
    // ALWAYS at Packet_Display.sv:37
    __Vdly__v__DOT__packet_Display__DOT__hcount = (0x3ffffff 
						   & ((IData)(vlTOPp->reset)
						       ? 0
						       : 
						      ((0x63f 
							== vlTOPp->v__DOT__packet_Display__DOT__hcount)
						        ? 0
						        : 
						       ((IData)(1) 
							+ vlTOPp->v__DOT__packet_Display__DOT__hcount))));
    // ALWAYS at Packet_Display.sv:48
    if (vlTOPp->reset) {
	__Vdly__v__DOT__packet_Display__DOT__vcount = 0;
    } else {
	if ((0x63f == vlTOPp->v__DOT__packet_Display__DOT__hcount)) {
	    __Vdly__v__DOT__packet_Display__DOT__vcount 
		= (0x3ffffff & ((0x20c == vlTOPp->v__DOT__packet_Display__DOT__vcount)
				 ? 0 : ((IData)(1) 
					+ vlTOPp->v__DOT__packet_Display__DOT__vcount)));
	}
    }
    vlTOPp->v__DOT__packet_Display__DOT__hcount = __Vdly__v__DOT__packet_Display__DOT__hcount;
    vlTOPp->v__DOT__packet_Display__DOT__vcount = __Vdly__v__DOT__packet_Display__DOT__vcount;
    vlTOPp->VGA_HS = (1 & (~ ((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 8))) & 
			      (7 != (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 5))))));
    vlTOPp->VGA_CLK = (1 & vlTOPp->v__DOT__packet_Display__DOT__hcount);
    vlTOPp->VGA_VS = (0xf5 != (0x1ff & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					>> 1)));
    vlTOPp->VGA_BLANK_n = (1 & ((~ ((vlTOPp->v__DOT__packet_Display__DOT__hcount 
				     >> 0xa) & ((vlTOPp->v__DOT__packet_Display__DOT__hcount 
						 >> 9) 
						| (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						   >> 8)))) 
				& (~ ((vlTOPp->v__DOT__packet_Display__DOT__vcount 
				       >> 9) | (0xf 
						== 
						(0xf 
						 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						    >> 5)))))));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xfe & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | ((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			>> 5))) & (0 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						>> 3)))));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xf7 & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 5))) & (0xc == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						   >> 3)))) 
	    << 3));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xbf & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 5))) & (6 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						 >> 3)))) 
	    << 6));
    vlTOPp->v__DOT__packet_Display__DOT__topCol = (
						   (~ 
						    (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						     >> 6)) 
						   & (7 
						      != 
						      (7 
						       & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
							  >> 3))));
    vlTOPp->v__DOT__packet_Display__DOT__botCol = (
						   (6 
						    <= 
						    (0xf 
						     & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
							>> 3))) 
						   & (0xc 
						      >= 
						      (0xf 
						       & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
							  >> 3))));
}

void VVGA_LED::_sequent__TOP__7(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__7\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4983
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 & (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a))) {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
	       << 5);
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a 
	    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_address_a 
	    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a;
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
	    = VL_TIME_Q();
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	       << 5);
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_high 
	    = ((IData)(0x20) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low);
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i5 = 0x20;
	if ((0 == ((((((0x44415441 ^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
		       | (0x4f4c445f ^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
		      | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
		     | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
		    | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
		   | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
		= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b)));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
	    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((1 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffe & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (1 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((2 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffd & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (2 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((4 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffb & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (4 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((8 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffff7 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (8 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffef & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffdf & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffbf & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffff7f & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffeff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffdff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffbff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffff7ff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffefff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffdfff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffbfff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffff7fff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffeffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffdffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffbffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfff7ffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffefffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffdfffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffbfffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xff7fffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfeffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfdffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfbffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xf7ffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xefffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xdfffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xbfffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_count 
	    = VL_MODDIVS_III(32, vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low, (IData)(0x20));
	if ((0x80000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0x7fffffff & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000000 & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data[(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a)] 
	    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa;
    }
}

void VVGA_LED::_sequent__TOP__8(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__8\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4983
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 & (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a))) {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
	       << 5);
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a 
	    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_address_a 
	    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a;
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
	    = VL_TIME_Q();
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	       << 5);
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_high 
	    = ((IData)(0x20) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low);
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i5 = 0x20;
	if ((0 == ((((((0x44415441 ^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
		       | (0x4f4c445f ^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
		      | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
		     | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
		    | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
		   | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
		= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b)));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
	    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((1 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffe & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (1 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((2 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffd & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (2 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((4 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffb & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (4 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((8 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffff7 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (8 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffef & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffdf & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffbf & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffff7f & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffeff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffdff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffbff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffff7ff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffefff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffdfff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffbfff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffff7fff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffeffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffdffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffbffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfff7ffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffefffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffdfffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffbfffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xff7fffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfeffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfdffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfbffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xf7ffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xefffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xdfffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xbfffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_count 
	    = VL_MODDIVS_III(32, vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low, (IData)(0x20));
	if ((0x80000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0x7fffffff & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000000 & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data[(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a)] 
	    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa;
    }
}

void VVGA_LED::_sequent__TOP__9(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__9\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4983
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 & (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a))) {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
	       << 5);
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a 
	    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_address_a 
	    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a;
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
	    = VL_TIME_Q();
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	       << 5);
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_high 
	    = ((IData)(0x20) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low);
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i5 = 0x20;
	if ((0 == ((((((0x44415441 ^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
		       | (0x4f4c445f ^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
		      | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
		     | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
		    | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
		   | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
		= (1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b)));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
	    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((1 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffe & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (1 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((2 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffd & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (2 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((4 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffb & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (4 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((8 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffff7 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (8 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffef & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffdf & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffbf & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffff7f & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffeff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffdff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffbff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffff7ff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffefff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffdfff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffbfff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffff7fff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffeffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffdffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffbffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfff7ffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffefffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffdfffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffbfffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xff7fffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfeffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfdffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfbffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xf7ffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xefffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xdfffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xbfffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_count 
	    = VL_MODDIVS_III(32, vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low, (IData)(0x20));
	if ((0x80000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0x7fffffff & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000000 & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data[(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a)] 
	    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa;
    }
}

void VVGA_LED::_sequent__TOP__10(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__10\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4983
    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 & (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a))) {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
	       << 5);
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a 
	    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_address_a 
	    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a;
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
	    = VL_TIME_Q();
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	       << 5);
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_high 
	    = ((IData)(0x20) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low);
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i5 = 0x20;
	if ((0 == ((((((0x44415441 ^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
		       | (0x4f4c445f ^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
		      | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
		     | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
		    | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
		   | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
		= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b)));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
	    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((1 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffe & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (1 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((2 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffd & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (2 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((4 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffb & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (4 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((8 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffff7 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (8 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffef & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffdf & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffbf & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffff7f & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffeff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffdff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffbff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffff7ff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffefff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffdfff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffbfff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffff7fff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffeffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffdffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffbffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfff7ffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffefffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffdfffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffbfffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xff7fffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfeffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfdffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfbffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xf7ffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xefffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xdfffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xbfffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_count 
	    = VL_MODDIVS_III(32, vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low, (IData)(0x20));
	if ((0x80000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa 
		= ((0x7fffffff & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000000 & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data[(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a)] 
	    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa;
    }
}

void VVGA_LED::_sequent__TOP__11(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__11\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4983
    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 & (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a))) {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
	       << 5);
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a 
	    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_address_a 
	    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a;
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
	    = VL_TIME_Q();
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	       << 5);
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_high 
	    = ((IData)(0x20) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low);
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i5 = 0x20;
	if ((0 == ((((((0x44415441 ^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
		       | (0x4f4c445f ^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
		      | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
		     | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
		    | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
		   | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
		= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b)));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
	    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((1 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffe & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (1 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((2 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffd & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (2 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((4 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffb & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (4 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((8 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffff7 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (8 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffef & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffdf & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffbf & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffff7f & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffeff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffdff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffbff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffff7ff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffefff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffdfff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffbfff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffff7fff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffeffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffdffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffbffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfff7ffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffefffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffdfffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffbfffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xff7fffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfeffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfdffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfbffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xf7ffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xefffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xdfffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xbfffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_count 
	    = VL_MODDIVS_III(32, vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low, (IData)(0x20));
	if ((0x80000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa 
		= ((0x7fffffff & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000000 & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data[(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a)] 
	    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa;
    }
}

void VVGA_LED::_sequent__TOP__12(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__12\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:4983
    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
	 & (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a))) {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
	       << 5);
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a = 0;
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a 
	    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_address_a 
	    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a;
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
	    = VL_TIME_Q();
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	       << 5);
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_high 
	    = ((IData)(0x20) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low);
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i5 = 0x20;
	if ((0 == ((((((0x44415441 ^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
		       | (0x4f4c445f ^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
		      | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
		     | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
		    | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
		   | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
		= (1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b)));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
	    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
	    [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a)];
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((1 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffe & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (1 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((2 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffd & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (2 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((4 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffffb & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (4 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((8 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffff7 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (8 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffef & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffdf & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffffbf & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffff7f & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffeff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffdff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffffbff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffff7ff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffefff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffdfff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffffbfff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffff7fff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffeffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffdffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfffbffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x80000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfff7ffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x100000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffefffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x100000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x200000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffdfffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x200000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x400000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xffbfffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x400000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x800000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xff7fffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x800000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x1000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfeffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x1000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x2000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfdffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x2000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x4000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xfbffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x4000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x8000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xf7ffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x8000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x10000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xefffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x10000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x20000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xdfffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x20000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	if ((0x40000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0xbfffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x40000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_count 
	    = VL_MODDIVS_III(32, vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low, (IData)(0x20));
	if ((0x80000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa 
		= ((0x7fffffff & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa) 
		   | (0x80000000 & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a));
	}
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low 
	    = ((IData)(1) + vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low);
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data[(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a)] 
	    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa;
    }
}

void VVGA_LED::_settle__TOP__13(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_settle__TOP__13\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[0] = vlTOPp->v__DOT__fifo_out0;
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[1] = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b;
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[2] = (IData)(
							  (((QData)((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b)) 
							    << 0x20) 
							   | (QData)((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b))));
    vlTOPp->v__DOT__megamux1__DOT__sub_wire2[3] = (IData)(
							  ((((QData)((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b)) 
							     << 0x20) 
							    | (QData)((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b))) 
							   >> 0x20));
    vlTOPp->VGA_HS = (1 & (~ ((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 8))) & 
			      (7 != (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 5))))));
    vlTOPp->VGA_CLK = (1 & vlTOPp->v__DOT__packet_Display__DOT__hcount);
    vlTOPp->VGA_VS = (0xf5 != (0x1ff & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					>> 1)));
    vlTOPp->VGA_BLANK_n = (1 & ((~ ((vlTOPp->v__DOT__packet_Display__DOT__hcount 
				     >> 0xa) & ((vlTOPp->v__DOT__packet_Display__DOT__hcount 
						 >> 9) 
						| (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						   >> 8)))) 
				& (~ ((vlTOPp->v__DOT__packet_Display__DOT__vcount 
				       >> 9) | (0xf 
						== 
						(0xf 
						 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						    >> 5)))))));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xfe & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | ((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			>> 5))) & (0 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						>> 3)))));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xf7 & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 5))) & (0xc == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						   >> 3)))) 
	    << 3));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xbf & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 5))) & (6 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						 >> 3)))) 
	    << 6));
    vlTOPp->v__DOT__packet_Display__DOT__topCol = (
						   (~ 
						    (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						     >> 6)) 
						   & (7 
						      != 
						      (7 
						       & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
							  >> 3))));
    vlTOPp->v__DOT__packet_Display__DOT__botCol = (
						   (6 
						    <= 
						    (0xf 
						     & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
							>> 3))) 
						   & (0xc 
						      >= 
						      (0xf 
						       & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
							  >> 3))));
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xfd & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__topCol)) 
	    << 1));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xdf & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__topCol)) 
	    << 5));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xfb & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__botCol)) 
	    << 2));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xef & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__botCol)) 
	    << 4));
}

void VVGA_LED::_sequent__TOP__14(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__14\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0,2,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0,2,0);
    VL_SIG8(__Vdlyvdim0__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0,2,0);
    //char	__VpadToAlign379[1];
    VL_SIG(__Vdlyvval__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0,31,0);
    VL_SIG(__Vdlyvval__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0,31,0);
    VL_SIG(__Vdlyvval__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0,31,0);
    // Body
    // ALWAYS at altera_mf.v:4378
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = 1;
    // ALWAYS at altera_mf.v:4378
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = 1;
    // ALWAYS at altera_mf.v:4378
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = 1;
    // ALWAYS at altera_mf.v:4378
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse0 = 1;
    // ALWAYS at altera_mf.v:4378
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse0 = 1;
    // ALWAYS at altera_mf.v:4378
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse0 = 1;
    // ALWAYS at altera_mf.v:2381
    if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__sclr) {
	vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__read_id = 0;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__count_id = 0;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = 0;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = 1;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 = 1;
	vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency2 = 1;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x = 0;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty = 0;
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count = 0;
	if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
	    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_id = 0;
	} else {
	    if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq) {
		vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag = 1;
	    } else {
		vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_id = 0;
	    }
	}
	if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
	    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1 = 0;
	    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2 = 0;
	    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown = 0;
	    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
	}
    } else {
	if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq) {
	    if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))))) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count 
			= (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count 
			   - (IData)(1));
		}
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__count_id 
			= (3 & ((0 >= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id))
				 ? 3 : ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id) 
					- (IData)(1))));
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = 0;
		}
		if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
		    if (((((1 == vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count) 
			   & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq)) 
			  & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq))) 
			 | (((1 == vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count) 
			     & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq)) 
			    & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq)))) {
			vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = 1;
		    } else {
			if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown) 
				     >> (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1))))) {
			    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = 1;
			}
		    }
		} else {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq)))) {
			if (((1 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id)) 
			     & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)))) {
			    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = 1;
			}
		    }
		}
		if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag) {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family)))) {
			vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
		    }
		} else {
		    if ((3 <= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))) {
			if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)))) {
				if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family)))) {
				    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
				}
			    } else {
				if ((1 & ((0 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1)) 
					  | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready)))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown))) {
					vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
					    = vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
					    [0];
					vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown 
					    = (0xe 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown));
					vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
					    = (0xe 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready));
				    }
				}
			    }
			} else {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)))) {
				if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq) {
				    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
					= vlTOPp->v__DOT__fifo_in1;
				} else {
				    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family)))) {
					vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
				    }
				}
			    } else {
				vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
				    = vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
				    [0];
			    }
			}
			vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__read_id = 0;
		    } else {
			if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)))) {
				if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family)))) {
				    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q = 0;
				}
			    } else {
				if ((1 & (((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1) 
					   == ((IData)(1) 
					       + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))) 
					  | ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready) 
					     >> (3 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))))))) {
				    if ((1 & ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown) 
					      >> (3 
						  & ((IData)(1) 
						     + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id)))))) {
					vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
					    = ((4 >= 
						(7 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))))
					        ? vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
					       [(7 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id)))]
					        : 0);
					vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown 
					    = ((~ ((IData)(1) 
						   << 
						   (3 
						    & ((IData)(1) 
						       + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))))) 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown));
					vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
					    = ((~ ((IData)(1) 
						   << 
						   (3 
						    & ((IData)(1) 
						       + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))))) 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready));
				    }
				}
			    }
			} else {
			    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
				= (((1 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id)) 
				    & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)))
				    ? 0 : ((4 >= (7 
						  & ((IData)(1) 
						     + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))))
					    ? vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
					   [(7 & ((IData)(1) 
						  + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id)))]
					    : 0));
			}
			vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__read_id 
			    = (3 & ((IData)(1) + (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id)));
		    }
		}
	    }
	}
	vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_full_flag = 1;
	vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_empty_flag = 0;
	if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq) {
	    if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))))) {
		vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT____Vlvbound4 
		    = vlTOPp->v__DOT__fifo_in1;
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count 
			= ((IData)(1) + vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count);
		}
		if ((4 >= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id))) {
		    __Vdlyvval__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0 
			= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT____Vlvbound4;
		    vlTOPp->__Vdlyvset__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0 = 1;
		    __Vdlyvdim0__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0 
			= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id;
		}
		vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag = 1;
		if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq) {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = 0;
		} else {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__count_id 
			= (3 & ((3 <= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id))
				 ? 0 : ((IData)(1) 
					+ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id))));
		}
		if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq)))) {
			if ((3 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id))) {
			    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = 1;
			}
		    }
		} else {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq)))) {
			if (((3 == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id)) 
			     & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag)))) {
			    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag = 1;
			}
		    }
		}
		if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1 
			= vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id;
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown 
			= ((IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown) 
			   | ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id)));
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready));
		} else {
		    if ((1 & ((~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag)) 
			      & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq))))) {
			vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
			    = ((4 >= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id))
			        ? vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id)]
			        : 0);
		    }
		}
		if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 = 0;
		} else {
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag = 0;
		}
	    }
	}
    }
    if (vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family) {
	vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2 
	    = vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1;
	if (((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2) 
	     != (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1))) {
	    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
		= ((IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready) 
		   | ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1)));
	}
	if ((1 & ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown) 
		  >> (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1)))) {
	    if ((((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id) 
		  == (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1)) 
		 | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__sclr))) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__sclr)))) {
		    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q 
			= ((4 >= (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1))
			    ? vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data
			   [(IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1)]
			    : 0);
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq)))) {
			vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag 
			    = vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1;
		    }
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown));
		    vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready));
		}
	    }
	}
    }
    // ALWAYS at altera_mf.v:2381
    if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__sclr) {
	vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__read_id = 0;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__count_id = 0;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = 0;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = 1;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 = 1;
	vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency2 = 1;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x = 0;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty = 0;
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count = 0;
	if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
	    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_id = 0;
	} else {
	    if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq) {
		vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag = 1;
	    } else {
		vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_id = 0;
	    }
	}
	if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
	    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1 = 0;
	    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2 = 0;
	    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown = 0;
	    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
	}
    } else {
	if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq) {
	    if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))))) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count 
			= (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count 
			   - (IData)(1));
		}
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__count_id 
			= (3 & ((0 >= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id))
				 ? 3 : ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id) 
					- (IData)(1))));
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = 0;
		}
		if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
		    if (((((1 == vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count) 
			   & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq)) 
			  & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq))) 
			 | (((1 == vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count) 
			     & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq)) 
			    & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq)))) {
			vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = 1;
		    } else {
			if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown) 
				     >> (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1))))) {
			    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = 1;
			}
		    }
		} else {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq)))) {
			if (((1 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id)) 
			     & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)))) {
			    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = 1;
			}
		    }
		}
		if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag) {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family)))) {
			vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
		    }
		} else {
		    if ((3 <= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))) {
			if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)))) {
				if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family)))) {
				    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
				}
			    } else {
				if ((1 & ((0 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1)) 
					  | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready)))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown))) {
					vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
					    = vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
					    [0];
					vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown 
					    = (0xe 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown));
					vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
					    = (0xe 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready));
				    }
				}
			    }
			} else {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)))) {
				if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq) {
				    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
					= vlTOPp->v__DOT__fifo_in2;
				} else {
				    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family)))) {
					vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
				    }
				}
			    } else {
				vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
				    = vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
				    [0];
			    }
			}
			vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__read_id = 0;
		    } else {
			if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)))) {
				if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family)))) {
				    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q = 0;
				}
			    } else {
				if ((1 & (((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1) 
					   == ((IData)(1) 
					       + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))) 
					  | ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready) 
					     >> (3 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))))))) {
				    if ((1 & ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown) 
					      >> (3 
						  & ((IData)(1) 
						     + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id)))))) {
					vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
					    = ((4 >= 
						(7 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))))
					        ? vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
					       [(7 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id)))]
					        : 0);
					vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown 
					    = ((~ ((IData)(1) 
						   << 
						   (3 
						    & ((IData)(1) 
						       + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))))) 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown));
					vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
					    = ((~ ((IData)(1) 
						   << 
						   (3 
						    & ((IData)(1) 
						       + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))))) 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready));
				    }
				}
			    }
			} else {
			    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
				= (((1 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id)) 
				    & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)))
				    ? 0 : ((4 >= (7 
						  & ((IData)(1) 
						     + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))))
					    ? vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
					   [(7 & ((IData)(1) 
						  + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id)))]
					    : 0));
			}
			vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__read_id 
			    = (3 & ((IData)(1) + (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id)));
		    }
		}
	    }
	}
	vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_full_flag = 1;
	vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_empty_flag = 0;
	if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq) {
	    if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))))) {
		vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT____Vlvbound4 
		    = vlTOPp->v__DOT__fifo_in2;
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count 
			= ((IData)(1) + vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count);
		}
		if ((4 >= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id))) {
		    __Vdlyvval__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0 
			= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT____Vlvbound4;
		    vlTOPp->__Vdlyvset__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0 = 1;
		    __Vdlyvdim0__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0 
			= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id;
		}
		vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag = 1;
		if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq) {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = 0;
		} else {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__count_id 
			= (3 & ((3 <= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id))
				 ? 0 : ((IData)(1) 
					+ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id))));
		}
		if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq)))) {
			if ((3 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id))) {
			    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = 1;
			}
		    }
		} else {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq)))) {
			if (((3 == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id)) 
			     & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag)))) {
			    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag = 1;
			}
		    }
		}
		if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1 
			= vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id;
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown 
			= ((IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown) 
			   | ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id)));
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready));
		} else {
		    if ((1 & ((~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag)) 
			      & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq))))) {
			vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
			    = ((4 >= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id))
			        ? vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id)]
			        : 0);
		    }
		}
		if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 = 0;
		} else {
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag = 0;
		}
	    }
	}
    }
    if (vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family) {
	vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2 
	    = vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1;
	if (((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2) 
	     != (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1))) {
	    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
		= ((IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready) 
		   | ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1)));
	}
	if ((1 & ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown) 
		  >> (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1)))) {
	    if ((((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id) 
		  == (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1)) 
		 | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__sclr))) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__sclr)))) {
		    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q 
			= ((4 >= (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1))
			    ? vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data
			   [(IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1)]
			    : 0);
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq)))) {
			vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag 
			    = vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1;
		    }
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown));
		    vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready));
		}
	    }
	}
    }
    // ALWAYS at altera_mf.v:2381
    if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__sclr) {
	vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__read_id = 0;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__count_id = 0;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = 0;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = 1;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 = 1;
	vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency2 = 1;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x = 0;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty = 0;
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count = 0;
	if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
	    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_id = 0;
	} else {
	    if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq) {
		vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag = 1;
	    } else {
		vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_id = 0;
	    }
	}
	if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
	    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1 = 0;
	    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2 = 0;
	    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown = 0;
	    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
	}
    } else {
	if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq) {
	    if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))))) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count 
			= (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count 
			   - (IData)(1));
		}
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__count_id 
			= (3 & ((0 >= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id))
				 ? 3 : ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id) 
					- (IData)(1))));
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = 0;
		}
		if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
		    if (((((1 == vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count) 
			   & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq)) 
			  & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq))) 
			 | (((1 == vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count) 
			     & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq)) 
			    & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq)))) {
			vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = 1;
		    } else {
			if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown) 
				     >> (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1))))) {
			    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = 1;
			}
		    }
		} else {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq)))) {
			if (((1 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id)) 
			     & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)))) {
			    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = 1;
			}
		    }
		}
		if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag) {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family)))) {
			vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
		    }
		} else {
		    if ((3 <= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))) {
			if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)))) {
				if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family)))) {
				    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
				}
			    } else {
				if ((1 & ((0 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1)) 
					  | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready)))) {
				    if ((1 & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown))) {
					vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
					    = vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
					    [0];
					vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown 
					    = (0xe 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown));
					vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
					    = (0xe 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready));
				    }
				}
			    }
			} else {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)))) {
				if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq) {
				    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
					= vlTOPp->v__DOT__fifo_in3;
				} else {
				    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family)))) {
					vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
				    }
				}
			    } else {
				vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
				    = vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
				    [0];
			    }
			}
			vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__read_id = 0;
		    } else {
			if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
			    if (((1 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id)) 
				 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)))) {
				if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family)))) {
				    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q = 0;
				}
			    } else {
				if ((1 & (((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1) 
					   == ((IData)(1) 
					       + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))) 
					  | ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready) 
					     >> (3 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))))))) {
				    if ((1 & ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown) 
					      >> (3 
						  & ((IData)(1) 
						     + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id)))))) {
					vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
					    = ((4 >= 
						(7 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))))
					        ? vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
					       [(7 
						 & ((IData)(1) 
						    + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id)))]
					        : 0);
					vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown 
					    = ((~ ((IData)(1) 
						   << 
						   (3 
						    & ((IData)(1) 
						       + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))))) 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown));
					vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
					    = ((~ ((IData)(1) 
						   << 
						   (3 
						    & ((IData)(1) 
						       + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))))) 
					       & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready));
				    }
				}
			    }
			} else {
			    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
				= (((1 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id)) 
				    & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)))
				    ? 0 : ((4 >= (7 
						  & ((IData)(1) 
						     + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))))
					    ? vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
					   [(7 & ((IData)(1) 
						  + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id)))]
					    : 0));
			}
			vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__read_id 
			    = (3 & ((IData)(1) + (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id)));
		    }
		}
	    }
	}
	vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_full_flag = 1;
	vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_empty_flag = 0;
	if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq) {
	    if ((1 & (~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
			 | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))))) {
		vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT____Vlvbound4 
		    = vlTOPp->v__DOT__fifo_in3;
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq)))) {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count 
			= ((IData)(1) + vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count);
		}
		if ((4 >= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id))) {
		    __Vdlyvval__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0 
			= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT____Vlvbound4;
		    vlTOPp->__Vdlyvset__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0 = 1;
		    __Vdlyvdim0__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0 
			= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id;
		}
		vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag = 1;
		if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq) {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = 0;
		} else {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__count_id 
			= (3 & ((3 <= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id))
				 ? 0 : ((IData)(1) 
					+ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id))));
		}
		if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq)))) {
			if ((3 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id))) {
			    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = 1;
			}
		    }
		} else {
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq)))) {
			if (((3 == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id)) 
			     & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag)))) {
			    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag = 1;
			}
		    }
		}
		if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1 
			= vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id;
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown 
			= ((IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown) 
			   | ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id)));
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready));
		} else {
		    if ((1 & ((~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag)) 
			      & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq))))) {
			vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
			    = ((4 >= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id))
			        ? vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id)]
			        : 0);
		    }
		}
		if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 = 0;
		} else {
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag = 0;
		}
	    }
	}
    }
    if (vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family) {
	vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2 
	    = vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1;
	if (((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2) 
	     != (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1))) {
	    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
		= ((IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready) 
		   | ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1)));
	}
	if ((1 & ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown) 
		  >> (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1)))) {
	    if ((((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id) 
		  == (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1)) 
		 | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__sclr))) {
		if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__sclr)))) {
		    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q 
			= ((4 >= (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1))
			    ? vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data
			   [(IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1)]
			    : 0);
		    if ((1 & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq)))) {
			vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag 
			    = vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1;
		    }
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown));
		    vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
			= ((~ ((IData)(1) << (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1))) 
			   & (IData)(vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready));
		}
	    }
	}
    }
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->__Vdly__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->__Vdly__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->__Vdly__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->__Vdly__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->__Vdly__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b 
	= vlTOPp->__Vdly__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__count_id;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__read_id;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty;
    // ALWAYSPOST at altera_mf.v:2740
    if (vlTOPp->__Vdlyvset__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0) {
	vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[(IData)(__Vdlyvdim0__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0)] 
	    = __Vdlyvval__v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data__v0;
    }
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__count_id;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__read_id;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty;
    // ALWAYSPOST at altera_mf.v:2740
    if (vlTOPp->__Vdlyvset__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0) {
	vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[(IData)(__Vdlyvdim0__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0)] 
	    = __Vdlyvval__v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data__v0;
    }
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__count_id;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__read_id;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty;
    // ALWAYSPOST at altera_mf.v:2740
    if (vlTOPp->__Vdlyvset__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0) {
	vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[(IData)(__Vdlyvdim0__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0)] 
	    = __Vdlyvval__v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data__v0;
    }
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag;
    // ALWAYS at altera_mf.v:4659
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b 
	= vlTOPp->v__DOT__input_ram_rden1;
    // ALWAYS at altera_mf.v:4659
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b 
	= vlTOPp->v__DOT__input_ram_rden2;
    // ALWAYS at altera_mf.v:4659
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b 
	= vlTOPp->v__DOT__input_ram_rden3;
    // ALWAYS at altera_mf.v:4659
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd1;
    // ALWAYS at altera_mf.v:4659
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd2;
    // ALWAYS at altera_mf.v:4659
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd3;
    // ALWAYS at altera_mf.v:4476
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffffffff;
    // ALWAYS at altera_mf.v:4457
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a 
	= vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result;
    // ALWAYS at altera_mf.v:4682
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd_add1;
    // ALWAYS at altera_mf.v:4427
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a 
	= vlTOPp->v__DOT__out_ram_wr1;
    // ALWAYS at altera_mf.v:4462
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a 
	= vlTOPp->v__DOT__buffer__DOT__ram_wr_add1;
    // ALWAYS at altera_mf.v:4476
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffffffff;
    // ALWAYS at altera_mf.v:4457
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a 
	= vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result;
    // ALWAYS at altera_mf.v:4682
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd_add2;
    // ALWAYS at altera_mf.v:4427
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a 
	= vlTOPp->v__DOT__out_ram_wr2;
    // ALWAYS at altera_mf.v:4462
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a 
	= vlTOPp->v__DOT__buffer__DOT__ram_wr_add2;
    // ALWAYS at altera_mf.v:4476
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffffffff;
    // ALWAYS at altera_mf.v:4457
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a 
	= vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result;
    // ALWAYS at altera_mf.v:4682
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b 
	= vlTOPp->v__DOT__buffer__DOT__ram_rd_add3;
    // ALWAYS at altera_mf.v:4427
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a 
	= vlTOPp->v__DOT__out_ram_wr3;
    // ALWAYS at altera_mf.v:4462
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a 
	= vlTOPp->v__DOT__buffer__DOT__ram_wr_add3;
    // ALWAYS at altera_mf.v:4476
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffffffff;
    // ALWAYS at altera_mf.v:4682
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b 
	= vlTOPp->v__DOT__input_ram_rd_add1;
    // ALWAYS at altera_mf.v:4427
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a 
	= vlTOPp->v__DOT__input_ram_wren1;
    // ALWAYS at altera_mf.v:4462
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a 
	= vlTOPp->v__DOT__input_ram_wr_add1;
    // ALWAYS at altera_mf.v:4457
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a 
	= vlTOPp->v__DOT__input_ram_wr_in1;
    // ALWAYS at altera_mf.v:4476
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffffffff;
    // ALWAYS at altera_mf.v:4682
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b 
	= vlTOPp->v__DOT__input_ram_rd_add2;
    // ALWAYS at altera_mf.v:4427
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a 
	= vlTOPp->v__DOT__input_ram_wren2;
    // ALWAYS at altera_mf.v:4462
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a 
	= vlTOPp->v__DOT__input_ram_wr_add2;
    // ALWAYS at altera_mf.v:4457
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a 
	= vlTOPp->v__DOT__input_ram_wr_in2;
    // ALWAYS at altera_mf.v:4476
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a = 0xffffffff;
    // ALWAYS at altera_mf.v:4682
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b 
	= vlTOPp->v__DOT__input_ram_rd_add3;
    // ALWAYS at altera_mf.v:4427
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a 
	= vlTOPp->v__DOT__input_ram_wren3;
    // ALWAYS at altera_mf.v:4462
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a 
	= vlTOPp->v__DOT__input_ram_wr_add3;
    // ALWAYS at altera_mf.v:4457
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a 
	= vlTOPp->v__DOT__input_ram_wr_in3;
    // ALWAYS at altera_mf.v:2371
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq 
	= ((IData)(vlTOPp->v__DOT__fifo_wr1) & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)));
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq 
	= ((IData)(vlTOPp->v__DOT__fifo_rd1) & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag)));
    // ALWAYS at altera_mf.v:2371
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq 
	= ((IData)(vlTOPp->v__DOT__fifo_wr2) & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)));
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq 
	= ((IData)(vlTOPp->v__DOT__fifo_rd2) & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag)));
    // ALWAYS at altera_mf.v:2371
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq 
	= ((IData)(vlTOPp->v__DOT__fifo_wr3) & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)));
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq 
	= ((IData)(vlTOPp->v__DOT__fifo_rd3) & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag)));
    // ALWAYS at lpm_mux.v:1335
    vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    if ((4 > (IData)(vlTOPp->v__DOT__mux_sel1))) {
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffe & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (1 & (vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
		       (3 & (IData)(vlTOPp->v__DOT__mux_sel1))] 
		       >> (0x1f & ((IData)(vlTOPp->v__DOT__mux_sel1) 
				   << 5)))));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__i = 0x20;
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffd & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (2 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(1) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(1) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)))) 
		       << 1)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffb & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (4 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(2) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(2) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)))) 
		       << 2)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffff7 & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (8 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(3) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(3) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)))) 
		       << 3)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffef & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(4) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(4) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 4)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffdf & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(5) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(5) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 5)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffbf & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(6) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(6) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 6)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffff7f & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(7) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(7) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 7)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffeff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(8) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(8) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 8)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffdff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(9) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(9) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 9)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffbff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xa) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xa) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 0xa)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffff7ff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xb) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xb) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 0xb)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffefff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xc) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xc) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xc)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffdfff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xd) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xd) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xd)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffbfff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xe) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xe) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xe)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffff7fff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xf) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xf) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xf)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffeffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x10) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x10) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x10)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffdffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x11) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x11) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x11)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffbffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x12) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x12) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x12)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfff7ffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x13) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x13) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x13)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffefffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x14) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x14) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x14)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffdfffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x15) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x15) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x15)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffbfffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x16) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x16) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x16)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xff7fffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x17) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x17) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x17)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfeffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x18) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x18) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x18)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfdffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x19) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x19) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x19)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfbffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1a) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1a) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x1a)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xf7ffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1b) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1b) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x1b)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xefffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1c) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1c) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1c)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xdfffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1d) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1d) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1d)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xbfffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1e) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1e) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1e)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0x7fffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1f) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1f) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1f)));
    } else {
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    }
    vlTOPp->v__DOT__buffer__DOT__ram_rd_add1 = vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add1;
    vlTOPp->v__DOT__buffer__DOT__ram_wr_add1 = vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add1;
    // ALWAYS at lpm_mux.v:1335
    vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    if ((4 > (IData)(vlTOPp->v__DOT__mux_sel2))) {
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffe & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (1 & (vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
		       (3 & (IData)(vlTOPp->v__DOT__mux_sel2))] 
		       >> (0x1f & ((IData)(vlTOPp->v__DOT__mux_sel2) 
				   << 5)))));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__i = 0x20;
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffd & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (2 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(1) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(1) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)))) 
		       << 1)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffb & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (4 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(2) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(2) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)))) 
		       << 2)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffff7 & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (8 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(3) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(3) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)))) 
		       << 3)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffef & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(4) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(4) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 4)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffdf & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(5) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(5) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 5)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffbf & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(6) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(6) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 6)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffff7f & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(7) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(7) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 7)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffeff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(8) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(8) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 8)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffdff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(9) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(9) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 9)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffbff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xa) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xa) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 0xa)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffff7ff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xb) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xb) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 0xb)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffefff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xc) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xc) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xc)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffdfff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xd) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xd) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xd)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffbfff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xe) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xe) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xe)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffff7fff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xf) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xf) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xf)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffeffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x10) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x10) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x10)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffdffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x11) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x11) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x11)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffbffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x12) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x12) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x12)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfff7ffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x13) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x13) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x13)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffefffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x14) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x14) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x14)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffdfffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x15) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x15) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x15)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffbfffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x16) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x16) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x16)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xff7fffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x17) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x17) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x17)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfeffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x18) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x18) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x18)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfdffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x19) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x19) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x19)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfbffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1a) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1a) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x1a)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xf7ffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1b) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1b) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x1b)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xefffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1c) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1c) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1c)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xdfffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1d) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1d) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1d)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xbfffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1e) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1e) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1e)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0x7fffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1f) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1f) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1f)));
    } else {
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    }
    vlTOPp->v__DOT__buffer__DOT__ram_rd_add2 = vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add2;
    vlTOPp->v__DOT__buffer__DOT__ram_wr_add2 = vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add2;
    // ALWAYS at lpm_mux.v:1335
    vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    if ((4 > (IData)(vlTOPp->v__DOT__mux_sel3))) {
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffe & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (1 & (vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
		       (3 & (IData)(vlTOPp->v__DOT__mux_sel3))] 
		       >> (0x1f & ((IData)(vlTOPp->v__DOT__mux_sel3) 
				   << 5)))));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__i = 0x20;
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffd & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (2 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(1) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(1) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)))) 
		       << 1)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffb & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (4 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(2) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(2) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)))) 
		       << 2)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffff7 & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (8 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(3) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(3) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)))) 
		       << 3)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffef & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(4) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(4) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 4)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffdf & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(5) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(5) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 5)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffbf & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(6) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(6) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 6)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffff7f & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(7) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(7) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 7)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffeff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(8) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(8) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 8)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffdff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(9) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(9) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 9)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffbff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xa) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xa) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 0xa)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffff7ff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xb) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xb) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 0xb)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffefff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xc) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xc) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xc)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffdfff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xd) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xd) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xd)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffbfff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xe) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xe) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xe)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffff7fff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xf) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xf) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xf)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffeffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x10) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x10) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x10)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffdffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x11) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x11) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x11)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffbffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x12) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x12) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x12)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfff7ffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x13) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x13) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x13)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffefffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x14) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x14) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x14)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffdfffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x15) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x15) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x15)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffbfffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x16) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x16) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x16)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xff7fffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x17) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x17) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x17)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfeffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x18) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x18) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x18)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfdffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x19) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x19) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x19)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfbffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1a) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1a) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x1a)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xf7ffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1b) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1b) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x1b)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xefffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1c) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1c) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1c)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xdfffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1d) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1d) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1d)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xbfffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1e) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1e) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1e)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0x7fffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1f) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1f) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1f)));
    } else {
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    }
    vlTOPp->v__DOT__buffer__DOT__ram_rd_add3 = vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_rd_add3;
    vlTOPp->v__DOT__buffer__DOT__ram_wr_add3 = vlTOPp->__Vdly__v__DOT__buffer__DOT__ram_wr_add3;
    // ALWAYS at Buffer.sv:68
    vlTOPp->v__DOT__buffer__DOT__ram_rd1 = 1;
    // ALWAYS at Buffer.sv:68
    vlTOPp->v__DOT__buffer__DOT__ram_rd2 = 1;
    // ALWAYS at Buffer.sv:68
    vlTOPp->v__DOT__buffer__DOT__ram_rd3 = 1;
    // ALWAYS at VGA_LED.sv:71
    if (vlTOPp->v__DOT__input_ram_wren1) {
	vlTOPp->__Vdly__v__DOT__input_ram_wr_add1 = 
	    (0xfff & ((IData)(1) + (IData)(vlTOPp->v__DOT__input_ram_wr_add1)));
	vlTOPp->__Vdly__v__DOT__input_ram_wren1 = 0;
    }
    if (vlTOPp->v__DOT__input_ram_wren2) {
	vlTOPp->__Vdly__v__DOT__input_ram_wr_add2 = 
	    (0xfff & ((IData)(1) + (IData)(vlTOPp->v__DOT__input_ram_wr_add2)));
	vlTOPp->__Vdly__v__DOT__input_ram_wren2 = 0;
    }
    if (vlTOPp->v__DOT__input_ram_wren3) {
	vlTOPp->__Vdly__v__DOT__input_ram_wr_add3 = 
	    (0xfff & ((IData)(1) + (IData)(vlTOPp->v__DOT__input_ram_wr_add3)));
	vlTOPp->__Vdly__v__DOT__input_ram_wren3 = 0;
    }
    if (((IData)(vlTOPp->chipselect) & (IData)(vlTOPp->write))) {
	if ((1 == (7 & (IData)(vlTOPp->address)))) {
	    vlTOPp->__Vdly__v__DOT__input_ram_wren1 = 1;
	    vlTOPp->v__DOT__input_ram_wr_in1 = vlTOPp->writedata;
	} else {
	    if ((2 == (7 & (IData)(vlTOPp->address)))) {
		vlTOPp->__Vdly__v__DOT__input_ram_wren2 = 1;
		vlTOPp->v__DOT__input_ram_wr_in2 = vlTOPp->writedata;
	    } else {
		if ((3 == (7 & (IData)(vlTOPp->address)))) {
		    vlTOPp->__Vdly__v__DOT__input_ram_wren3 = 1;
		    vlTOPp->v__DOT__input_ram_wr_in3 
			= vlTOPp->writedata;
		} else {
		    vlTOPp->__Vdly__v__DOT__input_ram_wren1 = 0;
		    vlTOPp->__Vdly__v__DOT__input_ram_wren2 = 0;
		    vlTOPp->__Vdly__v__DOT__input_ram_wren3 = 0;
		}
	    }
	}
    } else {
	vlTOPp->__Vdly__v__DOT__input_ram_wren1 = 0;
	vlTOPp->__Vdly__v__DOT__input_ram_wren2 = 0;
	vlTOPp->__Vdly__v__DOT__input_ram_wren3 = 0;
    }
    vlTOPp->v__DOT__input_ram_wr_add1 = vlTOPp->__Vdly__v__DOT__input_ram_wr_add1;
    vlTOPp->v__DOT__input_ram_wren1 = vlTOPp->__Vdly__v__DOT__input_ram_wren1;
    vlTOPp->v__DOT__input_ram_wr_add2 = vlTOPp->__Vdly__v__DOT__input_ram_wr_add2;
    vlTOPp->v__DOT__input_ram_wren2 = vlTOPp->__Vdly__v__DOT__input_ram_wren2;
    vlTOPp->v__DOT__input_ram_wr_add3 = vlTOPp->__Vdly__v__DOT__input_ram_wr_add3;
    vlTOPp->v__DOT__input_ram_wren3 = vlTOPp->__Vdly__v__DOT__input_ram_wren3;
}

void VVGA_LED::_combo__TOP__15(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_combo__TOP__15\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a 
	= (1 & ((~ (IData)(vlTOPp->clk)) | (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2)));
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram1.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram2.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram3.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram1.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram2.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram3.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a;
}

void VVGA_LED::_sequent__TOP__16(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__16\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xfd & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__topCol)) 
	    << 1));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xdf & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__topCol)) 
	    << 5));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xfb & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__botCol)) 
	    << 2));
    vlTOPp->v__DOT__packet_Display__DOT__segment = 
	((0xef & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)) 
	 | (((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
			 >> 4))) & (IData)(vlTOPp->v__DOT__packet_Display__DOT__botCol)) 
	    << 4));
    // ALWAYS at Packet_Display.sv:148
    vlTOPp->VGA_R = 0;
    vlTOPp->VGA_G = 0;
    vlTOPp->VGA_B = 0;
    if (((((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
		       >> 7))) | (1 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					     >> 7)))) 
	  | (2 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
			>> 7)))) & ((6 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						  >> 7))) 
				    | (3 == (0xf & 
					     (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					      >> 7)))))) {
	if ((0 != ((((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
				 >> 7))) & (0 == (7 
						  & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						     >> 7))))
		     ? (IData)(vlTOPp->v__DOT__hex1)
		     : (((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
				     >> 7))) & (1 == 
						(7 
						 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						    >> 7))))
			 ? (IData)(vlTOPp->v__DOT__hex2)
			 : (((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					 >> 7))) & 
			     (2 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					 >> 7)))) ? (IData)(vlTOPp->v__DOT__hex3)
			     : (((6 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					     >> 7))) 
				 & (0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					       >> 7))))
				 ? (IData)(vlTOPp->v__DOT__hex4)
				 : (((6 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						 >> 7))) 
				     & (1 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						   >> 7))))
				     ? (IData)(vlTOPp->v__DOT__hex5)
				     : (IData)(vlTOPp->v__DOT__hex6)))))) 
		   & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)))) {
	    vlTOPp->VGA_R = 0xff;
	    vlTOPp->VGA_G = 0;
	    vlTOPp->VGA_B = 0;
	} else {
	    if ((0 != (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment))) {
		vlTOPp->VGA_R = 0x20;
		vlTOPp->VGA_G = 0x20;
		vlTOPp->VGA_B = 0x20;
	    }
	}
    }
}

void VVGA_LED::_sequent__TOP__17(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_sequent__TOP__17\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_id;
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag 
	= vlTOPp->__Vdly__v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_id;
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag 
	= vlTOPp->__Vdly__v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_id;
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag 
	= vlTOPp->__Vdly__v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag;
}

void VVGA_LED::_settle__TOP__18(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_settle__TOP__18\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:2371
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq 
	= ((IData)(vlTOPp->v__DOT__fifo_wr1) & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag)));
    vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq 
	= ((IData)(vlTOPp->v__DOT__fifo_rd1) & (~ (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag)));
    // ALWAYS at altera_mf.v:2371
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq 
	= ((IData)(vlTOPp->v__DOT__fifo_wr2) & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag)));
    vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq 
	= ((IData)(vlTOPp->v__DOT__fifo_rd2) & (~ (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag)));
    // ALWAYS at altera_mf.v:2371
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq 
	= ((IData)(vlTOPp->v__DOT__fifo_wr3) & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag)));
    vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq 
	= ((IData)(vlTOPp->v__DOT__fifo_rd3) & (~ (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag)));
    // ALWAYS at lpm_mux.v:1335
    vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    if ((4 > (IData)(vlTOPp->v__DOT__mux_sel1))) {
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffe & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (1 & (vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
		       (3 & (IData)(vlTOPp->v__DOT__mux_sel1))] 
		       >> (0x1f & ((IData)(vlTOPp->v__DOT__mux_sel1) 
				   << 5)))));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__i = 0x20;
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffd & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (2 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(1) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(1) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)))) 
		       << 1)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffb & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (4 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(2) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(2) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)))) 
		       << 2)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffff7 & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (8 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(3) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(3) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)))) 
		       << 3)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffef & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(4) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(4) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 4)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffdf & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(5) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(5) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 5)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffbf & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(6) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(6) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 6)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffff7f & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(7) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(7) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)))) 
			  << 7)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffeff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(8) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(8) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 8)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffdff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(9) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(9) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 9)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffbff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xa) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xa) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 0xa)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffff7ff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xb) + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xb) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel1) 
						  << 5)))) 
			   << 0xb)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffefff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xc) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xc) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xc)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffdfff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xd) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xd) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xd)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffbfff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xe) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xe) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xe)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffff7fff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xf) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel1) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xf) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					    << 5)))) 
			    << 0xf)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffeffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x10) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x10) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x10)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffdffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x11) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x11) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x11)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffbffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x12) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x12) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x12)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfff7ffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x13) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x13) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					     << 5)))) 
			     << 0x13)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffefffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x14) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x14) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x14)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffdfffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x15) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x15) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x15)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffbfffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x16) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x16) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x16)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xff7fffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x17) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x17) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					      << 5)))) 
			      << 0x17)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfeffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x18) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x18) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x18)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfdffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x19) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x19) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x19)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfbffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1a) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1a) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x1a)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xf7ffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1b) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1b) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel1) 
					       << 5)))) 
			       << 0x1b)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xefffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1c) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1c) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1c)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xdfffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1d) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1d) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1d)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xbfffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1e) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1e) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1e)));
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0x7fffffff & vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1f) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel1) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1f) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel1) 
						<< 5)))) 
				<< 0x1f)));
    } else {
	vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    }
    // ALWAYS at lpm_mux.v:1335
    vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    if ((4 > (IData)(vlTOPp->v__DOT__mux_sel2))) {
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffe & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (1 & (vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
		       (3 & (IData)(vlTOPp->v__DOT__mux_sel2))] 
		       >> (0x1f & ((IData)(vlTOPp->v__DOT__mux_sel2) 
				   << 5)))));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__i = 0x20;
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffd & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (2 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(1) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(1) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)))) 
		       << 1)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffb & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (4 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(2) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(2) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)))) 
		       << 2)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffff7 & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (8 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(3) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(3) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)))) 
		       << 3)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffef & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(4) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(4) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 4)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffdf & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(5) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(5) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 5)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffbf & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(6) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(6) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 6)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffff7f & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(7) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(7) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)))) 
			  << 7)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffeff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(8) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(8) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 8)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffdff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(9) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(9) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 9)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffbff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xa) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xa) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 0xa)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffff7ff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xb) + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xb) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel2) 
						  << 5)))) 
			   << 0xb)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffefff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xc) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xc) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xc)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffdfff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xd) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xd) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xd)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffbfff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xe) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xe) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xe)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffff7fff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xf) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel2) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xf) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					    << 5)))) 
			    << 0xf)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffeffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x10) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x10) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x10)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffdffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x11) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x11) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x11)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffbffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x12) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x12) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x12)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfff7ffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x13) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x13) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					     << 5)))) 
			     << 0x13)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffefffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x14) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x14) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x14)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffdfffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x15) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x15) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x15)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffbfffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x16) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x16) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x16)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xff7fffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x17) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x17) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					      << 5)))) 
			      << 0x17)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfeffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x18) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x18) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x18)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfdffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x19) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x19) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x19)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfbffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1a) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1a) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x1a)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xf7ffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1b) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1b) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel2) 
					       << 5)))) 
			       << 0x1b)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xefffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1c) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1c) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1c)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xdfffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1d) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1d) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1d)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xbfffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1e) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1e) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1e)));
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0x7fffffff & vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1f) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel2) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1f) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel2) 
						<< 5)))) 
				<< 0x1f)));
    } else {
	vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    }
    // ALWAYS at lpm_mux.v:1335
    vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    if ((4 > (IData)(vlTOPp->v__DOT__mux_sel3))) {
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffe & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (1 & (vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
		       (3 & (IData)(vlTOPp->v__DOT__mux_sel3))] 
		       >> (0x1f & ((IData)(vlTOPp->v__DOT__mux_sel3) 
				   << 5)))));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__i = 0x20;
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffd & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (2 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(1) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(1) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)))) 
		       << 1)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffffb & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (4 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(2) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(2) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)))) 
		       << 2)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffff7 & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (8 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			(3 & (((IData)(3) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)) 
			      >> 5))] >> (0x1f & ((IData)(3) 
						  + 
						  ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)))) 
		       << 3)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffef & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(4) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(4) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 4)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffdf & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(5) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(5) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 5)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffffbf & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(6) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(6) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 6)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffff7f & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			   (3 & (((IData)(7) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)) 
				 >> 5))] >> (0x1f & 
					     ((IData)(7) 
					      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)))) 
			  << 7)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffeff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(8) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(8) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 8)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffdff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(9) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						 << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(9) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 9)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffffbff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xa) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xa) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 0xa)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffff7ff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			    (3 & (((IData)(0xb) + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						   << 5)) 
				  >> 5))] >> (0x1f 
					      & ((IData)(0xb) 
						 + 
						 ((IData)(vlTOPp->v__DOT__mux_sel3) 
						  << 5)))) 
			   << 0xb)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffefff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xc) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xc) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xc)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffdfff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xd) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xd) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xd)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffffbfff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xe) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xe) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xe)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffff7fff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			     (3 & (((IData)(0xf) + 
				    ((IData)(vlTOPp->v__DOT__mux_sel3) 
				     << 5)) >> 5))] 
			     >> (0x1f & ((IData)(0xf) 
					 + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					    << 5)))) 
			    << 0xf)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffeffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x10) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x10) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x10)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffdffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x11) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x11) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x11)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfffbffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x12) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x12) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x12)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfff7ffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			      (3 & (((IData)(0x13) 
				     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					<< 5)) >> 5))] 
			      >> (0x1f & ((IData)(0x13) 
					  + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					     << 5)))) 
			     << 0x13)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffefffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x100000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x14) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x14) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x14)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffdfffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x200000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x15) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x15) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x15)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xffbfffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x400000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x16) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x16) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x16)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xff7fffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x800000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
			       (3 & (((IData)(0x17) 
				      + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					 << 5)) >> 5))] 
			       >> (0x1f & ((IData)(0x17) 
					   + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					      << 5)))) 
			      << 0x17)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfeffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x1000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x18) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x18) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x18)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfdffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x2000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x19) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x19) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x19)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xfbffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x4000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1a) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1a) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x1a)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xf7ffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x8000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				(3 & (((IData)(0x1b) 
				       + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					  << 5)) >> 5))] 
				>> (0x1f & ((IData)(0x1b) 
					    + ((IData)(vlTOPp->v__DOT__mux_sel3) 
					       << 5)))) 
			       << 0x1b)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xefffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x10000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1c) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1c) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1c)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xdfffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x20000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1d) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1d) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1d)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0xbfffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x40000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1e) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1e) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1e)));
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result 
	    = ((0x7fffffff & vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result) 
	       | (0x80000000 & ((vlTOPp->v__DOT__megamux1__DOT__sub_wire2[
				 (3 & (((IData)(0x1f) 
					+ ((IData)(vlTOPp->v__DOT__mux_sel3) 
					   << 5)) >> 5))] 
				 >> (0x1f & ((IData)(0x1f) 
					     + ((IData)(vlTOPp->v__DOT__mux_sel3) 
						<< 5)))) 
				<< 0x1f)));
    } else {
	vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result = 0;
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram1.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram2.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram3.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram1.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram2.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
    // ALWAYS at altera_mf.v:5370
    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a) 
	 >= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_a)) {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
	    = ((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a)
	        ? vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a
	        : 0);
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_a)) {
	    VL_WRITEF("Warning : Address pointed at port A is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram3.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev = 0;
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a = 1;
	} else {
	    if ((1 & ((~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a)) 
		      & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1))))) {
		vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a 
		    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at altera_mf.v:4348
    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a;
    // ALWAYS at Packet_Display.sv:148
    vlTOPp->VGA_R = 0;
    vlTOPp->VGA_G = 0;
    vlTOPp->VGA_B = 0;
    if (((((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
		       >> 7))) | (1 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					     >> 7)))) 
	  | (2 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
			>> 7)))) & ((6 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						  >> 7))) 
				    | (3 == (0xf & 
					     (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					      >> 7)))))) {
	if ((0 != ((((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
				 >> 7))) & (0 == (7 
						  & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						     >> 7))))
		     ? (IData)(vlTOPp->v__DOT__hex1)
		     : (((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
				     >> 7))) & (1 == 
						(7 
						 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						    >> 7))))
			 ? (IData)(vlTOPp->v__DOT__hex2)
			 : (((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					 >> 7))) & 
			     (2 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					 >> 7)))) ? (IData)(vlTOPp->v__DOT__hex3)
			     : (((6 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					     >> 7))) 
				 & (0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					       >> 7))))
				 ? (IData)(vlTOPp->v__DOT__hex4)
				 : (((6 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						 >> 7))) 
				     & (1 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						   >> 7))))
				     ? (IData)(vlTOPp->v__DOT__hex5)
				     : (IData)(vlTOPp->v__DOT__hex6)))))) 
		   & (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment)))) {
	    vlTOPp->VGA_R = 0xff;
	    vlTOPp->VGA_G = 0;
	    vlTOPp->VGA_B = 0;
	} else {
	    if ((0 != (IData)(vlTOPp->v__DOT__packet_Display__DOT__segment))) {
		vlTOPp->VGA_R = 0x20;
		vlTOPp->VGA_G = 0x20;
		vlTOPp->VGA_B = 0x20;
	    }
	}
    }
}

void VVGA_LED::_multiclk__TOP__19(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_multiclk__TOP__19\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
}

void VVGA_LED::_multiclk__TOP__20(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_multiclk__TOP__20\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
}

void VVGA_LED::_multiclk__TOP__21(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_multiclk__TOP__21\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
}

void VVGA_LED::_multiclk__TOP__22(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_multiclk__TOP__22\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
}

void VVGA_LED::_multiclk__TOP__23(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_multiclk__TOP__23\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
}

void VVGA_LED::_multiclk__TOP__24(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_multiclk__TOP__24\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5468
    if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_b) {
	if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb 
		= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
		[(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)];
	    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a) 
		 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_b)))) {
		if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
		     == (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a))) {
		    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb 
			= ((0 == ((((((0x44415441 ^ 
				       vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[0]) 
				      | (0x4f4c445f 
					 ^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[1])) 
				     | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[2]) 
				    | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[3]) 
				   | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[4]) 
				  | vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports[5]))
			    ? (((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
				 [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
				 == ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a 
				      & vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a) 
				     | ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
					 [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a)] 
					 & (~ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a)) 
					^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x))) 
				& (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				   == VL_TIME_Q()))
			        ? vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a
			        : vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)])
			    : ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a 
				== VL_TIME_Q()) ? (
						   vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
						   [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)] 
						   ^ vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b)
			        : vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__mem_data
			       [(IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b)]));
		}
	    }
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b 
		= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb;
	}
    } else {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b = 0;
    }
}

void VVGA_LED::_combo__TOP__25(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_combo__TOP__25\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at altera_mf.v:5701
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_b)) {
	vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b)) {
	    VL_WRITEF("Warning : Address pointed at port B is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram1.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b = 1;
	} else {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1)))) {
		vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_b 
		    = vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5701
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_b)) {
	vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b)) {
	    VL_WRITEF("Warning : Address pointed at port B is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram2.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b = 1;
	} else {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1)))) {
		vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_b 
		    = vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5701
    if (((IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
	 >= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_b)) {
	vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
	if (VL_UNLIKELY(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b)) {
	    VL_WRITEF("Warning : Address pointed at port B is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.buffer.ram3.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev) {
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
	    vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b = 1;
	} else {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1)))) {
		vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_b 
		    = vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5701
    if (((IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b) 
	 >= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_b)) {
	vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b)) {
	    VL_WRITEF("Warning : Address pointed at port B is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram1.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev) {
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
	    vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b = 1;
	} else {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1)))) {
		vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_b 
		    = vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5701
    if (((IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b) 
	 >= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_b)) {
	vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b)) {
	    VL_WRITEF("Warning : Address pointed at port B is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram2.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev) {
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
	    vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b = 1;
	} else {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1)))) {
		vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_b 
		    = vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b;
	    }
	}
    }
    // ALWAYS at altera_mf.v:5701
    if (((IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b) 
	 >= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_b)) {
	vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_b = 0;
	if (VL_UNLIKELY(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b)) {
	    VL_WRITEF("Warning : Address pointed at port B is out of bound!\n");
	    VL_WRITEF("Time: %0t  Instance: %Nv.input_ram3.altsyncram_component\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	}
    } else {
	if (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev) {
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev = 0;
	    vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b = 1;
	} else {
	    if ((1 & (~ (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1)))) {
		vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_b 
		    = vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b;
	    }
	}
    }
}

void VVGA_LED::_eval(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_eval\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2 | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x80 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x100 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x200 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a))) {
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x400 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__14(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x800 | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__15(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__16(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x1000 | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__17(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x2000 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a)))) {
	vlTOPp->_multiclk__TOP__19(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x4000 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a)))) {
	vlTOPp->_multiclk__TOP__20(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x8000 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a)))) {
	vlTOPp->_multiclk__TOP__21(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10000 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a)))) {
	vlTOPp->_multiclk__TOP__22(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20000 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a)))) {
	vlTOPp->_multiclk__TOP__23(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40000 | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a)))) {
	vlTOPp->_multiclk__TOP__24(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x80000 | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__25(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->__VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->__VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->__VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__VinpClk__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__VinpClk__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__VinpClk__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__VinpClk__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
}

void VVGA_LED::_eval_initial(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_eval_initial\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1 | vlTOPp->__Vm_traceActivity);
}

void VVGA_LED::final() {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::final\n"); );
    // Variables
    VVGA_LED__Syms* __restrict vlSymsp = this->__VlSymsp;
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVGA_LED::_eval_settle(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_eval_settle\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1 | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlTOPp->_settle__TOP__18(vlSymsp);
    vlTOPp->_combo__TOP__25(vlSymsp);
}

IData VVGA_LED::_change_request(VVGA_LED__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VVGA_LED::_change_request\n"); );
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    __req |= ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a)
	 | (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev)
	 | (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev)
	 | (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2)
	 | (vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)
	 | (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a)
	 | (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev)
	 | (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev)
	 | (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2)
	 | (vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)
	|| (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a)
	 | (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev)
	 | (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev)
	 | (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2)
	 | (vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)
	 | (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a)
	 | (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev)
	 | (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev)
	 | (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2)
	 | (vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)
	|| (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a)
	 | (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev)
	 | (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev)
	 | (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2)
	 | (vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)
	 | (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a)
	 | (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev)
	 | (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev)
	 | (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2)
	 | (vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2));
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a))) VL_PRINTF("	CHANGE: altera_mf.v:3289: v.input_ram1.altsyncram_component.i_write_flag_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3316: v.input_ram1.altsyncram_component.i_outdata_aclr_a_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3317: v.input_ram1.altsyncram_component.i_outdata_aclr_b_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2))) VL_PRINTF("	CHANGE: altera_mf.v:3336: v.input_ram1.altsyncram_component.i_good_to_write_a2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2))) VL_PRINTF("	CHANGE: altera_mf.v:3337: v.input_ram1.altsyncram_component.i_good_to_write_b2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a))) VL_PRINTF("	CHANGE: altera_mf.v:3289: v.input_ram2.altsyncram_component.i_write_flag_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3316: v.input_ram2.altsyncram_component.i_outdata_aclr_a_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3317: v.input_ram2.altsyncram_component.i_outdata_aclr_b_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2))) VL_PRINTF("	CHANGE: altera_mf.v:3336: v.input_ram2.altsyncram_component.i_good_to_write_a2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2))) VL_PRINTF("	CHANGE: altera_mf.v:3337: v.input_ram2.altsyncram_component.i_good_to_write_b2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a))) VL_PRINTF("	CHANGE: altera_mf.v:3289: v.input_ram3.altsyncram_component.i_write_flag_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3316: v.input_ram3.altsyncram_component.i_outdata_aclr_a_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3317: v.input_ram3.altsyncram_component.i_outdata_aclr_b_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2))) VL_PRINTF("	CHANGE: altera_mf.v:3336: v.input_ram3.altsyncram_component.i_good_to_write_a2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2))) VL_PRINTF("	CHANGE: altera_mf.v:3337: v.input_ram3.altsyncram_component.i_good_to_write_b2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a))) VL_PRINTF("	CHANGE: altera_mf.v:3289: v.buffer.ram1.altsyncram_component.i_write_flag_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3316: v.buffer.ram1.altsyncram_component.i_outdata_aclr_a_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3317: v.buffer.ram1.altsyncram_component.i_outdata_aclr_b_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2))) VL_PRINTF("	CHANGE: altera_mf.v:3336: v.buffer.ram1.altsyncram_component.i_good_to_write_a2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2))) VL_PRINTF("	CHANGE: altera_mf.v:3337: v.buffer.ram1.altsyncram_component.i_good_to_write_b2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a))) VL_PRINTF("	CHANGE: altera_mf.v:3289: v.buffer.ram2.altsyncram_component.i_write_flag_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3316: v.buffer.ram2.altsyncram_component.i_outdata_aclr_a_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3317: v.buffer.ram2.altsyncram_component.i_outdata_aclr_b_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2))) VL_PRINTF("	CHANGE: altera_mf.v:3336: v.buffer.ram2.altsyncram_component.i_good_to_write_a2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2))) VL_PRINTF("	CHANGE: altera_mf.v:3337: v.buffer.ram2.altsyncram_component.i_good_to_write_b2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a))) VL_PRINTF("	CHANGE: altera_mf.v:3289: v.buffer.ram3.altsyncram_component.i_write_flag_a\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3316: v.buffer.ram3.altsyncram_component.i_outdata_aclr_a_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev))) VL_PRINTF("	CHANGE: altera_mf.v:3317: v.buffer.ram3.altsyncram_component.i_outdata_aclr_b_prev\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2))) VL_PRINTF("	CHANGE: altera_mf.v:3336: v.buffer.ram3.altsyncram_component.i_good_to_write_a2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 ^ vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2))) VL_PRINTF("	CHANGE: altera_mf.v:3337: v.buffer.ram3.altsyncram_component.i_good_to_write_b2\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2;
    vlTOPp->__Vchglast__TOP__v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2;
    vlTOPp->__Vchglast__TOP__v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2 
	= vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2;
    return __req;
}
