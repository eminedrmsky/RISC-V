// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarebones_wb_top.h for the primary calling header

#include "Vbarebones_wb_top_memory_2rw_wb__Ab.h"
#include "Vbarebones_wb_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__1(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__1\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
               & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)))) {
        if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [1U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [1U] 
                                                           >> 2U))] 
                = ((0xffffff00U & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [1U] >> 2U))]) | (0xffU 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [1U]));
        }
        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [1U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [1U] 
                                                           >> 2U))] 
                = ((0xffff00ffU & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [1U] >> 2U))]) | (0xff00U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [1U]));
        }
        if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [1U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [1U] 
                                                           >> 2U))] 
                = ((0xff00ffffU & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [1U] >> 2U))]) | (0xff0000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [1U]));
        }
        if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [1U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [1U] 
                                                           >> 2U))] 
                = ((0xffffffU & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [1U] >> 2U))]) | (0xff000000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [1U]));
        }
    }
    if ((1U & (((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
                >> 1U) & (~ ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i) 
                             >> 1U))))) {
        vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_wb_dat_o 
            = vlSymsp->TOP__barebones_wb_top__memory.mem
            [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                        [1U] >> 2U))];
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__2(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__2\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port1_wb_rst_i) {
        vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_ack = 0U;
    } else {
        if ((2U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i))) {
            vlSymsp->TOP__barebones_wb_top__memory.__PVT__port1_ack 
                = (1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
                         >> 1U));
        }
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__3(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__3\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__barebones_wb_top.__Vcellinp__memory__port0_wb_rst_i) {
        vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_ack = 0U;
    } else {
        if ((1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_cyc_i))) {
            vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_ack 
                = (1U & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i));
        }
    }
}

VL_INLINE_OPT void Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__4(Vbarebones_wb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vbarebones_wb_top_memory_2rw_wb__Ab::_sequent__TOP__barebones_wb_top__memory__4\n"); );
    Vbarebones_wb_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
               & (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i)))) {
        if ((1U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [0U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [0U] 
                                                           >> 2U))] 
                = ((0xffffff00U & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [0U] >> 2U))]) | (0xffU 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [0U]));
        }
        if ((2U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [0U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [0U] 
                                                           >> 2U))] 
                = ((0xffff00ffU & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [0U] >> 2U))]) | (0xff00U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [0U]));
        }
        if ((4U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [0U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [0U] 
                                                           >> 2U))] 
                = ((0xff00ffffU & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [0U] >> 2U))]) | (0xff0000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [0U]));
        }
        if ((8U & vlSymsp->TOP__barebones_wb_top.__PVT__wb_sel_i
             [0U])) {
            vlSymsp->TOP__barebones_wb_top__memory.mem[(0x7ffU 
                                                        & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                                           [0U] 
                                                           >> 2U))] 
                = ((0xffffffU & vlSymsp->TOP__barebones_wb_top__memory.mem
                    [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                                [0U] >> 2U))]) | (0xff000000U 
                                                  & vlSymsp->TOP__barebones_wb_top.__PVT__wb_dat_i
                                                  [0U]));
        }
    }
    if ((1U & ((IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_stb_i) 
               & (~ (IData)(vlSymsp->TOP__barebones_wb_top.__PVT__wb_we_i))))) {
        vlSymsp->TOP__barebones_wb_top__memory.__PVT__port0_wb_dat_o 
            = vlSymsp->TOP__barebones_wb_top__memory.mem
            [(0x7ffU & (vlSymsp->TOP__barebones_wb_top.__PVT__wb_adr_i
                        [0U] >> 2U))];
    }
}
