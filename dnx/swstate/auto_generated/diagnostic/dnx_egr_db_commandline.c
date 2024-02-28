/** \file dnx/swstate/auto_generated/diagnostic/dnx_egr_db_commandline.c
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

#include <soc/dnx/swstate/auto_generated/diagnostic/dnx_egr_db_diagnostic.h>
#include "dnx_egr_db_commandline.h"
#include <soc/dnx/swstate/auto_generated/access/dnx_egr_db_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_cmds[] = {
    {"ps", NULL, sh_dnx_swstate_dnx_egr_db_ps_cmds, NULL, &dnx_swstate_dnx_egr_db_ps_man},
    {"interface_occ", NULL, sh_dnx_swstate_dnx_egr_db_interface_occ_cmds, NULL, &dnx_swstate_dnx_egr_db_interface_occ_man},
    {"total_egr_if_credits", NULL, sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_cmds, NULL, &dnx_swstate_dnx_egr_db_total_egr_if_credits_man},
    {"egr_if_credits_configured", NULL, sh_dnx_swstate_dnx_egr_db_egr_if_credits_configured_cmds, NULL, &dnx_swstate_dnx_egr_db_egr_if_credits_configured_man},
    {"total_esb_queues_allocated", NULL, sh_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_cmds, NULL, &dnx_swstate_dnx_egr_db_total_esb_queues_allocated_man},
    {"nof_negative_compensation_ports", NULL, sh_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_cmds, NULL, &dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_man},
    {"dump", sh_dnx_swstate_dnx_egr_db_dump_cmd, NULL, dnx_swstate_dnx_egr_db_dump_options, &dnx_swstate_dnx_egr_db_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_size_get_options, &dnx_swstate_dnx_egr_db_size_get_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_dnx_egr_db_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    dnx_egr_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(dnx_egr_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_dump_man = {
    "swstate dnx_egr_db dump",
    "print the module's content",
    "swstate dnx_egr_db dump",
    "swstate dnx_egr_db dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_size_get_man = {
    "swstate dnx_egr_db size_get",
    "print the module's size",
    "swstate dnx_egr_db size_get",
    "swstate dnx_egr_db size_get",
};


sh_sand_man_t dnx_swstate_dnx_egr_db_man = {
    cmd_dnx_swstate_dnx_egr_db_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_desc[] = "swstate dnx_egr_db commands";



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_cmds[] = {
    {"allocation_bmap", NULL, sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_cmds, NULL, &dnx_swstate_dnx_egr_db_ps_allocation_bmap_man},
    {"prio_mode", NULL, sh_dnx_swstate_dnx_egr_db_ps_prio_mode_cmds, NULL, &dnx_swstate_dnx_egr_db_ps_prio_mode_man},
    {"if_idx", NULL, sh_dnx_swstate_dnx_egr_db_ps_if_idx_cmds, NULL, &dnx_swstate_dnx_egr_db_ps_if_idx_man},
    {"dump", sh_dnx_swstate_dnx_egr_db_ps_dump_cmd, NULL, dnx_swstate_dnx_egr_db_ps_dump_options, &dnx_swstate_dnx_egr_db_ps_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_ps_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_ps_size_get_options, &dnx_swstate_dnx_egr_db_ps_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_man = {
    cmd_dnx_swstate_dnx_egr_db_ps_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_ps_desc[] = "dnx_egr_db ps commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_ps_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db ps dump []\n",
    "dnx_egr_db ps dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~PS~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->ps));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db ps size_get",
    "dnx_egr_db ps size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_cmd, NULL, dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_options, &dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_options, &dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_man = {
    cmd_dnx_swstate_dnx_egr_db_ps_allocation_bmap_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_ps_allocation_bmap_desc[] = "dnx_egr_db ps allocation_bmap commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  allocation_bmap_idx_0 = 0;
    int  allocation_bmap_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("allocation_bmap_idx_0", allocation_bmap_idx_0);
    SH_SAND_GET_INT32("allocation_bmap_idx_1", allocation_bmap_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_ps_allocation_bmap_dump(unit, allocation_bmap_idx_0, allocation_bmap_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_options[] = {
    {"allocation_bmap_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"allocation_bmap_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db ps allocation_bmap dump [,allocation_bmap_idx_0=<int>,allocation_bmap_idx_1=<int>]\n",
    "dnx_egr_db ps allocation_bmap dump allocation_bmap_idx_0=0 allocation_bmap_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~PS~ALLOCATION_BMAP~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->ps.allocation_bmap));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db ps allocation_bmap size_get",
    "dnx_egr_db ps allocation_bmap size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_prio_mode_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_ps_prio_mode_dump_cmd, NULL, dnx_swstate_dnx_egr_db_ps_prio_mode_dump_options, &dnx_swstate_dnx_egr_db_ps_prio_mode_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_options, &dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_man = {
    cmd_dnx_swstate_dnx_egr_db_ps_prio_mode_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_ps_prio_mode_desc[] = "dnx_egr_db ps prio_mode commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_prio_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  prio_mode_idx_0 = 0;
    int  prio_mode_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("prio_mode_idx_0", prio_mode_idx_0);
    SH_SAND_GET_INT32("prio_mode_idx_1", prio_mode_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_ps_prio_mode_dump(unit, prio_mode_idx_0, prio_mode_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_prio_mode_dump_options[] = {
    {"prio_mode_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"prio_mode_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db ps prio_mode dump [,prio_mode_idx_0=<int>,prio_mode_idx_1=<int>]\n",
    "dnx_egr_db ps prio_mode dump prio_mode_idx_0=0 prio_mode_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~PS~PRIO_MODE~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->ps.prio_mode));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db ps prio_mode size_get",
    "dnx_egr_db ps prio_mode size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_if_idx_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_ps_if_idx_dump_cmd, NULL, dnx_swstate_dnx_egr_db_ps_if_idx_dump_options, &dnx_swstate_dnx_egr_db_ps_if_idx_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_ps_if_idx_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_ps_if_idx_size_get_options, &dnx_swstate_dnx_egr_db_ps_if_idx_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_man = {
    cmd_dnx_swstate_dnx_egr_db_ps_if_idx_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_ps_if_idx_desc[] = "dnx_egr_db ps if_idx commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_if_idx_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  if_idx_idx_0 = 0;
    int  if_idx_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("if_idx_idx_0", if_idx_idx_0);
    SH_SAND_GET_INT32("if_idx_idx_1", if_idx_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_ps_if_idx_dump(unit, if_idx_idx_0, if_idx_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_if_idx_dump_options[] = {
    {"if_idx_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"if_idx_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db ps if_idx dump [,if_idx_idx_0=<int>,if_idx_idx_1=<int>]\n",
    "dnx_egr_db ps if_idx dump if_idx_idx_0=0 if_idx_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_if_idx_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~PS~IF_IDX~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->ps.if_idx));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_ps_if_idx_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db ps if_idx size_get",
    "dnx_egr_db ps if_idx size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_interface_occ_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_interface_occ_dump_cmd, NULL, dnx_swstate_dnx_egr_db_interface_occ_dump_options, &dnx_swstate_dnx_egr_db_interface_occ_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_interface_occ_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_interface_occ_size_get_options, &dnx_swstate_dnx_egr_db_interface_occ_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_man = {
    cmd_dnx_swstate_dnx_egr_db_interface_occ_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_interface_occ_desc[] = "dnx_egr_db interface_occ commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_interface_occ_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  interface_occ_idx_0 = 0;
    int  interface_occ_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("interface_occ_idx_0", interface_occ_idx_0);
    SH_SAND_GET_INT32("interface_occ_idx_1", interface_occ_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_interface_occ_dump(unit, interface_occ_idx_0, interface_occ_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_interface_occ_dump_options[] = {
    {"interface_occ_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"interface_occ_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db interface_occ dump [,interface_occ_idx_0=<int>,interface_occ_idx_1=<int>]\n",
    "dnx_egr_db interface_occ dump interface_occ_idx_0=0 interface_occ_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_interface_occ_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~INTERFACE_OCC~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->interface_occ));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_interface_occ_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db interface_occ size_get",
    "dnx_egr_db interface_occ size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_cmd, NULL, dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_options, &dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_options, &dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_man = {
    cmd_dnx_swstate_dnx_egr_db_total_egr_if_credits_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_total_egr_if_credits_desc[] = "dnx_egr_db total_egr_if_credits commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  total_egr_if_credits_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("total_egr_if_credits_idx_0", total_egr_if_credits_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_total_egr_if_credits_dump(unit, total_egr_if_credits_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_options[] = {
    {"total_egr_if_credits_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db total_egr_if_credits dump [,total_egr_if_credits_idx_0=<int>]\n",
    "dnx_egr_db total_egr_if_credits dump total_egr_if_credits_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~TOTAL_EGR_IF_CREDITS~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->total_egr_if_credits));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db total_egr_if_credits size_get",
    "dnx_egr_db total_egr_if_credits size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_egr_if_credits_configured_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_egr_if_credits_configured_dump_cmd, NULL, dnx_swstate_dnx_egr_db_egr_if_credits_configured_dump_options, &dnx_swstate_dnx_egr_db_egr_if_credits_configured_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_egr_if_credits_configured_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_egr_if_credits_configured_size_get_options, &dnx_swstate_dnx_egr_db_egr_if_credits_configured_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_egr_if_credits_configured_man = {
    cmd_dnx_swstate_dnx_egr_db_egr_if_credits_configured_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_egr_if_credits_configured_desc[] = "dnx_egr_db egr_if_credits_configured commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_egr_if_credits_configured_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  egr_if_credits_configured_idx_0 = 0;
    int  egr_if_credits_configured_idx_1 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("egr_if_credits_configured_idx_0", egr_if_credits_configured_idx_0);
    SH_SAND_GET_INT32("egr_if_credits_configured_idx_1", egr_if_credits_configured_idx_1);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_egr_if_credits_configured_dump(unit, egr_if_credits_configured_idx_0, egr_if_credits_configured_idx_1, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_egr_if_credits_configured_dump_options[] = {
    {"egr_if_credits_configured_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"egr_if_credits_configured_idx_1", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_egr_if_credits_configured_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db egr_if_credits_configured dump [,egr_if_credits_configured_idx_0=<int>,egr_if_credits_configured_idx_1=<int>]\n",
    "dnx_egr_db egr_if_credits_configured dump egr_if_credits_configured_idx_0=0 egr_if_credits_configured_idx_1=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_egr_if_credits_configured_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~EGR_IF_CREDITS_CONFIGURED~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->egr_if_credits_configured));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_egr_if_credits_configured_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_egr_if_credits_configured_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db egr_if_credits_configured size_get",
    "dnx_egr_db egr_if_credits_configured size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_dump_cmd, NULL, dnx_swstate_dnx_egr_db_total_esb_queues_allocated_dump_options, &dnx_swstate_dnx_egr_db_total_esb_queues_allocated_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_total_esb_queues_allocated_size_get_options, &dnx_swstate_dnx_egr_db_total_esb_queues_allocated_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_total_esb_queues_allocated_man = {
    cmd_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_desc[] = "dnx_egr_db total_esb_queues_allocated commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  total_esb_queues_allocated_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("total_esb_queues_allocated_idx_0", total_esb_queues_allocated_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_total_esb_queues_allocated_dump(unit, total_esb_queues_allocated_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_total_esb_queues_allocated_dump_options[] = {
    {"total_esb_queues_allocated_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_total_esb_queues_allocated_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db total_esb_queues_allocated dump [,total_esb_queues_allocated_idx_0=<int>]\n",
    "dnx_egr_db total_esb_queues_allocated dump total_esb_queues_allocated_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_total_esb_queues_allocated_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~TOTAL_ESB_QUEUES_ALLOCATED~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->total_esb_queues_allocated));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_total_esb_queues_allocated_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_total_esb_queues_allocated_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db total_esb_queues_allocated size_get",
    "dnx_egr_db total_esb_queues_allocated size_get",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_dump_cmd, NULL, dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_dump_options, &dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_size_get_cmd, NULL, dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_size_get_options, &dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_size_get_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_man = {
    cmd_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_desc[] = "dnx_egr_db nof_negative_compensation_ports commands";


shr_error_e sh_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  nof_negative_compensation_ports_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("nof_negative_compensation_ports_idx_0", nof_negative_compensation_ports_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egr_db_nof_negative_compensation_ports_dump(unit, nof_negative_compensation_ports_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_dump_options[] = {
    {"nof_negative_compensation_ports_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egr_db nof_negative_compensation_ports dump [,nof_negative_compensation_ports_idx_0=<int>]\n",
    "dnx_egr_db nof_negative_compensation_ports dump nof_negative_compensation_ports_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egr_db_info[unit], dnx_egr_db_layout_str, DNX_EGR_DB_INFO_NOF_ENTRIES, "DNX_EGR_DB~NOF_NEGATIVE_COMPENSATION_PORTS~", sizeof(((dnx_egr_db_t*)sw_state_roots_array[unit][DNX_EGR_DB_MODULE_ID])->nof_negative_compensation_ports));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egr_db_nof_negative_compensation_ports_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egr_db nof_negative_compensation_ports size_get",
    "dnx_egr_db nof_negative_compensation_ports size_get",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
