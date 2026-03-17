#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Smart_home/smart_home/Temp/Objects/Config1/X20CP0410/Program/Cyclicst.h"
#line 1 "C:/Praktyki/Smart_home/smart_home/Logical/Program/Cyclic.nodebug"
#line 2 "C:/Praktyki/Smart_home/smart_home/Logical/Program/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

brsmemcpy(((unsigned long)(&arry_hall)),((unsigned long)(&hallway)),11);
brsmemcpy(((unsigned long)(&arry_bed)),((unsigned long)(&bedroom)),2);
brsmemcpy(((unsigned long)(&arry_liv)),((unsigned long)(&livingroom)),2);
brsmemcpy(((unsigned long)(&arry_kit)),((unsigned long)(&kithen)),3);
brsmemcpy(((unsigned long)(&arry_bat)),((unsigned long)(&bathroom)),2);

for((i=0);i<=11;i+=1){
(sum1=(sum1+(signed short)(arry_hall[i]&1)));
}imp1_endfor0_0:;
if((((signed long)(signed long)(short)sum1!=(signed long)(signed long)(short)last_sum1))){
(changes=1);
}
for((i=0);i<=2;i+=1){
(sum2=(sum2+(signed short)(arry_bed[i]&1)));
}imp1_endfor2_0:;
if((((signed long)(signed long)(short)sum2!=(signed long)(signed long)(short)last_sum2))){
(changes=1);
}
for((i=0);i<=2;i+=1){
(sum3=(sum3+(signed short)(arry_liv[i]&1)));
}imp1_endfor4_0:;
if((((signed long)(signed long)(short)sum3!=(signed long)(signed long)(short)last_sum3))){
(changes=1);
}
for((i=0);i<=3;i+=1){
(sum4=(sum4+(signed short)(arry_kit[i]&1)));
}imp1_endfor6_0:;
if((((signed long)(signed long)(short)sum4!=(signed long)(signed long)(short)last_sum4))){
(changes=1);
}
for((i=0);i<=2;i+=1){
(sum5=(sum5+(signed short)(arry_bat[i]&1)));
}imp1_endfor8_0:;
if((((signed long)(signed long)(short)sum5!=(signed long)(signed long)(short)last_sum5))){
(changes=1);
}

if(door_h_liv){
(hallway.door_H_liv=1);
(livingroom.door_h_Liv=1);
}else{
(hallway.door_H_liv=0);
(livingroom.door_h_Liv=0);
}

if(door_h_be){
(hallway.door_H_be=1);
(bedroom.door_h_Be=1);
}else{
(hallway.door_H_be=0);
(bedroom.door_h_Be=0);
}

if(door_h_ki){
(hallway.door_H_ki=1);
(kithen.door_h_Ki=1);
}else{
(hallway.door_H_ki=0);
(kithen.door_h_Ki=0);
}

if(door_h_bat){
(hallway.door_H_bat=1);
(bathroom.door_h_Bat=1);
}else{
(hallway.door_H_bat=0);
(bathroom.door_h_Bat=0);
}

if(((((signed long)(signed long)(short)sum1==(signed long)(signed long)(short)last_sum1))&(((signed long)(signed long)(short)sum2==(signed long)(signed long)(short)last_sum2))&(((signed long)(signed long)(short)sum3==(signed long)(signed long)(short)last_sum3))&(((signed long)(signed long)(short)sum4==(signed long)(signed long)(short)last_sum4))&(((signed long)(signed long)(short)sum5==(signed long)(signed long)(short)last_sum5)))){
(changes=0);
}

if(bedroom.swich_be_1){
(lamps.light_be_1=1);
}else{
(lamps.light_be_1=0);
}

if(livingroom.swich_liv_1){
(lamps.light_liv_1=1);
}else{
(lamps.light_liv_1=0);
}

if(bathroom.swich_bat_1){
(lamps.light_bat_1=1);
(lamps.light_bat_2=1);
}else{
(lamps.light_bat_1=0);
(lamps.light_bat_2=0);
}

(lamps.light_ki_1=(kithen.swich_ki_1^kithen.swich_ki_2));
(lamps.light_ki_2=(kithen.swich_ki_1^kithen.swich_ki_2));

if(hallway_lams){
(lamps.light_h_1=1);
(lamps.light_h_2=1);
(lamps.light_h_3=1);
}
if((((unsigned long)(unsigned char)hallway_lams==(unsigned long)(unsigned char)0))){
(lamps.light_h_1=0);
(lamps.light_h_2=0);
(lamps.light_h_3=0);
}
(hallway_swiches_naw=(hallway.swich_h_1^hallway.swich_h_2^hallway.swich_h_3^hallway.swich_h_4^hallway.swich_h_5));
if((((unsigned long)(unsigned char)hallway_swiches_naw!=(unsigned long)(unsigned char)hallway_swiches_then))){
(hallway_lams=(hallway_lams^1));
(hallway_swiches_then=hallway_swiches_naw);
}

if(state_un_activ){
(state_activ=0);
(hallway_lams=0);
(lamps.light_be_1=0);
(lamps.light_liv_1=0);
(lamps.light_ki_1=0);
(lamps.light_ki_2=0);
(lamps.light_bat_1=0);
(lamps.light_bat_2=0);
(hallway.AC=0);
}
if(((((unsigned long)(unsigned char)state_un_activ==(unsigned long)(unsigned char)1))&(((unsigned long)(unsigned char)flo_sen_bat==(unsigned long)(unsigned char)1)))){
(flo_alarm=1);
}else{
(flo_alarm=0);
}

if(changes){
(state_activ=1);
}

if(state_activ){
(state_un_activ=0);
}
if(a_una_timer.Q){
(state_un_activ=1);
}
if(flag_tim2){
(flag_tim1=1);
}
(tim_start.CLK=changes);;r_trig(&tim_start);
if((tim_start.Q&(((unsigned long)(unsigned char)flag_tim1==(unsigned long)(unsigned char)0)))){
(flag_tim1=1);
}
if((tim_start.Q&flag_tim1)){
(flag_tim2=1);
(flag_tim1=0);
}
(a_una_timer.IN=flag_tim1);;(a_una_timer.PT=(30000));;TON(&a_una_timer);
if(a_una_timer.Q){
(flag_tim1=0);
(flag_tim2=0);
}



(main_open.CLK=hallway.door_h_main);;r_trig(&main_open);

if(main_open.Q){
(hallway_lams=1);
(hallway.AC=1);
}

(last_sum1=sum1);
(last_sum2=sum2);
(last_sum3=sum3);
(last_sum4=sum4);
(last_sum5=sum5);
(sum1=0);
(sum2=0);
(sum3=0);
(sum4=0);
(sum5=0);
}}
#line 179 "C:/Praktyki/Smart_home/smart_home/Logical/Program/Cyclic.nodebug"

void __AS__ImplInitCyclic_st(void){}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/ArCan/ArCan.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrWStr/AsBrWStr.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/ArCan/ArCan.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrWStr/AsBrWStr.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/ArCan/ArCan.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/brsystem/brsystem.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrStr/AsBrStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsBrWStr/AsBrWStr.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Smart_home/smart_home/Temp/Objects/Config1/X20CP0410/Program/Cyclic.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_const 'hallway'\\n\"");
__asm__(".ascii \"plcdata_const 'bedroom'\\n\"");
__asm__(".ascii \"plcdata_const 'livingroom'\\n\"");
__asm__(".ascii \"plcdata_const 'kithen'\\n\"");
__asm__(".ascii \"plcdata_const 'bathroom'\\n\"");
__asm__(".previous");
