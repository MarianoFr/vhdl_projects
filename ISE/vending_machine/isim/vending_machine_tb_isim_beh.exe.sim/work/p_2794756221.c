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
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


int work_p_2794756221_sub_3686398390_2461577219(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    int t22;
    int t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 832);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 832);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t5 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((int *)t18) = 0;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;

LAB2:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t21 = (t20 < t2);
    if (t21 != 0)
        goto LAB3;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t0 = t20;

LAB1:    return t0;
LAB3:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t22 = *((int *)t9);
    t23 = (t22 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t22 = (t20 * 2);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB2;

LAB4:;
LAB6:;
}

unsigned char work_p_2794756221_sub_1480491410_2461577219(char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5)
{
    char t6[128];
    char t11[8];
    unsigned char t0;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned char t23;
    int t24;
    char *t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t35;

LAB0:    t8 = (t6 + 4U);
    t9 = ((IEEE_P_2592010699) + 3320);
    t10 = (t8 + 88U);
    *((char **)t10) = t9;
    t12 = (t8 + 56U);
    *((char **)t12) = t11;
    xsi_type_set_default_value(t9, t11, 0);
    t13 = (t8 + 80U);
    *((unsigned int *)t13) = 1U;
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((unsigned char *)t14) = (unsigned char)2;
    t9 = (t5 + 8U);
    t16 = *((int *)t9);
    t10 = (t5 + 4U);
    t17 = *((int *)t10);
    t12 = (t5 + 0U);
    t18 = *((int *)t12);
    t19 = t18;
    t20 = t17;

LAB2:    t21 = (t20 * t16);
    t22 = (t19 * t16);
    if (t22 <= t21)
        goto LAB3;

LAB5:    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t23 = *((unsigned char *)t10);
    t0 = t23;

LAB1:    return t0;
LAB3:    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    t23 = *((unsigned char *)t14);
    t13 = (t2 + 40U);
    t15 = *((char **)t13);
    t13 = (t15 + t4);
    t15 = (t5 + 0U);
    t24 = *((int *)t15);
    t25 = (t5 + 8U);
    t26 = *((int *)t25);
    t27 = (t19 - t24);
    t28 = (t27 * t26);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t31 = (t13 + t30);
    t32 = *((unsigned char *)t31);
    t33 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t23, t32);
    t34 = (t8 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    *((unsigned char *)t34) = t33;

LAB4:    if (t19 == t20)
        goto LAB5;

LAB6:    t17 = (t19 + t16);
    t19 = t17;
    goto LAB2;

LAB7:;
}

char *work_p_2794756221_sub_3502387412_2461577219(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t24[16];
    char *t0;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    int t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    int t56;
    char *t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    char *t63;
    int t64;
    char *t65;
    int t66;
    int t67;
    char *t68;
    int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    int t74;
    char *t75;
    int t76;
    int t77;
    unsigned int t78;
    char *t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned char t85;
    char *t86;
    char *t87;
    int t88;
    char *t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;

LAB0:    t9 = (t4 + 16U);
    t10 = *((int *)t9);
    t11 = (t4 + 20U);
    t12 = *((int *)t11);
    t13 = (t4 + 24U);
    t14 = *((int *)t13);
    if (t10 > t12)
        goto LAB2;

LAB3:    if (t14 == -1)
        goto LAB7;

LAB8:    t8 = t12;

LAB4:    t16 = (t4 + 16U);
    t17 = *((int *)t16);
    t18 = (t4 + 20U);
    t19 = *((int *)t18);
    t20 = (t4 + 24U);
    t21 = *((int *)t20);
    if (t17 > t19)
        goto LAB9;

LAB10:    if (t21 == -1)
        goto LAB14;

LAB15:    t15 = t17;

LAB11:    t22 = (t15 - t8);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t23 = (t23 * 1U);
    t26 = (t4 + 16U);
    t27 = *((int *)t26);
    t28 = (t4 + 20U);
    t29 = *((int *)t28);
    t30 = (t4 + 24U);
    t31 = *((int *)t30);
    if (t27 > t29)
        goto LAB16;

LAB17:    if (t31 == -1)
        goto LAB21;

LAB22:    t25 = t29;

LAB18:    t33 = (t4 + 16U);
    t34 = *((int *)t33);
    t35 = (t4 + 20U);
    t36 = *((int *)t35);
    t37 = (t4 + 24U);
    t38 = *((int *)t37);
    if (t34 > t36)
        goto LAB23;

LAB24:    if (t38 == -1)
        goto LAB28;

LAB29:    t32 = t34;

LAB25:    t39 = (t24 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = t25;
    t40 = (t39 + 4U);
    *((int *)t40) = t32;
    t40 = (t39 + 8U);
    *((int *)t40) = -1;
    t41 = (t32 - t25);
    t42 = (t41 * -1);
    t42 = (t42 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t42;
    t40 = (t6 + 4U);
    t43 = ((IEEE_P_2592010699) + 4024);
    t44 = (t40 + 88U);
    *((char **)t44) = t43;
    t45 = (char *)alloca(t23);
    t46 = (t40 + 56U);
    *((char **)t46) = t45;
    xsi_type_set_default_value(t43, t45, t24);
    t47 = (t40 + 64U);
    *((char **)t47) = t24;
    t48 = (t40 + 80U);
    *((unsigned int *)t48) = t23;
    t49 = (t7 + 4U);
    t50 = (t3 != 0);
    if (t50 == 1)
        goto LAB31;

LAB30:    t51 = (t7 + 12U);
    *((char **)t51) = t4;
    t52 = (t7 + 20U);
    *((int *)t52) = t5;
    t53 = (t24 + 8U);
    t54 = *((int *)t53);
    t55 = (t24 + 4U);
    t56 = *((int *)t55);
    t57 = (t24 + 0U);
    t58 = *((int *)t57);
    t59 = t58;
    t60 = t56;

LAB32:    t61 = (t60 * t54);
    t62 = (t59 * t54);
    if (t62 <= t61)
        goto LAB33;

LAB35:    t9 = (t40 + 56U);
    t11 = *((char **)t9);
    t9 = (t24 + 12U);
    t23 = *((unsigned int *)t9);
    t23 = (t23 * 1U);
    t0 = xsi_get_transient_memory(t23);
    memcpy(t0, t11, t23);
    t13 = (t24 + 0U);
    t8 = *((int *)t13);
    t16 = (t24 + 4U);
    t10 = *((int *)t16);
    t18 = (t24 + 8U);
    t12 = *((int *)t18);
    t20 = (t2 + 0U);
    t26 = (t20 + 0U);
    *((int *)t26) = t8;
    t26 = (t20 + 4U);
    *((int *)t26) = t10;
    t26 = (t20 + 8U);
    *((int *)t26) = t12;
    t14 = (t10 - t8);
    t42 = (t14 * t12);
    t42 = (t42 + 1);
    t26 = (t20 + 12U);
    *((unsigned int *)t26) = t42;

LAB1:    return t0;
LAB2:    if (t14 == 1)
        goto LAB5;

LAB6:    t8 = t10;
    goto LAB4;

LAB5:    t8 = t12;
    goto LAB4;

LAB7:    t8 = t10;
    goto LAB4;

LAB9:    if (t21 == 1)
        goto LAB12;

LAB13:    t15 = t19;
    goto LAB11;

LAB12:    t15 = t17;
    goto LAB11;

LAB14:    t15 = t19;
    goto LAB11;

LAB16:    if (t31 == 1)
        goto LAB19;

LAB20:    t25 = t27;
    goto LAB18;

LAB19:    t25 = t29;
    goto LAB18;

LAB21:    t25 = t27;
    goto LAB18;

LAB23:    if (t38 == 1)
        goto LAB26;

LAB27:    t32 = t36;
    goto LAB25;

LAB26:    t32 = t34;
    goto LAB25;

LAB28:    t32 = t36;
    goto LAB25;

LAB31:    *((char **)t49) = t3;
    goto LAB30;

LAB33:    t63 = (t4 + 0U);
    t64 = *((int *)t63);
    t65 = (t4 + 8U);
    t66 = *((int *)t65);
    t67 = (t5 - t64);
    t42 = (t67 * t66);
    t68 = (t4 + 4U);
    t69 = *((int *)t68);
    xsi_vhdl_check_range_of_index(t64, t69, t66, t5);
    t70 = (t4 + 28U);
    t71 = *((unsigned int *)t70);
    t72 = (t42 * t71);
    t73 = (t4 + 16U);
    t74 = *((int *)t73);
    t75 = (t4 + 24U);
    t76 = *((int *)t75);
    t77 = (t59 - t74);
    t78 = (t77 * t76);
    t79 = (t4 + 20U);
    t80 = *((int *)t79);
    xsi_vhdl_check_range_of_index(t74, t80, t76, t59);
    t81 = (t72 + t78);
    t82 = (1U * t81);
    t83 = (0 + t82);
    t84 = (t3 + t83);
    t85 = *((unsigned char *)t84);
    t86 = (t40 + 56U);
    t87 = *((char **)t86);
    t86 = (t24 + 0U);
    t88 = *((int *)t86);
    t89 = (t24 + 8U);
    t90 = *((int *)t89);
    t91 = (t59 - t88);
    t92 = (t91 * t90);
    t93 = (1U * t92);
    t94 = (0 + t93);
    t95 = (t87 + t94);
    *((unsigned char *)t95) = t85;

LAB34:    if (t59 == t60)
        goto LAB35;

LAB36:    t8 = (t59 + t54);
    t59 = t8;
    goto LAB32;

LAB37:;
}

void work_p_2794756221_sub_793506259_2461577219(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, char *t6, char *t7, char *t8, int t9)
{
    char t10[128];
    char t11[24];
    char t12[16];
    char t19[64];
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    char *t44;
    int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    int t52;
    char *t53;
    int t54;
    int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    int t61;
    char *t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;

LAB0:    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 61;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 61);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t10 + 4U);
    t17 = ((IEEE_P_2592010699) + 4024);
    t18 = (t14 + 88U);
    *((char **)t18) = t17;
    t20 = (t14 + 56U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, t12);
    t21 = (t14 + 64U);
    *((char **)t21) = t12;
    t22 = (t14 + 80U);
    *((unsigned int *)t22) = 62U;
    t23 = (t11 + 4U);
    t24 = (t7 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t11 + 12U);
    *((char **)t25) = t8;
    t26 = (t11 + 20U);
    *((int *)t26) = t9;
    t27 = (t14 + 56U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    t29 = (t8 + 12U);
    t16 = *((unsigned int *)t29);
    t16 = (t16 * 1U);
    memcpy(t27, t7, t16);
    t15 = 0;
    t30 = 61;

LAB4:    if (t15 <= t30)
        goto LAB5;

LAB7:
LAB1:    return;
LAB3:    *((char **)t23) = t7;
    goto LAB2;

LAB5:    t13 = (t14 + 56U);
    t17 = *((char **)t13);
    t13 = (t12 + 0U);
    t31 = *((int *)t13);
    t18 = (t12 + 8U);
    t32 = *((int *)t18);
    t33 = (t15 - t31);
    t16 = (t33 * t32);
    t20 = (t12 + 4U);
    t34 = *((int *)t20);
    xsi_vhdl_check_range_of_index(t31, t34, t32, t15);
    t35 = (1U * t16);
    t36 = (0 + t35);
    t21 = (t17 + t36);
    t24 = *((unsigned char *)t21);
    t22 = (t6 + 0U);
    t37 = *((int *)t22);
    t27 = (t6 + 8U);
    t38 = *((int *)t27);
    t39 = (t9 - t37);
    t40 = (t39 * t38);
    t28 = (t6 + 28U);
    t41 = *((unsigned int *)t28);
    t42 = (t40 * t41);
    t29 = (t6 + 16U);
    t43 = *((int *)t29);
    t44 = (t6 + 24U);
    t45 = *((int *)t44);
    t46 = (t15 - t43);
    t47 = (t46 * t45);
    t48 = (t42 + t47);
    t49 = (1 * t48);
    t50 = (0 + t49);
    t51 = (t6 + 0U);
    t52 = *((int *)t51);
    t53 = (t6 + 8U);
    t54 = *((int *)t53);
    t55 = (t9 - t52);
    t56 = (t55 * t54);
    t57 = (t6 + 28U);
    t58 = *((unsigned int *)t57);
    t59 = (t56 * t58);
    t60 = (t6 + 16U);
    t61 = *((int *)t60);
    t62 = (t6 + 24U);
    t63 = *((int *)t62);
    t64 = (t15 - t61);
    t65 = (t64 * t63);
    t66 = (t59 + t65);
    t67 = (1 * t66);
    t68 = (0 + t67);
    t69 = (t68 + t3);
    t70 = (t5 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    *((unsigned char *)t73) = t24;
    xsi_driver_first_trans_delta(t5, t69, 1, 0LL);

LAB6:    if (t15 == t30)
        goto LAB7;

LAB8:    t31 = (t15 + 1);
    t15 = t31;
    goto LAB4;

}

char *work_p_2794756221_sub_1702965784_2461577219(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[128];
    char t7[24];
    char t10[16];
    char *t0;
    char *t8;
    unsigned int t9;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    char *t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned char t61;
    char *t62;
    char *t63;
    int t64;
    char *t65;
    int t66;
    int t67;
    unsigned int t68;
    char *t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;

LAB0:    t8 = (t4 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t11 = (t4 + 0U);
    t12 = *((int *)t11);
    t13 = (t4 + 4U);
    t14 = *((int *)t13);
    t15 = (t4 + 8U);
    t16 = *((int *)t15);
    t17 = (t10 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t12;
    t18 = (t17 + 4U);
    *((int *)t18) = t14;
    t18 = (t17 + 8U);
    *((int *)t18) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t6 + 4U);
    t21 = ((IEEE_P_2592010699) + 4024);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = (char *)alloca(t9);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t10);
    t25 = (t18 + 64U);
    *((char **)t25) = t10;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t9;
    t27 = (t7 + 4U);
    t28 = (t3 != 0);
    if (t28 == 1)
        goto LAB3;

LAB2:    t29 = (t7 + 12U);
    *((char **)t29) = t4;
    t30 = (t7 + 20U);
    *((int *)t30) = t5;
    t31 = (t4 + 8U);
    t32 = *((int *)t31);
    t33 = (t4 + 4U);
    t34 = *((int *)t33);
    t35 = (t4 + 0U);
    t36 = *((int *)t35);
    t37 = t36;
    t38 = t34;

LAB4:    t39 = (t38 * t32);
    t40 = (t37 * t32);
    if (t40 <= t39)
        goto LAB5;

LAB7:    t8 = (t18 + 56U);
    t11 = *((char **)t8);
    t8 = (t10 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t11, t9);
    t13 = (t10 + 0U);
    t12 = *((int *)t13);
    t15 = (t10 + 4U);
    t14 = *((int *)t15);
    t17 = (t10 + 8U);
    t16 = *((int *)t17);
    t21 = (t2 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = t12;
    t22 = (t21 + 4U);
    *((int *)t22) = t14;
    t22 = (t21 + 8U);
    *((int *)t22) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t20;

LAB1:    return t0;
LAB3:    *((char **)t27) = t3;
    goto LAB2;

LAB5:    t41 = (t4 + 0U);
    t42 = *((int *)t41);
    t43 = (t4 + 8U);
    t44 = *((int *)t43);
    t45 = (t37 - t42);
    t20 = (t45 * t44);
    t46 = (t4 + 28U);
    t47 = *((unsigned int *)t46);
    t48 = (t20 * t47);
    t49 = (t4 + 16U);
    t50 = *((int *)t49);
    t51 = (t4 + 24U);
    t52 = *((int *)t51);
    t53 = (t5 - t50);
    t54 = (t53 * t52);
    t55 = (t4 + 20U);
    t56 = *((int *)t55);
    xsi_vhdl_check_range_of_index(t50, t56, t52, t5);
    t57 = (t48 + t54);
    t58 = (1U * t57);
    t59 = (0 + t58);
    t60 = (t3 + t59);
    t61 = *((unsigned char *)t60);
    t62 = (t18 + 56U);
    t63 = *((char **)t62);
    t62 = (t10 + 0U);
    t64 = *((int *)t62);
    t65 = (t10 + 8U);
    t66 = *((int *)t65);
    t67 = (t37 - t64);
    t68 = (t67 * t66);
    t69 = (t10 + 4U);
    t70 = *((int *)t69);
    xsi_vhdl_check_range_of_index(t64, t70, t66, t37);
    t71 = (1U * t68);
    t72 = (0 + t71);
    t73 = (t63 + t72);
    *((unsigned char *)t73) = t61;

LAB6:    if (t37 == t38)
        goto LAB7;

LAB8:    t12 = (t37 + t32);
    t37 = t12;
    goto LAB4;

LAB9:;
}

void work_p_2794756221_sub_4004178935_2461577219(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, char *t6, char *t7, char *t8, int t9)
{
    char t10[128];
    char t11[24];
    char t14[16];
    char *t12;
    unsigned int t13;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    unsigned int t44;
    int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    int t67;
    char *t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;

LAB0:    t12 = (t6 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t15 = (t6 + 0U);
    t16 = *((int *)t15);
    t17 = (t6 + 4U);
    t18 = *((int *)t17);
    t19 = (t6 + 8U);
    t20 = *((int *)t19);
    t21 = (t14 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = t16;
    t22 = (t21 + 4U);
    *((int *)t22) = t18;
    t22 = (t21 + 8U);
    *((int *)t22) = t20;
    t23 = (t18 - t16);
    t24 = (t23 * t20);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = (t10 + 4U);
    t25 = ((IEEE_P_2592010699) + 4024);
    t26 = (t22 + 88U);
    *((char **)t26) = t25;
    t27 = (char *)alloca(t13);
    t28 = (t22 + 56U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, t14);
    t29 = (t22 + 64U);
    *((char **)t29) = t14;
    t30 = (t22 + 80U);
    *((unsigned int *)t30) = t13;
    t31 = (t11 + 4U);
    t32 = (t7 != 0);
    if (t32 == 1)
        goto LAB3;

LAB2:    t33 = (t11 + 12U);
    *((char **)t33) = t8;
    t34 = (t11 + 20U);
    *((int *)t34) = t9;
    t35 = (t22 + 56U);
    t36 = *((char **)t35);
    t35 = (t36 + 0);
    t37 = (t8 + 12U);
    t24 = *((unsigned int *)t37);
    t24 = (t24 * 1U);
    memcpy(t35, t7, t24);
    t12 = (t14 + 8U);
    t16 = *((int *)t12);
    t15 = (t14 + 4U);
    t18 = *((int *)t15);
    t17 = (t14 + 0U);
    t20 = *((int *)t17);
    t23 = t20;
    t38 = t18;

LAB4:    t39 = (t38 * t16);
    t40 = (t23 * t16);
    if (t40 <= t39)
        goto LAB5;

LAB7:
LAB1:    return;
LAB3:    *((char **)t31) = t7;
    goto LAB2;

LAB5:    t19 = (t22 + 56U);
    t21 = *((char **)t19);
    t19 = (t14 + 0U);
    t41 = *((int *)t19);
    t25 = (t14 + 8U);
    t42 = *((int *)t25);
    t43 = (t23 - t41);
    t13 = (t43 * t42);
    t24 = (1U * t13);
    t44 = (0 + t24);
    t26 = (t21 + t44);
    t32 = *((unsigned char *)t26);
    t28 = (t6 + 0U);
    t45 = *((int *)t28);
    t29 = (t6 + 8U);
    t46 = *((int *)t29);
    t47 = (t23 - t45);
    t48 = (t47 * t46);
    t30 = (t6 + 28U);
    t49 = *((unsigned int *)t30);
    t50 = (t48 * t49);
    t35 = (t6 + 16U);
    t51 = *((int *)t35);
    t36 = (t6 + 24U);
    t52 = *((int *)t36);
    t53 = (t9 - t51);
    t54 = (t53 * t52);
    t55 = (t50 + t54);
    t56 = (1 * t55);
    t57 = (0 + t56);
    t37 = (t6 + 0U);
    t58 = *((int *)t37);
    t59 = (t6 + 8U);
    t60 = *((int *)t59);
    t61 = (t23 - t58);
    t62 = (t61 * t60);
    t63 = (t6 + 28U);
    t64 = *((unsigned int *)t63);
    t65 = (t62 * t64);
    t66 = (t6 + 16U);
    t67 = *((int *)t66);
    t68 = (t6 + 24U);
    t69 = *((int *)t68);
    t70 = (t9 - t67);
    t71 = (t70 * t69);
    t72 = (t65 + t71);
    t73 = (1 * t72);
    t74 = (0 + t73);
    t75 = (t74 + t3);
    t76 = (t5 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    *((unsigned char *)t79) = t32;
    xsi_driver_first_trans_delta(t5, t75, 1, 0LL);

LAB6:    if (t23 == t38)
        goto LAB7;

LAB8:    t18 = (t23 + t16);
    t23 = t18;
    goto LAB4;

}

char *work_p_2794756221_sub_2856801789_2461577219(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t9[16];
    char t33[16];
    char t40[16];
    char t42[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 62U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 5736);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 28U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 != 62);
    if (t30 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t4 + 8U);
    t11 = *((int *)t7);
    t10 = (t4 + 4U);
    t13 = *((int *)t10);
    t12 = (t4 + 0U);
    t15 = *((int *)t12);
    t18 = t15;
    t45 = t13;

LAB7:    t48 = (t45 * t11);
    t49 = (t18 * t11);
    if (t49 <= t48)
        goto LAB8;

LAB10:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 62U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:    t31 = (t1 + 8444);
    t34 = ((STD_STANDARD) + 384);
    t35 = (t4 + 28U);
    t36 = *((unsigned int *)t35);
    t37 = xsi_int_to_mem(t36);
    t38 = xsi_string_variable_get_image(t33, t34, t37);
    t41 = ((STD_STANDARD) + 1008);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 42;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t45 = (42 - 1);
    t46 = (t45 * 1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t31, t42, (char)97, t38, t33, (char)101);
    t44 = (t33 + 12U);
    t46 = *((unsigned int *)t44);
    t47 = (42U + t46);
    xsi_report(t39, t47, (unsigned char)3);
    goto LAB5;

LAB8:    t14 = work_p_2794756221_sub_3502387412_2461577219(t1, t33, t3, t4, t18);
    t16 = (t17 + 56U);
    t20 = *((char **)t16);
    t16 = (t9 + 0U);
    t50 = *((int *)t16);
    t21 = (t9 + 8U);
    t51 = *((int *)t21);
    t52 = (t18 - t50);
    t8 = (t52 * t51);
    t23 = (t9 + 4U);
    t53 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t50, t53, t51, t18);
    t19 = (62U * t8);
    t36 = (0 + t19);
    t24 = (t20 + t36);
    t25 = (t33 + 12U);
    t46 = *((unsigned int *)t25);
    t46 = (t46 * 1U);
    memcpy(t24, t14, t46);

LAB9:    if (t18 == t45)
        goto LAB10;

LAB11:    t13 = (t18 + t11);
    t18 = t13;
    goto LAB7;

LAB12:;
}

char *work_p_2794756221_sub_2856804033_2461577219(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t9[16];
    char t33[16];
    char t40[16];
    char t42[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 64U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 5848);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 28U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 != 64);
    if (t30 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t4 + 8U);
    t11 = *((int *)t7);
    t10 = (t4 + 4U);
    t13 = *((int *)t10);
    t12 = (t4 + 0U);
    t15 = *((int *)t12);
    t18 = t15;
    t45 = t13;

LAB7:    t48 = (t45 * t11);
    t49 = (t18 * t11);
    if (t49 <= t48)
        goto LAB8;

LAB10:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 64U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:    t31 = (t1 + 8486);
    t34 = ((STD_STANDARD) + 384);
    t35 = (t4 + 28U);
    t36 = *((unsigned int *)t35);
    t37 = xsi_int_to_mem(t36);
    t38 = xsi_string_variable_get_image(t33, t34, t37);
    t41 = ((STD_STANDARD) + 1008);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 42;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t45 = (42 - 1);
    t46 = (t45 * 1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t31, t42, (char)97, t38, t33, (char)101);
    t44 = (t33 + 12U);
    t46 = *((unsigned int *)t44);
    t47 = (42U + t46);
    xsi_report(t39, t47, (unsigned char)3);
    goto LAB5;

LAB8:    t14 = work_p_2794756221_sub_3502387412_2461577219(t1, t33, t3, t4, t18);
    t16 = (t17 + 56U);
    t20 = *((char **)t16);
    t16 = (t9 + 0U);
    t50 = *((int *)t16);
    t21 = (t9 + 8U);
    t51 = *((int *)t21);
    t52 = (t18 - t50);
    t8 = (t52 * t51);
    t23 = (t9 + 4U);
    t53 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t50, t53, t51, t18);
    t19 = (64U * t8);
    t36 = (0 + t19);
    t24 = (t20 + t36);
    t25 = (t33 + 12U);
    t46 = *((unsigned int *)t25);
    t46 = (t46 * 1U);
    memcpy(t24, t14, t46);

LAB9:    if (t18 == t45)
        goto LAB10;

LAB11:    t13 = (t18 + t11);
    t18 = t13;
    goto LAB7;

LAB12:;
}

char *work_p_2794756221_sub_2856805155_2461577219(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t9[16];
    char t33[16];
    char t40[16];
    char t42[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 65U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 5960);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 28U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 != 65);
    if (t30 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t4 + 8U);
    t11 = *((int *)t7);
    t10 = (t4 + 4U);
    t13 = *((int *)t10);
    t12 = (t4 + 0U);
    t15 = *((int *)t12);
    t18 = t15;
    t45 = t13;

LAB7:    t48 = (t45 * t11);
    t49 = (t18 * t11);
    if (t49 <= t48)
        goto LAB8;

LAB10:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 65U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:    t31 = (t1 + 8528);
    t34 = ((STD_STANDARD) + 384);
    t35 = (t4 + 28U);
    t36 = *((unsigned int *)t35);
    t37 = xsi_int_to_mem(t36);
    t38 = xsi_string_variable_get_image(t33, t34, t37);
    t41 = ((STD_STANDARD) + 1008);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 42;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t45 = (42 - 1);
    t46 = (t45 * 1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t31, t42, (char)97, t38, t33, (char)101);
    t44 = (t33 + 12U);
    t46 = *((unsigned int *)t44);
    t47 = (42U + t46);
    xsi_report(t39, t47, (unsigned char)3);
    goto LAB5;

LAB8:    t14 = work_p_2794756221_sub_3502387412_2461577219(t1, t33, t3, t4, t18);
    t16 = (t17 + 56U);
    t20 = *((char **)t16);
    t16 = (t9 + 0U);
    t50 = *((int *)t16);
    t21 = (t9 + 8U);
    t51 = *((int *)t21);
    t52 = (t18 - t50);
    t8 = (t52 * t51);
    t23 = (t9 + 4U);
    t53 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t50, t53, t51, t18);
    t19 = (65U * t8);
    t36 = (0 + t19);
    t24 = (t20 + t36);
    t25 = (t33 + 12U);
    t46 = *((unsigned int *)t25);
    t46 = (t46 * 1U);
    memcpy(t24, t14, t46);

LAB9:    if (t18 == t45)
        goto LAB10;

LAB11:    t13 = (t18 + t11);
    t18 = t13;
    goto LAB7;

LAB12:;
}

char *work_p_2794756221_sub_2856806277_2461577219(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t9[16];
    char t33[16];
    char t40[16];
    char t42[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 66U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = (t1 + 6072);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t6 + 4U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 12U);
    *((char **)t28) = t4;
    t29 = (t4 + 28U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 != 66);
    if (t30 != 0)
        goto LAB4;

LAB6:
LAB5:    t7 = (t4 + 8U);
    t11 = *((int *)t7);
    t10 = (t4 + 4U);
    t13 = *((int *)t10);
    t12 = (t4 + 0U);
    t15 = *((int *)t12);
    t18 = t15;
    t45 = t13;

LAB7:    t48 = (t45 * t11);
    t49 = (t18 * t11);
    if (t49 <= t48)
        goto LAB8;

LAB10:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 66U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    return t0;
LAB3:    *((char **)t26) = t3;
    goto LAB2;

LAB4:    t31 = (t1 + 8570);
    t34 = ((STD_STANDARD) + 384);
    t35 = (t4 + 28U);
    t36 = *((unsigned int *)t35);
    t37 = xsi_int_to_mem(t36);
    t38 = xsi_string_variable_get_image(t33, t34, t37);
    t41 = ((STD_STANDARD) + 1008);
    t43 = (t42 + 0U);
    t44 = (t43 + 0U);
    *((int *)t44) = 1;
    t44 = (t43 + 4U);
    *((int *)t44) = 42;
    t44 = (t43 + 8U);
    *((int *)t44) = 1;
    t45 = (42 - 1);
    t46 = (t45 * 1);
    t46 = (t46 + 1);
    t44 = (t43 + 12U);
    *((unsigned int *)t44) = t46;
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t31, t42, (char)97, t38, t33, (char)101);
    t44 = (t33 + 12U);
    t46 = *((unsigned int *)t44);
    t47 = (42U + t46);
    xsi_report(t39, t47, (unsigned char)3);
    goto LAB5;

LAB8:    t14 = work_p_2794756221_sub_3502387412_2461577219(t1, t33, t3, t4, t18);
    t16 = (t17 + 56U);
    t20 = *((char **)t16);
    t16 = (t9 + 0U);
    t50 = *((int *)t16);
    t21 = (t9 + 8U);
    t51 = *((int *)t21);
    t52 = (t18 - t50);
    t8 = (t52 * t51);
    t23 = (t9 + 4U);
    t53 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t50, t53, t51, t18);
    t19 = (66U * t8);
    t36 = (0 + t19);
    t24 = (t20 + t36);
    t25 = (t33 + 12U);
    t46 = *((unsigned int *)t25);
    t46 = (t46 * 1U);
    memcpy(t24, t14, t46);

LAB9:    if (t18 == t45)
        goto LAB10;

LAB11:    t13 = (t18 + t11);
    t18 = t13;
    goto LAB7;

LAB12:;
}


void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_p_2794756221_init()
{
	static char *se[] = {(void *)work_p_2794756221_sub_3686398390_2461577219,(void *)work_p_2794756221_sub_1480491410_2461577219,(void *)work_p_2794756221_sub_3502387412_2461577219,(void *)work_p_2794756221_sub_793506259_2461577219,(void *)work_p_2794756221_sub_1702965784_2461577219,(void *)work_p_2794756221_sub_4004178935_2461577219,(void *)work_p_2794756221_sub_2856801789_2461577219,(void *)work_p_2794756221_sub_2856804033_2461577219,(void *)work_p_2794756221_sub_2856805155_2461577219,(void *)work_p_2794756221_sub_2856806277_2461577219};
	xsi_register_didat("work_p_2794756221", "isim/vending_machine_tb_isim_beh.exe.sim/work/p_2794756221.didat");
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(2, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(3, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(4, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(5, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(6, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(7, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(8, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(9, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(10, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(11, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(12, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(13, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(14, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(15, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(16, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(17, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(18, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(19, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(20, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(21, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
}
