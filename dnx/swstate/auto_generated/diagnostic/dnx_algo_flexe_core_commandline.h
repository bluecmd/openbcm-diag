/** \file dnx/swstate/auto_generated/diagnostic/dnx_algo_flexe_core_commandline.h
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

#ifndef __DNX_ALGO_FLEXE_CORE_COMMANDLINE_H__
#define __DNX_ALGO_FLEXE_CORE_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_algo_flexe_core_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/port/flexe/flexe_core.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
#include <soc/dnxc/swstate/callbacks/sw_state_ll_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_linked_list.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_dump_man;
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_size_get_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_drv_type_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_drv_type_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_drv_type_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_drv_type_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_drv_type_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_drv_type_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_drv_type_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_drv_type_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_drv_type_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mux_lphy_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_demux_lphy_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_mac_timeslot_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_rx_timeslot_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_sar_tx_timeslot_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_rateadpt_timeslot_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_resource_alloc_instance_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_group_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_group_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_flexe_ports_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_group_clients_rx_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_clients_rx_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_group_clients_rx_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_clients_rx_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_clients_rx_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_clients_rx_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_clients_rx_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_clients_rx_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_clients_rx_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_group_clients_tx_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_clients_tx_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_group_clients_tx_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_clients_tx_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_clients_tx_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_clients_tx_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_group_clients_tx_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_group_clients_tx_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_group_clients_tx_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_group_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_group_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_group_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_group_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_group_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_group_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_group_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_group_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_group_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_logical_phy_id_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_phy_speed_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_phy_speed_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_phy_speed_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_phy_speed_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_phy_speed_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_phy_speed_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_phy_speed_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_phy_speed_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_phy_speed_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_serdes_rate_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_instance_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_instance_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_instance_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_instance_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_instance_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_instance_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_instance_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_instance_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_instance_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_nof_instances_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_nof_instances_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_nof_instances_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_nof_instances_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_nof_instances_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_nof_instances_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_nof_instances_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_nof_instances_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_nof_instances_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_mux_lphy_bitmap_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_demux_lphy_bitmap_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_is_100g_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_100g_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_is_100g_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_is_100g_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_is_100g_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_100g_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_is_100g_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_is_100g_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_100g_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_is_bypass_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_bypass_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_is_bypass_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_is_bypass_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_is_bypass_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_bypass_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_is_bypass_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_is_bypass_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_bypass_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_port_is_am_transparent_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_mac_client_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_mac_client_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_mac_client_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_mac_client_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_mac_client_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_mac_client_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_mac_client_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_mac_client_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_mac_client_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_mac_client_timeslot_bitmap_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_sar_client_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_sar_client_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_timeslot_bitmap_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_timeslot_bitmap_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_rx_cell_mode_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_sar_client_tx_cell_mode_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_flexe_client_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_timeslot_bitmap_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_rx_slot_mode_size_get_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_man;
extern const char cmd_dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_desc[];
shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_dump_man;


shr_error_e sh_dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_algo_flexe_core_flexe_client_tx_slot_mode_size_get_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_FLEXE_CORE_COMMANDLINE_H__ */