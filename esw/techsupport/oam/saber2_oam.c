/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * File:    saber2_oam.c
 * Purpose: Maintains all the debug information for oam
 *          feature for saber2.
*/

#include <appl/diag/techsupport.h>
#include <soc/mcm/allenum.h>

extern char * techsupport_oam_diag_cmdlist[];
extern char * techsupport_oam_sw_dump_cmdlist[];

/* "oam" feature's diag command list valid only for Saber2 */
char * techsupport_oam_saber2_diag_cmdlist[] = {
    NULL /* Must be the last element in this structure */
};

#ifndef BCM_SW_STATE_DUMP_DISABLE
/* "oam" feature's software dump command list valid only for Saber2 */
char * techsupport_oam_saber2_sw_dump_cmdlist[] = {
    NULL /* Must be the last element in this structure */
};
#endif /* BCM_SW_STATE_DUMP_DISABLE */


/* Structure that maintains memory list for
 * "oam" feature for Saber2 chipset. */
static soc_mem_t techsupport_oam_saber2_memory_table_list[] = {
    IARB_ING_PHYSICAL_PORTm,
    LMEPm,
    LMEP_1m,
    ING_PHYSICAL_PORT_TABLEm,
    SOURCE_TRUNK_MAP_MODBASEm,
    SUBPORT_TAG_TO_PP_PORT_MAPm,
    SYSTEM_CONFIG_TABLEm,
    SYSTEM_CONFIG_TABLE_MODBASEm,
    PORT_TABm,
    L3_TUNNELm,
    SOURCE_TRUNK_MAP_TABLEm,
    FP_UDF_TCAMm,
    LPORT_TABm,
    ING_SAT_SAMP_DATAm,
    ING_SAT_SAMP_TCAMm,
    MPLS_ENTRYm,
    VLAN_XLATEm,
    ING_VLAN_TAG_ACTION_PROFILEm,
    VFP_POLICY_TABLEm,
    VFP_TCAMm,
    ING_NETWORK_PRUNE_CONTROLm,
    L3_IIFm,
    MY_STATION_TCAMm,
    SOURCE_VPm,
    VFIm,
    VFI_1m,
    VLAN_TABm,
    VLAN_MPLSm,
    VLAN_PROFILE_TABm,
    STG_TABm,
    L2_USER_ENTRYm,
    L2Xm,
    MPLS_OAM_ACH_TYPE_CONFIGm,
    L3_ENTRY_IPV4_MULTICASTm,
    L3_ENTRY_IPV4_UNICASTm,
    L3_ENTRY_IPV6_UNICASTm,
    ING_DVP_TABLEm,
    INITIAL_ING_L3_NEXT_HOPm,
    MAID_REDUCTIONm,
    MA_INDEXm,
    MA_STATEm,
    MP_GROUPm,
    OAM_DGLP_PROFILEm,
    OAM_FLEXIBLE_DOMAIN_CONTROLm,
    OAM_OPCODE_CONTROL_PROFILEm,
    OAM_OPCODE_GROUPm,
    RMEPm,
    FP_PORT_FIELD_SELm,
    ING_PRI_CNG_MAPm,
    ING_UNTAGGED_PHBm,
    FP_GLOBAL_MASK_TCAMm,
    FP_POLICY_TABLEm,
    FP_TCAMm,
    IFP_REDIRECTION_PROFILEm,
    ING_L3_NEXT_HOPm,
    L2MCm,
    L3_IPMCm,
    L3_IPMC_REMAPm,
    TRUNK_GROUPm,
    PORT_COS_MAPm,
    CPU_COS_MAPm,
    EMIRROR_CONTROLm,
    EM_MTP_INDEXm,
    EPC_LINK_BMAPm,
    EP_REDIRECT_EM_MTP_INDEXm,
    IM_MTP_INDEXm,
    ING_EN_EFILTER_BITMAPm,
    MIRROR_CONTROLm,
    MODPORT_MAP_SWm,
    MULTIPASS_LOOPBACK_BITMAPm,
    PP_PORT_TO_PHYSICAL_PORT_MAPm,
    TRUNK_MEMBERm,
    TRUNK_BITMAPm,
    ING_LM_COUNTER_CONTROLm,
    ING_OAM_LM_COUNTERS_0m,
    ING_OAM_LM_COUNTERS_1m,
    ING_OAM_LM_COUNTERS_2m,
    ING_SERVICE_PRI_MAP_0m,
    ING_SERVICE_PRI_MAP_1m,
    ING_SERVICE_PRI_MAP_2m,
    NHI_GROUP_TC_PROFILEm,
    MMU_REPL_GRP_TBL0m,
    MMU_REPL_GRP_TBL1m,
    MMU_REPL_HEAD_TBLm,
    MMU_REPL_LIST_TBLm,
    EGR_DVP_ATTRIBUTEm,
    EGR_L3_INTFm,
    EGR_L3_NEXT_HOPm,
    EGR_MAC_DA_PROFILEm,
    EGR_MAP_MHm,
    EGR_MPLS_VC_AND_SWAP_LABEL_TABLEm,
    EGR_NETWORK_PRUNE_CONTROLm,
    EGR_PHYSICAL_PORTm,
    EGR_PORTm,
    EGR_QUEUE_TO_PP_PORT_MAPm,
    EGR_SUBPORT_TAG_DOT1P_MAPm,
    EGR_EP_REDIRECT_EM_MTP_INDEXm,
    EGR_GPP_ATTRIBUTESm,
    EGR_GPP_ATTRIBUTES_MODBASEm,
    EGR_IM_MTP_INDEXm,
    EGR_IP_TUNNELm,
    EGR_IP_TUNNEL_MPLSm,
    EGR_VLANm,
    EGR_VLAN_STGm,
    EGR_VLAN_TAG_ACTION_PROFILEm,
    EGR_VLAN_XLATEm,
    EGR_MA_INDEXm,
    EGR_MP_GROUPm,
    EGR_OAM_DGLP_PROFILEm,
    EGR_OAM_FLEXIBLE_DOMAIN_CONTROLm,
    EGR_OAM_OPCODE_CONTROL_PROFILEm,
    EGR_OAM_OPCODE_GROUPm,
    EGR_SAT_SAMP_DATA_1m,
    EGR_OLP_CONFIGm,
    EGR_OLP_DGPP_CONFIGm,
    EGR_OLP_HEADER_TYPE_MAPPINGm,
    EGR_SAT_CONFIG_MAC_SAm,
    EGR_SAT_SAMP_DATAm,
    EGR_SAT_SAMP_TCAMm,
    EFP_POLICY_TABLEm,
    EFP_TCAMm,
    EGR_PW_INIT_COUNTERSm,
    EGR_LM_COUNTER_CONTROLm,
    EGR_OAM_LM_COUNTERS_0m,
    EGR_OAM_LM_COUNTERS_1m,
    EGR_OAM_LM_COUNTERS_2m,
    EGR_SERVICE_PRI_MAP_0m,
    EGR_SERVICE_PRI_MAP_1m,
    EGR_SERVICE_PRI_MAP_2m,
    OAMP_SAT_RX_FLOW_IDm,
    OAMP_SAT_RX_FLOW_PARAMSm,
    OAMP_SAT_RX_FLOW_STATSm,
    OAMP_SAT_TXm,
    OAMP_SAT_TX_EVC_PARAMS_ENTRY_1m,
    OAMP_SAT_TX_EVC_PARAMS_ENTRY_2m,
    OAMP_SAT_TX_GEN_PARAMSm,
    OAMP_RX_OAM_ID_TCAMm,
    INVALIDm /* Must be the last element in this structure */
};

/* Structure that maintains register list for
 * "oam" feature for Saber2 chipset. */
techsupport_reg_t techsupport_oam_saber2_reg_list[] = {
    {CCM_COPYTO_CPU_CONTROLr, register_type_global},
    {CCM_INTERRUPT_CONTROLr, register_type_global},
    {CPU_CONTROL_0r, register_type_global},
    {CPU_CONTROL_1r, register_type_global},
    {DOS_CONTROLr, register_type_global},
    {EFP_SLICE_CONTROLr, register_type_global},
    {EGR_CONFIGr, register_type_global},
    {EGR_INGRESS_PORT_TPID_SELECTr, register_type_global},
    {EGR_LLTAG_TPIDr, register_type_global},
    {EGR_LLTAG_TPID_2r, register_type_global},
    {EGR_MIM_ETHERTYPEr, register_type_global},
    {EGR_MIRROR_SELECTr, register_type_global},
    {EGR_MP_GROUP_HASH_CONTROLr, register_type_global},
    {EGR_OAM_CONTROLr, register_type_global},
    {EGR_OAM_COPYTO_CPU_CONTROLr, register_type_global},
    {EGR_OAM_C_INTERFACE_DROP_CONTROL_64r, register_type_global},
    {EGR_OAM_ERROR_CONTROLr, register_type_global},
    {EGR_OAM_LM_CNG_CONTROLr, register_type_global},
    {EGR_OAM_RX_MODE_FOR_CPUr, register_type_global},
    {EGR_OLP_VLANr, register_type_global},
    {EGR_OUTER_TPIDr, register_type_global},
    {EGR_OUTER_TPID_1r, register_type_global},
    {EGR_OUTER_TPID_2r, register_type_global},
    {EGR_OUTER_TPID_3r, register_type_global},
    {EGR_PORT_1r, register_type_global},
    {EGR_VLAN_CONTROL_1r, register_type_global},
    {EGR_VLAN_CONTROL_2r, register_type_global},
    {EGR_VLAN_CONTROL_3r, register_type_global},
    {HASH_CONTROLr, register_type_global},
    {IARB_OLP_CONFIGr, register_type_global},
    {IARB_OLP_CONFIG_1r, register_type_global},
    {IEEE1588_TIME_FREQ_CONTROLr, register_type_global},
    {IHG_LOOKUPr, register_type_global},
    {ING_COS_MODEr, register_type_global},
    {ING_LLTAG_TPIDr, register_type_global},
    {ING_MISC_CONFIGr, register_type_global},
    {ING_MISC_CONFIG2r, register_type_global},
    {ING_MISC_PORT_CONFIGr, register_type_global},
    {ING_MPLS_INNER_TPIDr, register_type_global},
    {ING_MPLS_TPIDr, register_type_global},
    {ING_MPLS_TPID_0r, register_type_global},
    {ING_OAM_LM_CNG_CONTROLr, register_type_global},
    {ING_OLP_CONFIG_0_64r, register_type_global},
    {ING_OLP_CONFIG_1_64r, register_type_global},
    {ING_OUTER_TPIDr, register_type_global},
    {ING_OUTER_TPID_3r, register_type_global},
    {MIM_ETHERTYPEr, register_type_global},
    {MIRROR_SELECTr, register_type_global},
    {OAM_CONTROLr, register_type_global},
    {OAM_COPYTO_CPU_CONTROLr, register_type_global},
    {OAM_COPYTO_CPU_CONTROL_FP_MEPSr, register_type_global},
    {OAM_CURRENT_TIMEr, register_type_global},
    {OAM_DROP_CONTROLr, register_type_global},
    {OAM_ERROR_CONTROLr, register_type_global},
    {OAM_ERROR_CONTROL_FP_MEPSr, register_type_global},
    {OAM_LM_CPU_DATA_CONTROLr, register_type_global},
    {OAM_S_C_INTERFACE_DROP_CONTROLr, register_type_global},
    {OAM_TX_CONTROLr, register_type_global},
    {OUTER_TPID_1r, register_type_global},
    {OUTER_TPID_2r, register_type_global},
    {OUTER_TPID_3r, register_type_global},
    {RXLP_PORT_ENABLEr, register_type_global},
    {SFLOW_EGR_THRESHOLDr, register_type_global},
    {SFLOW_ING_THRESHOLDr, register_type_global},
    {SUBPORT_TAG_TPID_0r, register_type_global},
    {SUBPORT_TAG_TPID_1r, register_type_global},
    {SUBPORT_TAG_TPID_2r, register_type_global},
    {SUBPORT_TAG_TPID_3r, register_type_global},
    {SW2_FP_DST_ACTION_CONTROLr, register_type_global},
    {TXLP_PORT_ENABLEr, register_type_global},
    {TXLP_PORT_FAR_END_MAC_ADDRr, register_type_global},
    {TXLP_PORT_NEAR_END_MAC_ADDRr, register_type_global},
    {TXLP_PORT_VLAN_TPIDr, register_type_global},
    {VFP_KEY_CONTROL_1r, register_type_global},
    {VLAN_CTRLr, register_type_global},
    {EGR_OAMP_CONTROLr, register_type_global},
    {OAMP_ARBITER_CONTROLr, register_type_global},
    {OAMP_ARBITER_WEIGHTr, register_type_global},
    {OAMP_ENABLEr, register_type_global},
    {OAMP_GLOBAL_SYS_HEADER_CFGr, register_type_global},
    {OAMP_GTIMER_CONFIGURATIONr, register_type_global},
    {OAMP_STATUS_2_REGr, register_type_global},
    {OAMP_TIMER_CONFIGr, register_type_global},
    {OAMP_MODE_REGISTERr, register_type_global},
    {EGR_SAT_SAMP_TM_CONTROLr, register_type_global},
    {ING_SAT_SAMP_TM_CONTROLr, register_type_global},
    {OAMP_SAT_EVC_RATE_CONTROLr, register_type_global},
    {OAMP_SAT_GEN_CONFIGr, register_type_global},
    {OAMP_SAT_GEN_RATE_CONTROLr, register_type_global},
    {OAMP_SAT_RX_CONFIGr, register_type_global},
    {OAMP_SAT_RX_STATr, register_type_global},
    {INVALIDr, register_type_global } /* Must be the last element in this structure */
};

/* Structure that maintains  diag cmdlist, reg_list, mem_list  for
 * "oam" feature for Saber2 chipset. */
techsupport_data_t techsupport_oam_saber2_data = {
    techsupport_oam_diag_cmdlist,
    techsupport_oam_saber2_reg_list,
    techsupport_oam_saber2_memory_table_list,
    techsupport_oam_saber2_diag_cmdlist
#ifndef BCM_SW_STATE_DUMP_DISABLE
    , techsupport_oam_sw_dump_cmdlist,
    techsupport_oam_saber2_sw_dump_cmdlist
#endif /* BCM_SW_STATE_DUMP_DISABLE */
};

