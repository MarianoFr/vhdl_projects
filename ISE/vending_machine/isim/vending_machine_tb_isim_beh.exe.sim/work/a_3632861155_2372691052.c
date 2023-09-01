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
static const char *ng0 = "C:/MarianoF/vhdl_projects/ISE/vending_machine/vending_machine_tb.vhd";



static void work_a_3632861155_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3632861155_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t7 = (100 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3632861155_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t3 = (110 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 7152);
    *((int *)t2) = 0;
    t4 = (t0 + 7156);
    *((int *)t4) = 4;
    t8 = 0;
    t9 = 4;

LAB12:    if (t8 <= t9)
        goto LAB13;

LAB15:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 7160);
    *((int *)t2) = 0;
    t4 = (t0 + 7164);
    *((int *)t4) = 2;
    t8 = 0;
    t9 = 2;

LAB25:    if (t8 <= t9)
        goto LAB26;

LAB28:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7168);
    *((int *)t2) = 0;
    t4 = (t0 + 7172);
    *((int *)t4) = 1;
    t8 = 0;
    t9 = 1;

LAB38:    if (t8 <= t9)
        goto LAB39;

LAB41:    xsi_set_current_line(121, ng0);

LAB53:    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(100, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 7152);
    t8 = *((int *)t2);
    t4 = (t0 + 7156);
    t9 = *((int *)t4);
    if (t8 == t9)
        goto LAB15;

LAB24:    t12 = (t8 + 1);
    t8 = t12;
    t5 = (t0 + 7152);
    *((int *)t5) = t8;
    goto LAB12;

LAB16:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    goto LAB14;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB26:    xsi_set_current_line(105, ng0);
    t5 = (t0 + 4504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(106, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB27:    t2 = (t0 + 7160);
    t8 = *((int *)t2);
    t4 = (t0 + 7164);
    t9 = *((int *)t4);
    if (t8 == t9)
        goto LAB28;

LAB37:    t12 = (t8 + 1);
    t8 = t12;
    t5 = (t0 + 7160);
    *((int *)t5) = t8;
    goto LAB25;

LAB29:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4504);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    goto LAB27;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB39:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 4568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(112, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB40:    t2 = (t0 + 7168);
    t8 = *((int *)t2);
    t4 = (t0 + 7172);
    t9 = *((int *)t4);
    if (t8 == t9)
        goto LAB41;

LAB50:    t12 = (t8 + 1);
    t8 = t12;
    t5 = (t0 + 7168);
    *((int *)t5) = t8;
    goto LAB38;

LAB42:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t3 = (150 * 1000LL);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, t3);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    goto LAB40;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB51:    goto LAB2;

LAB52:    goto LAB51;

LAB54:    goto LAB52;

}


extern void work_a_3632861155_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3632861155_2372691052_p_0,(void *)work_a_3632861155_2372691052_p_1,(void *)work_a_3632861155_2372691052_p_2};
	xsi_register_didat("work_a_3632861155_2372691052", "isim/vending_machine_tb_isim_beh.exe.sim/work/a_3632861155_2372691052.didat");
	xsi_register_executes(pe);
}
