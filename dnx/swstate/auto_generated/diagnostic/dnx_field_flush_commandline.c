/** \file dnx/swstate/auto_generated/diagnostic/dnx_field_flush_commandline.c
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

#include <soc/dnx/swstate/auto_generated/diagnostic/dnx_field_flush_diagnostic.h>
#include "dnx_field_flush_commandline.h"
#include <soc/dnx/swstate/auto_generated/access/dnx_field_flush_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_dnx_field_flush_cmds[] = {
    {"flush_profile", NULL, sh_dnx_swstate_dnx_field_flush_flush_profile_cmds, NULL, &dnx_swstate_dnx_field_flush_flush_profile_man},
    {"dump", sh_dnx_swstate_dnx_field_flush_dump_cmd, NULL, dnx_swstate_dnx_field_flush_dump_options, &dnx_swstate_dnx_field_flush_dump_man},
    {"size_get", sh_dnx_swstate_dnx_field_flush_size_get_cmd, NULL, dnx_swstate_dnx_field_flush_size_get_options, &dnx_swstate_dnx_field_flush_size_get_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_dnx_field_flush_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    dnx_field_flush_sw.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(dnx_field_flush_sw_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_field_flush_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_dump_man = {
    "swstate dnx_field_flush dump",
    "print the module's content",
    "swstate dnx_field_flush dump",
    "swstate dnx_field_flush dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_field_flush_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(dnx_field_flush_sw_info[unit], dnx_field_flush_sw_layout_str, DNX_FIELD_FLUSH_SW_INFO_NOF_ENTRIES, "DNX_FIELD_FLUSH_SW~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_field_flush_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_size_get_man = {
    "swstate dnx_field_flush size_get",
    "print the module's size",
    "swstate dnx_field_flush size_get",
    "swstate dnx_field_flush size_get",
};


sh_sand_man_t dnx_swstate_dnx_field_flush_man = {
    cmd_dnx_swstate_dnx_field_flush_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_field_flush_desc[] = "swstate dnx_field_flush commands";



sh_sand_cmd_t sh_dnx_swstate_dnx_field_flush_flush_profile_cmds[] = {
    {"mapped_fg", NULL, sh_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_cmds, NULL, &dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_man},
    {"dump", sh_dnx_swstate_dnx_field_flush_flush_profile_dump_cmd, NULL, dnx_swstate_dnx_field_flush_flush_profile_dump_options, &dnx_swstate_dnx_field_flush_flush_profile_dump_man},
    {"size_get", sh_dnx_swstate_dnx_field_flush_flush_profile_size_get_cmd, NULL, dnx_swstate_dnx_field_flush_flush_profile_size_get_options, &dnx_swstate_dnx_field_flush_flush_profile_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_flush_profile_man = {
    cmd_dnx_swstate_dnx_field_flush_flush_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_field_flush_flush_profile_desc[] = "dnx_field_flush_sw flush_profile commands";


shr_error_e sh_dnx_swstate_dnx_field_flush_flush_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  flush_profile_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("flush_profile_idx_0", flush_profile_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_field_flush_sw_flush_profile_dump(unit, flush_profile_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_field_flush_flush_profile_dump_options[] = {
    {"flush_profile_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_flush_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_field_flush_sw flush_profile dump [,flush_profile_idx_0=<int>]\n",
    "dnx_field_flush_sw flush_profile dump flush_profile_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_field_flush_flush_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_field_flush_sw_info[unit], dnx_field_flush_sw_layout_str, DNX_FIELD_FLUSH_SW_INFO_NOF_ENTRIES, "DNX_FIELD_FLUSH_SW~FLUSH_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_field_flush_flush_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_flush_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_field_flush_sw flush_profile size_get",
    "dnx_field_flush_sw flush_profile size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_dump_cmd, NULL, dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_dump_options, &dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_dump_man},
    {"size_get", sh_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_size_get_cmd, NULL, dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_size_get_options, &dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_man = {
    cmd_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_desc[] = "dnx_field_flush_sw flush_profile mapped_fg commands";


shr_error_e sh_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  flush_profile_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("flush_profile_idx_0", flush_profile_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_field_flush_sw_flush_profile_mapped_fg_dump(unit, flush_profile_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_dump_options[] = {
    {"flush_profile_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_field_flush_sw flush_profile mapped_fg dump [,flush_profile_idx_0=<int>]\n",
    "dnx_field_flush_sw flush_profile mapped_fg dump flush_profile_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_field_flush_sw_info[unit], dnx_field_flush_sw_layout_str, DNX_FIELD_FLUSH_SW_INFO_NOF_ENTRIES, "DNX_FIELD_FLUSH_SW~FLUSH_PROFILE~MAPPED_FG~", sizeof(((dnx_field_flush_sw_t*)sw_state_roots_array[unit][DNX_FIELD_FLUSH_MODULE_ID])->flush_profile[0].mapped_fg));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_field_flush_flush_profile_mapped_fg_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_field_flush_sw flush_profile mapped_fg size_get",
    "dnx_field_flush_sw flush_profile mapped_fg size_get",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
