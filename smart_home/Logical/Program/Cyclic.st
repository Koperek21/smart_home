
PROGRAM _CYCLIC

    brsmemcpy(ADR(hallway), ADR(arry_hall), SIZEOF(hallway));
    brsmemcpy(ADR(bedroom), ADR(arry_bed), SIZEOF(bedroom));
	brsmemcpy(ADR(livingroom), ADR(arry_liv), SIZEOF(livingroom));
	brsmemcpy(ADR(kithen), ADR(arry_kit), SIZEOF(kithen));
	brsmemcpy(ADR(bathroom), ADR(arry_bat), SIZEOF(bathroom));
		
 
	FOR i := 0 TO SIZEOF(hallway)/SIZEOF(hallway.AC) DO
			sum1 := sum1 + BOOL_TO_INT(arry_hall[i]);	
		END_FOR
	IF sum1 <> last_sum1 THEN
		changes := TRUE;
	END_IF;
	FOR i := 0 TO SIZEOF(bedroom)/SIZEOF(bedroom.light_be_1) DO
		sum2 := sum2 + BOOL_TO_INT(arry_bed[i]);
		END_FOR;
	IF sum2 <> last_sum2 THEN
		changes := TRUE;
		END_IF
	FOR i := 0 TO SIZEOF(livingroom)/SIZEOF(livingroom.light_liv_1) DO
		sum3 := sum3 + BOOL_TO_INT(arry_bed[i]);
		END_FOR
	IF sum3 <> last_sum3 THEN
		changes := TRUE;
		END_IF
	FOR i := 0 TO SIZEOF(kithen)/SIZEOF(kithen.light_ki_1) DO
		sum4 := sum4 + BOOL_TO_INT(arry_kit[i]);
		END_FOR;
	IF sum4 <> last_sum4 THEN
		changes := TRUE;
		END_IF
	FOR i := 0 TO SIZEOF(bathroom)/SIZEOF(bathroom.light_bat_1) DO
		sum5 := sum5 + BOOL_TO_INT(arry_bat[i]);
		END_FOR;
	IF sum5 <> last_sum5 THEN
		changes := TRUE;
		END_IF
IF bedroom.swich_be_1 THEN
bedroom.light_be_1 := TRUE;
ELSE
bedroom.light_be_1 := FALSE;
END_IF;

IF livingroom.swich_liv_1 THEN
livingroom.light_liv_1 := TRUE;
ELSE 
livingroom.light_liv_1 := FALSE;
END_IF;
IF bathroom.swich_bat_1 THEN
	bathroom.light_bat_1 := TRUE;
	bathroom.light_bat_2 := TRUE;
	ELSE
	bathroom.light_bat_1 := FALSE;
	bathroom.light_bat_2 := FALSE;
END_IF;
kithen.light_ki_1 := kithen.swich_ki_1 XOR kithen.swich_ki_2;
kithen.light_ki_2 := kithen.swich_ki_1 XOR kithen.swich_ki_2;
hallway.light_h_1 AND hallway.light_h_2 AND hallway.light_h_3 := hallway.swich_h_1 
XOR 
hallway.swich_h_2 
XOR
hallway.swich_h_3 
XOR 
hallway.swich_h_4 
XOR 
hallway.swich_h_5;
IF state_un_activ THEN
state_activ := FALSE;
hallway.light_h_1 := FALSE;
hallway.light_h_2 := FALSE;
hallway.light_h_3 := FALSE;
bedroom.light_be_1 := FALSE;
livingroom.light_liv_1 := FALSE;
kithen.light_ki_1 := FALSE;
kithen.light_ki_2 := FALSE;
bathroom.light_bat_1 := FALSE;
bathroom.light_bat_2 := FALSE;
END_IF;
IF state_un_activ = TRUE AND bathroom.flo_sen THEN
flo_alarm := TRUE;
END_IF
IF changes THEN
state_activ := TRUE;
END_IF;
	a_una_timer(IN := changes,PT :=T#30m);
IF a_una_timer.Q THEN
state_un_activ := TRUE;
END_IF
main_open(CLK := hallway.door_h_main)
IF main_open.Q THEN
hallway.light_h_1 := TRUE;
hallway.light_h_2 := TRUE;
hallway.light_h_3 := TRUE;
hallway.AC := TRUE;
END_IF
last_sum1 := sum1;
last_sum2 := sum2;
last_sum3 := sum3;
last_sum4 := sum4;
last_sum5 := sum5;
END_PROGRAM
