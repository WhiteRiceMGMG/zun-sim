/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | bscheduleif.h                                                   */
/* DOMAIN   | BSW                                                             */
/* MODULE   | bschedule                                                       */
/* DETAILS  | scheduler                                                       */
/* VER      | 26.06.30 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
#include "../../inc/common.h"
#include "../bcyclemngif.h"    /* vdg_bcyclemngif_pwon()                      */
                               /* vdg_bcyclemngif_4msin()                     */
                               /* vdg_bcyclemngif_4msout()                    */
                               /* vdg_bcyclemngif_16msin()                    */
                               /* vdg_bcyclemngif_16msout()                   */
                               /* vdg_bcyclemngif_64msin()                    */
                               /* vdg_bcyclemngif_64msout()                   */

#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
#include "../../../debug/log/print_log.h"
#endif

#include "../bscheduleif.h"

/*----------------------------------------------------------------------------*/
/* EXTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/
u1 u1g_bschedulerif_rstflg;

/*----------------------------------------------------------------------------*/
/* INTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/
static u1 u1s_bschedulerif_incnt_o;
static u1 u1s_bschedulerif_outcnt_o;

#define u1s_BSCHEDULE_CNT_64MS  ((u1)4) 

/*----------------------------------------------------------------------------*/
/* EXTERNAL FUNCTION                                                          */
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bschedulerif_pwoncall( void )                          */
/* ABST     | function manager                                                */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bscheduleif_pwoncall( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bscheduleif_pwoncall()" );
#endif

    u1s_bschedule_incnt_o = (u1)0;
    u1s_bschedule_outcnt_o = (u1)0;
    u1g_bschedulerif_rstflg = (u1)OFF;

    vdg_bcyclemngif_pwon();
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bschedulerif_incall( void )                            */
/* ABST     | function manager                                                */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bscheduleif_incall( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bschedulerif_incall()" );
#endif
    u1 u1t_incnt;
    u1 u1t_rstflg;

    u1t_incnt = u1s_bschedule_incnt_o;
    u1t_rstflg = u1g_bschedulerif_rstflg;

    if ( u1t_incnt < u1g_MAX)
    {
        u1t_incnt++;
    }

    vdg_bcyclemngif_4msin();
    vdg_bcyclemngif_4msin();
    vdg_bcyclemngif_4msin();
    vdg_bcyclemngif_4msin();

    vdg_bcyclemngif_16msin();

    u1t_rstflg = (u1)OFF
    if ( u1t_incnt == u1s_BSCHEDULE_CNT_64MS )
    {
        vdg_bcyclemngif_64msin();
        u1t_incnt = (u1)0;
        u1t_rstflg = (u1)ON;
    }

    u1s_bschedule_incnt_o = u1t_incnt;
    u1g_bschedulerif_rstflg = u1t_rstflg;
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bschedulerif_outcall( void )                           */
/* ABST     | function manager                                                */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bscheduleif_outcall( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bschedulerif_outcall()" );
#endif

    u1 u1t_outcnt;
    u1 u1t_rst_flg;

    u1t_outcnt = u1s_bscheduleif_outcnt_o;
    u1t_rstflg = u1g_bschedulerif_rstflg;

    if ( u1t_outcnt < u1g_MAX)
    {
        u1t_outcnt++;
    }

    vdg_bcyclemngif_4msout();
    vdg_bcyclemngif_4msout();
    vdg_bcyclemngif_4msout();
    vdg_bcyclemngif_4msout();

    vdg_bcyclemngif_16msout();

    u1t_rstflg = (u1)OFF;
    if ( u1t_outcnt == u1s_BSCHEDULE_CNT_64MS )
    {
        vdg_bcyclemngif_64msout();
        u1t_outcnt = (u1)0;
        u1t_rstflg = (u1)ON;
    }

    u1s_bscheduleif_outcnt_o = u1t_outcnt;
    u1g_bschedulerif_rstflg = u1t_rstflg;
}


/*----------------------------------------------------------------------------*/
/* INTERNAL FUNCTION                                                          */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* FUNC     | u1 u1s_sample_func()                                            */
/* ABST     | abstract                                                        */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* EOF                                                                        */
/*----------------------------------------------------------------------------*/
