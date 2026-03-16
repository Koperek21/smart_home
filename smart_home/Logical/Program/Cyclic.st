
PROGRAM _CYCLIC

 IF brsmemcpy(ADR(hallway), ADR(previous_halway), SIZEOF(hallway)) >0 OR 
    brsmemcpy(ADR(bedroom), ADR(previous_bedroom), SIZEOF(bedroom)) >0 OR
	brsmemcpy(ADR(livingroom), ADR(previous_livingroom), SIZEOF(livingroom)) >0 OR
	brsmemcpy(ADR(kithen), ADR(previous_kithem), SIZEOF(kithen)) >0 OR
	brsmemcpy(ADR(bathroom), ADR(previous_bathroom), SIZEOF(bathroom)) >0 THEN
		changes := TRUE
 END_IF;

	FOR i := 0 TO SIZEOF(hallway)/siezeof(hallway.AC) DO
		IF  arrHall[i] <> arrLastHall[i] THEN	
			change := TRUE;
		END_IF;
	END_FOR
	IarrHallway
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

kithen.light_ki_1 
AND 
kithen.light_ki_2 := kithen.swich_ki_1
XOR
kithen.swich_ki_2;

hallway.light_h_1 
AND
hallway.light_h_2
AND
hallway.light_h_3 := hallway.swich_h_1 
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
IF changes THEN
state_activ := TRUE
END_IF;


END_PROGRAM
