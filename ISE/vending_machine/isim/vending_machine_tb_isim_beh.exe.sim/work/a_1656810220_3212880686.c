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
static const char *ng0 = "C:/MarianoF/vhdl_projects/useful_snipets/ContadorDes.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *WORK_P_2794756221;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int work_p_2794756221_sub_3686398390_2461577219(char *, int );


static void work_a_1656810220_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 4360);
    t4 = (t1 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t8 = (10 - 1);
    t9 = work_p_2794756221_sub_3686398390_2461577219(WORK_P_2794756221, 10);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, t8, t9);
    t10 = (4U != 4U);
    if (t10 == 1)
        goto LAB8;

LAB9:    t11 = (t0 + 4360);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 4U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB9;

}

static void work_a_1656810220_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6740U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 4488);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 4264);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1656810220_3212880686_p_2(char *t0)
{
    char t5[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int t6;
    int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)3);
    if (t17 != 0)
        goto LAB7;

LAB8:
LAB11:    t30 = (t0 + 2152U);
    t31 = *((char **)t30);
    t30 = (t0 + 4552);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t31, 4U);
    xsi_driver_first_trans_fast(t30);

LAB2:    t36 = (t0 + 4280);
    *((int *)t36) = 1;

LAB1:    return;
LAB3:    t6 = (10 - 1);
    t7 = work_p_2794756221_sub_3686398390_2461577219(WORK_P_2794756221, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, t6, t7);
    t8 = (4U != 4U);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 4552);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB6;

LAB7:    t14 = (t0 + 2152U);
    t19 = *((char **)t14);
    t14 = (t0 + 6756U);
    t20 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t18, t19, t14, 1);
    t21 = (t18 + 12U);
    t22 = *((unsigned int *)t21);
    t23 = (1U * t22);
    t24 = (4U != t23);
    if (t24 == 1)
        goto LAB9;

LAB10:    t25 = (t0 + 4552);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t20, 4U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB9:    xsi_size_not_matching(4U, t23, 0);
    goto LAB10;

LAB12:    goto LAB2;

}


extern void work_a_1656810220_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1656810220_3212880686_p_0,(void *)work_a_1656810220_3212880686_p_1,(void *)work_a_1656810220_3212880686_p_2};
	xsi_register_didat("work_a_1656810220_3212880686", "isim/vending_machine_tb_isim_beh.exe.sim/work/a_1656810220_3212880686.didat");
	xsi_register_executes(pe);
}
