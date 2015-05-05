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
static const char *ng0 = "/home/zach/Documents/395ECE/xilinx-6502/2a03_cpu(395_project)/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static int ng12[] = {0, 0};



static void Always_36_0(char *t0)
{
    char t10[8];
    char t12[8];
    char t26[8];
    char t42[8];
    char t53[8];
    char t62[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    int t108;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_zcompare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(106, ng0);

LAB82:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memcpy(t10, t3, 8);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 9);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB31:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng12)));
    memset(t26, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB86;

LAB83:    if (t23 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t26) = 1;

LAB86:    memset(t12, 0, 8);
    t19 = (t26 + 4);
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t33 = (t29 & t28);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t19) != 0)
        goto LAB89;

LAB90:    t31 = (t12 + 4);
    t35 = *((unsigned int *)t12);
    t36 = *((unsigned int *)t31);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB91;

LAB92:    t38 = *((unsigned int *)t12);
    t39 = (~(t38));
    t44 = *((unsigned int *)t31);
    t45 = (t39 || t44);
    if (t45 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t31) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t12) > 0)
        goto LAB97;

LAB98:    memcpy(t10, t40, 8);

LAB99:    t41 = (t0 + 2408);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB32:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 9, t8, 8, t9, 8);
    t7 = (t0 + 1368U);
    t11 = *((char **)t7);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 9, t10, 9, t11, 1);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t12, 0, 0, 9);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 8);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t12, 0, 8);
    t11 = (t12 + 4);
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 7);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t11) = t25;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 ^ t28);
    *((unsigned int *)t26) = t29;
    t30 = (t10 + 4);
    t31 = (t12 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB33;

LAB34:
LAB35:    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t42 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 7);
    t46 = (t45 & 1);
    *((unsigned int *)t42) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 7);
    t49 = (t48 & 1);
    *((unsigned int *)t40) = t49;
    t50 = (t0 + 2728);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 7);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 7);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    t63 = *((unsigned int *)t42);
    t64 = *((unsigned int *)t53);
    t65 = (t63 ^ t64);
    *((unsigned int *)t62) = t65;
    t66 = (t42 + 4);
    t67 = (t53 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB36;

LAB37:
LAB38:    t77 = *((unsigned int *)t26);
    t78 = *((unsigned int *)t62);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t26 + 4);
    t81 = (t62 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB39;

LAB40:
LAB41:    t107 = (t0 + 2248);
    xsi_vlogvar_assign_value(t107, t76, 0, 0, 1);
    goto LAB31;

LAB9:    xsi_set_current_line(46, ng0);

LAB42:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 9, t4, 8, t7, 8);
    t3 = (t0 + 1368U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t8 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t3) == 0)
        goto LAB43;

LAB45:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;

LAB46:    t11 = (t12 + 4);
    t19 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t20 = (~(t18));
    *((unsigned int *)t12) = t20;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB48;

LAB47:    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 511U);
    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 511U);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 9, t10, 9, t12, 9);
    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t26, 0, 0, 9);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t8 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 8);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t7) = t18;
    memset(t10, 0, 8);
    t9 = (t12 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t9) == 0)
        goto LAB49;

LAB51:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;

LAB52:    t19 = (t10 + 4);
    t30 = (t12 + 4);
    t25 = *((unsigned int *)t12);
    t27 = (~(t25));
    *((unsigned int *)t10) = t27;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB54;

LAB53:    t35 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t35 & 1U);
    t36 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t36 & 1U);
    t31 = (t0 + 2568);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t12, 0, 8);
    t11 = (t12 + 4);
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 7);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t11) = t25;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 ^ t28);
    *((unsigned int *)t26) = t29;
    t30 = (t10 + 4);
    t31 = (t12 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB55;

LAB56:
LAB57:    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t42 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 7);
    t46 = (t45 & 1);
    *((unsigned int *)t42) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 7);
    t49 = (t48 & 1);
    *((unsigned int *)t40) = t49;
    t50 = (t0 + 2728);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    t54 = (t53 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 7);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 7);
    t61 = (t60 & 1);
    *((unsigned int *)t54) = t61;
    t63 = *((unsigned int *)t42);
    t64 = *((unsigned int *)t53);
    t65 = (t63 ^ t64);
    *((unsigned int *)t62) = t65;
    t66 = (t42 + 4);
    t67 = (t53 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB58;

LAB59:
LAB60:    t77 = *((unsigned int *)t26);
    t78 = *((unsigned int *)t62);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t26 + 4);
    t81 = (t62 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB61;

LAB62:
LAB63:    t107 = (t0 + 2248);
    xsi_vlogvar_assign_value(t107, t76, 0, 0, 1);
    goto LAB31;

LAB11:    xsi_set_current_line(52, ng0);

LAB64:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    *((unsigned int *)t10) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB65;

LAB66:
LAB67:    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 9);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB13:    xsi_set_current_line(58, ng0);

LAB68:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 | t14);
    *((unsigned int *)t10) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB69;

LAB70:
LAB71:    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t10, 0, 0, 9);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB15:    xsi_set_current_line(64, ng0);

LAB72:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 & t14);
    *((unsigned int *)t10) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB73;

LAB74:
LAB75:    t30 = (t0 + 2728);
    xsi_vlogvar_assign_value(t30, t10, 0, 0, 9);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB17:    xsi_set_current_line(70, ng0);

LAB76:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 9, t4, 8, t3, 9);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 9);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB19:    xsi_set_current_line(76, ng0);

LAB77:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 9, t4, 8, t3, 9);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 9);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB21:    xsi_set_current_line(82, ng0);

LAB78:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 1);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 1);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 127U);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t10, 9, 8, 2U, t9, 1, t12, 7);
    t8 = (t0 + 2728);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 9);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB23:    xsi_set_current_line(88, ng0);

LAB79:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 127U);
    xsi_vlogtype_concat(t10, 9, 8, 2U, t12, 7, t4, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 9);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB25:    xsi_set_current_line(94, ng0);

LAB80:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t12, 0, 8);
    t4 = (t12 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t18 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t18 & 127U);
    xsi_vlogtype_concat(t10, 9, 8, 2U, t12, 7, t3, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 9);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB27:    xsi_set_current_line(100, ng0);

LAB81:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 1);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 1);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 127U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t10, 9, 8, 2U, t8, 1, t12, 7);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 9);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB31;

LAB33:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    goto LAB35;

LAB36:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    goto LAB38;

LAB39:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t26 + 4);
    t91 = (t62 + 4);
    t92 = *((unsigned int *)t26);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t62);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t6 = (t93 & t95);
    t100 = (t97 & t99);
    t101 = (~(t6));
    t102 = (~(t100));
    t103 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t103 & t101);
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t105 & t101);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    goto LAB41;

LAB43:    *((unsigned int *)t12) = 1;
    goto LAB46;

LAB48:    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t12) = (t21 | t22);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t19);
    *((unsigned int *)t11) = (t23 | t24);
    goto LAB47;

LAB49:    *((unsigned int *)t10) = 1;
    goto LAB52;

LAB54:    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t30);
    *((unsigned int *)t10) = (t28 | t29);
    t33 = *((unsigned int *)t19);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t19) = (t33 | t34);
    goto LAB53;

LAB55:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    goto LAB57;

LAB58:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    goto LAB60;

LAB61:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t26 + 4);
    t91 = (t62 + 4);
    t92 = *((unsigned int *)t26);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t62);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t6 = (t93 & t95);
    t100 = (t97 & t99);
    t101 = (~(t6));
    t102 = (~(t100));
    t103 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t103 & t101);
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t105 & t101);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    goto LAB63;

LAB65:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB67;

LAB69:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t11 = (t4 + 4);
    t19 = (t7 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t100 = (t27 & t25);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t33 = *((unsigned int *)t7);
    t108 = (t33 & t29);
    t34 = (~(t100));
    t35 = (~(t108));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    goto LAB71;

LAB73:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t11 = (t4 + 4);
    t19 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t33 = (~(t29));
    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t100 = (t25 & t28);
    t108 = (t33 & t35);
    t36 = (~(t100));
    t37 = (~(t108));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & t36);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t37);
    goto LAB75;

LAB85:    t11 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t12) = 1;
    goto LAB90;

LAB89:    t30 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB90;

LAB91:    t32 = ((char*)((ng2)));
    goto LAB92;

LAB93:    t40 = ((char*)((ng1)));
    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t10, 1, t32, 1, t40, 1);
    goto LAB99;

LAB97:    memcpy(t10, t32, 8);
    goto LAB99;

}


extern void work_m_00511603343656333883_0886308060_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00511603343656333883_0886308060", "isim/topLevel_isim_beh.exe.sim/work/m_00511603343656333883_0886308060.didat");
	xsi_register_executes(pe);
}
