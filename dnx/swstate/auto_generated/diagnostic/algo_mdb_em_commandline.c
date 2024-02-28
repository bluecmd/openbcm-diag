/** \file dnx/swstate/auto_generated/diagnostic/algo_mdb_em_commandline.c
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

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_mdb_em_diagnostic.h>
#include "algo_mdb_em_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/algo_mdb_em_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_algo_mdb_em_cmds[] = {
    {"template_manager", NULL, sh_dnx_swstate_algo_mdb_em_template_manager_cmds, NULL, &dnx_swstate_algo_mdb_em_template_manager_man},
    {"dump", sh_dnx_swstate_algo_mdb_em_dump_cmd, NULL, dnx_swstate_algo_mdb_em_dump_options, &dnx_swstate_algo_mdb_em_dump_man},
    {"size_get", sh_dnx_swstate_algo_mdb_em_size_get_cmd, NULL, dnx_swstate_algo_mdb_em_size_get_options, &dnx_swstate_algo_mdb_em_size_get_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_algo_mdb_em_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    mdb_em_format_template_manager.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(mdb_em_format_template_manager_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_mdb_em_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_mdb_em_dump_man = {
    "swstate algo_mdb_em dump",
    "print the module's content",
    "swstate algo_mdb_em dump",
    "swstate algo_mdb_em dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_mdb_em_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(mdb_em_format_template_manager_info[unit], mdb_em_format_template_manager_layout_str, MDB_EM_FORMAT_TEMPLATE_MANAGER_INFO_NOF_ENTRIES, "MDB_EM_FORMAT_TEMPLATE_MANAGER~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_mdb_em_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_mdb_em_size_get_man = {
    "swstate algo_mdb_em size_get",
    "print the module's size",
    "swstate algo_mdb_em size_get",
    "swstate algo_mdb_em size_get",
};


sh_sand_man_t dnx_swstate_algo_mdb_em_man = {
    cmd_dnx_swstate_algo_mdb_em_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_mdb_em_desc[] = "swstate algo_mdb_em commands";



sh_sand_cmd_t sh_dnx_swstate_algo_mdb_em_template_manager_cmds[] = {
    {"dump", sh_dnx_swstate_algo_mdb_em_template_manager_dump_cmd, NULL, dnx_swstate_algo_mdb_em_template_manager_dump_options, &dnx_swstate_algo_mdb_em_template_manager_dump_man},
    {"size_get", sh_dnx_swstate_algo_mdb_em_template_manager_size_get_cmd, NULL, dnx_swstate_algo_mdb_em_template_manager_size_get_options, &dnx_swstate_algo_mdb_em_template_manager_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_mdb_em_template_manager_man = {
    cmd_dnx_swstate_algo_mdb_em_template_manager_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_algo_mdb_em_template_manager_desc[] = "mdb_em_format_template_manager template_manager commands";


shr_error_e sh_dnx_swstate_algo_mdb_em_template_manager_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  template_manager_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("template_manager_idx_0", template_manager_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(mdb_em_format_template_manager_template_manager_dump(unit, template_manager_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_mdb_em_template_manager_dump_options[] = {
    {"template_manager_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_mdb_em_template_manager_dump_man = {
    "swstate dump",
    "print the variable value",
    "mdb_em_format_template_manager template_manager dump [,template_manager_idx_0=<int>]\n",
    "mdb_em_format_template_manager template_manager dump template_manager_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_algo_mdb_em_template_manager_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(mdb_em_format_template_manager_info[unit], mdb_em_format_template_manager_layout_str, MDB_EM_FORMAT_TEMPLATE_MANAGER_INFO_NOF_ENTRIES, "MDB_EM_FORMAT_TEMPLATE_MANAGER~TEMPLATE_MANAGER~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_algo_mdb_em_template_manager_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_algo_mdb_em_template_manager_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "mdb_em_format_template_manager template_manager size_get",
    "mdb_em_format_template_manager template_manager size_get",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
