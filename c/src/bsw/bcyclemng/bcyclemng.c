/* (C) 2026 OCML
/*============================================================================*/
/* FILE     | bcyclemng.c                                                     */
/* DOMAIN   | BSW                                                             */
/* MODULE   | bcyclemng                                                       */
/* DETAILS  | cycle manager define                                            */
/* VER      | 26.06.28 make new                                               */
/*          |                                                                 */
/*          |                                                                 */
/*============================================================================*/

/*----------------------------------------------------------------------------*/
/* INCLUDE                                                                    */
/*----------------------------------------------------------------------------*/
#include "../../sac/sacaramngif.h"  /* vdg_sacaramngif_pwon()    */
                                    /* vdg_sacaramngif_4msin()   */
                                    /* vdg_sacaramngif_4msout()  */
                                    /* vdg_sacaramngif_16msin()  */
                                    /* vdg_sacaramngif_16msout() */
                                    /* vdg_sacaramngif_64msin()  */
                                    /* vdg_sacaramngif_64msout() */

#include "../../apl/aplaramngif.h"  /* vdg_aplaramngif_pwon()    */
                                    /* vdg_aplaramngif_4msin()   */
                                    /* vdg_aplaramngif_4msout()  */
                                    /* vdg_aplaramngif_16msin()  */
                                    /* vdg_aplaramngif_16msout() */
                                    /* vdg_aplaramngif_64msin()  */
                                    /* vdg_aplaramngif_64msout() */

#include "../../sim/simaramngif.h"  /* vdg_aplaramngif_pwon()    */
                                    /* vdg_aplaramngif_4msin()   */
                                    /* vdg_aplaramngif_4msout()  */
                                    /* vdg_aplaramngif_16msin()  */
                                    /* vdg_aplaramngif_16msout() */
                                    /* vdg_aplaramngif_64msin()  */
                                    /* vdg_aplaramngif_64msout() */

#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
#include "../../../debug/log/print_log.h"
#endif

#include "../bcyclemngif.h"         /* self header */

/*----------------------------------------------------------------------------*/
/* EXTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* INTERNAL PUBLIC VARIABLES, CONSTANTS, MACROS                               */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* EXTERNAL FUNCTION                                                          */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_pwon( void )                               */
/* ABST     | pwon cycle manager                                              */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_pwon( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_pwon()" );
#endif
    /* ▼▼▼ INSERT BSW PWON FUNCTION ▼▼▼ */

    /* ▲▲▲ INSERT BSW PWON FUNCTION ▲▲▲ */

    vdg_sacaramngif_pwon(); /* sac layer manager pwon function */
    vdg_aplaramngif_pwon(); /* apl layer manager pwon function */
    vdg_simaramngif_pwon(); /* sim layer manager pwon function */
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_4msin( void )                              */
/* ABST     | 4msin cycle manager                                             */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_4msin( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_4msin()" );
#endif
    vdg_sacaramngif_4msin(); /* sac layer manager 4msin function */
    vdg_aplaramngif_4msin(); /* apl layer manager 4msin function */
    vdg_simaramngif_4msin(); /* sim layer manager 4msin function */
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_4msout( void )                             */
/* ABST     | 4msout cycle manager                                            */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_4msout( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_4msout()" );
#endif
    vdg_sacaramngif_4msout(); /* sac layer manager 4msout function */
    vdg_aplaramngif_4msout(); /* apl layer manager 4msout function */
    vdg_simaramngif_4msout(); /* sim layer manager 4msout function */
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_16msin( void )                             */
/* ABST     | 16msin cycle manager                                            */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_16msin( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_16msin()" );
#endif
    vdg_sacaramngif_16msin(); /* sac layer manager 16msin function */
    vdg_aplaramngif_16msin(); /* apl layer manager 16msin function */
    vdg_simaramngif_16msin(); /* sim layer manager 16msin function */
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_16msout( void )                            */
/* ABST     | 16msout cycle manager                                           */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_16msout( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_16msout()" );
#endif
    vdg_sacaramngif_16msout(); /* sac layer manager 16msout function */
    vdg_aplaramngif_16msout(); /* apl layer manager 16msout function */
    vdg_simaramngif_16msout(); /* sim layer manager 16msout function */
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_64msin( void )                             */
/* ABST     | 64msin cycle manager                                            */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_64msin( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_64msin()" );
#endif
    vdg_sacaramngif_64msin(); /* sac layer manager 64msin function */
    vdg_aplaramngif_64msin(); /* apl layer manager 64msin function */
    vdg_simaramngif_64msin(); /* sim layer manager 64msin function */
}

/*----------------------------------------------------------------------------*/
/* FUNC     | void vdg_bcyclemngif_64msout( void )                            */
/* ABST     | 64msout cycle manager                                           */
/* ARGS     | none                                                            */
/* RTN VAL  | none                                                            */
/*----------------------------------------------------------------------------*/
void
vdg_bcyclemngif_64msout( void )
{
#if ( PRINT_LOG_SETTING_CONF == PRINT_LOG_SETTING_VALI )
    vdg_log_print( "execute vdg_bcyclemngif_64msout()" );
#endif
    vdg_sacaramngif_64msout(); /* sac layer manager 64msout function */
    vdg_aplaramngif_64msout(); /* apl layer manager 64msout function */
    vdg_simaramngif_64msout(); /* sim layer manager 64msout function */
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
