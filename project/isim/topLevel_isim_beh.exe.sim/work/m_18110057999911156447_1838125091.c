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
static const char *ng0 = "/home/zach/Documents/395ECE/xilinx-6502/2a03_cpu(395_project)/pulser.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {128U, 0U};
static unsigned int ng6[] = {256U, 0U};



static void Initial_12_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Always_17_1(char *t0)
{
    char t7[8];
    char t13[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 3120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 1928);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t6, t10, 2, t11, 32, 1);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t7 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB9;

LAB6:    if (t25 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t13) = 1;

LAB9:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(25, ng0);

LAB19:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t4, 4, t5, 4);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 4);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    *((unsigned int *)t7) = t17;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB21;

LAB20:    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4095U);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4095U);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t7);
    t26 = (t24 & t25);
    *((unsigned int *)t13) = t26;
    t6 = (t3 + 4);
    t8 = (t7 + 4);
    t9 = (t13 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t27 | t30);
    *((unsigned int *)t9) = t31;
    t32 = *((unsigned int *)t9);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB22;

LAB23:
LAB24:    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 12);

LAB12:    goto LAB2;

LAB8:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(20, ng0);

LAB13:    xsi_set_current_line(21, ng0);
    t35 = (t0 + 1928);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng4)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t37, 4, t38, 4);
    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 4);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    *((unsigned int *)t7) = t17;
    *((unsigned int *)t4) = 0;
    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB14:    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4095U);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4095U);
    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t7);
    t26 = (t24 & t25);
    *((unsigned int *)t13) = t26;
    t6 = (t3 + 4);
    t8 = (t7 + 4);
    t9 = (t13 + 4);
    t27 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t27 | t30);
    *((unsigned int *)t9) = t31;
    t32 = *((unsigned int *)t9);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB16;

LAB17:
LAB18:    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 12);
    goto LAB12;

LAB15:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t20 | t21);
    goto LAB14;

LAB16:    t34 = *((unsigned int *)t13);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t13) = (t34 | t41);
    t10 = (t3 + 4);
    t11 = (t7 + 4);
    t42 = *((unsigned int *)t3);
    t43 = (~(t42));
    t44 = *((unsigned int *)t10);
    t45 = (~(t44));
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t11);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t54 & t52);
    t55 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t55 & t53);
    t56 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t56 & t52);
    t57 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t57 & t53);
    goto LAB18;

LAB21:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t4) = (t20 | t21);
    goto LAB20;

LAB22:    t34 = *((unsigned int *)t13);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t13) = (t34 | t41);
    t10 = (t3 + 4);
    t11 = (t7 + 4);
    t42 = *((unsigned int *)t3);
    t43 = (~(t42));
    t44 = *((unsigned int *)t10);
    t45 = (~(t44));
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t11);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t54 & t52);
    t55 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t55 & t53);
    t56 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t56 & t52);
    t57 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t57 & t53);
    goto LAB24;

}


extern void work_m_18110057999911156447_1838125091_init()
{
	static char *pe[] = {(void *)Initial_12_0,(void *)Always_17_1};
	xsi_register_didat("work_m_18110057999911156447_1838125091", "isim/topLevel_isim_beh.exe.sim/work/m_18110057999911156447_1838125091.didat");
	xsi_register_executes(pe);
}
