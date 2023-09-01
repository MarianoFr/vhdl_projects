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
static const char *ng0 = "C:/MarianoF/vhdl_projects/ISE/serial_data_receiver/serial_receiver_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_2566347825_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;
    int t11;
    int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 != 0)
        goto LAB4;

LAB6:
LAB5:    goto LAB2;

LAB4:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4120);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 2);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t10);

LAB9:    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6928);
    *((int *)t2) = 0;
    t3 = (t0 + 6932);
    *((int *)t3) = 9;
    t11 = 0;
    t12 = 9;

LAB11:    if (t11 <= t12)
        goto LAB12;

LAB14:    xsi_set_current_line(50, ng0);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

LAB12:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 2368U);
    t6 = *((char **)t5);
    t5 = (t0 + 6928);
    t13 = *((int *)t5);
    t14 = (t13 - 9);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t5));
    t16 = (1U * t15);
    t17 = (0 + t16);
    t7 = (t6 + t17);
    t4 = *((unsigned char *)t7);
    t8 = (t0 + 4184);
    t18 = (t8 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t4;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t9);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB13:    t2 = (t0 + 6928);
    t11 = *((int *)t2);
    t3 = (t0 + 6932);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB14;

LAB19:    t13 = (t11 + 1);
    t11 = t13;
    t5 = (t0 + 6928);
    *((int *)t5) = t11;
    goto LAB11;

LAB15:    goto LAB13;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB20:    goto LAB5;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

}

static void work_a_2566347825_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2.0000000000000000);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 4248);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 4248);
    xsi_driver_intertial_reject(t12, t4, t4);

LAB2:    t13 = (t0 + 4040);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2566347825_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2566347825_3212880686_p_0,(void *)work_a_2566347825_3212880686_p_1};
	xsi_register_didat("work_a_2566347825_3212880686", "isim/serial_receiver_tb_isim_beh.exe.sim/work/a_2566347825_3212880686.didat");
	xsi_register_executes(pe);
}
