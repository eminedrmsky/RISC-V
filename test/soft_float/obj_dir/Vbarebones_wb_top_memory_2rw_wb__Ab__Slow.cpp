// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarebones_wb_top.h for the primary calling header

#include "Vbarebones_wb_top_memory_2rw_wb__Ab.h"
#include "Vbarebones_wb_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vbarebones_wb_top_memory_2rw_wb__Ab) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vbarebones_wb_top_memory_2rw_wb__Ab::__Vconfigure(Vbarebones_wb_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vbarebones_wb_top_memory_2rw_wb__Ab::~Vbarebones_wb_top_memory_2rw_wb__Ab() {
}

void Vbarebones_wb_top_memory_2rw_wb__Ab::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbarebones_wb_top_memory_2rw_wb__Ab::_ctor_var_reset\n"); );
    // Body
    __PVT__port0_wb_cyc_i = VL_RAND_RESET_I(1);
    __PVT__port0_wb_stb_i = VL_RAND_RESET_I(1);
    __PVT__port0_wb_we_i = VL_RAND_RESET_I(1);
    __PVT__port0_wb_adr_i = VL_RAND_RESET_I(32);
    __PVT__port0_wb_dat_i = VL_RAND_RESET_I(32);
    __PVT__port0_wb_sel_i = VL_RAND_RESET_I(4);
    __PVT__port0_wb_stall_o = VL_RAND_RESET_I(1);
    __PVT__port0_wb_ack_o = VL_RAND_RESET_I(1);
    __PVT__port0_wb_dat_o = VL_RAND_RESET_I(32);
    __PVT__port0_wb_err_o = VL_RAND_RESET_I(1);
    __PVT__port0_wb_rst_i = VL_RAND_RESET_I(1);
    __PVT__port0_wb_clk_i = VL_RAND_RESET_I(1);
    __PVT__port1_wb_cyc_i = VL_RAND_RESET_I(1);
    __PVT__port1_wb_stb_i = VL_RAND_RESET_I(1);
    __PVT__port1_wb_we_i = VL_RAND_RESET_I(1);
    __PVT__port1_wb_adr_i = VL_RAND_RESET_I(32);
    __PVT__port1_wb_dat_i = VL_RAND_RESET_I(32);
    __PVT__port1_wb_sel_i = VL_RAND_RESET_I(4);
    __PVT__port1_wb_stall_o = VL_RAND_RESET_I(1);
    __PVT__port1_wb_ack_o = VL_RAND_RESET_I(1);
    __PVT__port1_wb_dat_o = VL_RAND_RESET_I(32);
    __PVT__port1_wb_err_o = VL_RAND_RESET_I(1);
    __PVT__port1_wb_rst_i = VL_RAND_RESET_I(1);
    __PVT__port1_wb_clk_i = VL_RAND_RESET_I(1);
    __PVT__dout0 = VL_RAND_RESET_I(32);
    __PVT__dout1 = VL_RAND_RESET_I(32);
    __PVT__port0_ack = VL_RAND_RESET_I(1);
    __PVT__port1_ack = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
