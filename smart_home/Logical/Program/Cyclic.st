
PROGRAM _CYCLIC
	//tabels copy
	brsmemcpy(ADR(arry_hall), ADR(hallway), SIZEOF(hallway));
	brsmemcpy(ADR(arry_bed), ADR(bedroom), SIZEOF(bedroom));
	brsmemcpy(ADR(arry_liv), ADR(livingroom), SIZEOF(livingroom));
	brsmemcpy(ADR(arry_kit), ADR(kithen), SIZEOF(kithen));
	brsmemcpy(ADR(arry_bat), ADR(bathroom), SIZEOF(bathroom));
	//for loops
	FOR i := 0 TO SIZEOF(hallway)/SIZEOF(hallway.AC) DO
		sum1 := sum1 + BOOL_TO_INT(arry_hall[i]);	
	END_FOR
	IF sum1 <> last_sum1 THEN
		changes := TRUE;
	END_IF;
	FOR i:= 0 TO SIZEOF(bedroom)/SIZEOF(bedroom.door_h_Be) DO
		sum2 := sum2 + BOOL_TO_INT(arry_bed[i]);
	END_FOR;
	IF sum2 <> last_sum2 THEN
		changes := TRUE;
	END_IF
	FOR i:= 0 TO SIZEOF(livingroom)/SIZEOF(livingroom.door_h_Liv) DO
		sum3 := sum3 + BOOL_TO_INT(arry_liv[i]);
	END_FOR
	IF sum3 <> last_sum3 THEN
		changes := TRUE;
	END_IF
	FOR i:= 0 TO SIZEOF(kithen)/SIZEOF(kithen.swich_ki_1) DO
		sum4 := sum4 + BOOL_TO_INT(arry_kit[i]);
	END_FOR;
	IF sum4 <> last_sum4 THEN
		changes := TRUE;
	END_IF
	FOR i:= 0 TO SIZEOF(bathroom)/SIZEOF(bathroom.door_h_Bat) DO
		sum5 := sum5 + BOOL_TO_INT(arry_bat[i]);
	END_FOR;
	IF sum5 <> last_sum5 THEN
		changes := TRUE;
	END_IF
	//doors hallway-livingroom conection
	IF door_h_liv THEN
		hallway.door_H_liv := TRUE;
		livingroom.door_h_Liv := TRUE;
	ELSE
		hallway.door_H_liv := FALSE;
		livingroom.door_h_Liv := FALSE;
	END_IF;
	//doors hallway_bedroom conection
	IF door_h_be THEN
		hallway.door_H_be := TRUE;
		bedroom.door_h_Be := TRUE;
	ELSE
		hallway.door_H_be := FALSE;
		bedroom.door_h_Be := FALSE;
	END_IF;
	//doors hallway-kitchen conection
	IF door_h_ki THEN
		hallway.door_H_ki := TRUE;
		kithen.door_h_Ki := TRUE;
	ELSE
		hallway.door_H_ki := FALSE;
		kithen.door_h_Ki := FALSE;
	END_IF;
	//doors hallway-batroom conection
	IF door_h_bat THEN
		hallway.door_H_bat := TRUE;
		bathroom.door_h_Bat := TRUE;
	ELSE
		hallway.door_H_bat := FALSE;
		bathroom.door_h_Bat := FALSE;
	END_IF;
	
	IF  sum1=last_sum1 AND sum2=last_sum2 AND sum3=last_sum3 AND sum4=last_sum4 AND sum5=last_sum5 THEN
		changes := FALSE;
	END_IF;
	//bedroom light form swich
	IF bedroom.swich_be_1 THEN
		lamps.light_be_1 := TRUE;
	ELSE
		lamps.light_be_1 := FALSE;
	END_IF;
	//livingroom lighst from swich
	IF livingroom.swich_liv_1 THEN
		lamps.light_liv_1 := TRUE;
	ELSE
		lamps.light_liv_1 := FALSE;
	END_IF;
	//bathroom lighst from swich
	IF bathroom.swich_bat_1 THEN
		lamps.light_bat_1 := TRUE;
		lamps.light_bat_2 := TRUE;
	ELSE
		lamps.light_bat_1 := FALSE;
		lamps.light_bat_2 := FALSE;
	END_IF;
	//kithen light from swich
	lamps.light_ki_1 := kithen.swich_ki_1 XOR kithen.swich_ki_2;
	lamps.light_ki_2 := kithen.swich_ki_1 XOR kithen.swich_ki_2;
	//hallway light from swich
	IF hallway_lams THEN
		lamps.light_h_1 := TRUE;
		lamps.light_h_2 := TRUE;
		lamps.light_h_3 := TRUE;
	END_IF;
	IF hallway_lams = FALSE THEN
		lamps.light_h_1 := FALSE;
		lamps.light_h_2 := FALSE;
		lamps.light_h_3 := FALSE;
	END_IF;
	hallway_swiches_naw := hallway.swich_h_1 XOR hallway.swich_h_2 XOR hallway.swich_h_3 XOR hallway.swich_h_4 XOR hallway.swich_h_5;
	IF hallway_swiches_naw <> hallway_swiches_then THEN
		hallway_lams := NOT hallway_lams;
		hallway_swiches_then := hallway_swiches_naw;
	END_IF;
	//what if state un active is true
	IF state_un_activ THEN
		state_activ := FALSE;
		hallway_lams := FALSE;
		lamps.light_be_1 := FALSE;
		lamps.light_liv_1 := FALSE;
		lamps.light_ki_1 := FALSE;
		lamps.light_ki_2 := FALSE;
		lamps.light_bat_1 := FALSE;
		lamps.light_bat_2 := FALSE;
		hallway.AC := FALSE;
	END_IF;
	IF state_un_activ = TRUE AND flo_sen_bat = TRUE THEN
		flo_alarm := TRUE;
	ELSE
		flo_alarm := FALSE;
	END_IF
	//when state active
	IF changes THEN
		state_activ := TRUE;
	END_IF;
	//timer from change to state un active
	IF state_activ THEN
		state_un_activ := FALSE;
	END_IF;
	IF a_una_timer.Q THEN
		state_un_activ := TRUE; 	
	END_IF;
	IF flag_tim2 THEN
		flag_tim1 := TRUE;
	END_IF
	tim_start(CLK := changes);
	IF tim_start.Q AND flag_tim1 = FALSE THEN
		flag_tim1 := TRUE;		
	END_IF
	IF tim_start.Q AND flag_tim1 THEN
		flag_tim2 := TRUE;
		flag_tim1 := FALSE;
	END_IF
	a_una_timer(IN := flag_tim1, PT :=T#30s);
	IF a_una_timer.Q THEN
		flag_tim1 := FALSE;
		flag_tim2 := FALSE;
	END_IF;
	

	//when main door open
	main_open(CLK := hallway.door_h_main);
	
	IF main_open.Q THEN
		hallway_lams := TRUE;
		hallway.AC := TRUE;
	END_IF
	//sums for "for loop"
	last_sum1 := sum1;
	last_sum2 := sum2;
	last_sum3 := sum3;
	last_sum4 := sum4;
	last_sum5 := sum5;
	sum1 := 0;
	sum2 := 0;
	sum3 := 0;
	sum4 := 0;
	sum5 := 0;
END_PROGRAM
