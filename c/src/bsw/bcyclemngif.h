/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | bcyclemngif.h                                                   */
/* DOMAIN   | BSW                                                             */
/* MODULE   | cyclemng                                                        */
/* DETAILS  | cycle manager                                                   */
/* VER      | 26.06.28 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/
#ifndef BCYCLEMNGIF_H
#define BCYCLEMNGIF_H

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
#include "../inc/common.h"

/*----------------------------------------------------------------------------*/
/* EXTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* EXTERNAL FUNCTION PROTOTYPE                                                */
/*----------------------------------------------------------------------------*/
void vdg_bcyclemngif_pwon( void );     /* pwon cycle manager        */
void vdg_bcyclemngif_4msin( void );    /* 4ms input cycle manager   */
void vdg_bcyclemngif_4msout( void );   /* 4ms output cycle manager  */
void vdg_bcyclemngif_16msin( void );   /* 16ms input cycle manager  */
void vdg_bcyclemngif_16msout( void );  /* 16ms output cycle manager */
void vdg_bcyclemngif_64msin( void );   /* 64ms input cycle manager  */
void vdg_bcyclemngif_64msout( void );  /* 64ms output cycle manager */

#undef BCYCLEMNGIF_H
/*----------------------------------------------------------------------------*/
/* EOF                                                                        */
/*----------------------------------------------------------------------------*
