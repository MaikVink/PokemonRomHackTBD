CommonDormRoom_MapScripts::
# 2 "data/maps/CommonDormRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CommonDormRoom_OnLoad
	.byte 0


CommonDormRoom_OnLoad::
# 6 "data/maps/CommonDormRoom/scripts.pory"
	switch VAR_DYNAMIC_DORMWARP
# 8 "data/maps/CommonDormRoom/scripts.pory"
	case 2, CommonDormRoom_OnLoad_2
# 10 "data/maps/CommonDormRoom/scripts.pory"
	case 3, CommonDormRoom_OnLoad_3
# 13 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 6, 1
	return

CommonDormRoom_OnLoad_2:
# 9 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 11, 1
	return

CommonDormRoom_OnLoad_3:
# 11 "data/maps/CommonDormRoom/scripts.pory"
	setdynamicwarp MAP_DORM_HALL1, 26, 1
	return


CommonDormRoom_SignScript_Computer::
# 20 "data/maps/CommonDormRoom/scripts.pory"
	lockall
# 21 "data/maps/CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Computer_Text_0
# 22 "data/maps/CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Drawer::
# 26 "data/maps/CommonDormRoom/scripts.pory"
	lockall
# 27 "data/maps/CommonDormRoom/scripts.pory"
	msgbox CommonDormRoom_SignScript_Drawer_Text_0
# 28 "data/maps/CommonDormRoom/scripts.pory"
	releaseall
	return


CommonDormRoom_SignScript_Computer_Text_0:
# 21 "data/maps/CommonDormRoom/scripts.pory"
	.string "It's a computer, and seeing it is not\n"
	.string "yours you should probably leave it\l"
	.string "alone.\l"
	.string "Not that you can do anything anyways\l"
	.string "since it is password protected$"

CommonDormRoom_SignScript_Drawer_Text_0:
# 27 "data/maps/CommonDormRoom/scripts.pory"
	.string "It's a set of drawers, seems to be filled\n"
	.string "with different kinds of clothes and\l"
	.string "nothing else$"
