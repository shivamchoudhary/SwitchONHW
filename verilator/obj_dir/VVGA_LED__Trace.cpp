// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVGA_LED__Syms.h"


//======================

void VVGA_LED::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VVGA_LED* t=(VVGA_LED*)userthis;
    VVGA_LED__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VVGA_LED::traceChgThis(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 1))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1)) | (vlTOPp->__Vm_traceActivity 
					    >> 2))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 2))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xb))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 4))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xc))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 5))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xb))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 6))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 6)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xb))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 7))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 7)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xb))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 8))))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 8)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xb))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 9))))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 9)) | (vlTOPp->__Vm_traceActivity 
					    >> 0xb))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0xa))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 0xa)) | (vlTOPp->__Vm_traceActivity 
					      >> 0xb))))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0xb))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0xd))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0xe))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0xf))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0x10))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0x11))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0x12))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 0x13))))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1 & ((vlTOPp->__Vm_traceActivity 
			       >> 2) | (vlTOPp->__Vm_traceActivity 
					>> 4))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x400 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x800 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void VVGA_LED::traceChgThis__2(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+7,(vlTOPp->v__DOT__fifo_out0));
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_b),32);
	vcdp->chgBus  (c+9,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_a),32);
	vcdp->chgBus  (c+10,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a),32);
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b),32);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out),32);
	vcdp->chgBus  (c+13,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x),32);
	vcdp->chgBit  (c+14,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_b));
	vcdp->chgBit  (c+15,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_b));
	vcdp->chgBit  (c+16,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_b));
	vcdp->chgBus  (c+17,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__wa_mult_x),32);
	vcdp->chgBit  (c+18,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse1));
	vcdp->chgBus  (c+19,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_b),32);
	vcdp->chgBit  (c+20,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev));
	vcdp->chgBit  (c+21,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev));
	vcdp->chgArray(c+22,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports),169);
	vcdp->chgQuad (c+28,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_ram_block_type),57);
	vcdp->chgBus  (c+30,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byte_size),32);
	vcdp->chgBit  (c+31,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg));
	vcdp->chgBus  (c+32,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_a),32);
	vcdp->chgBus  (c+33,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_numwords_b),32);
	vcdp->chgBus  (c+34,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
	vcdp->chgBus  (c+35,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i),32);
	vcdp->chgBus  (c+36,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_b),32);
	vcdp->chgBus  (c+37,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_a),32);
	vcdp->chgBus  (c+38,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a),32);
	vcdp->chgBus  (c+39,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b),32);
	vcdp->chgBus  (c+40,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out),32);
	vcdp->chgBus  (c+41,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x),32);
	vcdp->chgBit  (c+42,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_b));
	vcdp->chgBit  (c+43,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_b));
	vcdp->chgBit  (c+44,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_b));
	vcdp->chgBus  (c+45,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__wa_mult_x),32);
	vcdp->chgBit  (c+46,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse1));
	vcdp->chgBus  (c+47,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_b),32);
	vcdp->chgBit  (c+48,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev));
	vcdp->chgBit  (c+49,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev));
	vcdp->chgArray(c+50,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports),169);
	vcdp->chgQuad (c+56,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_ram_block_type),57);
	vcdp->chgBus  (c+58,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byte_size),32);
	vcdp->chgBit  (c+59,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg));
	vcdp->chgBus  (c+60,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_a),32);
	vcdp->chgBus  (c+61,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_numwords_b),32);
	vcdp->chgBus  (c+62,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
	vcdp->chgBus  (c+63,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i),32);
	vcdp->chgBus  (c+64,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_b),32);
	vcdp->chgBus  (c+65,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_a),32);
	vcdp->chgBus  (c+66,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a),32);
	vcdp->chgBus  (c+67,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b),32);
	vcdp->chgBus  (c+68,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out),32);
	vcdp->chgBus  (c+69,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x),32);
	vcdp->chgBit  (c+70,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_b));
	vcdp->chgBit  (c+71,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_b));
	vcdp->chgBit  (c+72,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_b));
	vcdp->chgBus  (c+73,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__wa_mult_x),32);
	vcdp->chgBit  (c+74,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse1));
	vcdp->chgBus  (c+75,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_b),32);
	vcdp->chgBit  (c+76,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev));
	vcdp->chgBit  (c+77,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev));
	vcdp->chgArray(c+78,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports),169);
	vcdp->chgQuad (c+84,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_ram_block_type),57);
	vcdp->chgBus  (c+86,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byte_size),32);
	vcdp->chgBit  (c+87,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg));
	vcdp->chgBus  (c+88,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_a),32);
	vcdp->chgBus  (c+89,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_numwords_b),32);
	vcdp->chgBus  (c+90,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
	vcdp->chgBus  (c+91,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i),32);
	vcdp->chgBit  (c+4,(vlTOPp->v__DOT__fifo_wr1));
	vcdp->chgBit  (c+1,(vlTOPp->v__DOT__fifo_rd1));
	vcdp->chgBit  (c+92,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__stratix_family));
	vcdp->chgBus  (c+93,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__i),32);
	vcdp->chgBit  (c+5,(vlTOPp->v__DOT__fifo_wr2));
	vcdp->chgBit  (c+2,(vlTOPp->v__DOT__fifo_rd2));
	vcdp->chgBit  (c+94,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__stratix_family));
	vcdp->chgBus  (c+95,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__i),32);
	vcdp->chgBit  (c+6,(vlTOPp->v__DOT__fifo_wr3));
	vcdp->chgBit  (c+3,(vlTOPp->v__DOT__fifo_rd3));
	vcdp->chgBit  (c+96,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__stratix_family));
	vcdp->chgBus  (c+97,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__i),32);
	vcdp->chgBus  (c+98,(vlTOPp->v__DOT__fifo_out0),32);
	vcdp->chgBus  (c+99,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_b),32);
	vcdp->chgBus  (c+100,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_a),32);
	vcdp->chgBus  (c+101,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_a),32);
	vcdp->chgBus  (c+102,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b),32);
	vcdp->chgBus  (c+103,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out),32);
	vcdp->chgBus  (c+104,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x),32);
	vcdp->chgBit  (c+105,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_b));
	vcdp->chgBit  (c+106,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_b));
	vcdp->chgBit  (c+107,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_b));
	vcdp->chgBus  (c+108,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__wa_mult_x),32);
	vcdp->chgBit  (c+109,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse1));
	vcdp->chgBus  (c+110,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_b),32);
	vcdp->chgBit  (c+111,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_a_prev));
	vcdp->chgBit  (c+112,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_prev));
	vcdp->chgArray(c+113,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports),169);
	vcdp->chgQuad (c+119,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_ram_block_type),57);
	vcdp->chgBus  (c+121,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byte_size),32);
	vcdp->chgBit  (c+122,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg));
	vcdp->chgBus  (c+123,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_a),32);
	vcdp->chgBus  (c+124,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_numwords_b),32);
	vcdp->chgBus  (c+125,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
	vcdp->chgBus  (c+126,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i),32);
	vcdp->chgBus  (c+127,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_b),32);
	vcdp->chgBus  (c+128,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_a),32);
	vcdp->chgBus  (c+129,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_a),32);
	vcdp->chgBus  (c+130,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b),32);
	vcdp->chgBus  (c+131,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out),32);
	vcdp->chgBus  (c+132,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x),32);
	vcdp->chgBit  (c+133,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_b));
	vcdp->chgBit  (c+134,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_b));
	vcdp->chgBit  (c+135,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_b));
	vcdp->chgBus  (c+136,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__wa_mult_x),32);
	vcdp->chgBit  (c+137,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse1));
	vcdp->chgBus  (c+138,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_b),32);
	vcdp->chgBit  (c+139,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_a_prev));
	vcdp->chgBit  (c+140,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_prev));
	vcdp->chgArray(c+141,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports),169);
	vcdp->chgQuad (c+147,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_ram_block_type),57);
	vcdp->chgBus  (c+149,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byte_size),32);
	vcdp->chgBit  (c+150,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg));
	vcdp->chgBus  (c+151,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_a),32);
	vcdp->chgBus  (c+152,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_numwords_b),32);
	vcdp->chgBus  (c+153,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
	vcdp->chgBus  (c+154,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i),32);
	vcdp->chgBus  (c+155,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_b),32);
	vcdp->chgBus  (c+156,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_a),32);
	vcdp->chgBus  (c+157,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_a),32);
	vcdp->chgBus  (c+158,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b),32);
	vcdp->chgBus  (c+159,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_out),32);
	vcdp->chgBus  (c+160,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_b_x),32);
	vcdp->chgBit  (c+161,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_b));
	vcdp->chgBit  (c+162,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_b));
	vcdp->chgBit  (c+163,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_b));
	vcdp->chgBus  (c+164,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__wa_mult_x),32);
	vcdp->chgBit  (c+165,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse1));
	vcdp->chgBus  (c+166,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_b),32);
	vcdp->chgBit  (c+167,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_a_prev));
	vcdp->chgBit  (c+168,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_prev));
	vcdp->chgArray(c+169,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__cread_during_write_mode_mixed_ports),169);
	vcdp->chgQuad (c+175,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_ram_block_type),57);
	vcdp->chgBus  (c+177,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byte_size),32);
	vcdp->chgBit  (c+178,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken1_b_reg));
	vcdp->chgBus  (c+179,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_a),32);
	vcdp->chgBus  (c+180,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_numwords_b),32);
	vcdp->chgBus  (c+181,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_b),32);
	vcdp->chgBus  (c+182,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i),32);
    }
}

void VVGA_LED::traceChgThis__3(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+183,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_a),32);
	vcdp->chgBus  (c+184,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp_b),32);
	vcdp->chgBit  (c+185,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev));
	vcdp->chgBit  (c+186,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev));
	vcdp->chgBit  (c+187,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a));
	vcdp->chgBit  (c+188,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2));
	vcdp->chgBit  (c+189,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2));
	vcdp->chgBus  (c+190,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_a),32);
	vcdp->chgBus  (c+191,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp_b),32);
	vcdp->chgBit  (c+192,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev));
	vcdp->chgBit  (c+193,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev));
	vcdp->chgBit  (c+194,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a));
	vcdp->chgBit  (c+195,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2));
	vcdp->chgBit  (c+196,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2));
	vcdp->chgBus  (c+197,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_a),32);
	vcdp->chgBus  (c+198,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp_b),32);
	vcdp->chgBit  (c+199,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev));
	vcdp->chgBit  (c+200,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev));
	vcdp->chgBit  (c+201,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a));
	vcdp->chgBit  (c+202,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2));
	vcdp->chgBit  (c+203,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2));
	vcdp->chgBus  (c+204,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_a),32);
	vcdp->chgBus  (c+205,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp_b),32);
	vcdp->chgBit  (c+206,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev));
	vcdp->chgBit  (c+207,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev));
	vcdp->chgBit  (c+208,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a));
	vcdp->chgBit  (c+209,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_a2));
	vcdp->chgBit  (c+210,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2));
	vcdp->chgBus  (c+211,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_a),32);
	vcdp->chgBus  (c+212,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp_b),32);
	vcdp->chgBit  (c+213,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev));
	vcdp->chgBit  (c+214,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev));
	vcdp->chgBit  (c+215,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a));
	vcdp->chgBit  (c+216,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_a2));
	vcdp->chgBit  (c+217,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2));
	vcdp->chgBus  (c+218,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_a),32);
	vcdp->chgBus  (c+219,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp_b),32);
	vcdp->chgBit  (c+220,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_a_prev));
	vcdp->chgBit  (c+221,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_outdata_aclr_b_prev));
	vcdp->chgBit  (c+222,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a));
	vcdp->chgBit  (c+223,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_a2));
	vcdp->chgBit  (c+224,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2));
    }
}

void VVGA_LED::traceChgThis__4(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+225,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a));
	vcdp->chgBit  (c+226,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b));
	vcdp->chgBit  (c+227,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a));
	vcdp->chgBit  (c+228,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b));
	vcdp->chgBit  (c+229,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a));
	vcdp->chgBit  (c+230,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b));
	vcdp->chgBit  (c+231,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a));
	vcdp->chgBit  (c+232,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b));
	vcdp->chgBit  (c+233,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a));
	vcdp->chgBit  (c+234,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b));
	vcdp->chgBit  (c+235,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a));
	vcdp->chgBit  (c+236,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b));
    }
}

void VVGA_LED::traceChgThis__5(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+249,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),32);
	vcdp->chgBus  (c+250,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),32);
	vcdp->chgBit  (c+251,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_a));
	vcdp->chgBit  (c+252,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_a));
	vcdp->chgBit  (c+253,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_write_flag_a));
	vcdp->chgBit  (c+254,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_a));
	vcdp->chgBit  (c+255,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__good_to_go_b));
	vcdp->chgBit  (c+256,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_nmram_write_a));
	vcdp->chgBit  (c+257,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a1));
	vcdp->chgBit  (c+258,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b1));
	vcdp->chgBit  (c+259,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal));
	vcdp->chgBit  (c+260,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal));
	vcdp->chgBit  (c+261,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg));
	vcdp->chgBit  (c+262,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg));
	vcdp->chgBus  (c+263,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),32);
	vcdp->chgBus  (c+264,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),32);
	vcdp->chgBit  (c+265,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_a));
	vcdp->chgBit  (c+266,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_a));
	vcdp->chgBit  (c+267,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_write_flag_a));
	vcdp->chgBit  (c+268,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_a));
	vcdp->chgBit  (c+269,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__good_to_go_b));
	vcdp->chgBit  (c+270,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_nmram_write_a));
	vcdp->chgBit  (c+271,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a1));
	vcdp->chgBit  (c+272,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b1));
	vcdp->chgBit  (c+273,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal));
	vcdp->chgBit  (c+274,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal));
	vcdp->chgBit  (c+275,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg));
	vcdp->chgBit  (c+276,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg));
	vcdp->chgBus  (c+277,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),32);
	vcdp->chgBus  (c+278,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),32);
	vcdp->chgBit  (c+279,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_a));
	vcdp->chgBit  (c+280,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_a));
	vcdp->chgBit  (c+281,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_write_flag_a));
	vcdp->chgBit  (c+282,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_a));
	vcdp->chgBit  (c+283,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__good_to_go_b));
	vcdp->chgBit  (c+284,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_nmram_write_a));
	vcdp->chgBit  (c+285,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a1));
	vcdp->chgBit  (c+286,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b1));
	vcdp->chgBit  (c+287,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal));
	vcdp->chgBit  (c+288,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal));
	vcdp->chgBit  (c+289,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg));
	vcdp->chgBit  (c+290,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg));
	vcdp->chgArray(c+291,(vlTOPp->v__DOT__megamux1__DOT__sub_wire2),128);
	vcdp->chgBus  (c+246,(vlTOPp->v__DOT__mux_sel1),2);
	vcdp->chgBus  (c+247,(vlTOPp->v__DOT__mux_sel2),2);
	vcdp->chgBus  (c+248,(vlTOPp->v__DOT__mux_sel3),2);
	vcdp->chgBit  (c+295,(vlTOPp->v__DOT__scheduler__DOT__write_cycle));
	vcdp->chgBit  (c+296,(vlTOPp->v__DOT__scheduler__DOT__ram_not_empty1));
	vcdp->chgBit  (c+297,(vlTOPp->v__DOT__scheduler__DOT__ram_not_empty2));
	vcdp->chgBit  (c+298,(vlTOPp->v__DOT__scheduler__DOT__ram_not_empty3));
	vcdp->chgBit  (c+299,(vlTOPp->v__DOT__scheduler__DOT__read1));
	vcdp->chgBit  (c+300,(vlTOPp->v__DOT__scheduler__DOT__read2));
	vcdp->chgBit  (c+301,(vlTOPp->v__DOT__scheduler__DOT__read3));
	vcdp->chgBus  (c+237,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_reg_b),32);
	vcdp->chgBus  (c+238,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_reg_b),32);
	vcdp->chgBus  (c+239,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_reg_b),32);
	vcdp->chgBus  (c+240,(vlTOPp->v__DOT__input_ram_rd_add1),12);
	vcdp->chgBus  (c+241,(vlTOPp->v__DOT__input_ram_rd_add2),12);
	vcdp->chgBus  (c+242,(vlTOPp->v__DOT__input_ram_rd_add3),12);
	vcdp->chgBit  (c+302,(vlTOPp->v__DOT__buffer__DOT__read_cycle1));
	vcdp->chgBit  (c+303,(vlTOPp->v__DOT__buffer__DOT__read_cycle2));
	vcdp->chgBit  (c+304,(vlTOPp->v__DOT__buffer__DOT__read_cycle3));
	vcdp->chgBit  (c+243,(vlTOPp->v__DOT__out_ram_wr1));
	vcdp->chgBus  (c+305,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_reg_b),32);
	vcdp->chgBus  (c+308,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),32);
	vcdp->chgBus  (c+309,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),32);
	vcdp->chgBit  (c+310,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_a));
	vcdp->chgBit  (c+311,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_a));
	vcdp->chgBit  (c+312,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_write_flag_a));
	vcdp->chgBit  (c+313,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_a));
	vcdp->chgBit  (c+314,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__good_to_go_b));
	vcdp->chgBit  (c+315,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_nmram_write_a));
	vcdp->chgBit  (c+316,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a1));
	vcdp->chgBit  (c+317,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b1));
	vcdp->chgBit  (c+318,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_a_signal));
	vcdp->chgBit  (c+319,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_force_reread_b_signal));
	vcdp->chgBit  (c+320,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken_a_reg));
	vcdp->chgBit  (c+321,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg));
	vcdp->chgBit  (c+244,(vlTOPp->v__DOT__out_ram_wr2));
	vcdp->chgBus  (c+306,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_reg_b),32);
	vcdp->chgBus  (c+322,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),32);
	vcdp->chgBus  (c+323,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),32);
	vcdp->chgBit  (c+324,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_a));
	vcdp->chgBit  (c+325,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_a));
	vcdp->chgBit  (c+326,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_write_flag_a));
	vcdp->chgBit  (c+327,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_a));
	vcdp->chgBit  (c+328,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__good_to_go_b));
	vcdp->chgBit  (c+329,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_nmram_write_a));
	vcdp->chgBit  (c+330,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a1));
	vcdp->chgBit  (c+331,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b1));
	vcdp->chgBit  (c+332,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_a_signal));
	vcdp->chgBit  (c+333,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_force_reread_b_signal));
	vcdp->chgBit  (c+334,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken_a_reg));
	vcdp->chgBit  (c+335,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg));
	vcdp->chgBit  (c+245,(vlTOPp->v__DOT__out_ram_wr3));
	vcdp->chgBus  (c+307,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_reg_b),32);
	vcdp->chgBus  (c+336,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out),32);
	vcdp->chgBus  (c+337,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_x),32);
	vcdp->chgBit  (c+338,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_a));
	vcdp->chgBit  (c+339,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_a));
	vcdp->chgBit  (c+340,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_write_flag_a));
	vcdp->chgBit  (c+341,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_a));
	vcdp->chgBit  (c+342,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__good_to_go_b));
	vcdp->chgBit  (c+343,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_nmram_write_a));
	vcdp->chgBit  (c+344,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a1));
	vcdp->chgBit  (c+345,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b1));
	vcdp->chgBit  (c+346,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_a_signal));
	vcdp->chgBit  (c+347,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_force_reread_b_signal));
	vcdp->chgBit  (c+348,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken_a_reg));
	vcdp->chgBit  (c+349,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_core_clocken0_b_reg));
    }
}

void VVGA_LED::traceChgThis__6(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+353,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__same_clock_pulse0));
	vcdp->chgBit  (c+354,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__same_clock_pulse0));
	vcdp->chgBit  (c+355,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__same_clock_pulse0));
	vcdp->chgBus  (c+350,((((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
				| (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))
			        ? 0 : vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q)),32);
	vcdp->chgBus  (c+356,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__tmp_q),32);
	vcdp->chgBus  (c+351,((((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
				| (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))
			        ? 0 : vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q)),32);
	vcdp->chgBus  (c+357,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__tmp_q),32);
	vcdp->chgBus  (c+352,((((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
				| (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))
			        ? 0 : vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q)),32);
	vcdp->chgBus  (c+358,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__tmp_q),32);
	vcdp->chgBit  (c+359,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__same_clock_pulse0));
	vcdp->chgBit  (c+360,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__same_clock_pulse0));
	vcdp->chgBit  (c+361,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__same_clock_pulse0));
    }
}

void VVGA_LED::traceChgThis__7(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+362,(vlTOPp->v__DOT__packet_Display__DOT__topCol));
	vcdp->chgBit  (c+363,(vlTOPp->v__DOT__packet_Display__DOT__botCol));
    }
}

void VVGA_LED::traceChgThis__8(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+364,(vlTOPp->v__DOT__packet_Display__DOT__segment),8);
    }
}

void VVGA_LED::traceChgThis__9(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+365,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_address_a),12);
	vcdp->chgBus  (c+366,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_original_data_a),32);
	vcdp->chgBus  (c+367,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
	vcdp->chgBus  (c+368,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_count),32);
	vcdp->chgQuad (c+369,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_write_time_a),64);
    }
}

void VVGA_LED::traceChgThis__10(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+371,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_read_flag_b));
    }
}

void VVGA_LED::traceChgThis__11(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+372,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_address_a),12);
	vcdp->chgBus  (c+373,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_original_data_a),32);
	vcdp->chgBus  (c+374,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
	vcdp->chgBus  (c+375,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_count),32);
	vcdp->chgQuad (c+376,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_write_time_a),64);
    }
}

void VVGA_LED::traceChgThis__12(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+378,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_read_flag_b));
    }
}

void VVGA_LED::traceChgThis__13(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+379,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_address_a),12);
	vcdp->chgBus  (c+380,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_original_data_a),32);
	vcdp->chgBus  (c+381,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
	vcdp->chgBus  (c+382,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_count),32);
	vcdp->chgQuad (c+383,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_write_time_a),64);
    }
}

void VVGA_LED::traceChgThis__14(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+385,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_read_flag_b));
    }
}

void VVGA_LED::traceChgThis__15(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+386,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_address_a),12);
	vcdp->chgBus  (c+387,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_original_data_a),32);
	vcdp->chgBus  (c+388,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
	vcdp->chgBus  (c+389,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_count),32);
	vcdp->chgQuad (c+390,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_write_time_a),64);
    }
}

void VVGA_LED::traceChgThis__16(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+392,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_read_flag_b));
    }
}

void VVGA_LED::traceChgThis__17(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+393,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_address_a),12);
	vcdp->chgBus  (c+394,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_original_data_a),32);
	vcdp->chgBus  (c+395,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
	vcdp->chgBus  (c+396,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_count),32);
	vcdp->chgQuad (c+397,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_write_time_a),64);
    }
}

void VVGA_LED::traceChgThis__18(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+399,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_read_flag_b));
    }
}

void VVGA_LED::traceChgThis__19(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+400,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_address_a),12);
	vcdp->chgBus  (c+401,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_original_data_a),32);
	vcdp->chgBus  (c+402,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_aclr_flag_a),32);
	vcdp->chgBus  (c+403,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_count),32);
	vcdp->chgQuad (c+404,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_write_time_a),64);
    }
}

void VVGA_LED::traceChgThis__20(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+406,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_read_flag_b));
    }
}

void VVGA_LED::traceChgThis__21(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+422,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_data_reg_a),32);
	vcdp->chgBus  (c+423,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),32);
	vcdp->chgBus  (c+424,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_a),12);
	vcdp->chgBus  (c+425,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_reg_b),12);
	vcdp->chgBit  (c+426,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_wren_reg_a));
	vcdp->chgBit  (c+427,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_rden_reg_b));
	vcdp->chgBus  (c+428,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_data_reg_a),32);
	vcdp->chgBus  (c+429,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),32);
	vcdp->chgBus  (c+430,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_a),12);
	vcdp->chgBus  (c+431,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_reg_b),12);
	vcdp->chgBit  (c+432,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_wren_reg_a));
	vcdp->chgBit  (c+433,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_rden_reg_b));
	vcdp->chgBus  (c+434,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_data_reg_a),32);
	vcdp->chgBus  (c+435,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),32);
	vcdp->chgBus  (c+436,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_a),12);
	vcdp->chgBus  (c+437,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_reg_b),12);
	vcdp->chgBit  (c+438,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_wren_reg_a));
	vcdp->chgBit  (c+439,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_rden_reg_b));
	vcdp->chgBus  (c+407,((((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
				| (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))
			        ? 0 : (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id))),2);
	vcdp->chgBit  (c+413,(((~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag))));
	vcdp->chgBit  (c+410,(((~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag))));
	vcdp->chgBit  (c+440,(((~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_full_flag))));
	vcdp->chgBit  (c+441,(((~ ((IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_empty_flag))));
	vcdp->chgBus  (c+442,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[0]),32);
	vcdp->chgBus  (c+443,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[1]),32);
	vcdp->chgBus  (c+444,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[2]),32);
	vcdp->chgBus  (c+445,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[3]),32);
	vcdp->chgBus  (c+446,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__mem_data[4]),32);
	vcdp->chgBus  (c+447,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__count_id),2);
	vcdp->chgBus  (c+448,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__read_id),2);
	vcdp->chgBit  (c+449,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_rreq));
	vcdp->chgBit  (c+450,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__valid_wreq));
	vcdp->chgBit  (c+451,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__full_flag));
	vcdp->chgBit  (c+452,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_flag));
	vcdp->chgBit  (c+453,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_full_flag));
	vcdp->chgBit  (c+454,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__almost_empty_flag));
	vcdp->chgBit  (c+455,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x));
	vcdp->chgBit  (c+456,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__set_q_to_x_by_empty));
	vcdp->chgBus  (c+457,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__wrt_count),32);
	vcdp->chgBit  (c+458,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency1));
	vcdp->chgBit  (c+459,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__empty_latency2));
	vcdp->chgBus  (c+408,((((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
				| (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))
			        ? 0 : (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id))),2);
	vcdp->chgBit  (c+414,(((~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag))));
	vcdp->chgBit  (c+411,(((~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag))));
	vcdp->chgBit  (c+460,(((~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_full_flag))));
	vcdp->chgBit  (c+461,(((~ ((IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_empty_flag))));
	vcdp->chgBus  (c+462,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[0]),32);
	vcdp->chgBus  (c+463,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[1]),32);
	vcdp->chgBus  (c+464,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[2]),32);
	vcdp->chgBus  (c+465,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[3]),32);
	vcdp->chgBus  (c+466,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__mem_data[4]),32);
	vcdp->chgBus  (c+467,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__count_id),2);
	vcdp->chgBus  (c+468,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__read_id),2);
	vcdp->chgBit  (c+469,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_rreq));
	vcdp->chgBit  (c+470,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__valid_wreq));
	vcdp->chgBit  (c+471,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__full_flag));
	vcdp->chgBit  (c+472,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_flag));
	vcdp->chgBit  (c+473,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_full_flag));
	vcdp->chgBit  (c+474,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__almost_empty_flag));
	vcdp->chgBit  (c+475,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x));
	vcdp->chgBit  (c+476,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__set_q_to_x_by_empty));
	vcdp->chgBus  (c+477,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__wrt_count),32);
	vcdp->chgBit  (c+478,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency1));
	vcdp->chgBit  (c+479,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__empty_latency2));
	vcdp->chgBus  (c+409,((((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
				| (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))
			        ? 0 : (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id))),2);
	vcdp->chgBit  (c+415,(((~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag))));
	vcdp->chgBit  (c+412,(((~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag))));
	vcdp->chgBit  (c+480,(((~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_full_flag))));
	vcdp->chgBit  (c+481,(((~ ((IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x) 
				   | (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty))) 
			       & (IData)(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_empty_flag))));
	vcdp->chgBus  (c+482,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[0]),32);
	vcdp->chgBus  (c+483,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[1]),32);
	vcdp->chgBus  (c+484,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[2]),32);
	vcdp->chgBus  (c+485,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[3]),32);
	vcdp->chgBus  (c+486,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__mem_data[4]),32);
	vcdp->chgBus  (c+487,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__count_id),2);
	vcdp->chgBus  (c+488,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__read_id),2);
	vcdp->chgBit  (c+489,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_rreq));
	vcdp->chgBit  (c+490,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__valid_wreq));
	vcdp->chgBit  (c+491,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__full_flag));
	vcdp->chgBit  (c+492,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_flag));
	vcdp->chgBit  (c+493,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_full_flag));
	vcdp->chgBit  (c+494,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__almost_empty_flag));
	vcdp->chgBit  (c+495,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x));
	vcdp->chgBit  (c+496,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__set_q_to_x_by_empty));
	vcdp->chgBus  (c+497,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__wrt_count),32);
	vcdp->chgBit  (c+498,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency1));
	vcdp->chgBit  (c+499,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__empty_latency2));
	vcdp->chgBus  (c+500,(vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__i),32);
	vcdp->chgBus  (c+501,(vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__i),32);
	vcdp->chgBus  (c+502,(vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__i),32);
	vcdp->chgBus  (c+416,(vlTOPp->v__DOT__input_ram_wr_add1),12);
	vcdp->chgBus  (c+417,(vlTOPp->v__DOT__input_ram_wr_add2),12);
	vcdp->chgBus  (c+418,(vlTOPp->v__DOT__input_ram_wr_add3),12);
	vcdp->chgBit  (c+503,(vlTOPp->v__DOT__buffer__DOT__ram_rd1));
	vcdp->chgBus  (c+419,(vlTOPp->v__DOT__megamux1__DOT__LPM_MUX_component__DOT__tmp_result),32);
	vcdp->chgBus  (c+506,(vlTOPp->v__DOT__buffer__DOT__ram_wr_add1),12);
	vcdp->chgBus  (c+509,(vlTOPp->v__DOT__buffer__DOT__ram_rd_add1),12);
	vcdp->chgBus  (c+512,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_data_reg_a),32);
	vcdp->chgBus  (c+513,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),32);
	vcdp->chgBus  (c+514,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_a),12);
	vcdp->chgBus  (c+515,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_reg_b),12);
	vcdp->chgBit  (c+516,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_wren_reg_a));
	vcdp->chgBit  (c+517,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_rden_reg_b));
	vcdp->chgBit  (c+504,(vlTOPp->v__DOT__buffer__DOT__ram_rd2));
	vcdp->chgBus  (c+420,(vlTOPp->v__DOT__megamux2__DOT__LPM_MUX_component__DOT__tmp_result),32);
	vcdp->chgBus  (c+507,(vlTOPp->v__DOT__buffer__DOT__ram_wr_add2),12);
	vcdp->chgBus  (c+510,(vlTOPp->v__DOT__buffer__DOT__ram_rd_add2),12);
	vcdp->chgBus  (c+518,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_data_reg_a),32);
	vcdp->chgBus  (c+519,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),32);
	vcdp->chgBus  (c+520,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_a),12);
	vcdp->chgBus  (c+521,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_reg_b),12);
	vcdp->chgBit  (c+522,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_wren_reg_a));
	vcdp->chgBit  (c+523,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_rden_reg_b));
	vcdp->chgBit  (c+505,(vlTOPp->v__DOT__buffer__DOT__ram_rd3));
	vcdp->chgBus  (c+421,(vlTOPp->v__DOT__megamux3__DOT__LPM_MUX_component__DOT__tmp_result),32);
	vcdp->chgBus  (c+508,(vlTOPp->v__DOT__buffer__DOT__ram_wr_add3),12);
	vcdp->chgBus  (c+511,(vlTOPp->v__DOT__buffer__DOT__ram_rd_add3),12);
	vcdp->chgBus  (c+524,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_data_reg_a),32);
	vcdp->chgBus  (c+525,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a),32);
	vcdp->chgBus  (c+526,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_a),12);
	vcdp->chgBus  (c+527,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_reg_b),12);
	vcdp->chgBit  (c+528,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_wren_reg_a));
	vcdp->chgBit  (c+529,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_rden_reg_b));
    }
}

void VVGA_LED::traceChgThis__22(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+530,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_id),2);
	vcdp->chgBit  (c+531,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_flag));
	vcdp->chgBus  (c+532,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_id),2);
	vcdp->chgBit  (c+533,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_flag));
	vcdp->chgBus  (c+534,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_id),2);
	vcdp->chgBit  (c+535,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_flag));
    }
}

void VVGA_LED::traceChgThis__23(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+536,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wb),32);
	vcdp->chgBus  (c+537,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b),32);
    }
}

void VVGA_LED::traceChgThis__24(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+538,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wb),32);
	vcdp->chgBus  (c+539,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b),32);
    }
}

void VVGA_LED::traceChgThis__25(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+540,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wb),32);
	vcdp->chgBus  (c+541,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b),32);
    }
}

void VVGA_LED::traceChgThis__26(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+542,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wb),32);
	vcdp->chgBus  (c+543,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_tmp2_b),32);
    }
}

void VVGA_LED::traceChgThis__27(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+544,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wb),32);
	vcdp->chgBus  (c+545,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_tmp2_b),32);
    }
}

void VVGA_LED::traceChgThis__28(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+546,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wb),32);
	vcdp->chgBus  (c+547,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_tmp2_b),32);
    }
}

void VVGA_LED::traceChgThis__29(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+557,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b),32);
	vcdp->chgBit  (c+558,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag));
	vcdp->chgBus  (c+559,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b),32);
	vcdp->chgBit  (c+560,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag));
	vcdp->chgBus  (c+561,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b),32);
	vcdp->chgBit  (c+562,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag));
	vcdp->chgBit  (c+548,(vlTOPp->v__DOT__input_ram_rden1));
	vcdp->chgBit  (c+549,(vlTOPp->v__DOT__input_ram_rden2));
	vcdp->chgBit  (c+550,(vlTOPp->v__DOT__input_ram_rden3));
	vcdp->chgBus  (c+563,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b),32);
	vcdp->chgBit  (c+564,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_address_aclr_b_flag));
	vcdp->chgBus  (c+565,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b),32);
	vcdp->chgBit  (c+566,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_address_aclr_b_flag));
	vcdp->chgBus  (c+567,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_byteena_mask_reg_a_out_b),32);
	vcdp->chgBit  (c+568,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_address_aclr_b_flag));
	vcdp->chgBus  (c+551,(vlTOPp->v__DOT__hex1),8);
	vcdp->chgBus  (c+552,(vlTOPp->v__DOT__hex2),8);
	vcdp->chgBus  (c+553,(vlTOPp->v__DOT__hex3),8);
	vcdp->chgBus  (c+554,(vlTOPp->v__DOT__hex4),8);
	vcdp->chgBus  (c+555,(vlTOPp->v__DOT__hex5),8);
	vcdp->chgBus  (c+556,(vlTOPp->v__DOT__hex6),8);
    }
}

void VVGA_LED::traceChgThis__30(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+569,((((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					    >> 7))) 
				& (0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					      >> 7))))
			        ? (IData)(vlTOPp->v__DOT__hex1)
			        : (((3 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						>> 7))) 
				    & (1 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						  >> 7))))
				    ? (IData)(vlTOPp->v__DOT__hex2)
				    : (((3 == (7 & 
					       (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						>> 7))) 
					& (2 == (7 
						 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						    >> 7))))
				        ? (IData)(vlTOPp->v__DOT__hex3)
				        : (((6 == (7 
						   & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						      >> 7))) 
					    & (0 == 
					       (7 & 
						(vlTOPp->v__DOT__packet_Display__DOT__vcount 
						 >> 7))))
					    ? (IData)(vlTOPp->v__DOT__hex4)
					    : (((6 
						 == 
						 (7 
						  & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						     >> 7))) 
						& (1 
						   == 
						   (7 
						    & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
						       >> 7))))
					        ? (IData)(vlTOPp->v__DOT__hex5)
					        : (IData)(vlTOPp->v__DOT__hex6))))))),8);
    }
}

void VVGA_LED::traceChgThis__31(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+570,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_q_output_latch),32);
	vcdp->chgBus  (c+571,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_q_output_latch),32);
	vcdp->chgBus  (c+572,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_q_output_latch),32);
	vcdp->chgBus  (c+573,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_q_output_latch),32);
	vcdp->chgBus  (c+574,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_q_output_latch),32);
	vcdp->chgBus  (c+575,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_q_output_latch),32);
    }
}

void VVGA_LED::traceChgThis__32(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+576,(vlTOPp->v__DOT__packet_Display__DOT__hcount),26);
	vcdp->chgBit  (c+577,((0x63f == vlTOPp->v__DOT__packet_Display__DOT__hcount)));
	vcdp->chgBus  (c+578,(vlTOPp->v__DOT__packet_Display__DOT__vcount),26);
	vcdp->chgBit  (c+579,((0x20c == vlTOPp->v__DOT__packet_Display__DOT__vcount)));
	vcdp->chgBit  (c+580,(((((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					     >> 7))) 
				 | (1 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					       >> 7)))) 
				| (2 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
					      >> 7)))) 
			       & ((6 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						>> 7))) 
				  | (3 == (0xf & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
						  >> 7)))))));
	vcdp->chgBus  (c+581,((7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
				    >> 4))),3);
	vcdp->chgBus  (c+582,((0xf & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
				      >> 3))),4);
	vcdp->chgBit  (c+583,((3 != (3 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 5)))));
	vcdp->chgBit  (c+584,((0 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 4)))));
	vcdp->chgBit  (c+585,((5 == (7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
					  >> 4)))));
	vcdp->chgBus  (c+586,((7 & (vlTOPp->v__DOT__packet_Display__DOT__hcount 
				    >> 7))),3);
	vcdp->chgBus  (c+587,((7 & (vlTOPp->v__DOT__packet_Display__DOT__vcount 
				    >> 7))),3);
    }
}

void VVGA_LED::traceChgThis__33(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+588,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__temp_wa),32);
	vcdp->chgBus  (c+589,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i5),32);
	vcdp->chgBus  (c+590,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low),32);
	vcdp->chgBus  (c+591,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low),32);
	vcdp->chgBus  (c+592,(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__port_b_bit_count_high),32);
    }
}

void VVGA_LED::traceChgThis__34(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+593,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__temp_wa),32);
	vcdp->chgBus  (c+594,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i5),32);
	vcdp->chgBus  (c+595,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low),32);
	vcdp->chgBus  (c+596,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low),32);
	vcdp->chgBus  (c+597,(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__port_b_bit_count_high),32);
    }
}

void VVGA_LED::traceChgThis__35(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+598,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__temp_wa),32);
	vcdp->chgBus  (c+599,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i5),32);
	vcdp->chgBus  (c+600,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low),32);
	vcdp->chgBus  (c+601,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low),32);
	vcdp->chgBus  (c+602,(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__port_b_bit_count_high),32);
    }
}

void VVGA_LED::traceChgThis__36(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+603,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__temp_wa),32);
	vcdp->chgBus  (c+604,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i5),32);
	vcdp->chgBus  (c+605,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_a_bit_count_low),32);
	vcdp->chgBus  (c+606,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_low),32);
	vcdp->chgBus  (c+607,(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__port_b_bit_count_high),32);
    }
}

void VVGA_LED::traceChgThis__37(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+608,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__temp_wa),32);
	vcdp->chgBus  (c+609,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i5),32);
	vcdp->chgBus  (c+610,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_a_bit_count_low),32);
	vcdp->chgBus  (c+611,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_low),32);
	vcdp->chgBus  (c+612,(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__port_b_bit_count_high),32);
    }
}

void VVGA_LED::traceChgThis__38(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+613,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__temp_wa),32);
	vcdp->chgBus  (c+614,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i5),32);
	vcdp->chgBus  (c+615,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_a_bit_count_low),32);
	vcdp->chgBus  (c+616,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_low),32);
	vcdp->chgBus  (c+617,(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__port_b_bit_count_high),32);
    }
}

void VVGA_LED::traceChgThis__39(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+621,(vlTOPp->v__DOT__input_ram_wren1));
	vcdp->chgBus  (c+618,(vlTOPp->v__DOT__input_ram_wr_in1),32);
	vcdp->chgBit  (c+622,(vlTOPp->v__DOT__input_ram_wren2));
	vcdp->chgBus  (c+619,(vlTOPp->v__DOT__input_ram_wr_in2),32);
	vcdp->chgBit  (c+623,(vlTOPp->v__DOT__input_ram_wren3));
	vcdp->chgBus  (c+620,(vlTOPp->v__DOT__input_ram_wr_in3),32);
	vcdp->chgBus  (c+624,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency1),2);
	vcdp->chgBus  (c+625,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__write_latency2),2);
	vcdp->chgBus  (c+626,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_ready),4);
	vcdp->chgBus  (c+627,(vlTOPp->v__DOT__fifo1__DOT__scfifo_component__DOT__data_shown),4);
	vcdp->chgBus  (c+628,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency1),2);
	vcdp->chgBus  (c+629,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__write_latency2),2);
	vcdp->chgBus  (c+630,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_ready),4);
	vcdp->chgBus  (c+631,(vlTOPp->v__DOT__fifo2__DOT__scfifo_component__DOT__data_shown),4);
	vcdp->chgBus  (c+632,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency1),2);
	vcdp->chgBus  (c+633,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__write_latency2),2);
	vcdp->chgBus  (c+634,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_ready),4);
	vcdp->chgBus  (c+635,(vlTOPp->v__DOT__fifo3__DOT__scfifo_component__DOT__data_shown),4);
    }
}

void VVGA_LED::traceChgThis__40(VVGA_LED__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VVGA_LED* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+638,(vlTOPp->writedata),32);
	vcdp->chgBit  (c+639,(vlTOPp->write));
	vcdp->chgBit  (c+652,((1 & ((~ (IData)(vlTOPp->clk)) 
				    | (IData)(vlTOPp->v__DOT__input_ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)))));
	vcdp->chgBit  (c+653,((1 & ((~ (IData)(vlTOPp->clk)) 
				    | (IData)(vlTOPp->v__DOT__input_ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)))));
	vcdp->chgBit  (c+654,((1 & ((~ (IData)(vlTOPp->clk)) 
				    | (IData)(vlTOPp->v__DOT__input_ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)))));
	vcdp->chgBit  (c+641,(vlTOPp->chipselect));
	vcdp->chgBit  (c+640,(vlTOPp->read));
	vcdp->chgBus  (c+642,(vlTOPp->address),4);
	vcdp->chgBus  (c+651,(vlTOPp->readdata),32);
	vcdp->chgBit  (c+655,((1 & ((~ (IData)(vlTOPp->clk)) 
				    | (IData)(vlTOPp->v__DOT__buffer__DOT__ram1__DOT__altsyncram_component__DOT__i_good_to_write_b2)))));
	vcdp->chgBit  (c+656,((1 & ((~ (IData)(vlTOPp->clk)) 
				    | (IData)(vlTOPp->v__DOT__buffer__DOT__ram2__DOT__altsyncram_component__DOT__i_good_to_write_b2)))));
	vcdp->chgBit  (c+657,((1 & ((~ (IData)(vlTOPp->clk)) 
				    | (IData)(vlTOPp->v__DOT__buffer__DOT__ram3__DOT__altsyncram_component__DOT__i_good_to_write_b2)))));
	vcdp->chgBit  (c+636,(vlTOPp->clk));
	vcdp->chgBit  (c+637,(vlTOPp->reset));
	vcdp->chgBus  (c+643,(vlTOPp->VGA_R),8);
	vcdp->chgBus  (c+644,(vlTOPp->VGA_G),8);
	vcdp->chgBus  (c+645,(vlTOPp->VGA_B),8);
	vcdp->chgBit  (c+646,(vlTOPp->VGA_CLK));
	vcdp->chgBit  (c+647,(vlTOPp->VGA_HS));
	vcdp->chgBit  (c+648,(vlTOPp->VGA_VS));
	vcdp->chgBit  (c+649,(vlTOPp->VGA_BLANK_n));
	vcdp->chgBit  (c+650,(vlTOPp->VGA_SYNC_n));
    }
}
