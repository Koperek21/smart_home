
TYPE 	
	hall : 	STRUCT 
		light_h_1 : BOOL;
		light_h_2 : BOOL;
		light_h_3 : BOOL;
		door_h_main : BOOL;
		door_H_be : REFERENCE TO BOOL;
		door_H_liv : REFERENCE TO BOOL;
		door_H_bat : REFERENCE TO BOOL;
		door_H_ki : REFERENCE TO BOOL;
		swich_h_1 : BOOL;
		swich_h_2 : BOOL;
		swich_h_3 : BOOL;
		swich_h_4 : BOOL;
		swich_h_5 : BOOL;
		AC : BOOL;
	END_STRUCT;

		bed : 	STRUCT 
		door_h_Be : REFERENCE TO BOOL;
		light_be_1 : BOOL;
		swich_be_1 : BOOL;
	END_STRUCT;

		liv :	STRUCT
		door_h_Liv : REFERENCE TO BOOL;
		light_liv_1 : BOOL;
		swich_liv_1 : BOOL;
		END_STRUCT;

		kit :	STRUCT
		door_h_Ki : REFERENCE TO BOOL;
		light_ki_1 : BOOL;
		light_ki_2 : BOOL;
		swich_ki_1 : BOOL;
		swich_ki_2 : BOOL;
		END_STRUCT;

		bat : STRUCT
		door_h_Bat : REFERENCE TO BOOL;
		light_bat_1 : BOOL;
		light_bat_2 : BOOL;
		swich_bat_1 : BOOL;
		flo_sen : BOOL;
		END_STRUCT;
END_TYPE
