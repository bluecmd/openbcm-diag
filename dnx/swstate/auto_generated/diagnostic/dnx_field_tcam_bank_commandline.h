/** \file dnx/swstate/auto_generated/diagnostic/dnx_field_tcam_bank_commandline.h
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

#ifndef __DNX_FIELD_TCAM_BANK_COMMANDLINE_H__
#define __DNX_FIELD_TCAM_BANK_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_tcam_bank_types.h>
#include <soc/dnxc/swstate/callbacks/sw_state_ll_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_linked_list.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_tcam_access_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_dump_man;
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_tcam_banks_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_owner_stage_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_active_handlers_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_nof_free_entries_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_bank_mode_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_bank_tcam_banks_key_size_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_FIELD_TCAM_BANK_COMMANDLINE_H__ */
