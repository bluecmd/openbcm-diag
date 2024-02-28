/** \file dnxc/swstate/auto_generated/diagnostic/adapter_commandline.h
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

#ifndef __DNXC_ADAPTER_COMMANDLINE_H__
#define __DNXC_ADAPTER_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/auto_generated/types/adapter_types.h>
#include <bcm/types.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_adapter_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_dump_man;
shr_error_e sh_dnx_swstate_adapter_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_adapter_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_man;
extern const char cmd_dnx_swstate_adapter_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_man;
extern const char cmd_dnx_swstate_adapter_params_desc[];
shr_error_e sh_dnx_swstate_adapter_params_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_rx_tx_fd_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_rx_tx_fd_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_rx_tx_fd_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_rx_tx_fd_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_rx_tx_fd_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_rx_tx_fd_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_rx_tx_fd_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_rx_tx_fd_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_rx_tx_fd_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_mem_reg_fd_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_mem_reg_fd_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_mem_reg_fd_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_mem_reg_fd_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_mem_reg_fd_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_mem_reg_fd_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_mem_reg_fd_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_mem_reg_fd_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_mem_reg_fd_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_sdk_interface_fd_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_sdk_interface_fd_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_sdk_interface_fd_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_sdk_interface_fd_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_sdk_interface_fd_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_sdk_interface_fd_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_sdk_interface_fd_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_sdk_interface_fd_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_sdk_interface_fd_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_external_events_fd_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_fd_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_external_events_fd_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_external_events_fd_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_external_events_fd_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_fd_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_external_events_fd_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_external_events_fd_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_fd_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_external_events_port_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_port_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_external_events_port_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_external_events_port_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_external_events_port_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_port_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_external_events_port_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_external_events_port_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_port_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_server_address_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_server_address_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_server_address_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_server_address_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_server_address_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_server_address_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_server_address_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_server_address_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_server_address_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_rx_tx_mutex_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_rx_tx_mutex_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_rx_tx_mutex_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_rx_tx_mutex_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_rx_tx_mutex_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_rx_tx_mutex_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_rx_tx_mutex_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_rx_tx_mutex_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_rx_tx_mutex_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_mem_reg_mutex_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_mem_reg_mutex_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_mem_reg_mutex_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_mem_reg_mutex_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_mem_reg_mutex_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_mem_reg_mutex_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_mem_reg_mutex_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_mem_reg_mutex_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_mem_reg_mutex_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_sdk_interface_mutex_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_sdk_interface_mutex_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_sdk_interface_mutex_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_sdk_interface_mutex_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_sdk_interface_mutex_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_sdk_interface_mutex_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_sdk_interface_mutex_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_sdk_interface_mutex_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_sdk_interface_mutex_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_adapter_params_adapter_external_events_mutex_cmds[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_mutex_man;
extern const char cmd_dnx_swstate_adapter_params_adapter_external_events_mutex_desc[];
shr_error_e sh_dnx_swstate_adapter_params_adapter_external_events_mutex_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_external_events_mutex_dump_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_mutex_dump_man;


shr_error_e sh_dnx_swstate_adapter_params_adapter_external_events_mutex_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_adapter_params_adapter_external_events_mutex_size_get_options[];
extern sh_sand_man_t dnx_swstate_adapter_params_adapter_external_events_mutex_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNXC_ADAPTER_COMMANDLINE_H__ */
