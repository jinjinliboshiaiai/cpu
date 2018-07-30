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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000774640959_0467708899_init();
    work_m_00000000000140276039_0617898135_init();
    work_m_00000000000313834407_1298333783_init();
    work_m_00000000000870363555_3092946469_init();
    work_m_00000000001540085904_1213024400_init();
    work_m_00000000001147132443_4132685690_init();
    work_m_00000000001956122954_2725559894_init();
    work_m_00000000003850007551_3411229544_init();
    work_m_00000000002217067243_2875975674_init();
    work_m_00000000001436462043_0605383796_init();
    work_m_00000000001029297660_0249777441_init();
    work_m_00000000002652933038_0053799672_init();
    work_m_00000000002060872483_2356217838_init();
    work_m_00000000000692273040_1093763706_init();
    work_m_00000000004237812904_0194417040_init();
    work_m_00000000003236306646_3508751931_init();
    work_m_00000000003071289001_1676367048_init();
    work_m_00000000003863053134_3027548060_init();
    work_m_00000000002047498008_3750256362_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_3750256362");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
