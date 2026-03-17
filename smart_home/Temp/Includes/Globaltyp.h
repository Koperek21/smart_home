/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1773754579_1_
#define _BUR_1773754579_1_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct hall
{	plcbit door_h_main;
	plcbit door_H_be;
	plcbit door_H_liv;
	plcbit door_H_bat;
	plcbit door_H_ki;
	plcbit swich_h_1;
	plcbit swich_h_2;
	plcbit swich_h_3;
	plcbit swich_h_4;
	plcbit swich_h_5;
	plcbit AC;
} hall;

typedef struct bed
{	plcbit door_h_Be;
	plcbit swich_be_1;
} bed;

typedef struct liv
{	plcbit door_h_Liv;
	plcbit swich_liv_1;
} liv;

typedef struct kit
{	plcbit door_h_Ki;
	plcbit swich_ki_1;
	plcbit swich_ki_2;
} kit;

typedef struct bat
{	plcbit door_h_Bat;
	plcbit swich_bat_1;
} bat;

typedef struct lamp
{	plcbit light_h_1;
	plcbit light_h_2;
	plcbit light_h_3;
	plcbit light_be_1;
	plcbit light_liv_1;
	plcbit light_ki_1;
	plcbit light_ki_2;
	plcbit light_bat_1;
	plcbit light_bat_2;
} lamp;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1773754579_1_ */

