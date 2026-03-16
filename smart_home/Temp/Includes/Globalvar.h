/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1773670697_1_
#define _BUR_1773670697_1_

#include <bur/plctypes.h>




/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL struct TON a_una_timer;
_GLOBAL plcbit flo_alarm;
_GLOBAL struct r_trig main_open;
_GLOBAL signed short last_sum5;
_GLOBAL signed short sum5;
_GLOBAL signed short last_sum4;
_GLOBAL signed short sum4;
_GLOBAL signed short last_sum3;
_GLOBAL signed short sum3;
_GLOBAL signed short last_sum2;
_GLOBAL signed short sum2;
_GLOBAL signed short last_sum1;
_GLOBAL signed short sum1;
_GLOBAL plcbit arry_kit[4];
_GLOBAL plcbit arry_bat[5];
_GLOBAL plcbit arry_liv[3];
_GLOBAL plcbit arry_bed[3];
_GLOBAL plcbit arry_hall[14];
_GLOBAL plcbit state_un_activ;
_GLOBAL plcbit state_activ;
_GLOBAL plcbit changes;
_GLOBAL unsigned long status;
_GLOBAL struct bat bathroom;
_GLOBAL struct kit kithen;
_GLOBAL struct liv livingroom;
_GLOBAL struct bed bedroom;
_GLOBAL struct hall hallway;
_GLOBAL plcbit door_h_ki;
_GLOBAL plcbit door_h_bat;
_GLOBAL plcbit door_h_liv;
_GLOBAL plcbit door_h_be;


__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1773670697_1_ */

