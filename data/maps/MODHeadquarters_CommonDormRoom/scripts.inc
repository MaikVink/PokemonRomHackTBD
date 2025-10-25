MODHeadquarters_CommonDormRoom_MapScripts::
# 2 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CommonDormRoom_OnLoad
	.byte 0


CommonDormRoom_OnLoad::
# 6 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	switch VAR_DYNAMIC_DORMWARP
# 8 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 1, CommonDormRoom_OnLoad_2
# 10 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 2, CommonDormRoom_OnLoad_3
# 12 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 3, CommonDormRoom_OnLoad_4
# 14 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 4, CommonDormRoom_OnLoad_5
# 16 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 5, CommonDormRoom_OnLoad_6
# 18 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 6, CommonDormRoom_OnLoad_7
# 20 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 7, CommonDormRoom_OnLoad_8
# 22 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 8, CommonDormRoom_OnLoad_9
# 24 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 9, CommonDormRoom_OnLoad_10
# 26 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 10, CommonDormRoom_OnLoad_11
# 28 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 11, CommonDormRoom_OnLoad_12
# 30 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 12, CommonDormRoom_OnLoad_13
# 32 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 13, CommonDormRoom_OnLoad_14
# 34 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	case 14, CommonDormRoom_OnLoad_15
# 37 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL1, 6, 1
	return

CommonDormRoom_OnLoad_2:
# 9 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL1, 6, 1
	return

CommonDormRoom_OnLoad_3:
# 11 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL1, 11, 1
	return

CommonDormRoom_OnLoad_4:
# 13 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL1, 26, 1
	return

CommonDormRoom_OnLoad_5:
# 15 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL2, 4, 1
	return

CommonDormRoom_OnLoad_6:
# 17 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL2, 9, 1
	return

CommonDormRoom_OnLoad_7:
# 19 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL2, 14, 1
	return

CommonDormRoom_OnLoad_8:
# 21 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL2, 19, 1
	return

CommonDormRoom_OnLoad_9:
# 23 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL2, 24, 1
	return

CommonDormRoom_OnLoad_10:
# 25 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL3, 5, 1
	return

CommonDormRoom_OnLoad_11:
# 27 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL3, 10, 1
	return

CommonDormRoom_OnLoad_12:
# 29 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL3, 15, 1
	return

CommonDormRoom_OnLoad_13:
# 31 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL3, 20, 1
	return

CommonDormRoom_OnLoad_14:
# 33 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL3, 25, 1
	return

CommonDormRoom_OnLoad_15:
# 35 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_MODHEADQUARTERS_DORM_HALL3, 30, 1
	return


CommonDormRoom_SignScript_Computer::
# 44 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	lockall
# 45 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Computer_Text_0
# 46 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Drawer::
# 50 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	lockall
# 51 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Drawer_Text_0
# 52 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Table::
# 56 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	lockall
# 57 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Table_Text_0
# 58 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Bed::
# 62 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	lockall
# 63 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Bed_Text_0, MSGBOX_YESNO
# 64 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CommonDormRoom_SignScript_Bed_2
# 70 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Bed_Text_2
CommonDormRoom_SignScript_Bed_1:
# 72 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	releaseall
	return

CommonDormRoom_SignScript_Bed_2:
# 66 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Bed_Text_1
	goto CommonDormRoom_SignScript_Bed_1


CommonDormRoom_SignScript_Computer_Text_0:
# 45 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	.string "It's a computer, and seeing it is not\n"
	.string "yours, you should probably leave it\l"
	.string "alone.\l"
	.string "Not that you can do anything anyways\l"
	.string "since it is password protected.$"

CommonDormRoom_SignScript_Drawer_Text_0:
# 51 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	.string "It's a set of drawers, it is filled with\n"
	.string "different kind of clothes.$"

CommonDormRoom_SignScript_Table_Text_0:
# 57 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	.string "It's a table.$"

CommonDormRoom_SignScript_Bed_Text_0:
# 63 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	.string "Its one of your fellow initiative beds!\p"
	.string "Do you want to sleep in it?$"

CommonDormRoom_SignScript_Bed_Text_1:
# 66 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	.string "Maybe it's better if you find your own\n"
	.string "bed, before they come back...$"

CommonDormRoom_SignScript_Bed_Text_2:
# 70 "data/maps/MODHeadquarters_CommonDormRoom/scripts.pory"
	.string "Yeah, why would you sleep in another\n"
	.string "person's bed without permission?$"
