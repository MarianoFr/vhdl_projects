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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/MarianoF/vhdl_projects/ISE/Volnei/Ch9-problems/9.2/divider/divider.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3926497698_3212880686_p_0(char *t0)
{
    char t15[16];
    char t18[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t3 = t1;
    t4 = (3 - 1);
    if (-1 == 1)
        goto LAB5;

LAB6:    t5 = 0;

LAB7:    t6 = (t5 - 0);
    t7 = (t6 * 1);
    t8 = (1U * t7);
    t9 = (t3 + t8);
    t10 = (3 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t13 = (1U * t12);
    memset(t9, (unsigned char)2, t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 11896U);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (2 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t2, t17, (char)97, t1, t18, (char)101);
    t22 = (4U + 3U);
    t23 = (7U != t22);
    if (t23 == 1)
        goto LAB8;

LAB9:    t20 = (t0 + 7408);
    t24 = (t20 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t14, 7U);
    xsi_driver_first_trans_delta(t20, 21U, 7U, 0LL);

LAB2:    t28 = (t0 + 7152);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t5 = t4;
    goto LAB7;

LAB8:    xsi_size_not_matching(7U, t22, 0);
    goto LAB9;

}

static void work_a_3926497698_3212880686_p_1(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    t3 = (3 - 1);
    if (-1 == 1)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (t2 + t7);
    t9 = (3 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t12 = (1U * t11);
    memset(t8, (unsigned char)2, t12);
    t13 = (t0 + 1824U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 2;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (2 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t0 + 11880U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t1, t17, (char)97, t14, t19, (char)101);
    t21 = (3U + 4U);
    t22 = (7U != t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    t23 = (t0 + 7472);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t13, 7U);
    xsi_driver_first_trans_delta(t23, 21U, 7U, 0LL);

LAB2:    t28 = (t0 + 7168);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t4 = t3;
    goto LAB7;

LAB8:    xsi_size_not_matching(7U, t21, 0);
    goto LAB9;

}

static void work_a_3926497698_3212880686_p_2(char *t0)
{
    char t8[16];
    char t18[16];
    char t27[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t4 = (3 - 3);
    t5 = (t4 * -1);
    t6 = (7U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 6;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 6);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t2, t8, 0);
    if (t13 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t37 = (t0 + 7536);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)2;
    xsi_driver_first_trans_delta(t37, 3U, 1, 0LL);

LAB2:    t42 = (t0 + 7184);
    *((int *)t42) = 1;

LAB1:    return;
LAB3:    t29 = (t0 + 7536);
    t33 = (t29 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_first_trans_delta(t29, 3U, 1, 0LL);
    goto LAB2;

LAB5:    t10 = (t0 + 2464U);
    t14 = *((char **)t10);
    t15 = (3 - 3);
    t12 = (t15 * -1);
    t16 = (7U * t12);
    t17 = (0 + t16);
    t10 = (t14 + t17);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 6;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 6);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t0 + 2304U);
    t23 = *((char **)t20);
    t24 = (3 - 3);
    t22 = (t24 * -1);
    t25 = (7U * t22);
    t26 = (0 + t25);
    t20 = (t23 + t26);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 6;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - 6);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;
    t32 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t10, t18, t20, t27);
    t1 = t32;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_3(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t3 = (2 * 3);
    t4 = (6 - t3);
    t5 = (t4 * 1U);
    t1 = (t0 + 2880U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 3);
    t10 = (t9 * -1);
    t11 = (7U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t5);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 6;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 6);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 6U);
    t22 = (7U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 7600);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 7U);
    xsi_driver_first_trans_delta(t19, 14U, 7U, 0LL);

LAB2:    t27 = (t0 + 7200);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t21, 0);
    goto LAB6;

}

static void work_a_3926497698_3212880686_p_4(char *t0)
{
    char t10[16];
    char t22[16];
    char t28[16];
    char t36[16];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned char t27;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 2880U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 3);
    t7 = (t6 * -1);
    t8 = (7U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 2304U);
    t15 = *((char **)t12);
    t12 = (t0 + 2880U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (t18 - 3);
    t14 = (t19 * -1);
    t20 = (7U * t14);
    t21 = (0 + t20);
    t12 = (t15 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 6;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t10, t12, t22);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB7:    t61 = (t0 + 2304U);
    t62 = *((char **)t61);
    t61 = (t0 + 2880U);
    t63 = *((char **)t61);
    t64 = *((int *)t63);
    t65 = (t64 - 1);
    t66 = (t65 - 3);
    t67 = (t66 * -1);
    t68 = (7U * t67);
    t69 = (0 + t68);
    t61 = (t62 + t69);
    t70 = (t0 + 7664);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memcpy(t74, t61, 7U);
    xsi_driver_first_trans_delta(t70, 14U, 7U, 0LL);

LAB2:    t75 = (t0 + 7216);
    *((int *)t75) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 2304U);
    t29 = *((char **)t24);
    t24 = (t0 + 2880U);
    t30 = *((char **)t24);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 3);
    t26 = (t33 * -1);
    t34 = (7U * t26);
    t35 = (0 + t34);
    t24 = (t29 + t35);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 6;
    t38 = (t37 + 4U);
    *((int *)t38) = 0;
    t38 = (t37 + 8U);
    *((int *)t38) = -1;
    t39 = (0 - 6);
    t40 = (t39 * -1);
    t40 = (t40 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t40;
    t38 = (t0 + 2464U);
    t41 = *((char **)t38);
    t38 = (t0 + 2880U);
    t42 = *((char **)t38);
    t43 = *((int *)t42);
    t44 = (t43 - 1);
    t45 = (t44 - 3);
    t40 = (t45 * -1);
    t46 = (7U * t40);
    t47 = (0 + t46);
    t38 = (t41 + t47);
    t49 = (t48 + 0U);
    t50 = (t49 + 0U);
    *((int *)t50) = 6;
    t50 = (t49 + 4U);
    *((int *)t50) = 0;
    t50 = (t49 + 8U);
    *((int *)t50) = -1;
    t51 = (0 - 6);
    t52 = (t51 * -1);
    t52 = (t52 + 1);
    t50 = (t49 + 12U);
    *((unsigned int *)t50) = t52;
    t50 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t24, t36, t38, t48);
    t53 = (t28 + 12U);
    t52 = *((unsigned int *)t53);
    t54 = (1U * t52);
    t55 = (7U != t54);
    if (t55 == 1)
        goto LAB5;

LAB6:    t56 = (t0 + 7664);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memcpy(t60, t50, 7U);
    xsi_driver_first_trans_delta(t56, 14U, 7U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t54, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_5(char *t0)
{
    char t10[16];
    char t22[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 2880U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 3);
    t7 = (t6 * -1);
    t8 = (7U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 2304U);
    t15 = *((char **)t12);
    t12 = (t0 + 2880U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (t18 - 3);
    t14 = (t19 * -1);
    t20 = (7U * t14);
    t21 = (0 + t20);
    t12 = (t15 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 6;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t10, t12, t22);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB5:    t32 = (t0 + 7728);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)2;
    xsi_driver_first_trans_delta(t32, 0U, 1, 0LL);

LAB2:    t37 = (t0 + 7232);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 7728);
    t28 = (t24 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_delta(t24, 0U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_6(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t3 = (2 * 3);
    t4 = (6 - t3);
    t5 = (t4 * 1U);
    t1 = (t0 + 3000U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 3);
    t10 = (t9 * -1);
    t11 = (7U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t5);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 6;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 6);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 6U);
    t22 = (7U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 7792);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 7U);
    xsi_driver_first_trans_delta(t19, 7U, 7U, 0LL);

LAB2:    t27 = (t0 + 7248);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t21, 0);
    goto LAB6;

}

static void work_a_3926497698_3212880686_p_7(char *t0)
{
    char t10[16];
    char t22[16];
    char t28[16];
    char t36[16];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned char t27;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 3000U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 3);
    t7 = (t6 * -1);
    t8 = (7U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 2304U);
    t15 = *((char **)t12);
    t12 = (t0 + 3000U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (t18 - 3);
    t14 = (t19 * -1);
    t20 = (7U * t14);
    t21 = (0 + t20);
    t12 = (t15 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 6;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t10, t12, t22);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB7:    t61 = (t0 + 2304U);
    t62 = *((char **)t61);
    t61 = (t0 + 3000U);
    t63 = *((char **)t61);
    t64 = *((int *)t63);
    t65 = (t64 - 1);
    t66 = (t65 - 3);
    t67 = (t66 * -1);
    t68 = (7U * t67);
    t69 = (0 + t68);
    t61 = (t62 + t69);
    t70 = (t0 + 7856);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memcpy(t74, t61, 7U);
    xsi_driver_first_trans_delta(t70, 7U, 7U, 0LL);

LAB2:    t75 = (t0 + 7264);
    *((int *)t75) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 2304U);
    t29 = *((char **)t24);
    t24 = (t0 + 3000U);
    t30 = *((char **)t24);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 3);
    t26 = (t33 * -1);
    t34 = (7U * t26);
    t35 = (0 + t34);
    t24 = (t29 + t35);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 6;
    t38 = (t37 + 4U);
    *((int *)t38) = 0;
    t38 = (t37 + 8U);
    *((int *)t38) = -1;
    t39 = (0 - 6);
    t40 = (t39 * -1);
    t40 = (t40 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t40;
    t38 = (t0 + 2464U);
    t41 = *((char **)t38);
    t38 = (t0 + 3000U);
    t42 = *((char **)t38);
    t43 = *((int *)t42);
    t44 = (t43 - 1);
    t45 = (t44 - 3);
    t40 = (t45 * -1);
    t46 = (7U * t40);
    t47 = (0 + t46);
    t38 = (t41 + t47);
    t49 = (t48 + 0U);
    t50 = (t49 + 0U);
    *((int *)t50) = 6;
    t50 = (t49 + 4U);
    *((int *)t50) = 0;
    t50 = (t49 + 8U);
    *((int *)t50) = -1;
    t51 = (0 - 6);
    t52 = (t51 * -1);
    t52 = (t52 + 1);
    t50 = (t49 + 12U);
    *((unsigned int *)t50) = t52;
    t50 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t24, t36, t38, t48);
    t53 = (t28 + 12U);
    t52 = *((unsigned int *)t53);
    t54 = (1U * t52);
    t55 = (7U != t54);
    if (t55 == 1)
        goto LAB5;

LAB6:    t56 = (t0 + 7856);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memcpy(t60, t50, 7U);
    xsi_driver_first_trans_delta(t56, 7U, 7U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t54, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_8(char *t0)
{
    char t10[16];
    char t22[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 3000U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 3);
    t7 = (t6 * -1);
    t8 = (7U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 2304U);
    t15 = *((char **)t12);
    t12 = (t0 + 3000U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (t18 - 3);
    t14 = (t19 * -1);
    t20 = (7U * t14);
    t21 = (0 + t20);
    t12 = (t15 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 6;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t10, t12, t22);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB5:    t32 = (t0 + 7920);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)2;
    xsi_driver_first_trans_delta(t32, 1U, 1, 0LL);

LAB2:    t37 = (t0 + 7280);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 7920);
    t28 = (t24 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_delta(t24, 1U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_9(char *t0)
{
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t3 = (2 * 3);
    t4 = (6 - t3);
    t5 = (t4 * 1U);
    t1 = (t0 + 3120U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 3);
    t10 = (t9 * -1);
    t11 = (7U * t10);
    t12 = (0 + t11);
    t13 = (t12 + t5);
    t1 = (t2 + t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 6;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (1 - 6);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)99, (unsigned char)2, (char)97, t1, t17, (char)101);
    t21 = (1U + 6U);
    t22 = (7U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 7984);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 7U);
    xsi_driver_first_trans_delta(t19, 0U, 7U, 0LL);

LAB2:    t27 = (t0 + 7296);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t21, 0);
    goto LAB6;

}

static void work_a_3926497698_3212880686_p_10(char *t0)
{
    char t10[16];
    char t22[16];
    char t28[16];
    char t36[16];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned char t27;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 3120U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 3);
    t7 = (t6 * -1);
    t8 = (7U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 2304U);
    t15 = *((char **)t12);
    t12 = (t0 + 3120U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (t18 - 3);
    t14 = (t19 * -1);
    t20 = (7U * t14);
    t21 = (0 + t20);
    t12 = (t15 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 6;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t10, t12, t22);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB7:    t61 = (t0 + 2304U);
    t62 = *((char **)t61);
    t61 = (t0 + 3120U);
    t63 = *((char **)t61);
    t64 = *((int *)t63);
    t65 = (t64 - 1);
    t66 = (t65 - 3);
    t67 = (t66 * -1);
    t68 = (7U * t67);
    t69 = (0 + t68);
    t61 = (t62 + t69);
    t70 = (t0 + 8048);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memcpy(t74, t61, 7U);
    xsi_driver_first_trans_delta(t70, 0U, 7U, 0LL);

LAB2:    t75 = (t0 + 7312);
    *((int *)t75) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 2304U);
    t29 = *((char **)t24);
    t24 = (t0 + 3120U);
    t30 = *((char **)t24);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 3);
    t26 = (t33 * -1);
    t34 = (7U * t26);
    t35 = (0 + t34);
    t24 = (t29 + t35);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 6;
    t38 = (t37 + 4U);
    *((int *)t38) = 0;
    t38 = (t37 + 8U);
    *((int *)t38) = -1;
    t39 = (0 - 6);
    t40 = (t39 * -1);
    t40 = (t40 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t40;
    t38 = (t0 + 2464U);
    t41 = *((char **)t38);
    t38 = (t0 + 3120U);
    t42 = *((char **)t38);
    t43 = *((int *)t42);
    t44 = (t43 - 1);
    t45 = (t44 - 3);
    t40 = (t45 * -1);
    t46 = (7U * t40);
    t47 = (0 + t46);
    t38 = (t41 + t47);
    t49 = (t48 + 0U);
    t50 = (t49 + 0U);
    *((int *)t50) = 6;
    t50 = (t49 + 4U);
    *((int *)t50) = 0;
    t50 = (t49 + 8U);
    *((int *)t50) = -1;
    t51 = (0 - 6);
    t52 = (t51 * -1);
    t52 = (t52 + 1);
    t50 = (t49 + 12U);
    *((unsigned int *)t50) = t52;
    t50 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t28, t24, t36, t38, t48);
    t53 = (t28 + 12U);
    t52 = *((unsigned int *)t53);
    t54 = (1U * t52);
    t55 = (7U != t54);
    if (t55 == 1)
        goto LAB5;

LAB6:    t56 = (t0 + 8048);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memcpy(t60, t50, 7U);
    xsi_driver_first_trans_delta(t56, 0U, 7U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t54, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_11(char *t0)
{
    char t10[16];
    char t22[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t1 = (t0 + 3120U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 3);
    t7 = (t6 * -1);
    t8 = (7U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 2304U);
    t15 = *((char **)t12);
    t12 = (t0 + 3120U);
    t16 = *((char **)t12);
    t17 = *((int *)t16);
    t18 = (t17 - 1);
    t19 = (t18 - 3);
    t14 = (t19 * -1);
    t20 = (7U * t14);
    t21 = (0 + t20);
    t12 = (t15 + t21);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 6;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 6);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t27 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t10, t12, t22);
    if (t27 != 0)
        goto LAB3;

LAB4:
LAB5:    t32 = (t0 + 8112);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)2;
    xsi_driver_first_trans_delta(t32, 2U, 1, 0LL);

LAB2:    t37 = (t0 + 7328);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t24 = (t0 + 8112);
    t28 = (t24 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_delta(t24, 2U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_3926497698_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3926497698_3212880686_p_0,(void *)work_a_3926497698_3212880686_p_1,(void *)work_a_3926497698_3212880686_p_2,(void *)work_a_3926497698_3212880686_p_3,(void *)work_a_3926497698_3212880686_p_4,(void *)work_a_3926497698_3212880686_p_5,(void *)work_a_3926497698_3212880686_p_6,(void *)work_a_3926497698_3212880686_p_7,(void *)work_a_3926497698_3212880686_p_8,(void *)work_a_3926497698_3212880686_p_9,(void *)work_a_3926497698_3212880686_p_10,(void *)work_a_3926497698_3212880686_p_11};
	xsi_register_didat("work_a_3926497698_3212880686", "isim/divider_tb_isim_beh.exe.sim/work/a_3926497698_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 4);
}
