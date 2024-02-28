/** \file dnx/swstate/auto_generated/diagnostic/lif_mngr_commandline.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_LIF_MNGR_COMMANDLINE_H__
#define __DNX_LIF_MNGR_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/lif_mngr_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <include/soc/dnx/dbal/dbal_structures.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_lif.h>
#include <soc/dnxc/swstate/callbacks/sw_state_htb_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_hash_table.h>
#include <soc/dnxc/swstate/types/sw_state_htb.h>
#include <soc/dnxc/swstate/types/sw_state_index_hash_table.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_lif_mngr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_dump_man;
shr_error_e sh_dnx_swstate_lif_mngr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_man;
extern const char cmd_dnx_swstate_lif_mngr_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_lif_mapping_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_man;
extern const char cmd_dnx_swstate_lif_mngr_lif_mapping_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_man;
extern const char cmd_dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif1_to_global_lif_map_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_man;
extern const char cmd_dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_lif2_to_global_lif_map_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_man;
extern const char cmd_dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_ingress_global_lif_to_lif_htb_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_man;
extern const char cmd_dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_egress_lif_to_global_lif_map_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_man;
extern const char cmd_dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_lif_mapping_egress_global_lif_to_lif_htb_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_symmetric_global_lif_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_ingress_global_lif_counter_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_egress_global_lif_counter_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_man;
extern const char cmd_dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_global_lif_allocation_global_lif_symmetric_indication_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_inlif_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_man;
extern const char cmd_dnx_swstate_lif_mngr_local_inlif_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_man;
extern const char cmd_dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_shared_by_cores_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_man;
extern const char cmd_dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dedicated_per_core_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_man;
extern const char cmd_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_man;
extern const char cmd_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_inlif_inlif_table_dpc_all_cores_indication_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_egress_local_lif_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_egress_local_lif_man;
extern const char cmd_dnx_swstate_lif_mngr_egress_local_lif_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_egress_local_lif_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_egress_local_lif_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_egress_local_lif_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_egress_local_lif_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_egress_local_lif_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_egress_local_lif_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_table_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif1_dbal_result_type_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_table_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_ingress_lif2_dbal_result_type_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_htb_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_table_to_index_htb_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_man;
extern const char cmd_dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_local_lif_info_egress_lif_sw_info_per_table_htb_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_lif_mngr_number_of_outlif_tables_cmds[];
extern sh_sand_man_t dnx_swstate_lif_mngr_number_of_outlif_tables_man;
extern const char cmd_dnx_swstate_lif_mngr_number_of_outlif_tables_desc[];
shr_error_e sh_dnx_swstate_lif_mngr_number_of_outlif_tables_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_number_of_outlif_tables_dump_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_number_of_outlif_tables_dump_man;


shr_error_e sh_dnx_swstate_lif_mngr_number_of_outlif_tables_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_lif_mngr_number_of_outlif_tables_size_get_options[];
extern sh_sand_man_t dnx_swstate_lif_mngr_number_of_outlif_tables_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_LIF_MNGR_COMMANDLINE_H__ */
