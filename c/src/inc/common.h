/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | common.h                                                        */
/* DOMAIN   | -                                                               */
/* MODULE   | -                                                               */
/* DETAILS  | common header                                                   */
/* VER      | 26.06.27 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/
#ifndef COMMON_H
#define COMMON_H

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
#include "../conf/conf.h" /* MACHINE_TYPE(with MACHINE LIST)                 */

/*----------------------------------------------------------------------------*/
/* TYPEDEF                                                                    */
/*----------------------------------------------------------------------------*/
#if ( MACHINE_TYPE == MACHINE_TYPE_IOS )
typedef unsigned char       u1;
typedef unsigned short      u2;
typedef unsigned int        u4;
typedef unsigned long long  u8;

typedef signed char      s1;
typedef signed short     s2;
typedef signed int       s4;
typedef signed long long s8;

#elif ( MACHINE_TYPE == MACHINE_TYPE_IOS )
/* TO BE DETERMINED */

#elif ( MACHINE_TYPE == MACHINE_TYPE_ANDROID )
/* TO BE DETERMINED */

#elif ( MACHINE_TYPE == MACHINE_TYPE_MACOS )
/* TO BE DETERMINED */
a
#elif ( MACHINE_TYPE == MACHINE_TYPE_RASP_PROTO )
/* TO BE DETERMINED */

#elif ( MACHINE_TYPE == MACHINE_TYPE_RASP_VER1-0 )
/* TO BE DETERMINED */

#elif ( MACHINE_TYPE == MACHINE_TYPE_RASP_VER2-0 )
/* TO BE DETERMINED */

#else
 #error "NOT DEFINED MACHINE_TYPE"
#endif

typedef struct
{
    u1 b0 : 1;
    u1 b1 : 1;
    u1 b2 : 1;
    u1 b3 : 1;
    u1 b4 : 1;
    u1 b5 : 1;
    u1 b6 : 1;
    u1 b7 : 1;
} stflag8;

typedef struct
{
    u2 b0  : 1;
    u2 b1  : 1;
    u2 b2  : 1;
    u2 b3  : 1;
    u2 b4  : 1;
    u2 b5  : 1;
    u2 b6  : 1;
    u2 b7  : 1;
    u2 b8  : 1;
    u2 b9  : 1;
    u2 b10 : 1;
    u2 b11 : 1;
    u2 b12 : 1;
    u2 b13 : 1;
    u2 b14 : 1;
    u2 b15 : 1;
} stflag16;

/*----------------------------------------------------------------------------*/
/* MACROS                                                                     */
/*----------------------------------------------------------------------------*/
#define ON  ((u1)1)
#define OFF ((u1)0)

#define HI  ((u1)1)
#define LO  ((u1)0)

#define TRUE  ((u1)1)
#define FALSE ((u1)0)

#undef COMMON_H
/*----------------------------------------------------------------------------*/
/* EOF                                                                        */
/*----------------------------------------------------------------------------*
