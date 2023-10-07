// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarebones_wb_top.h for the primary calling header

#include "Vbarebones_wb_top_barebones_wb_top.h"
#include "Vbarebones_wb_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__2(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__2\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v3;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v3;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v3;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v1;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v2;
    SData/*15:0*/ __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v3;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__csr_reg_out;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
    IData/*31:0*/ __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
    // Body
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4 = 0U;
    __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
    __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
    __Vdly__core0__DOT__core0__DOT__csr_reg_out = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out;
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__i = 0x20U;
    }
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count)
                ? (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)))
                : 0U);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state) 
               & 1U);
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state = 0U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [0U];
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0 = 1U;
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v1 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [1U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v2 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [2U];
        __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v3 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH
            [3U];
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4 = 1U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc = 0U;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc = 0U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en) {
                __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                    = ((1U & __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q) 
                       | (0xfffffffeU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                                         << 1U)));
                __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                    = ((0xfffffffeU & __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q) 
                       | (1U & (~ (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
                                           >> 0x20U)))));
            } else {
                __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
            }
        } else {
            __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q = 0U;
        }
    } else {
        __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q = 0U;
    }
    if (vlTOPp->reset_i) {
        __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start)
                ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en)
                    ? ((1U & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
                                      >> 0x20U))) ? vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1
                        : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp))
                    : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)
                : 0U);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay) 
               & 1U);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits 
            = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                ? 0U : (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_misaligned 
            = (((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)) 
                & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned)) 
               & 1U);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy 
            = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush)) 
                | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy)) 
               & 1U);
    } else {
        __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_misaligned = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy = 0U;
    }
    if (vlTOPp->reset_i) {
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
            = ((0xfffff7ffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
               | ((IData)(vlTOPp->meip_i) << 0xbU));
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
            = ((0xffffff7fU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
               | (0x80U & ((~ (((IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                                         >> 0x20U)) 
                                < (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                           >> 0x20U))) 
                               | (((IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                                            >> 0x20U)) 
                                   == (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                               >> 0x20U))) 
                                  & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime) 
                                     < (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp))))) 
                           << 7U)));
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
            = (0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip);
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x10U) & (0x10U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfffeffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x10000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x10U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfffeffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x10000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x11U) & (0x11U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfffdffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x20000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x11U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfffdffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x20000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x12U) & (0x12U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfffbffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x40000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x12U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfffbffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x40000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x13U) & (0x13U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfff7ffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x80000U & ((IData)(vlTOPp->fast_irq_i) 
                                  << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x13U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfff7ffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x80000U & ((IData)(vlTOPp->fast_irq_i) 
                                      << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x14U) & (0x14U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xffefffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x100000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x14U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xffefffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x100000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x15U) & (0x15U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xffdfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x200000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x15U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xffdfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x200000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x16U) & (0x16U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xffbfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x400000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x16U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xffbfffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x400000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x17U) & (0x17U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xff7fffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x800000U & ((IData)(vlTOPp->fast_irq_i) 
                                   << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x17U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xff7fffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x800000U & ((IData)(vlTOPp->fast_irq_i) 
                                       << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x18U) & (0x18U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfeffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x1000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x18U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfeffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x1000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x19U) & (0x19U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfdffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x2000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x19U)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfdffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x2000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1aU) & (0x1aU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xfbffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x4000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1aU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xfbffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x4000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1bU) & (0x1bU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xf7ffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x8000000U & ((IData)(vlTOPp->fast_irq_i) 
                                    << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1bU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xf7ffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x8000000U & ((IData)(vlTOPp->fast_irq_i) 
                                        << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1cU) & (0x1cU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xefffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x10000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1cU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xefffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x10000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1dU) & (0x1dU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xdfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x20000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1dU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xdfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x20000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1eU) & (0x1eU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0xbfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x40000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1eU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0xbfffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x40000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
        if (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
              >> 0x1fU) & (0x1fU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)))) {
            __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                = ((0x7fffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                   | (0x80000000U & ((IData)(vlTOPp->fast_irq_i) 
                                     << 0x10U)));
        } else {
            if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                          >> 0x1fU)))) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                    = ((0x7fffffffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
                       | (0x80000000U & ((IData)(vlTOPp->fast_irq_i) 
                                         << 0x10U)));
            }
        }
    } else {
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_data2 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX)
            : 0U);
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                = ((0xffffffff00000000ULL & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB) 
                   | (IData)((IData)(((0x20000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                       ? ((0x100000U 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                           ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                           : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s)
                                       : ((0x80000U 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                           ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                           : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s)))));
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                = ((0xffffffffULL & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB) 
                   | ((QData)((IData)(((0x20000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                        ? ((0x100000U 
                                            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s)
                                        : ((0x80000U 
                                            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                            ? ((0x40000U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s)
                                            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s)))) 
                      << 0x20U));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB = 0ULL;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 
                    = ((0U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2))
                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                       [vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2]);
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 
                        = ((0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0x14U)))
                            ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                           [(0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 0x14U))]);
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2 = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 
                    = ((0U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1))
                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                       [vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1]);
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 
                        = ((0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0xfU)))
                            ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank
                           [(0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 0xfU))]);
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1 = 0U;
    }
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__memout);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout);
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout = 0U;
    }
    if (vlTOPp->reset_i) {
        if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = ((0xffffff7fU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                       | (0x80U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                   << 4U)));
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = (0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
            }
        } else {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret) {
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = ((0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                       | (8U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                >> 4U)));
                __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                    = (0x80U | __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
            } else {
                if ((0x300U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                        = ((0xfffffff7U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                           | (8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                    __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                        = ((0xffffff7fU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus) 
                           | (0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                }
            }
        }
    } else {
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
            = (0x1fffU & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
            = (0xfffff800U & __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
        __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
            = (0x1800U | __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus);
    }
    __Vdly__core0__DOT__core0__DOT__csr_reg_out = ((IData)(vlTOPp->reset_i)
                                                    ? 
                                                   ((0x300U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x14U)))
                                                     ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus
                                                     : 
                                                    ((0x304U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0x14U)))
                                                      ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x14U)))
                                                       ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec
                                                       : 
                                                      ((0x340U 
                                                        == 
                                                        (0xfffU 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0x14U)))
                                                        ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch
                                                        : 
                                                       ((0x341U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x14U)))
                                                         ? 
                                                        (0xfffffffcU 
                                                         & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc)
                                                         : 
                                                        ((0x342U 
                                                          == 
                                                          (0xfffU 
                                                           & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              >> 0x14U)))
                                                          ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause
                                                          : 
                                                         ((0x344U 
                                                           == 
                                                           (0xfffU 
                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 0x14U)))
                                                           ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip
                                                           : 0U)))))))
                                                    : 0U);
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg[3U] = 0U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg[3U] = 0U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg[3U] = 0U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[0U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v0;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[1U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v1;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[2U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v2;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[3U] 
            = __Vdlyvval__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v3;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg__v4) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg[3U] = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__rdy_b4_delay 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) 
           & (0x1fU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
                ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)
                : 0U) : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned 
        = ((IData)(vlTOPp->reset_i) & ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy = 1U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID) 
                       | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[3U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x38U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[2U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x30U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[1U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x28U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A[0U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x20U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[3U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x18U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[2U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 0x10U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[1U] 
        = (0xffU & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                            >> 8U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B[0U] 
        = (0xffU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 
                        = (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 0x14U));
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2 = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 
                        = (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 0xfU));
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1 = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : ((0x800U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp)
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres
                                                  : 
                                                 ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 
                                                   ((0x100000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
                                                      : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
                                                    : 
                                                   ((0x100000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                >> 0x20U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                       ? (IData)(
                                                                 (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                  >> 0x20U))
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                   >> 0x20U)))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                   >> 0x20U))))
                                                       : (IData)(
                                                                 (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                  >> 0x20U))))))
                                                   : 
                                                  ((0x80000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 
                                                   ((0x40000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                                                                >> 0x20U))
                                                     : (IData)(
                                                               (((2U 
                                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                                                                  ? 
                                                                 (1ULL 
                                                                  + 
                                                                  (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv))
                                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv) 
                                                                >> 0x20U)))
                                                    : 
                                                   ((0x40000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                     ? (IData)(
                                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s 
                                                                >> 0x20U))
                                                     : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s)))))
                                                 : 
                                                ((0x400U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)))
            : 0U);
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 2U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        if ((0x305U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                            if ((0x340U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch 
                                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mscratch = 0U;
    }
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 2U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        if ((0x305U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec 
                                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec = 0U;
    }
    if (vlTOPp->reset_i) {
        if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_pc_input;
            }
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        if ((0x305U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                            if ((0x340U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                                if ((0x341U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc 
                                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc = 0U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
            if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 0U;
                vlSymsp->TOP__barebones_wb_top.irq_ack_o = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                          >> 2U)))) {
                if ((0x342U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm;
                }
            }
            if ((0U != (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
                                   >> 0x10U)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                    = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                    = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause) 
                       | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index));
            } else {
                if ((1U & (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                             >> 3U) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                                       >> 0xbU)) & 
                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                            >> 0xbU)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                    vlSymsp->TOP__barebones_wb_top.irq_ack_o = 1U;
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                        = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                        = (0xbU | (0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                } else {
                    if ((8U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                            = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                            = (3U | (0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                    } else {
                        if ((1U & (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                                     >> 3U) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                                               >> 7U)) 
                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
                                      >> 7U)))) {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                = (0x80000000U | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                = (7U | (0x80000000U 
                                         & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                        } else {
                            if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o))) {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                    = (0x7fffffffU 
                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                    = (1U | (0x80000000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                            } else {
                                if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned) 
                                     & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                        = (0x7fffffffU 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                        = (0x80000000U 
                                           & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                } else {
                                    if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr) 
                                         & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                            = (0x7fffffffU 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                            = (2U | 
                                               (0x80000000U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                    } else {
                                        if (((0x73U 
                                              == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                             & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                = (0x7fffffffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                = (0xbU 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                        } else {
                                            if (((0x100073U 
                                                  == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                 & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) {
                                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                    = 
                                                    (0x7fffffffU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                    = 
                                                    (3U 
                                                     | (0x80000000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                            } else {
                                                if (
                                                    ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i) 
                                                     & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem)))) {
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                        = 
                                                        (0x7fffffffU 
                                                         & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                        = 
                                                        (7U 
                                                         | (0x80000000U 
                                                            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                                } else {
                                                    if (
                                                        ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i) 
                                                         & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem))) {
                                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 1U;
                                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                            = 
                                                            (0x7fffffffU 
                                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause);
                                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                            = 
                                                            (5U 
                                                             | (0x80000000U 
                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE = 0U;
        vlSymsp->TOP__barebones_wb_top.irq_ack_o = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [3U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [2U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [3U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [2U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[3U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[2U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [1U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[1U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [1U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL[0U] 
        = (0xffffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__A
                      [0U] * vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__B
                      [0U]));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip 
        = __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
        = __Vdly__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus;
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))) {
                if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 1U;
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 0U;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy = 1U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_dummy = 0U;
    }
    if (vlTOPp->reset_i) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv 
                = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel)
                    ? (((QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q)) 
                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)))
                    : ((((QData)((IData)((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                            [3U] << 0x10U) 
                                           + ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                               [2U] 
                                               + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                               [1U]) 
                                              << 8U)) 
                                          + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2
                                          [0U]))) << 0x20U) 
                        + (((QData)((IData)((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                               [3U] 
                                               << 0x10U) 
                                              + ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                                  [2U] 
                                                  + 
                                                  vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                                  [1U]) 
                                                 << 8U)) 
                                             + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2
                                             [0U]))) 
                            + (QData)((IData)((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                                 [3U] 
                                                 << 0x10U) 
                                                + (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                                    [2U] 
                                                    + 
                                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                                    [1U]) 
                                                   << 8U)) 
                                               + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2
                                               [0U])))) 
                           << 0x10U)) + (QData)((IData)(
                                                        (((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                           [3U] 
                                                           << 0x10U) 
                                                          + 
                                                          ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                            [2U] 
                                                            + 
                                                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                            [1U]) 
                                                           << 8U)) 
                                                         + 
                                                         vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2
                                                         [0U])))));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv = 0ULL;
    }
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_pc_input 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_pc
                : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush)
                    ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
                    : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem 
            = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                ? 1U : ((6U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem)) 
                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)));
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_pc_input = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem = 1U;
    }
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 2U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret)))) {
                if ((0x300U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                    if ((0x304U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xfffff7ffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (0x800U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xffffff7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xfffffff7U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
                            = ((0xffffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie) 
                               | (0xffff0000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q 
        = __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R 
        = __Vdly__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHHs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHH_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHLs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPHL_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLHs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLH_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [0U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [1U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [2U];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLLs2[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MUL__DOT__PPLL_mreg
        [3U];
    vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1 
        = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_Rin_sel)
              ? (0x7fffffffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_R)
              : 0U) << 1U) | (1U & (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB 
                                            >> (0x3fU 
                                                & ((IData)(0x20U) 
                                                   + 
                                                   (0x1fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__mux_A_sel)))))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_pc 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc)
            : 0U);
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem = 1U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 1U : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall)
                                 ? 1U : (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len) 
                                          << 1U) | 
                                         (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 6U) 
                                                | ((~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 5U)) 
                                                   | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 4U) 
                                                      | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 3U) 
                                                         | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 2U) 
                                                            | ((~ 
                                                                (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 1U)) 
                                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))))))));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem = 1U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
        = ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mie 
            & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mip) 
           & (- (IData)((1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                               >> 3U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_mret 
        = ((IData)(vlTOPp->reset_i) & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mret)));
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_imm);
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT__row_0__DOT__r_temp 
        = (0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__barebones_wb_top.core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_block__DOT____Vcellinp__row_0____pinNumber1)) 
                             - (QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index = 0xfU;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid = 0U;
    while (((0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid)))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index 
            = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__PE_valid 
            = (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq 
                     >> (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__fast_irq_index)));
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc;
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mret 
        = ((IData)(vlTOPp->reset_i) & ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))) 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret)));
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr 
            = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_imm 
            = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                ? 0U : ((0x1000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                         ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
                         : ((0U == (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                          >> 5U))) ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX
                             : ((1U == (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                              >> 5U)))
                                 ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out 
                                    | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX)
                                 : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out 
                                    & (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX))))));
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_imm = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_reg_out 
        = __Vdly__core0__DOT__core0__DOT__csr_reg_out;
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc = 0U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0U : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o);
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_pc = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret 
                        = (0x30200073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr);
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mret = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr 
                        = (0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                     >> 0x14U));
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__imm_dec_o;
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_ID;
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o 
                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o 
                    = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o = 0U;
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__3(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__3\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | (IData)(vlTOPp->clk_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i)) 
           | ((IData)(vlTOPp->clk_i) << 3U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 3U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 1U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_clk_i 
        = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__mtime_regs__wb_clk_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_clk_i) 
                 >> 2U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__4(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__4\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__core0__DOT__core0__DOT__register_bank__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__register_bank__v0;
    CData/*0:0*/ __Vdlyvset__core0__DOT__core0__DOT__register_bank__v1;
    IData/*31:0*/ __Vdlyvval__core0__DOT__core0__DOT__register_bank__v0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset_i)))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__i = 0x20U;
    }
    __Vdlyvset__core0__DOT__core0__DOT__register_bank__v0 = 0U;
    __Vdlyvset__core0__DOT__core0__DOT__register_bank__v1 = 0U;
    if (vlTOPp->reset_i) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                      >> 3U)))) {
            __Vdlyvval__core0__DOT__core0__DOT__register_bank__v0 
                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB;
            __Vdlyvset__core0__DOT__core0__DOT__register_bank__v0 = 1U;
            __Vdlyvdim0__core0__DOT__core0__DOT__register_bank__v0 
                = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd;
        }
    } else {
        __Vdlyvset__core0__DOT__core0__DOT__register_bank__v1 = 1U;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__register_bank__v0) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[__Vdlyvdim0__core0__DOT__core0__DOT__register_bank__v0] 
            = __Vdlyvval__core0__DOT__core0__DOT__register_bank__v0;
    }
    if (__Vdlyvset__core0__DOT__core0__DOT__register_bank__v1) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[1U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[2U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[3U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[4U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[5U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[6U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[7U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[8U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[9U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xaU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xbU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xcU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xdU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xeU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0xfU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x10U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x11U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x12U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x13U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x14U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x15U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x16U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x17U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x18U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x19U] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1aU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1bU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1cU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1dU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1eU] = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__register_bank[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__5(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__5\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i)))) {
        if ((8U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i) 
                    & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
                   & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)))) {
            if ((1U == vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                 [3U])) {
                VL_WRITEF("Success!\n");
                VL_FINISH_MT("../../peripherals//debug_interface_wb.v", 39, "");
            } else {
                VL_WRITEF("Failure!\n");
                VL_FINISH_MT("../../peripherals//debug_interface_wb.v", 45, "");
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__debug_if__DOT__ack 
        = (1U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i)) 
                 & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
                    >> 3U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__debug_if__DOT__ack) 
              << 3U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__6(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__6\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__r_stb = (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i))
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__7(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__7\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    QData/*63:0*/ __Vdly__mtime_regs__DOT__mtime;
    // Body
    __Vdly__mtime_regs__DOT__mtime = vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime;
    if (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) {
        if (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i) 
               >> 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb)) 
             & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we))) {
            if ((0x2008U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((0xffffffff00ffffffULL & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x18U)))) 
                              << 0x18U));
                }
                if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((0xffffffffff00ffffULL & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((0xffffffffffff00ffULL & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                        = ((0xffffffffffffff00ULL & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                           | (IData)((IData)((0xffU 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))));
                }
            } else {
                if ((0x200cU == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                    if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((0xffffffffffffffULL 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x18U)))) 
                                  << 0x38U));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((0xff00ffffffffffffULL 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x10U)))) 
                                  << 0x30U));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((0xffff00ffffffffffULL 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 8U)))) 
                                  << 0x28U));
                    }
                    if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                            = ((0xffffff00ffffffffULL 
                                & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp) 
                               | ((QData)((IData)((0xffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))) 
                                  << 0x20U));
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp = 0ULL;
    }
    if (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) {
        if (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i) 
               >> 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb)) 
             & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we))) {
            if ((0x2000U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((0xffffffff00ffffffULL & __Vdly__mtime_regs__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x18U)))) 
                              << 0x18U));
                }
                if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((0xffffffffff00ffffULL & __Vdly__mtime_regs__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((0xffffffffffff00ffULL & __Vdly__mtime_regs__DOT__mtime) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                    __Vdly__mtime_regs__DOT__mtime 
                        = ((0xffffffffffffff00ULL & __Vdly__mtime_regs__DOT__mtime) 
                           | (IData)((IData)((0xffU 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))));
                }
            } else {
                if ((0x2004U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) {
                    if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((0xffffffffffffffULL 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x18U)))) 
                                  << 0x38U));
                    }
                    if ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((0xff00ffffffffffffULL 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 0x10U)))) 
                                  << 0x30U));
                    }
                    if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((0xffff00ffffffffffULL 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
                                                      >> 8U)))) 
                                  << 0x28U));
                    }
                    if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel))) {
                        __Vdly__mtime_regs__DOT__mtime 
                            = ((0xffffff00ffffffffULL 
                                & __Vdly__mtime_regs__DOT__mtime) 
                               | ((QData)((IData)((0xffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat))) 
                                  << 0x20U));
                    }
                }
            }
        } else {
            __Vdly__mtime_regs__DOT__mtime = ((0xffffffff00000000ULL 
                                               & __Vdly__mtime_regs__DOT__mtime) 
                                              | (IData)((IData)(
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime)))));
            if ((0xffffffffU == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime))) {
                __Vdly__mtime_regs__DOT__mtime = ((0xffffffffULL 
                                                   & __Vdly__mtime_regs__DOT__mtime) 
                                                  | ((QData)((IData)(
                                                                     ((IData)(1U) 
                                                                      + (IData)(
                                                                                (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
            }
        }
    } else {
        __Vdly__mtime_regs__DOT__mtime = 0ULL;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
        = __Vdly__mtime_regs__DOT__mtime;
    if (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst) {
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel 
            = vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
            [2U];
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat 
            = vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
            [2U];
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we 
            = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i) 
                >> 2U) & 1U);
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb 
            = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
                >> 2U) & 1U);
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr 
            = vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
            [2U];
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__sel = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__dat = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__we = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr = 0U;
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__8(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__8\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset_i) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb 
            = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush)
                ? 0xcU : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb));
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb = 0xcU;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush 
        = (1U & (((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                     >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
                   & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem)) 
                  & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_dummy))) 
                 | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                                        | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))
                                        ? 0U : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB 
        = ((0U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                         >> 5U))) ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_aluout
            : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                             >> 5U))) ? ((0U == (3U 
                                                 & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb)))
                                          ? ((0x10U 
                                              & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                              ? ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : (0xffU 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                          : ((1U == 
                                              (3U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb)))
                                              ? ((0x10U 
                                                  & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout 
                                                                     >> 0xfU)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                                  : 
                                                 (0xffffU 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_imm));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb = 0xcU;
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb 
                = ((0xfU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb)) 
                   | (0x70U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb)));
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb 
                = ((0x77U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb)) 
                   | (8U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access) 
                             << 3U) | (0xfffffff8U 
                                       & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb)))));
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb 
                = ((0x78U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb)) 
                   | (7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb)));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb = 0xcU;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0U : (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 7U)));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd = 0U;
    }
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb = 0xcU;
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX) 
                          | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access))))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0xcU : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_ID));
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb = 0xcU;
    }
    if ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX 
            = ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                ? 2U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                         ? 1U : 2U));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX 
            = ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                ? 0U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                          == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                         & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                         ? 1U : 0U));
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX 
            = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                 == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd)) 
                & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                         ? 2U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2) 
                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                                  & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs2)))
                                  ? 1U : 2U)));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX 
            = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                 == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_rd)) 
                & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                ? 2U : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb))
                         ? 0U : ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1) 
                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_rd)) 
                                  & (0U != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rs1)))
                                  ? 1U : 0U)));
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
        = ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX))
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data2
            : ((1U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_ctrl_EX))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
        = ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX))
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_aluout
            : ((1U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_ctrl_EX))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux_o_WB
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_data1));
    if (vlTOPp->reset_i) {
        if (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr = 0x13U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                    = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                        ? 0x13U : vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o
                       [0U]);
            }
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr = 0x13U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L 
        = ((~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
               >> 3U)) & (1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
                                       >> 5U))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B_s 
        = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX)
            ? ((IData)(1U) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX))
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX 
        = ((0x100U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0 
        = (0U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1 
        = ((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
           & (1U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A_s 
        = ((0x80000000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)
            ? ((IData)(1U) + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX))
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIVout__DOT__signs 
        = ((2U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                  >> 0x1eU)) | (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
                                      >> 0x1fU)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux8_o_EX 
        = ((0x2000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs 
        = ((2U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX 
                  >> 0x1eU)) | (1U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                      >> 0x1fU)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc 
        = (((0x200U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
             : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
           + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_imm);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
        = ((0x80U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_pc
            : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0 
        = (0U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX);
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1 
        = ((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
           & (1U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__P_s 
        = ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv
                : (1ULL + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv)))
            : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULout__DOT__signs))
                ? (1ULL + (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv))
                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr 
        = ((0xfffffffeU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc) 
           | (1U & ((~ ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                            >> 9U)) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                       >> 0xeU))) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_addr_calc)));
    if (((((((((0U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)) 
               | (1U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
              | (2U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
             | (3U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
            | (4U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
           | (5U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
          | (6U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
         | (7U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)))) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
            = ((0U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                   + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                : ((1U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                    ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                       - vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                    : ((2U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                        ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                           ^ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                        : ((3U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                            ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                               | vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                            : ((4U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                : ((5U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                    ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                        < vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                        ? 1U : 0U) : 
                                   ((6U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                     ? (VL_LTS_III(1,32,32, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                         ? 1U : 0U)
                                     : (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                        << (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))))))));
    } else {
        if (((((((((8U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)) 
                   | (9U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
                  | (0xaU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
                 | (0xbU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
                | (0xcU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
               | (0xdU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
              | (0xeU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) 
             | (0xfU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                = ((8U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                    ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                       >> (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                    : ((9U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                        ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, 
                                         (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX))
                        : ((0xaU == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                            ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                ? 1U : 0U) : ((0xbU 
                                               == (0x1fU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                               ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                                   == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                                   ? 0U
                                                   : 1U)
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                                   ? 
                                                  ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                                                    >= vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                                    ? 
                                                   (VL_GTES_III(1,32,32, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX, vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX)
                                                     : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX)))))));
        } else {
            if ((0x14U == (0x1fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex))) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                    = (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_EX 
                          & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_EX));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status 
        = ((((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
             & ((1U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
                & ((0xffffffffU == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX) 
                   & ((0x20000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                       ? (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                             >> 0x14U)) : ((0U == (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                >> 0x12U)))))))) 
            << 5U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B1) 
                       << 4U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__B0) 
                                  << 3U) | ((((0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                              & ((1U 
                                                  != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                                 & ((0xffffffffU 
                                                     == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX) 
                                                    & ((0x20000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                        ? 
                                                       (~ 
                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                         >> 0x14U))
                                                        : 
                                                       (3U 
                                                        != 
                                                        (3U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                            >> 0x12U))))))) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A1) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_in__DOT__A0))))));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__imm_dec_o 
            = ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 0xfU))))
                    : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                            ? ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                  | ((0x800U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 9U)) 
                                     | ((0x7e0U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 0x14U))))))
                            : 0U) : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((0xfffff800U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0x1fU)))) 
                                             << 0xbU)) 
                                         | (0x7ffU 
                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                               >> 0x14U)))
                                      : ((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 7U))))))))
                : 0U);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen 
            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                         >> 5U)) | ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                     ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 3U) | (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   | ((~ 
                                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 1U)) 
                                                      | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                                     : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 1U)) 
                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                                         : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 1U)) 
                                               | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1 
            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                      >> 5U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 4U)) & ((8U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                : (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6 
            = ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? 1U : 0U)
                                          : 0U))) : 0U)
                : 0U);
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__imm_dec_o 
            = ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? (0xfffff000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 : 0U)) : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? 0U : 
                                            ((0xfffff800U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0x1fU)))) 
                                                 << 0xbU)) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 7U)))))))
                : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? (0xfffff000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 : ((0xfffff800U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 0x1fU)))) 
                                      << 0xbU)) | (0x7ffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x14U)))))
                    : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : ((0xfffff800U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 0x1fU)))) 
                                             << 0xbU)) 
                                         | (0x7ffU 
                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                               >> 0x14U)))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen 
            = (1U & ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                             >> 4U)) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 3U) | (
                                                   (4U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((~ 
                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 1U)) 
                                                    | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                    : 
                                                   ((~ 
                                                     (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 1U)) 
                                                    | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                      : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U)) 
                                            | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                         : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U)) 
                                            | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                          : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len 
            = ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                             ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0xcU)))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0xcU)))
                                                      ? 2U
                                                      : 0U)))
                                                   : 0U)
                                               : 0U))))
                : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                             ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 0U
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 1U
                                                      : 0U)))
                                                   : 0U)
                                               : 0U)))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1 
            = (1U & ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 4U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U)) & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                      : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 4U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U)) & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6 
            = ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? (((1U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U))) 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 5U))
                                                  ? 2U
                                                  : 0U)
                                              : 0U)
                                          : 0U))) : 0U)
                : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                        ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? 0U : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? (((1U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U))) 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 5U))
                                                  ? 2U
                                                  : 0U)
                                              : 0U)
                                          : 0U))) : 0U));
    }
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
            } else {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                    }
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    }
                }
            }
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5 = 0U;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func 
        = ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
            ? ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                    ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                             ? ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                 ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                     ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                         ? 0xeU : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? 0xeU : 0U) : 0U)
                              : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                      ? ((0x4000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                          ? ((0x2000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((0x1000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 0xcU
                                                  : 5U)
                                              : ((0x1000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 0xdU
                                                  : 6U))
                                          : ((0x2000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? 0xbU
                                               : 0xaU)))
                                      : 0U) : 0U))))
                : 0U) : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                              ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                  ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                           ? ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 0xfU
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                               ? ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x20U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                        ? 0x14U
                                                        : 4U)
                                                       : 4U)
                                                      : 3U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 9U
                                                       : 8U)
                                                      : 2U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 5U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 7U
                                                      : 
                                                     ((0x20U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 
                                                      (1U 
                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 0x1eU))
                                                       : 0U))))
                                                   : 0U)
                                               : 0U)))
                              : 0U) : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? 0U : 
                                            ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                              ? ((1U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x20U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                       ? 0x14U
                                                       : 4U)
                                                      : 4U)
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 9U
                                                      : 8U)
                                                     : 2U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 5U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                     ? 7U
                                                     : 
                                                    ((0x20U 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                      ? 
                                                     (1U 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x1eU))
                                                      : 0U))))
                                                  : 0U)
                                              : 0U)))
                                        : 0U)));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
    } else {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 1U;
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                    = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))));
            }
        } else {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                            = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 1U) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                                    }
                                } else {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 1U;
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 = 0U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3 
                    = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7 
        = (1U & ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                      >> 5U) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 4U)) & ((8U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 2U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 1U) 
                                                      & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                : (
                                                   (4U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 
                                                   ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U) 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    : 
                                                   ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U) 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))
                  : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                      ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                          : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))
                      : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                          ? ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             ? ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                             : ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 >> 1U) 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))
                          : ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                 >> 3U)) & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 2U)) 
                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                >> 1U) 
                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))))));
    if ((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | ((~ 
                                                          (((0x73U 
                                                             == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                            | (0x100073U 
                                                               == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                                           | (0x30200073U 
                                                              == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))) 
                                                         & (4U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU)))))))));
            } else {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 0U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = (0U != 
                                               (7U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xcU)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                    }
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 0U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 3U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = (0U != 
                                               (7U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xcU)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    } else {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                      | (1U == (3U 
                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 0xdU))))));
                    }
                }
            }
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
        }
    } else {
        if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                        = ((1U != (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U))) 
                                           & ((((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 0xcU))) 
                                                | (5U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0xcU)))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0xcU))))
                                               ? (0U 
                                                  != 
                                                  ((0x20U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x19U))))
                                               : (0U 
                                                  != 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))));
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 5U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U)))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU))) 
                                                   & (0U 
                                                      != 
                                                      ((0x20U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x1aU)) 
                                                       | (0x1fU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x19U))))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | (~ 
                                                         (((0U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU))) 
                                                           | (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                  >> 0xcU)))) 
                                                          | (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 0xcU))))))))));
            }
        } else {
            if ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                } else {
                    if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                            = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 1U)) | 
                                     (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)));
                    } else {
                        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                            if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                if ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) {
                                    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                        = ((1U != (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U))) 
                                           & ((((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 0xcU))) 
                                                | (5U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0xcU)))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0xcU))))
                                               ? (0U 
                                                  != 
                                                  ((0x20U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x1aU)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 0x19U))))
                                               : (0U 
                                                  != 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 0x19U)))));
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 5U)))) {
                                        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                                            = ((1U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   != 
                                                   (0x7fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 0x19U)))
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 0xcU))) 
                                                   & (0U 
                                                      != 
                                                      ((0x20U 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 0x1aU)) 
                                                       | (0x1fU 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 0x19U))))));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                            }
                        } else {
                            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr = 1U;
                        }
                    }
                }
            } else {
                vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr 
                    = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                              >> 3U) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U) | (
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 1U)) 
                                                   | ((~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                                      | (((3U 
                                                           == 
                                                           (7U 
                                                            & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 0xcU))) 
                                                          | (6U 
                                                             == 
                                                             (7U 
                                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 >> 0xcU)))) 
                                                         | (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                >> 0xcU)))))))));
            }
        }
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
           & ((((0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                          >> 0xfU)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd)) 
               & ((((((0xcU == (0xfU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 3U))) | 
                      (0U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                       >> 2U)))) | 
                     (8U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 2U)))) | (4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 2U)))) 
                   | (0xcU == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                        >> 2U)))) | 
                  ((0x1cU == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                       >> 2U))) & (~ 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    >> 0xeU))))) 
              | (((0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                            >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_rd)) 
                 & (((0x18U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 2U))) | 
                     (8U == (0x1fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 2U)))) | (0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       >> 2U)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen 
        = (1U & ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                     >> 6U)) | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                    >> 5U)) | ((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 4U)) 
                                               | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                   >> 3U) 
                                                  | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                      >> 2U) 
                                                     | ((~ 
                                                         (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 1U)) 
                                                        | (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))))))));
    if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o 
            = (0xfU & ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                     >> 1U))) ? 1U : 
                       (0xfU >> (7U & ((IData)(4U) 
                                       - (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o 
            = ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                             >> 1U))) ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                         >> 8U) : (
                                                   (0x1fU 
                                                    >= 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)) 
                                                     << 3U))
                                                    ? 
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                                    >> 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg)) 
                                                     << 3U))
                                                    : 0U));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o 
            = ((IData)(4U) + (0xfffffffcU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__LS_UNIT__DOT__addr_i_reg));
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o 
            = (0xfU & ((0U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                     >> 1U))) ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
                        : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                                         >> 1U))) ? 
                           ((IData)(3U) << (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))
                            : ((IData)(0xfU) << (3U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o 
            = ((0x1fU >= (0x18U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                                   << 3U))) ? (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX 
                                               << (0x18U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX 
                                                      << 3U)))
                : 0U);
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o 
            = (0xfffffffcU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX);
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch 
        = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                  >> 0xeU) | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                               >> 0xfU) & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__fastres 
        = ((0x20U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
            ? ((0x10U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                         ? 0U : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                  ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                      ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                               ? 0U
                                               : ((0x20000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                        >> 0x12U)))
                                                    ? 1U
                                                    : 0U))))
                                  : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                      ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x20000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 0xffffffffU)
                                                   : 0xffffffffU))
                                      : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x20000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                        >> 0x12U)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX))
                                                    : 0xffffffffU)))))))
            : ((0x10U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                ? ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                    ? 0U : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                             ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                 ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                          ? 0U : ((0x20000U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                   ? 
                                                  ((0x200000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                    ? 0U
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)))
                             : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                 ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x20000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x200000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0U
                                                  : 1U)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x12U)))
                                                  ? 1U
                                                  : 0U)))
                                 : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x20000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x200000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0U
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x12U)))
                                                  ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                  : 0U))))))
                : ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                    ? ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                        ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? 0U : ((3U != (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                  >> 1U)))
                                     ? ((0x20000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                         ? ((0x200000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                             : 0xffffffffU)
                                         : 0U) : 0U))
                        : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   >> 1U)))
                                         ? ((0x20000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? ((0x200000U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                 : 0xffffffffU)
                                             : 0U) : 0U))
                            : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   >> 1U)))
                                         ? ((0x20000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? ((0x200000U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                 ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux2_o_EX
                                                 : 0xffffffffU)
                                             : 0U) : 0U))))
                    : ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                        ? ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? 0U : ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                     ? 0U : ((0x20000U 
                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                              ? ((0x200000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                                  ? 0xffffffffU
                                                  : 0U)
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                      >> 0x12U)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX))
                                                  : 0xffffffffU))))
                        : ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                            ? ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                ? 0U : ((0x20000U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                         ? ((0x200000U 
                                             & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex)
                                             ? 1U : 0U)
                                         : ((0U == 
                                             (3U & 
                                              (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                               >> 0x12U)))
                                             ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux4_o_EX
                                             : 0U)))
                            : 0U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp 
        = (1U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                  >> 5U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                             >> 4U) | ((8U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                        ? ((4U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                               | (3U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                      >> 1U))))
                                            : ((2U 
                                                & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status))
                                                ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                          >> 1U))))
                                                : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                   | (3U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                                          >> 1U))))))
                                        : (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                            >> 2U) 
                                           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__AB_status)))))));
    if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_ID = 0U;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_ID = 0xcU;
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux3_o_ID 
            = (((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                  & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                     >> 0x19U)))) ? 
                 (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                        >> 0xcU)) : 0U) << 0x14U) | 
               (((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                   & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                      >> 0x19U)))) ? 
                  (3U & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                         >> 0xcU)) : 0U) << 0x12U) 
                | ((0xfffe0000U & ((((0x33U == (0x7fU 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                                     & (1U == (0x7fU 
                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  >> 0x19U)))) 
                                    << 0x11U) & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 << 3U))) 
                   | ((((0x33U == (0x7fU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
                        & (1U == (0x7fU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                           >> 0x19U)))) 
                       << 0x10U) | ((0x8000U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                 << 9U) 
                                                & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    << 0xaU) 
                                                   & (((~ 
                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                         >> 4U)) 
                                                       << 0xfU) 
                                                      & (((~ 
                                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 3U)) 
                                                          << 0xfU) 
                                                         & (((~ 
                                                              (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 2U)) 
                                                             << 0xfU) 
                                                            & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                << 0xeU) 
                                                               & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                  << 0xfU)))))))) 
                                    | ((0x4000U & (
                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                    << 8U) 
                                                   & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                       << 9U) 
                                                      & (((~ 
                                                           (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            >> 4U)) 
                                                          & ((8U 
                                                              & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                              ? 
                                                             ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 2U) 
                                                              & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                  >> 1U) 
                                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr))
                                                              : 
                                                             ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               >> 2U) 
                                                              & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                  >> 1U) 
                                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)))) 
                                                         << 0xeU)))) 
                                       | ((0x2000U 
                                           & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                               << 7U) 
                                              & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                  << 8U) 
                                                 & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     << 9U) 
                                                    & (((~ 
                                                         (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                          >> 3U)) 
                                                        << 0xdU) 
                                                       & (((~ 
                                                            (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                             >> 2U)) 
                                                           << 0xdU) 
                                                          & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                              << 0xcU) 
                                                             & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                 << 0xdU) 
                                                                & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                   >> 1U))))))))) 
                                          | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux7) 
                                              << 0xcU) 
                                             | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux6) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux5) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux3) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_ex_mux1) 
                                                          << 7U) 
                                                         | ((((0x40U 
                                                               & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                               ? 
                                                              ((0x20U 
                                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                ? 
                                                               ((0x10U 
                                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                 ? 
                                                                ((8U 
                                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                  ? 0U
                                                                  : 
                                                                 ((4U 
                                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                   ? 0U
                                                                   : 
                                                                  ((2U 
                                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                    ? 
                                                                   ((1U 
                                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                                     ? 
                                                                    ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                          >> 0xcU)))
                                                                      ? 0U
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                           >> 0xcU)))
                                                                       ? 1U
                                                                       : 
                                                                      ((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                            >> 0xcU)))
                                                                        ? 2U
                                                                        : 0U)))
                                                                     : 0U)
                                                                    : 0U)))
                                                                 : 0U)
                                                                : 0U)
                                                               : 0U) 
                                                             << 5U) 
                                                            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_alu_func))))))))))))));
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mux1_o_ID 
            = ((((0x40U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                  ? 0U : ((0x20U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                           ? ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                               ? ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                   ? 0U : ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                            ? ((2U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                ? (
                                                   (1U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                    ? 2U
                                                    : 0U)
                                                : 0U)
                                            : 0U)) : 0U)
                           : ((0x10U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                               ? 0U : ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                        ? 0U : ((4U 
                                                 & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)
                                                   ? 1U
                                                   : 0U)
                                                  : 0U)))))) 
                << 5U) | ((0x10U & (((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                         >> 6U)) << 4U) 
                                    & (((~ (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                            >> 5U)) 
                                        << 4U) & ((
                                                   (~ 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                     >> 4U)) 
                                                   << 4U) 
                                                  & (((~ 
                                                       (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                        >> 3U)) 
                                                      << 4U) 
                                                     & (((~ 
                                                          (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                           >> 2U)) 
                                                         << 4U) 
                                                        & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                            << 3U) 
                                                           & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                    >> 0xeU)) 
                                                                  & ((~ 
                                                                      (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                       >> 0xdU)) 
                                                                     | (~ 
                                                                        (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                                                         >> 0xcU))))) 
                                                              << 4U)))))))) 
                          | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_rf_wen) 
                              << 3U) | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen) 
                                         << 2U) | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_mem_len)))));
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_stall 
        = ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_wb_csr_wen)) 
           & (((((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                            >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_csr_addr)) 
                & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_wb) 
                      >> 2U))) | (((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                                              >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_csr_addr)) 
                                  & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_wb) 
                                        >> 2U)))) | 
              (((0xfffU & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr 
                           >> 0x14U)) == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_csr_addr)) 
               & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_wb) 
                     >> 2U)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_wmask_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[1U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[2U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[3U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_addr_o;
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch) 
           & (0U != (3U & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr)));
    vlSymsp->TOP__barebones_wb_top.__Vtableidx1 = (
                                                   (0x40U 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                       >> 0xbU)) 
                                                   | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__mux_fastres_sel_temp) 
                                                       << 5U) 
                                                      | ((0x10U 
                                                          & (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                                                             >> 0xcU)) 
                                                         | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_rdy) 
                                                             << 3U) 
                                                            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__current_state)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_AB_en
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__reg_muldiv_en
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_sel
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__mux_muldiv_out_sel
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_done_EX 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__muldiv_done_EX
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state 
        = vlSymsp->TOP__barebones_wb_top.__Vtable1___PVT__core0__DOT__core0__DOT__MULDIV__DOT__MULDIV_ctrl__DOT__next_state
        [vlSymsp->TOP__barebones_wb_top.__Vtableidx1];
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception 
        = (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__ctrl_unit_illegal_instr) 
              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned)) 
             | (0x73U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
            | (0x100073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr)) 
           & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush 
        = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_mem_flush) 
            | ((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                  >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
                & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_dummy))) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned)))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__instr_addr_misaligned));
    if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state;
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Q_en 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start;
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__reg_Rin_en 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start;
    }
    if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
        if (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) {
            vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count 
                = (0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count));
        }
    } else {
        vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__start_count 
            = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start;
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__next_state 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state)
            ? ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__current_state) 
               & (0x1fU != (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__DIV__DOT__div_control__DOT__round_count)))
            : (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MULDIV__DOT__div_start));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX 
        = (1U & ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_ex 
                  >> 0x10U) & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_done_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_if_flush 
        = (((((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
               >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq)) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE)) 
            | ((0x30200073U == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_id_flush 
        = (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush) 
            | ((vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mstatus 
                >> 3U) & (0U != vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__masked_irq))) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__pending_exception));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX) 
                 | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__csr_ex_flush) 
                    | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (2U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 1U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (4U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i = 
        ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)) 
         | (8U & ((~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX)) 
                  << 3U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access 
        = ((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
             | (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX))) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_misaligned))) 
           & (((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                             >> 1U))) & (0U != (3U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX))) 
              | ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IDEX_preg_mem) 
                               >> 1U))) & (3U == (3U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__aluout_EX)))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__L) 
                 | (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__mem_wen_EX))));
    vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_cyc));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i)) 
           | ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__data_wb_cyc_o) 
              << 3U));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__9(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__9\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xeU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (1U & (~ (IData)(vlTOPp->reset_i))));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (2U & ((~ (IData)(vlTOPp->reset_i)) << 1U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (4U & ((~ (IData)(vlTOPp->reset_i)) << 2U)));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i)) 
           | (8U & ((~ (IData)(vlTOPp->reset_i)) << 3U)));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                 >> 1U));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i 
        = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i));
    vlSymsp->TOP__barebones_wb_top.__Vcellinp__debug_if__wb_rst_i 
        = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                 >> 3U));
    vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__rst 
        = (1U & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_rst_i) 
                    >> 2U)));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__10(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__10\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((0xcU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_ack) 
               << 1U) | (IData)(vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_ack)));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__11(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__11\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[1U] 
        = vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_wb_dat_o;
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__12(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__12\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[0U] 
        = vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_wb_dat_o;
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__13(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_sequent__TOP__barebones_wb_top__13\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o[2U] 
        = ((0x2000U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)
            ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime)
            : ((0x2004U == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)
                ? (IData)((vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtime 
                           >> 0x20U)) : (((QData)((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__adr)) 
                                          == vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp)
                                          ? (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp)
                                          : (IData)(
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__mtimecmp 
                                                     >> 0x20U)))));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__14(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__14\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o)) 
           | (0xfffffffcU & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__mtime_regs__DOT__stb) 
                              << 2U) & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i))));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__15(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_multiclk__TOP__barebones_wb_top__15\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__valid = 0U;
    vlSymsp->TOP__barebones_wb_top.__PVT__k = 1U;
    while ((VL_GTS_III(1,32,32, 4U, vlSymsp->TOP__barebones_wb_top.__PVT__k) 
            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__valid)))) {
        if ((1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_stb) 
                   >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)))) {
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                = vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_o
                [(3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)];
            vlSymsp->TOP__barebones_wb_top.__PVT__valid = 1U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stall_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_err_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_ack_o) 
                         >> (3U & vlSymsp->TOP__barebones_wb_top.__PVT__k)));
        } else {
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_err_i = 0U;
            vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_ack_i = 0U;
        }
        vlSymsp->TOP__barebones_wb_top.__PVT__k = ((IData)(1U) 
                                                   + vlSymsp->TOP__barebones_wb_top.__PVT__k);
    }
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__memout 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_misaligned)
            ? ((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                             >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                          ? ((0xffffff00U 
                                              & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                          : ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? ((0xffff0000U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))
                                              : ((0xff000000U 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout))))
                : ((0xff00U & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                               << 8U)) | (0xffU & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__MEMWB_preg_memout)))
            : ((2U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                             >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                          ? (0xffU 
                                             & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                >> 0x18U))
                                          : ((2U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? (0xffffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                    >> 0x10U))
                                              : ((1U 
                                                  == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                  ? 
                                                 (0xffffffU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     >> 8U))
                                                  : vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i)))
                : ((1U == (3U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_mem) 
                                 >> 1U))) ? ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                              ? (0xffU 
                                                 & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                    >> 0x18U))
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                     >> 0x10U))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                   ? 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                      >> 8U))
                                                   : 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i))))
                    : ((3U == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                        ? (0xffU & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                    >> 0x18U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                      >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__EXMEM_preg_addr_bits))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_dat_i)))))));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_EX 
        = ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i));
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID 
        = (((((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__hazard_stall) 
              | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__muldiv_stall_EX)) 
             | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__misaligned_access)) 
            | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__r_data_wb_stall_i)) 
           | (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__csr_stall));
}

VL_INLINE_OPT void Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__16(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vbarebones_wb_top_barebones_wb_top::_combo__TOP__barebones_wb_top__16\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i 
        = ((IData)(vlTOPp->reset_i) ? (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__STATE) 
                                        | ((0x30200073U 
                                            == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                           & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch))))
                                        ? (((0x30200073U 
                                             == vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__IFID_preg_instr) 
                                            & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)))
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mepc
                                            : ((1U 
                                                & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec)
                                                ? (
                                                   (0x80000000U 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause)
                                                    ? 
                                                   ((0xfffffffeU 
                                                     & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec) 
                                                    + 
                                                    (vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mcause 
                                                     << 2U))
                                                    : 
                                                   (0xfffffffeU 
                                                    & vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec))
                                                : vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__CSR_UNIT__DOT__mtvec))
                                        : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__take_branch)
                                            ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__branch_target_addr
                                            : ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__stall_ID)
                                                ? vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o
                                                : ((IData)(4U) 
                                                   + vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_o))))
            : 0U);
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i[0U] 
        = vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__core0__DOT__pc_i;
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((0xdU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [1U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [1U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [1U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [1U]))) << 1U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((0xbU & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [2U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [2U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [2U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [2U]))) << 2U));
    vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i 
        = ((7U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i)) 
           | (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__core0__DOT__data_req_o) 
               & ((vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_begin
                   [3U] <= vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                   [3U]) & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                            [3U] <= vlSymsp->TOP__barebones_wb_top.__PVT__slave_adr_end
                            [3U]))) << 3U));
}
