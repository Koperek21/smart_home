#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_hall
#define __AS__TYPE_hall
typedef struct hall
{	plcbit light_h_1;
	plcbit light_h_2;
	plcbit light_h_3;
	plcbit door_h_main;
	plcbit(* door_H_be);
	plcbit(* door_H_liv);
	plcbit(* door_H_bat);
	plcbit(* door_H_ki);
	plcbit swich_h_1;
	plcbit swich_h_2;
	plcbit swich_h_3;
	plcbit swich_h_4;
	plcbit swich_h_5;
	plcbit AC;
} hall;
#endif

#ifndef __AS__TYPE_bed
#define __AS__TYPE_bed
typedef struct bed
{	plcbit(* door_h_Be);
	plcbit light_be_1;
	plcbit swich_be_1;
} bed;
#endif

#ifndef __AS__TYPE_liv
#define __AS__TYPE_liv
typedef struct liv
{	plcbit(* door_h_Liv);
	plcbit light_liv_1;
	plcbit swich_liv_1;
} liv;
#endif

#ifndef __AS__TYPE_kit
#define __AS__TYPE_kit
typedef struct kit
{	plcbit(* door_h_Ki);
	plcbit light_ki_1;
	plcbit light_ki_2;
	plcbit swich_ki_1;
	plcbit swich_ki_2;
} kit;
#endif

#ifndef __AS__TYPE_bat
#define __AS__TYPE_bat
typedef struct bat
{	plcbit(* door_h_Bat);
	plcbit light_bat_1;
	plcbit light_bat_2;
	plcbit swich_bat_1;
	plcbit flo_sen;
} bat;
#endif

_GLOBAL plcbit door_h_be;
_GLOBAL plcbit door_h_liv;
_GLOBAL plcbit door_h_bat;
_GLOBAL plcbit door_h_ki;
_GLOBAL hall hallway;
_GLOBAL bed bedroom;
_GLOBAL liv livingroom;
_GLOBAL kit kithen;
_GLOBAL bat bathroom;
