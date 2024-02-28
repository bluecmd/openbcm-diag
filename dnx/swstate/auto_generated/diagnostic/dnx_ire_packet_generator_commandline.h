/** \file dnx/swstate/auto_generated/diagnostic/dnx_ire_packet_generator_commandline.h
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

#ifndef __DNX_IRE_PACKET_GENERATOR_COMMANDLINE_H__
#define __DNX_IRE_PACKET_GENERATOR_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_ire_packet_generator_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_dump_man;
shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_ire_packet_generator_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_man;
extern const char cmd_dnx_swstate_dnx_ire_packet_generator_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_man;
extern const char cmd_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_desc[];
shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_dump_man;


shr_error_e sh_dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ire_packet_generator_ire_datapath_enable_state_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_IRE_PACKET_GENERATOR_COMMANDLINE_H__ */