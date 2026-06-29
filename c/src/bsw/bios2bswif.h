/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | bios2bswif.h                                                    */
/* DOMAIN   | BSW                                                             */
/* MODULE   | bios2bsw                                                        */
/* DETAILS  | ios to bsw bridge                                               */
/* VER      | 26.06.29 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/
#ifndef BIOS2BSWIF_H
#define BIOS2BSWIF_H

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
/* #include "../../swiftbridge.h" */ /* swift bridge header */

/*----------------------------------------------------------------------------*/
/* EXTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/
extern u1 u1g_bios2bswif_acelthl; /* ACCLE THROTTLE  1-100[%]         */
extern u1 u1g_bios2bswif_brkpdl;  /* BRAKE PEDAL     1-100[%]         */
extern u1 u1g_bios2bswif_clthpdl; /* CLUTCH PEDAL    1-100[%]         */
extern u1 u1g_bios2bswif_gear;    /* GEAR POSITION   1,2,3,4,5,6,N[-] */
extern u1 u1g_bios2bswif_igsw;    /* IGNITION SWITCH ON,OFF[-]        */

#define u1gSwiftifAcelthl  u1g_bios2bswif_acelthl /* ACCLE THROTTLE   */
#define u1gSwiftifBrkpdl   u1g_bios2bswif_brkpdl  /* BRAKE PEDAL      */
#define u1gSwiftifClthpdl  u1g_bios2bswif_clthpdl /* CLUTCH PEDAL     */
#define u1gSwiftifGear     u1g_bios2bswif_gear    /* GEAR POSITION    */
#define u1gSwiftifIgsw     u1g_bios2bswif_igsw    /* IGNITION SWITCH  */

/*----------------------------------------------------------------------------*/
/* EXTERNAL FUNCTION PROTOTYPE                                                */
/*----------------------------------------------------------------------------*/

#undef BIOS2BSWIF_H
/*----------------------------------------------------------------------------*/
/* EOF                                                                        */
/*----------------------------------------------------------------------------*
