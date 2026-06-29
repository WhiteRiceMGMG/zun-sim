/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | bbsw2ios.s                                                      */
/* DOMAIN   | BSW                                                             */
/* MODULE   | bbsw2ios                                                        */
/* DETAILS  | bsw to ios bridge                                               */
/* VER      | 26.06.29 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
/* #include "../../inc/common.h" */
#include "../bbsw2iosif.h"

/*----------------------------------------------------------------------------*/
/* EXTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/
stflag16 stg_bbsw2iosif_sts;

u1 u1g_bbsw2iosif_vel;        /* VELOCITY 0-300[km]                */
u1 u1g_bbsw2iosif_rpm;        /* RPM 0-12000[km]                   */
u1 u1g_bbsw2iosif_gear;       /* GEAR INFORMATION 1,2,3,4,5,6,N[-] */
u1 u1g_bbsw2iosif_aclthlpct;  /* ACCEL THROTTLE 0-100[%]           */
u1 u1g_bbsw2iosif_brkpdlpct;  /* BRAKE PEDAL 0-100[%]              */
u1 u1g_bbsw2iosif_clthpdlpct; /* CLUTCH PEDAL 0-100[%]             */
u1 u1g_bbsw2iosif_eng;        /* ENGINE PERMISSION ON,OFF[-]       */
u1 u1g_bbsw2iosif_sht;        /* SHIFT CHANGE PERMISSION ON,OFF[-] */
u1 u1g_bbsw2iosif_ovrvsts;    /* OVER REV JUDGE STATUS ON,OFF[-]   */
u1 u1g_bbsw2iosif_clthszsts;  /* CLUTCH SEIZURE STATUS ON,OFF[-]   */
u1 u1g_bbsw2iosif_brkszsts;   /* BRAKE SEIZURE STATUS ON,OFF[-]    */
u1 u1g_bbsw2iosif_enststs;    /* ENGINE STALL STATUS ON,IFF[-]     */
u1 u1g_bbsw2iosif_ovrhet;     /* OVER HEAT STATUS ON,OFF[-]        */
u1 u1g_bbsw2iosif_snserr;     /* SENSOR ERROR STATUS ON,OFF[-]     */
u1 u1g_bbsw2iosif_stopsts;    /* ZUN STATUS:STOP ON,OFF[-]         */
u1 u1g_bbsw2iosif_runsts;     /* ZUN STATUS:RUN ON,OFF[-]          */
u1 u1g_bbsw2iosif_spdupsts;   /* ZUN STATUS:SPEED UP ON,OFF[-]     */
u1 u1g_bbsw2iosif_spddwsts;   /* ZUN STATUS:SPEED DOWN ON,OFF[-]   */
u1 u1g_bbsw2iosif_enststs;    /* ZUN STATUS:ENST ON,OFF[-]         */
u1 u1g_bbsw2iosif_TBD1;       /* T.B.D                             */
u1 u1g_bbsw2iosif_TBD2;       /* T.B.D                             */
u1 u1g_bbsw2iosif_TBD3;       /* T.B.D                             */

/*----------------------------------------------------------------------------*/
/* INTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* EXTERNAL FUNCTION                                                          */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* FUNC     | u1 u1g_sample_func()                                            */
/* ABST     | abstract                                                        */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/

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
