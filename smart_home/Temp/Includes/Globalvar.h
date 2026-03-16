/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1773661545_2_
#define _BUR_1773661545_2_

#include <bur/plctypes.h>




/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL plcbit state_un_activ;
_GLOBAL plcbit state_activ;
_GLOBAL plcbit changes;
_GLOBAL unsigned long status;
_GLOBAL struct bat previous_bathroom;
_GLOBAL struct bat bathroom;
_GLOBAL struct kit previous_kithem;
_GLOBAL struct kit kithen;
_GLOBAL struct liv previous_livingroom;
_GLOBAL struct liv livingroom;
_GLOBAL struct bed previous_bedroom;
_GLOBAL struct bed bedroom;
_GLOBAL struct hall previous_halway;
_GLOBAL struct hall hallway;
_GLOBAL plcbit door_h_ki;
_GLOBAL plcbit door_h_bat;
_GLOBAL plcbit door_h_liv;
_GLOBAL plcbit door_h_be;


__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1773661545_2_ */

