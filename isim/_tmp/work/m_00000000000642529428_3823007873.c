/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0xef153c89 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Designs/Mekal_Tomaszewski/divider/top.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {50000000U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {1U, 0U};



static void A30_0(char *t0)
{
    char t13[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 728U);
    t5 = *((char **)t4);
    t4 = (t5 + 4U);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1040);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t13 + 4U);
    t12 = (t4 + 4U);
    t14 = (t5 + 4U);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB12;

LAB9:    if (t19 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4U);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1040);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1040);
    xsi_vlogvar_generic_wait_assign_value(t11, t13, 2, 0, 0, 32, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1040);
    xsi_vlogvar_generic_wait_assign_value(t12, t11, 2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(36, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1040);
    xsi_vlogvar_generic_wait_assign_value(t29, t28, 2, 0, 0, 32, 0LL);
    goto LAB15;

}

static void C44_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 1644U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1040);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t7, 32, t8, 32);
    t10 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t10, 32);
    memset(t12, 0, 8);
    t13 = (t12 + 4U);
    t14 = (t6 + 4U);
    t15 = (t11 + 4U);
    if (*((unsigned int *)t14) != 0)
        goto LAB5;

LAB4:    if (*((unsigned int *)t15) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t11))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t16 = (t4 + 4U);
    t17 = (t12 + 4U);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t17) != 0)
        goto LAB11;

LAB12:    t23 = (t4 + 4U);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t23) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t32, 8);

LAB21:    t33 = (t0 + 1876);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t37 + 4U);
    t39 = 1U;
    t40 = t39;
    t41 = (t3 + 4U);
    t42 = *((unsigned int *)t3);
    t39 = (t39 & t42);
    t43 = *((unsigned int *)t41);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 4294967294U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 | t39);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 4294967294U);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 | t40);
    xsi_driver_vfirst_trans(t33, 0, 0);
    t48 = (t0 + 1832);
    *((int *)t48) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    t27 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t32 = ((char*)((ng5)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t27, 1, t32, 1);
    goto LAB21;

LAB19:    memcpy(t3, t27, 8);
    goto LAB21;

}


extern void work_m_00000000000642529428_3823007873_init()
{
	static char *pe[] = {(void *)A30_0,(void *)C44_1};
	xsi_register_didat("work_m_00000000000642529428_3823007873", "isim/_tmp/work/m_00000000000642529428_3823007873.didat");
	xsi_register_executes(pe);
}
