/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * File: tomahawk3_vfp.c
 *
 * Purpose:
 *    Maintains all the debug information for vfp feature for tomahawk3
 *
 * Note: This file is auto-generated. Manual edits
 *       to it will be lost when it is auto-regenerated.
 */

#include <appl/diag/techsupport.h>
#include <soc/mcm/allenum.h>

extern char * techsupport_vfp_diag_cmdlist[];
extern char * techsupport_vfp_sw_dump_cmdlist[];

/* "vfp" feature's diag command list valid only for tomahawk3 */
char * techsupport_vfp_tomahawk3_diag_cmdlist[] = {
    NULL /* Must be the last element in this structure */
};

#ifndef BCM_SW_STATE_DUMP_DISABLE
/* "vfp" feature's software dump command list valid only for tomahawk3 */
char * techsupport_vfp_tomahawk3_sw_dump_cmdlist[] = {
    NULL /* Must be the last element in this structure */
};
#endif /* BCM_SW_STATE_DUMP_DISABLE */


/* Structure that maintains memory list for
 * "vfp" feature for tomahawk3 chipset. */
static soc_mem_t techsupport_vfp_tomahawk3_memory_table_list[] = {
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_0_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_10_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_11_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_12_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_13_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_14_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_15_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_16_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_17_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_18_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_19_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_1_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_2_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_3_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_4_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_5_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_6_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_7_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_8_PIPE7m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE0m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE1m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE2m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE3m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE4m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE5m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE6m,
    ING_FLEX_CTR_COUNTER_TABLE_9_PIPE7m,
    ING_FLEX_CTR_OFFSET_TABLE_0m,
    ING_FLEX_CTR_OFFSET_TABLE_10m,
    ING_FLEX_CTR_OFFSET_TABLE_11m,
    ING_FLEX_CTR_OFFSET_TABLE_12m,
    ING_FLEX_CTR_OFFSET_TABLE_13m,
    ING_FLEX_CTR_OFFSET_TABLE_14m,
    ING_FLEX_CTR_OFFSET_TABLE_15m,
    ING_FLEX_CTR_OFFSET_TABLE_16m,
    ING_FLEX_CTR_OFFSET_TABLE_17m,
    ING_FLEX_CTR_OFFSET_TABLE_18m,
    ING_FLEX_CTR_OFFSET_TABLE_19m,
    ING_FLEX_CTR_OFFSET_TABLE_1m,
    ING_FLEX_CTR_OFFSET_TABLE_2m,
    ING_FLEX_CTR_OFFSET_TABLE_3m,
    ING_FLEX_CTR_OFFSET_TABLE_4m,
    ING_FLEX_CTR_OFFSET_TABLE_5m,
    ING_FLEX_CTR_OFFSET_TABLE_6m,
    ING_FLEX_CTR_OFFSET_TABLE_7m,
    ING_FLEX_CTR_OFFSET_TABLE_8m,
    ING_FLEX_CTR_OFFSET_TABLE_9m,
    LPORT_TABm,
    VFP_HASH_FIELD_BMAP_TABLE_Am,
    VFP_HASH_FIELD_BMAP_TABLE_Bm,
    VFP_POLICY_TABLE_PIPE0m,
    VFP_POLICY_TABLE_PIPE1m,
    VFP_POLICY_TABLE_PIPE2m,
    VFP_POLICY_TABLE_PIPE3m,
    VFP_POLICY_TABLE_PIPE4m,
    VFP_POLICY_TABLE_PIPE5m,
    VFP_POLICY_TABLE_PIPE6m,
    VFP_POLICY_TABLE_PIPE7m,
    VFP_TCAM_PIPE0m,
    VFP_TCAM_PIPE1m,
    VFP_TCAM_PIPE2m,
    VFP_TCAM_PIPE3m,
    VFP_TCAM_PIPE4m,
    VFP_TCAM_PIPE5m,
    VFP_TCAM_PIPE6m,
    VFP_TCAM_PIPE7m,
    PORT_TABm,
    INVALIDm /* Must be the last element in this structure */
};

/* Structure that maintains register list for
 * "vfp" feature for tomahawk3 chipset. */
techsupport_reg_t techsupport_vfp_tomahawk3_reg_list[] = {
    { ING_CONFIG_64r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE0r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE1r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE2r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE3r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE4r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE5r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE6r, register_type_global },
    { VFP_KEY_CONTROL_1_PIPE7r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE0r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE1r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE2r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE3r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE4r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE5r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE6r, register_type_global },
    { VFP_KEY_CONTROL_2_PIPE7r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE0r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE1r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE2r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE3r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE4r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE5r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE6r, register_type_global },
    { VFP_SLICE_CONTROL_PIPE7r, register_type_global },
    { VFP_SLICE_MAP_PIPE0r, register_type_global },
    { VFP_SLICE_MAP_PIPE1r, register_type_global },
    { VFP_SLICE_MAP_PIPE2r, register_type_global },
    { VFP_SLICE_MAP_PIPE3r, register_type_global },
    { VFP_SLICE_MAP_PIPE4r, register_type_global },
    { VFP_SLICE_MAP_PIPE5r, register_type_global },
    { VFP_SLICE_MAP_PIPE6r, register_type_global },
    { VFP_SLICE_MAP_PIPE7r, register_type_global },
    { INVALIDr, register_type_global } /* Must be the last element in this structure */
};

/* Structure that maintains diag cmdlist, reg_list, mem_list  for
 * "vfp" feature for tomahawk3 chipset. */
techsupport_data_t techsupport_vfp_tomahawk3_data = {
    techsupport_vfp_diag_cmdlist,
    techsupport_vfp_tomahawk3_reg_list,
    techsupport_vfp_tomahawk3_memory_table_list,
    techsupport_vfp_tomahawk3_diag_cmdlist
#ifndef BCM_SW_STATE_DUMP_DISABLE
    , techsupport_vfp_sw_dump_cmdlist,
    techsupport_vfp_tomahawk3_sw_dump_cmdlist
#endif /* BCM_SW_STATE_DUMP_DISABLE */
};
