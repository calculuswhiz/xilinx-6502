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
static const char *ng0 = "/home/zach/Documents/395ECE/xilinx-6502/2a03_cpu(395_project)/PC.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {15, 0};
static int ng4[] = {8, 0};
static int ng5[] = {7, 0};



static void Initial_20_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_25_1(char *t0)
{
    char t15[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t77[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    int t94;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4840);
    *((int *)t2) = 1;
    t3 = (t0 + 4056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t15) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t15 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t17 = (t9 | t10);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB17;

LAB18:
LAB19:    t14 = (t15 + 4);
    t52 = *((unsigned int *)t14);
    t53 = (~(t52));
    t54 = *((unsigned int *)t15);
    t55 = (t54 & t53);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);
    t11 = (t0 + 2864);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 16, t13, 16, t14, 16);
    t16 = (t0 + 2864);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 16);
    goto LAB8;

LAB9:    xsi_set_current_line(30, ng0);

LAB12:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t12 = (t15 + 4);
    t13 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 8);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 >> 8);
    *((unsigned int *)t12) = t20;
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t21 & 255U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 255U);
    t14 = ((char*)((ng2)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 8, t15, 8, t14, 8);
    t16 = (t0 + 2864);
    t27 = (t0 + 2864);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng3)));
    t31 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t24, t25, t26, ((int*)(t29)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t25 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    t39 = (t26 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 255U);
    t12 = (t0 + 2864);
    t13 = (t0 + 2864);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t27 = ((char*)((ng5)));
    t28 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t16)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t23 + 4);
    t18 = *((unsigned int *)t29);
    t34 = (!(t18));
    t30 = (t24 + 4);
    t19 = *((unsigned int *)t30);
    t37 = (!(t19));
    t38 = (t34 && t37);
    t31 = (t25 + 4);
    t20 = *((unsigned int *)t31);
    t41 = (!(t20));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB15;

LAB16:    goto LAB11;

LAB13:    t43 = *((unsigned int *)t26);
    t44 = (t43 + 0);
    t45 = *((unsigned int *)t24);
    t46 = *((unsigned int *)t25);
    t47 = (t45 - t46);
    t48 = (t47 + 1);
    xsi_vlogvar_assign_value(t16, t23, t44, *((unsigned int *)t25), t48);
    goto LAB14;

LAB15:    t21 = *((unsigned int *)t25);
    t44 = (t21 + 0);
    t22 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t47 = (t22 - t33);
    t48 = (t47 + 1);
    xsi_vlogvar_assign_value(t12, t15, t44, *((unsigned int *)t24), t48);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t15) = (t20 | t21);
    t12 = (t3 + 4);
    t13 = (t4 + 4);
    t22 = *((unsigned int *)t12);
    t33 = (~(t22));
    t36 = *((unsigned int *)t3);
    t34 = (t36 & t33);
    t40 = *((unsigned int *)t13);
    t43 = (~(t40));
    t45 = *((unsigned int *)t4);
    t37 = (t45 & t43);
    t46 = (~(t34));
    t49 = (~(t37));
    t50 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t50 & t46);
    t51 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t51 & t49);
    goto LAB19;

LAB20:    xsi_set_current_line(35, ng0);

LAB23:    xsi_set_current_line(36, ng0);
    t16 = (t0 + 1344U);
    t27 = *((char **)t16);
    memset(t24, 0, 8);
    t16 = (t27 + 4);
    t57 = *((unsigned int *)t16);
    t58 = (~(t57));
    t59 = *((unsigned int *)t27);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t16) != 0)
        goto LAB26;

LAB27:    t29 = (t24 + 4);
    t62 = *((unsigned int *)t24);
    t63 = *((unsigned int *)t29);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB28;

LAB29:    t65 = *((unsigned int *)t24);
    t66 = (~(t65));
    t67 = *((unsigned int *)t29);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t29) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t24) > 0)
        goto LAB34;

LAB35:    memcpy(t23, t25, 8);

LAB36:    t76 = (t0 + 2864);
    t79 = (t0 + 2864);
    t80 = (t79 + 72U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng3)));
    t83 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t26, t77, t78, ((int*)(t81)), 2, t82, 32, 1, t83, 32, 1);
    t84 = (t26 + 4);
    t85 = *((unsigned int *)t84);
    t38 = (!(t85));
    t86 = (t77 + 4);
    t87 = *((unsigned int *)t86);
    t41 = (!(t87));
    t42 = (t38 && t41);
    t88 = (t78 + 4);
    t89 = *((unsigned int *)t88);
    t44 = (!(t89));
    t47 = (t42 && t44);
    if (t47 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t2) != 0)
        goto LAB41;

LAB42:    t5 = (t23 + 4);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t5);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB43;

LAB44:    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t22 = *((unsigned int *)t5);
    t33 = (t21 || t22);
    if (t33 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t5) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t23) > 0)
        goto LAB49;

LAB50:    memcpy(t15, t24, 8);

LAB51:    t28 = (t0 + 2864);
    t29 = (t0 + 2864);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    t35 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t25, t26, t77, ((int*)(t31)), 2, t32, 32, 1, t35, 32, 1);
    t39 = (t25 + 4);
    t50 = *((unsigned int *)t39);
    t34 = (!(t50));
    t69 = (t26 + 4);
    t51 = *((unsigned int *)t69);
    t37 = (!(t51));
    t38 = (t34 && t37);
    t76 = (t77 + 4);
    t52 = *((unsigned int *)t76);
    t41 = (!(t52));
    t42 = (t38 && t41);
    if (t42 == 1)
        goto LAB52;

LAB53:    goto LAB22;

LAB24:    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB26:    t28 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB27;

LAB28:    t30 = (t0 + 2144U);
    t31 = *((char **)t30);
    goto LAB29;

LAB30:    t30 = (t0 + 2864);
    t32 = (t30 + 56U);
    t35 = *((char **)t32);
    memset(t25, 0, 8);
    t39 = (t25 + 4);
    t69 = (t35 + 4);
    t70 = *((unsigned int *)t35);
    t71 = (t70 >> 8);
    *((unsigned int *)t25) = t71;
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 8);
    *((unsigned int *)t39) = t73;
    t74 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t74 & 255U);
    t75 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t75 & 255U);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t23, 8, t31, 8, t25, 8);
    goto LAB36;

LAB34:    memcpy(t23, t31, 8);
    goto LAB36;

LAB37:    t90 = *((unsigned int *)t78);
    t48 = (t90 + 0);
    t91 = *((unsigned int *)t26);
    t92 = *((unsigned int *)t77);
    t93 = (t91 - t92);
    t94 = (t93 + 1);
    xsi_vlogvar_assign_value(t76, t23, t48, *((unsigned int *)t77), t94);
    goto LAB38;

LAB39:    *((unsigned int *)t23) = 1;
    goto LAB42;

LAB41:    t4 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB42;

LAB43:    t11 = (t0 + 1984U);
    t12 = *((char **)t11);
    goto LAB44;

LAB45:    t11 = (t0 + 2864);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memset(t24, 0, 8);
    t16 = (t24 + 4);
    t27 = (t14 + 4);
    t36 = *((unsigned int *)t14);
    t40 = (t36 >> 0);
    *((unsigned int *)t24) = t40;
    t43 = *((unsigned int *)t27);
    t45 = (t43 >> 0);
    *((unsigned int *)t16) = t45;
    t46 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t46 & 255U);
    t49 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t49 & 255U);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t15, 8, t12, 8, t24, 8);
    goto LAB51;

LAB49:    memcpy(t15, t12, 8);
    goto LAB51;

LAB52:    t53 = *((unsigned int *)t77);
    t44 = (t53 + 0);
    t54 = *((unsigned int *)t25);
    t55 = *((unsigned int *)t26);
    t47 = (t54 - t55);
    t48 = (t47 + 1);
    xsi_vlogvar_assign_value(t28, t15, t44, *((unsigned int *)t26), t48);
    goto LAB53;

}

static void Cont_41_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 4952);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 4856);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_42_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 5016);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 4872);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_17434017142717170786_1733832700_init()
{
	static char *pe[] = {(void *)Initial_20_0,(void *)Always_25_1,(void *)Cont_41_2,(void *)Cont_42_3};
	xsi_register_didat("work_m_17434017142717170786_1733832700", "isim/topLevel_isim_beh.exe.sim/work/m_17434017142717170786_1733832700.didat");
	xsi_register_executes(pe);
}
