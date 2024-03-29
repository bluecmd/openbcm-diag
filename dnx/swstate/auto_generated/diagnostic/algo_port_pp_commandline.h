/** \file dnx/swstate/auto_generated/diagnostic/algo_port_pp_commandline.h
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

#ifndef __DNX_ALGO_PORT_PP_COMMANDLINE_H__
#define __DNX_ALGO_PORT_PP_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_port_pp_types.h>
#include <bcm_int/dnx/algo/port_pp/algo_port_pp.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/port_tpid_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_algo_port_pp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_dump_man;
shr_error_e sh_dnx_swstate_algo_port_pp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_man;
extern const char cmd_dnx_swstate_algo_port_pp_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_esem_default_result_profile_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_default_result_profile_man;
extern const char cmd_dnx_swstate_algo_port_pp_esem_default_result_profile_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_esem_default_result_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_default_result_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_default_result_profile_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_esem_default_result_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_default_result_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_default_result_profile_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_man;
extern const char cmd_dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_ingress_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_man;
extern const char cmd_dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_ipvx_o_mpls_parsing_enable_profile_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_man;
extern const char cmd_dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_port_pp_tpid_profile_egress_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_man;
extern const char cmd_dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_egress_acceptable_frame_type_profile_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_man;
extern const char cmd_dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_egress_pp_port_sit_profile_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_pp_port_lb_profile_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_pp_port_lb_profile_man;
extern const char cmd_dnx_swstate_algo_port_pp_pp_port_lb_profile_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_pp_port_lb_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_pp_port_lb_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_pp_port_lb_profile_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_pp_port_lb_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_pp_port_lb_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_pp_port_lb_profile_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_force_forward_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_man;
extern const char cmd_dnx_swstate_algo_port_pp_force_forward_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_force_forward_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_force_forward_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_force_forward_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_force_forward_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_force_forward_mngr_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_mngr_man;
extern const char cmd_dnx_swstate_algo_port_pp_force_forward_mngr_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_force_forward_mngr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_force_forward_mngr_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_mngr_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_force_forward_mngr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_force_forward_mngr_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_mngr_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_force_forward_trap_id_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_trap_id_man;
extern const char cmd_dnx_swstate_algo_port_pp_force_forward_trap_id_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_force_forward_trap_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_force_forward_trap_id_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_trap_id_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_force_forward_trap_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_force_forward_trap_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_force_forward_trap_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_esem_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_man;
extern const char cmd_dnx_swstate_algo_port_pp_esem_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_esem_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_esem_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_esem_access_cmd_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_access_cmd_man;
extern const char cmd_dnx_swstate_algo_port_pp_esem_access_cmd_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_esem_access_cmd_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_access_cmd_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_access_cmd_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_esem_access_cmd_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_access_cmd_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_access_cmd_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_man;
extern const char cmd_dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_esem_predefine_esem_cmds_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_recycle_app_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_recycle_app_man;
extern const char cmd_dnx_swstate_algo_port_pp_recycle_app_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_recycle_app_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_recycle_app_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_recycle_app_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_recycle_app_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_recycle_app_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_recycle_app_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_algo_port_pp_recycle_app_type_cmds[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_recycle_app_type_man;
extern const char cmd_dnx_swstate_algo_port_pp_recycle_app_type_desc[];
shr_error_e sh_dnx_swstate_algo_port_pp_recycle_app_type_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_recycle_app_type_dump_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_recycle_app_type_dump_man;


shr_error_e sh_dnx_swstate_algo_port_pp_recycle_app_type_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_algo_port_pp_recycle_app_type_size_get_options[];
extern sh_sand_man_t dnx_swstate_algo_port_pp_recycle_app_type_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_PORT_PP_COMMANDLINE_H__ */
