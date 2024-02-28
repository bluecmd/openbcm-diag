/** \file dnx/swstate/auto_generated/diagnostic/dnx_field_qualifier_commandline.h
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

#ifndef __DNX_FIELD_QUALIFIER_COMMANDLINE_H__
#define __DNX_FIELD_QUALIFIER_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_qualifier_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_field_qualifier_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_dump_man;
shr_error_e sh_dnx_swstate_dnx_field_qualifier_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_valid_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_valid_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_valid_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_valid_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_valid_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_valid_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_valid_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_valid_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_valid_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_field_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_field_id_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_field_id_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_field_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_field_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_field_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_field_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_field_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_field_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_size_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_size_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_size_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_size_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_size_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_size_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_bcm_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_bcm_id_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_bcm_id_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_bcm_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_bcm_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_bcm_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_bcm_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_bcm_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_bcm_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_ref_count_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_ref_count_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_ref_count_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_ref_count_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_ref_count_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_ref_count_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_ref_count_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_ref_count_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_ref_count_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_info_flags_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_flags_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_info_flags_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_flags_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_flags_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_flags_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_info_flags_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_info_flags_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_info_flags_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_predefined_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_predefined_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_predefined_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_predefined_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_predefined_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_predefined_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_predefined_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_predefined_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_predefined_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_predefined_field_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_predefined_field_id_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_predefined_field_id_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_predefined_field_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_predefined_field_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_predefined_field_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_predefined_field_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_predefined_field_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_predefined_field_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_layer_record_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_layer_record_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_layer_record_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_layer_record_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_layer_record_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_layer_record_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_layer_record_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_layer_record_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_layer_record_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_qualifier_layer_record_field_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_layer_record_field_id_man;
extern const char cmd_dnx_swstate_dnx_field_qualifier_layer_record_field_id_desc[];
shr_error_e sh_dnx_swstate_dnx_field_qualifier_layer_record_field_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_layer_record_field_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_layer_record_field_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_qualifier_layer_record_field_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_qualifier_layer_record_field_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_qualifier_layer_record_field_id_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_FIELD_QUALIFIER_COMMANDLINE_H__ */
