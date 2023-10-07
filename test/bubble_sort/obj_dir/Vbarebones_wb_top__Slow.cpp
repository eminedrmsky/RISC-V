// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarebones_wb_top.h for the primary calling header

#include "Vbarebones_wb_top.h"
#include "Vbarebones_wb_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vbarebones_wb_top) {
    Vbarebones_wb_top__Syms* __restrict vlSymsp = __VlSymsp = new Vbarebones_wb_top__Syms(this, name());
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(barebones_wb_top, Vbarebones_wb_top_barebones_wb_top);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbarebones_wb_top::__Vconfigure(Vbarebones_wb_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vbarebones_wb_top::~Vbarebones_wb_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vbarebones_wb_top::_eval_initial(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_eval_initial\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__reset_i = vlTOPp->reset_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst 
        = vlTOPp->__VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst;
    vlTOPp->__Vclklast__TOP__barebones_wb_top____Vcellinp__mtime_regs__wb_clk_i 
        = vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i;
}

void Vbarebones_wb_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::final\n"); );
    // Variables
    Vbarebones_wb_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbarebones_wb_top::_eval_settle(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_eval_settle\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top._settle__TOP__barebones_wb_top__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void Vbarebones_wb_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarebones_wb_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    reset_i = VL_RAND_RESET_I(1);
    meip_i = VL_RAND_RESET_I(1);
    fast_irq_i = VL_RAND_RESET_I(16);
    irq_ack_o = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__barebones_wb_top____PVT__mtime_regs__DOT__rst = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port1_wb_rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top____Vcellinp__memory__port0_wb_rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top____Vcellinp__debug_if__wb_rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__barebones_wb_top__mtime_regs__DOT__rst = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<7; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
