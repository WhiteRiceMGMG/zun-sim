/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | conf.h                                                          */
/* DOMAIN   | -                                                               */
/* MODULE   | -                                                               */
/* DETAILS  | common config header                                            */
/* VER      | 26.06.27 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/
#ifndef CONFIG_H
#define CONFIG_H

/*----------------------------------------------------------------------------*/
/* CONFIG                                                                     */
/*----------------------------------------------------------------------------*/
/**************************************/
/* MACHINE TYPE SETTING!              */
/**************************************/
/* -------- ADD MACHINE LIST -------- */
#define MACHINE_TYPE_IOS         (0)
#define MACHINE_TYPE_ANDROID     (1)
#define MACHINE_TYPE_MACOS       (2)
#define MACHINE_TYPE_RASP_PROTO  (3)
#define MACHINE_TYPE_RASP_VER1-0 (4)
#define MACHINE_TYPE_RASP_VER2-0 (5)
/* -------- ADD MACHINE LIST -------- */

/*▼▼▼ SET MACHINE TYPE ▼▼▼ */
#define MACHINE_TYPE  (MACHINE_TYPE_IOS)
/*▲▲▲ SET MACHINE TYPE ▲▲▲ */

/**************************************/
/* PRINT LOG VALID SETTING!           */
/**************************************/
/* -------- ADD PRINT LOG LIST -------- */
#define PRINT_LOG_SETTING_UNVALID    (0)
#define PRINT_LOG_SETTING_VALID      (1)
/* -------- ADDPRINT  LOG LIST -------- */

/*▼▼▼ SET PRINT LOG VALID ▼▼▼ */
#define PRINT_LOG_SETTING_CONF  (PRINT_LOG_SETTING_VALID)
/*▲▲▲ SET PRINT LOG VALID ▲▲▲ */

#undef CONFIG_H
/*----------------------------------------------------------------------------*/
/* EOF                                                                        */
/*----------------------------------------------------------------------------*
