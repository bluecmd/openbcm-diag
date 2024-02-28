/** \file dnx/swstate/auto_generated/diagnostic/algo_stg_commandline.h
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

#ifndef __DNX_ALGO_STG_COMMANDLINE_H__
#define __DNX_ALGO_STG_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_stg_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_algo_stg_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_stg_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_stg_dump_man;
shr_error_e sh_dnx_swstate_algo_stg_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_stg_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_stg_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_algo_stg_cmds[];
extern sh_sand_man_t dnx_swstate_algo_stg_man;
extern const char cmd_dnx_swstate_algo_stg_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_algo_stg_stg_id_cmds[];
extern sh_sand_man_t dnx_swstate_algo_stg_stg_id_man;
extern const char cmd_dnx_swstate_algo_stg_stg_id_desc[];
shr_error_e sh_dnx_swstate_algo_stg_stg_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_stg_stg_id_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_stg_stg_id_dump_man;


shr_error_e sh_dnx_swstate_algo_stg_stg_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_stg_stg_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_stg_stg_id_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_STG_COMMANDLINE_H__ */
