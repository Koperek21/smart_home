#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Smart_home/smart_home/Temp/Objects/Config1/X20CP0410/Program/Cyclicst.h"
#line 1 "C:/Praktyki/Smart_home/smart_home/Logical/Program/Cyclic.nodebug"
#line 2 "C:/Praktyki/Smart_home/smart_home/Logical/Program/Cyclic.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

brsmemcpy(((unsigned long)(&hallway)),((unsigned long)(&arry_hall)),28);
brsmemcpy(((unsigned long)(&bedroom)),((unsigned long)(&arry_bed)),8);
brsmemcpy(((unsigned long)(&livingroom)),((unsigned long)(&arry_liv)),8);
brsmemcpy(((unsigned long)(&kithen)),((unsigned long)(&arry_kit)),8);
brsmemcpy(((unsigned long)(&bathroom)),((unsigned long)(&arry_bat)),8);


for((i=0);i<=28;i+=1){
(sum1=(sum1+(signed short)(arry_hall[i]&1)));
}imp1_endfor0_0:;
if((((signed long)(signed long)(short)sum1!=(signed long)(signed long)(short)last_sum1))){
(changes=1);
}
for((i=0);i<=8;i+=1){
(sum2=(sum2+(signed short)(arry_bed[i]&1)));
}imp1_endfor2_0:;
if((((signed long)(signed long)(short)sum2!=(signed long)(signed long)(short)last_sum2))){
(changes=1);
}
for((i=0);i<=8;i+=1){
(sum3=(sum3+(signed short)(arry_bed[i]&1)));
}imp1_endfor4_0:;
if((((signed long)(signed long)(short)sum3!=(signed long)(signed long)(short)last_sum3))){
(changes=1);
}
for((i=0);i<=8;i+=1){
(sum4=(sum4+(signed short)(arry_kit[i]&1)));
}imp1_endfor6_0:;
if((((signed long)(signed long)(short)sum4!=(signed long)(signed long)(short)last_sum4))){
(changes=1);
}
for((i=0);i<=8;i+=1){
(sum5=(sum5+(signed short)(arry_bat[i]&1)));
}imp1_endfor8_0:;
if((((signed long)(signed long)(short)sum5!=(signed long)(signed long)(short)last_sum5))){
(changes=1);
}
if(bedroom.swich_be_1){
(bedroom.light_be_1=1);
}else{
(bedroom.light_be_1=0);
}

if(livingroom.swich_liv_1){
(livingroom.light_liv_1=1);
}else{
(livingroom.light_liv_1=0);
}
if(bathroom.swich_bat_1){
(bathroom.light_bat_1=1);
(bathroom.light_bat_2=1);
}else{
(bathroom.light_bat_1=0);
(bathroom.light_bat_2=0);
}
(kithen.light_ki_1=(kithen.swich_ki_1^kithen.swich_ki_2));
(kithen.light_ki_2=(kithen.swich_ki_1^kithen.swich_ki_2));








(hallway.light_h_1=(hallway.swich_h_1^hallway.swich_h_2^hallway.swich_h_3^hallway.swich_h_4^hallway.swich_h_5));








(hallway.light_h_2=(hallway.swich_h_1^hallway.swich_h_2^hallway.swich_h_3^hallway.swich_h_4^hallway.swich_h_5));








(hallway.light_h_3=(hallway.swich_h_1^hallway.swich_h_2^hallway.swich_h_3^hallway.swich_h_4^hallway.swich_h_5));
if(state_un_activ){
(state_activ=0);
(hallway.light_h_1=0);
(hallway.light_h_2=0);
(hallway.light_h_3=0);
(bedroom.light_be_1=0);
(livingroom.light_liv_1=0);
(kithen.light_ki_1=0);
(kithen.light_ki_2=0);
(bathroom.light_bat_1=0);
(bathroom.light_bat_2=0);
}
if(((((unsigned long)(unsigned char)state_un_activ==(unsigned long)(unsigned char)1))&bathroom.flo_sen)){
(flo_alarm=1);
}
if(changes){
(state_activ=1);
}
(a_una_timer.IN=changes);;(a_una_timer.PT=(1800000));;TON(&a_una_timer);
if(a_una_timer.Q){
(state_un_activ=1);
}
(main_open.CLK=hallway.door_h_main);;r_trig(&main_open);
if(main_open.Q){
(hallway.light_h_1=1);
(hallway.light_h_2=1);
(hallway.light_h_3=1);
(hallway.AC=1);
}
(last_sum1=sum1);
(last_sum2=sum2);
(last_sum3=sum3);
(last_sum4=sum4);
(last_sum5=sum5);
}}
#line 122 "C:/Praktyki/Smart_home/smart_home/Logical/Program/Cyclic.nodebug"

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
