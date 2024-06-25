CommonDormRoom_MapScripts::
# 2 "data/maps/CommonDormRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CommonDormRoom_OnLoad
	.byte 0


CommonDormRoom_OnLoad::
# 6 "data/maps/CommonDormRoom/scripts.pory"
	switch VAR_DYNAMIC_DORMWARP
# 8 "data/maps/CommonDormRoom/scripts.pory"
	case 1, CommonDormRoom_OnLoad_2
# 10 "data/maps/CommonDormRoom/scripts.pory"
	case 2, CommonDormRoom_OnLoad_3
# 12 "data/maps/CommonDormRoom/scripts.pory"
	case 3, CommonDormRoom_OnLoad_4
# 14 "data/maps/CommonDormRoom/scripts.pory"
	case 4, CommonDormRoom_OnLoad_5
# 16 "data/maps/CommonDormRoom/scripts.pory"
	case 5, CommonDormRoom_OnLoad_6
# 18 "data/maps/CommonDormRoom/scripts.pory"
	case 6, CommonDormRoom_OnLoad_7
# 20 "data/maps/CommonDormRoom/scripts.pory"
	case 7, CommonDormRoom_OnLoad_8
# 22 "data/maps/CommonDormRoom/scripts.pory"
	case 8, CommonDormRoom_OnLoad_9
# 24 "data/maps/CommonDormRoom/scripts.pory"
	case 9, CommonDormRoom_OnLoad_10
# 26 "data/maps/CommonDormRoom/scripts.pory"
	case 10, CommonDormRoom_OnLoad_11
# 28 "data/maps/CommonDormRoom/scripts.pory"
	case 11, CommonDormRoom_OnLoad_12
# 30 "data/maps/CommonDormRoom/scripts.pory"
	case 12, CommonDormRoom_OnLoad_13
# 32 "data/maps/CommonDormRoom/scripts.pory"
	case 13, CommonDormRoom_OnLoad_14
# 34 "data/maps/CommonDormRoom/scripts.pory"
	case 14, CommonDormRoom_OnLoad_15
# 37 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 6, 1
	return

CommonDormRoom_OnLoad_2:
# 9 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 6, 1
	return

CommonDormRoom_OnLoad_3:
# 11 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 11, 1
	return

CommonDormRoom_OnLoad_4:
# 13 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 26, 1
	return

CommonDormRoom_OnLoad_5:
# 15 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL2, 4, 2
	return

CommonDormRoom_OnLoad_6:
# 17 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL2, 10, 2
	return

CommonDormRoom_OnLoad_7:
# 19 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL2, 16, 2
	return

CommonDormRoom_OnLoad_8:
# 21 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL2, 22, 2
	return

CommonDormRoom_OnLoad_9:
# 23 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL2, 28, 2
	return

CommonDormRoom_OnLoad_10:
# 25 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL3, 5, 2
	return

CommonDormRoom_OnLoad_11:
# 27 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL3, 10, 2
	return

CommonDormRoom_OnLoad_12:
# 29 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL3, 15, 2
	return

CommonDormRoom_OnLoad_13:
# 31 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL3, 20, 2
	return

CommonDormRoom_OnLoad_14:
# 33 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL3, 25, 2
	return

CommonDormRoom_OnLoad_15:
# 35 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL3, 30, 2
	return


CommonDormRoom_SignScript_Computer::
# 44 "data/maps/CommonDormRoom/scripts.pory"
	lockall
# 45 "data/maps/CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Computer_Text_0
# 46 "data/maps/CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Drawer::
# 50 "data/maps/CommonDormRoom/scripts.pory"
	lockall
# 51 "data/maps/CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Drawer_Text_0
# 52 "data/maps/CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Computer_Text_0:
# 45 "data/maps/CommonDormRoom/scripts.pory"
	.string "It's a computer, and seeing it is not\n"
	.string "yours, you should probably leave it\l"
	.string "alone.\l"
	.string "Not that you can do anything anyways\l"
	.string "since it is password protected$"

CommonDormRoom_SignScript_Drawer_Text_0:
# 51 "data/maps/CommonDormRoom/scripts.pory"
	.string "It's a set of drawers, it is filled with\n"
	.string "different kind of clothes$"
