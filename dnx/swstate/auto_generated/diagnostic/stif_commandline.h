/** \file dnx/swstate/auto_generated/diagnostic/stif_commandline.h
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

#ifndef __DNX_STIF_COMMANDLINE_H__
#define __DNX_STIF_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/stif_types.h>
#include <include/bcm/stat.h>
#include <include/bcm/types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_stif_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_dump_options[];
extern sh_sand_man_t dnx_swstate_stif_dump_man;
shr_error_e sh_dnx_swstate_stif_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_size_get_options[];
extern sh_sand_man_t dnx_swstate_stif_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_stif_cmds[];
extern sh_sand_man_t dnx_swstate_stif_man;
extern const char cmd_dnx_swstate_stif_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_stif_instance_cmds[];
extern sh_sand_man_t dnx_swstate_stif_instance_man;
extern const char cmd_dnx_swstate_stif_instance_desc[];
shr_error_e sh_dnx_swstate_stif_instance_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_instance_dump_options[];
extern sh_sand_man_t dnx_swstate_stif_instance_dump_man;


shr_error_e sh_dnx_swstate_stif_instance_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_instance_size_get_options[];
extern sh_sand_man_t dnx_swstate_stif_instance_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_stif_instance_logical_port_cmds[];
extern sh_sand_man_t dnx_swstate_stif_instance_logical_port_man;
extern const char cmd_dnx_swstate_stif_instance_logical_port_desc[];
shr_error_e sh_dnx_swstate_stif_instance_logical_port_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_instance_logical_port_dump_options[];
extern sh_sand_man_t dnx_swstate_stif_instance_logical_port_dump_man;


shr_error_e sh_dnx_swstate_stif_instance_logical_port_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_instance_logical_port_size_get_options[];
extern sh_sand_man_t dnx_swstate_stif_instance_logical_port_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_stif_source_mapping_cmds[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_man;
extern const char cmd_dnx_swstate_stif_source_mapping_desc[];
shr_error_e sh_dnx_swstate_stif_source_mapping_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_source_mapping_dump_options[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_dump_man;


shr_error_e sh_dnx_swstate_stif_source_mapping_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_source_mapping_size_get_options[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_stif_source_mapping_first_port_cmds[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_first_port_man;
extern const char cmd_dnx_swstate_stif_source_mapping_first_port_desc[];
shr_error_e sh_dnx_swstate_stif_source_mapping_first_port_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_source_mapping_first_port_dump_options[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_first_port_dump_man;


shr_error_e sh_dnx_swstate_stif_source_mapping_first_port_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_source_mapping_first_port_size_get_options[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_first_port_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_stif_source_mapping_second_port_cmds[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_second_port_man;
extern const char cmd_dnx_swstate_stif_source_mapping_second_port_desc[];
shr_error_e sh_dnx_swstate_stif_source_mapping_second_port_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_source_mapping_second_port_dump_options[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_second_port_dump_man;


shr_error_e sh_dnx_swstate_stif_source_mapping_second_port_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_stif_source_mapping_second_port_size_get_options[];
extern sh_sand_man_t dnx_swstate_stif_source_mapping_second_port_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_STIF_COMMANDLINE_H__ */
