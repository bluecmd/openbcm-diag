/** \file dnx/swstate/auto_generated/diagnostic/algo_lif_profile_commandline.c
 *
 * sw state functions definitions
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

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_lif_profile_diagnostic.h>
#include "algo_lif_profile_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_lif_profile_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_cmds[] = {
    {"in_lif_profile_l3_enablers", NULL, sh_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_cmds, NULL, &dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_man},
    {"in_lif_lb_profile_disablers_flags", NULL, sh_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_cmds, NULL, &dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_man},
    {"in_lif_profile", NULL, sh_dnx_swstate_algo_lif_profile_in_lif_profile_cmds, NULL, &dnx_swstate_algo_lif_profile_in_lif_profile_man},
    {"eth_rif_profile", NULL, sh_dnx_swstate_algo_lif_profile_eth_rif_profile_cmds, NULL, &dnx_swstate_algo_lif_profile_eth_rif_profile_man},
    {"in_lif_da_not_found_destination", NULL, sh_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_cmds, NULL, &dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_man},
    {"etpp_out_lif_profile", NULL, sh_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_cmds, NULL, &dnx_swstate_algo_lif_profile_etpp_out_lif_profile_man},
    {"erpp_out_lif_profile", NULL, sh_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_cmds, NULL, &dnx_swstate_algo_lif_profile_erpp_out_lif_profile_man},
    {"dump", sh_dnx_swstate_algo_lif_profile_dump_cmd, NULL, dnx_swstate_algo_lif_profile_dump_options, &dnx_swstate_algo_lif_profile_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_size_get_options, &dnx_swstate_algo_lif_profile_size_get_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_algo_lif_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    algo_lif_profile_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(algo_lif_profile_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_dump_man = {
    "swstate algo_lif_profile dump",
    "print the module's content",
    "swstate algo_lif_profile dump",
    "swstate algo_lif_profile dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_size_get_man = {
    "swstate algo_lif_profile size_get",
    "print the module's size",
    "swstate algo_lif_profile size_get",
    "swstate algo_lif_profile size_get",
};


sh_sand_man_t dnx_swstate_algo_lif_profile_man = {
    cmd_dnx_swstate_algo_lif_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_desc[] = "swstate algo_lif_profile commands";



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_dump_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_dump_options, &dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_size_get_options, &dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_man = {
    cmd_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_desc[] = "algo_lif_profile_db in_lif_profile_l3_enablers commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_in_lif_profile_l3_enablers_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db in_lif_profile_l3_enablers dump []\n",
    "algo_lif_profile_db in_lif_profile_l3_enablers dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~IN_LIF_PROFILE_L3_ENABLERS~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_profile_l3_enablers_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db in_lif_profile_l3_enablers size_get",
    "algo_lif_profile_db in_lif_profile_l3_enablers size_get",
};



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_dump_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_dump_options, &dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_size_get_options, &dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_man = {
    cmd_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_desc[] = "algo_lif_profile_db in_lif_lb_profile_disablers_flags commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_in_lif_lb_profile_disablers_flags_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db in_lif_lb_profile_disablers_flags dump []\n",
    "algo_lif_profile_db in_lif_lb_profile_disablers_flags dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~IN_LIF_LB_PROFILE_DISABLERS_FLAGS~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_lb_profile_disablers_flags_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db in_lif_lb_profile_disablers_flags size_get",
    "algo_lif_profile_db in_lif_lb_profile_disablers_flags size_get",
};



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_in_lif_profile_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_in_lif_profile_dump_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_profile_dump_options, &dnx_swstate_algo_lif_profile_in_lif_profile_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_in_lif_profile_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_profile_size_get_options, &dnx_swstate_algo_lif_profile_in_lif_profile_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_profile_man = {
    cmd_dnx_swstate_algo_lif_profile_in_lif_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_in_lif_profile_desc[] = "algo_lif_profile_db in_lif_profile commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_in_lif_profile_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_profile_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db in_lif_profile dump []\n",
    "algo_lif_profile_db in_lif_profile dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~IN_LIF_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db in_lif_profile size_get",
    "algo_lif_profile_db in_lif_profile size_get",
};



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_eth_rif_profile_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_eth_rif_profile_dump_cmd, NULL, dnx_swstate_algo_lif_profile_eth_rif_profile_dump_options, &dnx_swstate_algo_lif_profile_eth_rif_profile_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_eth_rif_profile_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_eth_rif_profile_size_get_options, &dnx_swstate_algo_lif_profile_eth_rif_profile_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_eth_rif_profile_man = {
    cmd_dnx_swstate_algo_lif_profile_eth_rif_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_eth_rif_profile_desc[] = "algo_lif_profile_db eth_rif_profile commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_eth_rif_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_eth_rif_profile_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_eth_rif_profile_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_eth_rif_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db eth_rif_profile dump []\n",
    "algo_lif_profile_db eth_rif_profile dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_eth_rif_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~ETH_RIF_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_eth_rif_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_eth_rif_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db eth_rif_profile size_get",
    "algo_lif_profile_db eth_rif_profile size_get",
};



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_dump_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_dump_options, &dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_size_get_options, &dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_man = {
    cmd_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_desc[] = "algo_lif_profile_db in_lif_da_not_found_destination commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_in_lif_da_not_found_destination_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db in_lif_da_not_found_destination dump []\n",
    "algo_lif_profile_db in_lif_da_not_found_destination dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~IN_LIF_DA_NOT_FOUND_DESTINATION~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_in_lif_da_not_found_destination_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db in_lif_da_not_found_destination size_get",
    "algo_lif_profile_db in_lif_da_not_found_destination size_get",
};



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_dump_cmd, NULL, dnx_swstate_algo_lif_profile_etpp_out_lif_profile_dump_options, &dnx_swstate_algo_lif_profile_etpp_out_lif_profile_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_etpp_out_lif_profile_size_get_options, &dnx_swstate_algo_lif_profile_etpp_out_lif_profile_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_etpp_out_lif_profile_man = {
    cmd_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_desc[] = "algo_lif_profile_db etpp_out_lif_profile commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_etpp_out_lif_profile_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_etpp_out_lif_profile_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_etpp_out_lif_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db etpp_out_lif_profile dump []\n",
    "algo_lif_profile_db etpp_out_lif_profile dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_etpp_out_lif_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~ETPP_OUT_LIF_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_etpp_out_lif_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_etpp_out_lif_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db etpp_out_lif_profile size_get",
    "algo_lif_profile_db etpp_out_lif_profile size_get",
};



sh_sand_cmd_t sh_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_cmds[] = {
    {"dump", sh_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_dump_cmd, NULL, dnx_swstate_algo_lif_profile_erpp_out_lif_profile_dump_options, &dnx_swstate_algo_lif_profile_erpp_out_lif_profile_dump_man},
    {"size_get", sh_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_size_get_cmd, NULL, dnx_swstate_algo_lif_profile_erpp_out_lif_profile_size_get_options, &dnx_swstate_algo_lif_profile_erpp_out_lif_profile_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_erpp_out_lif_profile_man = {
    cmd_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_desc[] = "algo_lif_profile_db erpp_out_lif_profile commands";


shr_error_e sh_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(algo_lif_profile_db_erpp_out_lif_profile_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_erpp_out_lif_profile_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_erpp_out_lif_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "algo_lif_profile_db erpp_out_lif_profile dump []\n",
    "algo_lif_profile_db erpp_out_lif_profile dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_lif_profile_erpp_out_lif_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(algo_lif_profile_db_info[unit], algo_lif_profile_db_layout_str, ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES, "ALGO_LIF_PROFILE_DB~ERPP_OUT_LIF_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_lif_profile_erpp_out_lif_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_lif_profile_erpp_out_lif_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "algo_lif_profile_db erpp_out_lif_profile size_get",
    "algo_lif_profile_db erpp_out_lif_profile size_get",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
