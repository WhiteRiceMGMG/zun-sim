/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | bbsw2iosif.h                                                    */
/* DOMAIN   | BSW                                                             */
/* MODULE   | bbsw2ios                                                        */
/* DETAILS  | bsw to ios bridge                                               */
/* VER      | 26.06.29 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/
#ifndef BBSW2IOSIF_H
#define BBSW2IOSIF_H

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
/* #include "../../swiftbridge.h" */ /* swift bridge header */
#include "../inc/common.h"

/*----------------------------------------------------------------------------*/
/* EXTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/
extern u1 u1g_bbsw2iosif_vel;        /* VELOCITY 0-300[km]                */
extern u1 u1g_bbsw2iosif_rpm;        /* RPM 0-12000[km]                   */
extern u1 u1g_bbsw2iosif_gear;       /* GEAR INFORMATION 1,2,3,4,5,6,N[-] */
extern u1 u1g_bbsw2iosif_aclthlpct;  /* ACCEL THROTTLE 0-100[%]           */
extern u1 u1g_bbsw2iosif_brkpdlpct;  /* BRAKE PEDAL 0-100[%]              */
extern u1 u1g_bbsw2iosif_clthpdlpct; /* CLUTCH PEDAL 0-100[%]             */
extern u1 u1g_bbsw2iosif_eng;        /* ENGINE PERMISSION ON,OFF[-]       */
extern u1 u1g_bbsw2iosif_sht;        /* SHIFT CHANGE PERMISSION ON,OFF[-] */
extern u1 u1g_bbsw2iosif_ovrvsts;    /* OVER REV JUDGE STATUS ON,OFF[-]   */
extern u1 u1g_bbsw2iosif_clthszsts;  /* CLUTCH SEIZURE STATUS ON,OFF[-]   */
extern u1 u1g_bbsw2iosif_brkszsts;   /* BRAKE SEIZURE STATUS ON,OFF[-]    */
extern u1 u1g_bbsw2iosif_enststs;    /* ENGINE STALL STATUS ON,IFF[-]     */
extern u1 u1g_bbsw2iosif_ovrhet;     /* OVER HEAT STATUS ON,OFF[-]        */
extern u1 u1g_bbsw2iosif_snserr;     /* SENSOR ERROR STATUS ON,OFF[-]     */
extern u1 u1g_bbsw2iosif_stopsts;    /* ZUN STATUS:STOP ON,OFF[-]         */
extern u1 u1g_bbsw2iosif_runsts;     /* ZUN STATUS:RUN ON,OFF[-]          */
extern u1 u1g_bbsw2iosif_spdupsts;   /* ZUN STATUS:SPEED UP ON,OFF[-]     */
extern u1 u1g_bbsw2iosif_spddwsts;   /* ZUN STATUS:SPEED DOWN ON,OFF[-]   */
extern u1 u1g_bbsw2iosif_enststs;    /* ZUN STATUS:ENST ON,OFF[-]         */
extern u1 u1g_bbsw2iosif_TBD1;       /* T.B.D                             */
extern u1 u1g_bbsw2iosif_TBD2;       /* T.B.D                             */
extern u1 u1g_bbsw2iosif_TBD3;       /* T.B.D                             */

extern stflag16 stg_bbsw2iosif_sts;
#define b1g_bbsw2iosif_eng       (stg_bbsw2iosif_sts.b0)  /* ENGINE PERMISSION ON,OFF[-]       */
#define b1g_bbsw2iosif_sht       (stg_bbsw2iosif_sts.b1)  /* SHIFT CHANGE PERMISSION ON,OFF[-] */
#define b1g_bbsw2iosif_ovrvsts   (stg_bbsw2iosif_sts.b2)  /* OVER REV JUDGE STATUS ON,OFF[-]   */
#define b1g_bbsw2iosif_clthszsts (stg_bbsw2iosif_sts.b3)  /* CLUTCH SEIZURE STATUS ON,OFF[-]   */
#define b1g_bbsw2iosif_brkszsts  (stg_bbsw2iosif_sts.b4)  /* BRAKE SEIZURE STATUS ON,OFF[-]    */
#define b1g_bbsw2iosif_enststs   (stg_bbsw2iosif_sts.b5)  /* ENGINE STALL STATUS ON,IFF[-]     */
#define b1g_bbsw2iosif_ovrhet    (stg_bbsw2iosif_sts.b6)  /* OVER HEAT STATUS ON,OFF[-]        */
#define b1g_bbsw2iosif_snserr    (stg_bbsw2iosif_sts.b7)  /* SENSOR ERROR STATUS ON,OFF[-]     */
#define b1g_bbsw2iosif_stopsts   (stg_bbsw2iosif_sts.b8)  /* ZUN STATUS:STOP ON,OFF[-]         */
#define b1g_bbsw2iosif_runsts    (stg_bbsw2iosif_sts.b9)  /* ZUN STATUS:RUN ON,OFF[-]          */
#define b1g_bbsw2iosif_spdupsts  (stg_bbsw2iosif_sts.b10) /* ZUN STATUS:SPEED UP ON,OFF[-]     */
#define b1g_bbsw2iosif_spddwsts  (stg_bbsw2iosif_sts.b11) /* ZUN STATUS:SPEED DOWN ON,OFF[-]   */
#define b1g_bbsw2iosif_enststs   (stg_bbsw2iosif_sts.b12) /* ZUN STATUS:ENST ON,OFF[-]         */
#define b1g_bbsw2iosif_TBD1      (stg_bbsw2iosif_sts.b13) /* T.B.D                             */
#define b1g_bbsw2iosif_TBD2      (stg_bbsw2iosif_sts.b14) /* T.B.D                             */
#define b1g_bbsw2iosif_TBD3      (stg_bbsw2iosif_sts.b15) /* T.B.D                             */

#define u1gSwiftifVel        u1g_bbsw2iosif_vel
#define u1gSwiftifRpm        u1g_bbsw2iosif_rpm
#define u1gSwiftifCfmGear    u1g_bbsw2iosif_gear
#define u1gSwiftifCfmAclpct  u1g_bbsw2iosif_aclthlpct
#define u1gSwiftifCfmBrkpct  u1g_bbsw2iosif_brkpdlpct
#define u1gSwiftifCfmClthpct u1g_bbsw2iosif_clthpdlpct
#define u1gSwiftifEngsts     u1g_bbsw2iosif_eng
#define u1gSwiftifShtsts     u1g_bbsw2iosif_sht
#define u1gSwiftifOvrvsts    u1g_bbsw2iosif_ovrvsts
#define u1gSwiftifClthszsts  u1g_bbsw2iosif_clthszsts
#define u1gSwiftifBrkszsts   u1g_bbsw2iosif_brkszsts
#define u1gSwiftifEnststs    u1g_bbsw2iosif_enststs
#define u1gSwiftifOvrhet     u1g_bbsw2iosif_ovrhet
#define u1gSwiftifSnserr     u1g_bbsw2iosif_snserr
#define u1gSwiftifStopsts    u1g_bbsw2iosif_stopsts
#define u1gSwiftifRunsts     u1g_bbsw2iosif_runsts
#define u1gSwiftifSpdupsts   u1g_bbsw2iosif_spdupsts
#define u1gSwiftifSpddwsts   u1g_bbsw2iosif_spddwsts
#define u1gSwiftifEnststs    u1g_bbsw2iosif_enststs
#define u1gSwiftifTBD1       u1g_bbsw2iosif_TBD1
#define u1gSwiftifTBD2       u1g_bbsw2iosif_TBD2
#define u1gSwiftifTBD3       u1g_bbsw2iosif_TBD3

#define u1gSwiftifEngsts     b1g_bbsw2iosif_eng
#define u1gSwiftifShtsts     b1g_bbsw2iosif_sht
#define u1gSwiftifOvrvsts    b1g_bbsw2iosif_ovrvsts
#define u1gSwiftifClthszsts  b1g_bbsw2iosif_clthszsts
#define u1gSwiftifBrkszsts   b1g_bbsw2iosif_brkszsts
#define u1gSwiftifEnststs    b1g_bbsw2iosif_enststs
#define u1gSwiftifOvrhet     b1g_bbsw2iosif_ovrhet
#define u1gSwiftifSnserr     b1g_bbsw2iosif_snserr
#define u1gSwiftifStopsts    b1g_bbsw2iosif_stopsts
#define u1gSwiftifRunsts     b1g_bbsw2iosif_runsts
#define u1gSwiftifSpdupsts   b1g_bbsw2iosif_spdupsts
#define u1gSwiftifSpddwsts   b1g_bbsw2iosif_spddwsts
#define u1gSwiftifEnststs    b1g_bbsw2iosif_enststs
#define u1gSwiftifTBD1       b1g_bbsw2iosif_TBD1
#define u1gSwiftifTBD2       b1g_bbsw2iosif_TBD2
#define u1gSwiftifTBD3       b1g_bbsw2iosif_TBD3

/*----------------------------------------------------------------------------*/
/* EXTERNAL FUNCTION PROTOTYPE                                                */
/*----------------------------------------------------------------------------*/

#undef BBSW2IOSIF_H
/*----------------------------------------------------------------------------*/
/* EOF                                                                        */
/*----------------------------------------------------------------------------*
