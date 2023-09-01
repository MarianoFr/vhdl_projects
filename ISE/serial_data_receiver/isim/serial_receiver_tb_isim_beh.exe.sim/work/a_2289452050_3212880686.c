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
static const char *ng0 = "C:/MarianoF/vhdl_projects/ISE/serial_data_receiver/serial_data_receiver.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2289452050_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned char t58;
    unsigned char t59;
    char *t60;
    char *t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned char t66;
    unsigned char t67;
    char *t68;
    char *t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned char t74;
    unsigned char t75;
    char *t76;
    char *t77;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 3672);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2128U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    if (-1 == -1)
        goto LAB5;

LAB6:    t6 = 0;

LAB7:    t7 = (t6 - 9);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t5 = (t2 + t9);
    t10 = (1U * 10U);
    memset(t5, (unsigned char)0, t10);
    t11 = (t0 + 2248U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t1, 10U);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3752);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3816);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    t6 = 9;
    goto LAB7;

LAB8:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)1);
    if (t14 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t7 = (0 - 9);
    t6 = (t7 * -1);
    t8 = (1U * t6);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB16;

LAB17:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 2248U);
    t17 = *((char **)t12);
    t18 = (0 - 9);
    t10 = (t18 * -1);
    t19 = (1U * t10);
    t20 = (0 + t19);
    t12 = (t17 + t20);
    *((unsigned char *)t12) = (unsigned char)1;
    goto LAB11;

LAB13:    t2 = (t0 + 2248U);
    t11 = *((char **)t2);
    t7 = (0 - 9);
    t6 = (t7 * -1);
    t8 = (1U * t6);
    t9 = (0 + t8);
    t2 = (t11 + t9);
    t15 = *((unsigned char *)t2);
    t16 = (t15 == (unsigned char)0);
    t4 = t16;
    goto LAB15;

LAB16:    xsi_set_current_line(70, ng0);
    t5 = (t0 + 2128U);
    t11 = *((char **)t5);
    t18 = *((int *)t11);
    t21 = (t18 + 1);
    t5 = (t0 + 2128U);
    t12 = *((char **)t5);
    t5 = (t12 + 0);
    *((int *)t5) = t21;
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t7 = *((int *)t2);
    t3 = (t7 < 10);
    if (t3 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t7 = *((int *)t2);
    t3 = (t7 == 10);
    if (t3 != 0)
        goto LAB21;

LAB22:
LAB19:    goto LAB11;

LAB18:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t1 = (t0 + 2248U);
    t11 = *((char **)t1);
    t1 = (t0 + 2128U);
    t12 = *((char **)t1);
    t18 = *((int *)t12);
    t21 = (t18 - 9);
    t6 = (t21 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, t18);
    t8 = (1U * t6);
    t9 = (0 + t8);
    t1 = (t11 + t9);
    *((unsigned char *)t1) = t4;
    goto LAB19;

LAB21:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2248U);
    t5 = *((char **)t1);
    t18 = (1 - 9);
    t6 = (t18 * -1);
    t8 = (1U * t6);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t13 = *((unsigned char *)t1);
    t11 = (t0 + 2248U);
    t12 = *((char **)t11);
    t21 = (2 - 9);
    t10 = (t21 * -1);
    t19 = (1U * t10);
    t20 = (0 + t19);
    t11 = (t12 + t20);
    t14 = *((unsigned char *)t11);
    t15 = (t13 ^ t14);
    t17 = (t0 + 2248U);
    t22 = *((char **)t17);
    t23 = (3 - 9);
    t24 = (t23 * -1);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t17 = (t22 + t26);
    t16 = *((unsigned char *)t17);
    t27 = (t15 ^ t16);
    t28 = (t0 + 2248U);
    t29 = *((char **)t28);
    t30 = (4 - 9);
    t31 = (t30 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t28 = (t29 + t33);
    t34 = *((unsigned char *)t28);
    t35 = (t27 ^ t34);
    t36 = (t0 + 2248U);
    t37 = *((char **)t36);
    t38 = (5 - 9);
    t39 = (t38 * -1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t36 = (t37 + t41);
    t42 = *((unsigned char *)t36);
    t43 = (t35 ^ t42);
    t44 = (t0 + 2248U);
    t45 = *((char **)t44);
    t46 = (6 - 9);
    t47 = (t46 * -1);
    t48 = (1U * t47);
    t49 = (0 + t48);
    t44 = (t45 + t49);
    t50 = *((unsigned char *)t44);
    t51 = (t43 ^ t50);
    t52 = (t0 + 2248U);
    t53 = *((char **)t52);
    t54 = (7 - 9);
    t55 = (t54 * -1);
    t56 = (1U * t55);
    t57 = (0 + t56);
    t52 = (t53 + t57);
    t58 = *((unsigned char *)t52);
    t59 = (t51 ^ t58);
    t60 = (t0 + 2248U);
    t61 = *((char **)t60);
    t62 = (8 - 9);
    t63 = (t62 * -1);
    t64 = (1U * t63);
    t65 = (0 + t64);
    t60 = (t61 + t65);
    t66 = *((unsigned char *)t60);
    t67 = (t59 ^ t66);
    if (t67 == 1)
        goto LAB23;

LAB24:    t68 = (t0 + 2248U);
    t69 = *((char **)t68);
    t70 = (9 - 9);
    t71 = (t70 * -1);
    t72 = (1U * t71);
    t73 = (0 + t72);
    t68 = (t69 + t73);
    t74 = *((unsigned char *)t68);
    t75 = (!(t74));
    t4 = t75;

LAB25:    t76 = (t0 + 2368U);
    t77 = *((char **)t76);
    t76 = (t77 + 0);
    *((unsigned char *)t76) = t4;
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3752);
    t5 = (t1 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    *((unsigned char *)t17) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2248U);
    t5 = *((char **)t1);
    t7 = (0 - 9);
    t6 = (t7 * -1);
    t8 = (1U * t6);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    *((unsigned char *)t1) = t3;
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB19;

LAB23:    t4 = (unsigned char)1;
    goto LAB25;

LAB26:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3816);
    t5 = (t1 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    *((unsigned char *)t17) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t6 = (9 - 7);
    t8 = (t6 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t5 = (t0 + 3880);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t17 = (t12 + 56U);
    t22 = *((char **)t17);
    memcpy(t22, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB27;

}


extern void work_a_2289452050_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2289452050_3212880686_p_0};
	xsi_register_didat("work_a_2289452050_3212880686", "isim/serial_receiver_tb_isim_beh.exe.sim/work/a_2289452050_3212880686.didat");
	xsi_register_executes(pe);
}
