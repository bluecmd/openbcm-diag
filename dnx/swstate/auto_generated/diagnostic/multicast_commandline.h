/** \file dnx/swstate/auto_generated/diagnostic/multicast_commandline.h
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

#ifndef __DNX_MULTICAST_COMMANDLINE_H__
#define __DNX_MULTICAST_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/multicast_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/multicast/multicast_template_print_cb.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_multicast.h>
#include <soc/dnxc/swstate/callbacks/sw_state_htb_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_htb.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_multicast_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_dump_options[];
extern sh_sand_man_t dnx_swstate_multicast_dump_man;
shr_error_e sh_dnx_swstate_multicast_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_size_get_options[];
extern sh_sand_man_t dnx_swstate_multicast_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_multicast_cmds[];
extern sh_sand_man_t dnx_swstate_multicast_man;
extern const char cmd_dnx_swstate_multicast_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_multicast_mcdb_cmds[];
extern sh_sand_man_t dnx_swstate_multicast_mcdb_man;
extern const char cmd_dnx_swstate_multicast_mcdb_desc[];
shr_error_e sh_dnx_swstate_multicast_mcdb_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_mcdb_dump_options[];
extern sh_sand_man_t dnx_swstate_multicast_mcdb_dump_man;


shr_error_e sh_dnx_swstate_multicast_mcdb_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_mcdb_size_get_options[];
extern sh_sand_man_t dnx_swstate_multicast_mcdb_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_multicast_key_2_mcdb_id_hash_cmds[];
extern sh_sand_man_t dnx_swstate_multicast_key_2_mcdb_id_hash_man;
extern const char cmd_dnx_swstate_multicast_key_2_mcdb_id_hash_desc[];
shr_error_e sh_dnx_swstate_multicast_key_2_mcdb_id_hash_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_key_2_mcdb_id_hash_dump_options[];
extern sh_sand_man_t dnx_swstate_multicast_key_2_mcdb_id_hash_dump_man;


shr_error_e sh_dnx_swstate_multicast_key_2_mcdb_id_hash_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_key_2_mcdb_id_hash_size_get_options[];
extern sh_sand_man_t dnx_swstate_multicast_key_2_mcdb_id_hash_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_multicast_group_is_tdm_cmds[];
extern sh_sand_man_t dnx_swstate_multicast_group_is_tdm_man;
extern const char cmd_dnx_swstate_multicast_group_is_tdm_desc[];
shr_error_e sh_dnx_swstate_multicast_group_is_tdm_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_group_is_tdm_dump_options[];
extern sh_sand_man_t dnx_swstate_multicast_group_is_tdm_dump_man;


shr_error_e sh_dnx_swstate_multicast_group_is_tdm_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_group_is_tdm_size_get_options[];
extern sh_sand_man_t dnx_swstate_multicast_group_is_tdm_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_multicast_group_is_sar_cmds[];
extern sh_sand_man_t dnx_swstate_multicast_group_is_sar_man;
extern const char cmd_dnx_swstate_multicast_group_is_sar_desc[];
shr_error_e sh_dnx_swstate_multicast_group_is_sar_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_group_is_sar_dump_options[];
extern sh_sand_man_t dnx_swstate_multicast_group_is_sar_dump_man;


shr_error_e sh_dnx_swstate_multicast_group_is_sar_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_multicast_group_is_sar_size_get_options[];
extern sh_sand_man_t dnx_swstate_multicast_group_is_sar_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_MULTICAST_COMMANDLINE_H__ */
