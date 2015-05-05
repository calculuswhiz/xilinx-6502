/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/zach/Documents/395ECE/xilinx-6502/2a03_cpu(395_project)/mux8.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};



static void Always_7_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(8, ng0);
    t1 = (t0 + 2328U);
    t2 = *((char **)t1);

LAB2:    t1 = ((char*)((ng1)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB3;

LAB4:    t1 = ((char*)((ng2)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = ((char*)((ng3)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB7;

LAB8:    t1 = ((char*)((ng4)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB9;

LAB10:    t1 = ((char*)((ng5)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB11;

LAB12:    t1 = ((char*)((ng6)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = ((char*)((ng7)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB15;

LAB16:    t1 = ((char*)((ng8)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 3, t1, 32);
    if (t3 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB19;

LAB3:    xsi_set_current_line(9, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB5:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB7:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB9:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB11:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB13:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB15:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB17:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB19;

LAB1:    return;
}


extern void work_m_11652931927492753252_3689961810_init()
{
	static char *pe[] = {(void *)Always_7_0};
	xsi_register_didat("work_m_11652931927492753252_3689961810", "isim/topLevel_isim_beh.exe.sim/work/m_11652931927492753252_3689961810.didat");
	xsi_register_executes(pe);
}
