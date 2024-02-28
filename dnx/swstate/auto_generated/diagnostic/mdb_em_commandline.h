/** \file dnx/swstate/auto_generated/diagnostic/mdb_em_commandline.h
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

#ifndef __DNX_MDB_EM_COMMANDLINE_H__
#define __DNX_MDB_EM_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/mdb_em_types.h>
#include <soc/dnx/dbal/dbal_structures.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_mdb.h>
#include <soc/dnxc/swstate/callbacks/sw_state_htb_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_hash_table.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_mdb_em_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_dump_man;
shr_error_e sh_dnx_swstate_mdb_em_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_man;
extern const char cmd_dnx_swstate_mdb_em_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_shadow_em_db_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_shadow_em_db_man;
extern const char cmd_dnx_swstate_mdb_em_shadow_em_db_desc[];
shr_error_e sh_dnx_swstate_mdb_em_shadow_em_db_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_shadow_em_db_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_shadow_em_db_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_shadow_em_db_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_shadow_em_db_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_shadow_em_db_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_value_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_value_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_value_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_value_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_value_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_value_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_value_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_value_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_value_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_size_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_size_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_size_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_size_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_size_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_size_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_encoding_map_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_encoding_map_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_encoding_map_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_encoding_map_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_encoding_map_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_encoding_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_encoding_map_size_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_encoding_map_size_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_encoding_map_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_encoding_map_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_encoding_map_size_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_app_id_size_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_app_id_size_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_app_id_size_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_app_id_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_app_id_size_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_app_id_size_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_app_id_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_app_id_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_app_id_size_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_vmv_info_max_payload_size_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_max_payload_size_man;
extern const char cmd_dnx_swstate_mdb_em_vmv_info_max_payload_size_desc[];
shr_error_e sh_dnx_swstate_mdb_em_vmv_info_max_payload_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_max_payload_size_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_max_payload_size_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_vmv_info_max_payload_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_vmv_info_max_payload_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_vmv_info_max_payload_size_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_mdb_em_mact_stamp_cmds[];
extern sh_sand_man_t dnx_swstate_mdb_em_mact_stamp_man;
extern const char cmd_dnx_swstate_mdb_em_mact_stamp_desc[];
shr_error_e sh_dnx_swstate_mdb_em_mact_stamp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_mact_stamp_dump_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_mact_stamp_dump_man;


shr_error_e sh_dnx_swstate_mdb_em_mact_stamp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_mdb_em_mact_stamp_size_get_options[];
extern sh_sand_man_t dnx_swstate_mdb_em_mact_stamp_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_MDB_EM_COMMANDLINE_H__ */
