PlayerRoom_MapScripts::
	.byte 0


PlayerRoom_SignScript_Table::
# 6 "data/maps/PlayerRoom/scripts.pory"
	lockall
# 7 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Table_Text_0
# 8 "data/maps/PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Computer::
# 12 "data/maps/PlayerRoom/scripts.pory"
	lockall
# 13 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_0
# 14 "data/maps/PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Drawer::
# 18 "data/maps/PlayerRoom/scripts.pory"
	lockall
# 19 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Drawer_Text_0
# 20 "data/maps/PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Box::
# 24 "data/maps/PlayerRoom/scripts.pory"
	lockall
# 25 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Box_Text_0
# 26 "data/maps/PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Bed::
# 30 "data/maps/PlayerRoom/scripts.pory"
	lockall
# 31 "data/maps/PlayerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FIRST_POKEMON, PlayerRoom_SignScript_Bed_2
# 37 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_1
PlayerRoom_SignScript_Bed_1:
# 39 "data/maps/PlayerRoom/scripts.pory"
	releaseall
	return

PlayerRoom_SignScript_Bed_2:
# 33 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_0
	goto PlayerRoom_SignScript_Bed_1


PlayerRoom_SignScript_Table_Text_0:
# 7 "data/maps/PlayerRoom/scripts.pory"
	.string "It's your table.\n"
	.string "For some reason you're the only one\l"
	.string "whose table and carpet seems to be of\l"
	.string "two different kinds.$"

PlayerRoom_SignScript_Computer_Text_0:
# 13 "data/maps/PlayerRoom/scripts.pory"
	.string "It's your computer.\n"
	.string "There isn't anything you need to do on\l"
	.string "it though.$"

PlayerRoom_SignScript_Drawer_Text_0:
# 19 "data/maps/PlayerRoom/scripts.pory"
	.string "You have neatly placed all your clothes\n"
	.string "inside the different drawers.$"

PlayerRoom_SignScript_Box_Text_0:
# 25 "data/maps/PlayerRoom/scripts.pory"
	.string "It's a box with some of your personal\n"
	.string "stuff.\l"
	.string "You weren't allowed to bring a lot with\l"
	.string "you, but you're still looking for a good\l"
	.string "place to store it.$"

PlayerRoom_SignScript_Bed_Text_0:
# 33 "data/maps/PlayerRoom/scripts.pory"
	.string "$"

PlayerRoom_SignScript_Bed_Text_1:
# 37 "data/maps/PlayerRoom/scripts.pory"
	.string "It's your bed.\n"
	.string "You don't feel tired though, so there\l"
	.string "seems to be no reason right now to\l"
	.string "sleep$"
