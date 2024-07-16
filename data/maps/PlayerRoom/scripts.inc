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
# 67 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_3
PlayerRoom_SignScript_Bed_1:
# 69 "data/maps/PlayerRoom/scripts.pory"
	releaseall
	return

PlayerRoom_SignScript_Bed_2:
# 33 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_0, MSGBOX_YESNO
# 35 "data/maps/PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Bed_5
# 62 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_2
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_5:
# 37 "data/maps/PlayerRoom/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYERROOM
# 38 "data/maps/PlayerRoom/scripts.pory"
	fadescreen 1
# 39 "data/maps/PlayerRoom/scripts.pory"
	special HealPlayerParty
# 40 "data/maps/PlayerRoom/scripts.pory"
	playfanfare MUS_HEAL
# 41 "data/maps/PlayerRoom/scripts.pory"
	waitfanfare
# 42 "data/maps/PlayerRoom/scripts.pory"
	fadescreen 0
# 43 "data/maps/PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 5
	goto_if_eq PlayerRoom_SignScript_Bed_9
PlayerRoom_SignScript_Bed_8:
# 48 "data/maps/PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION < 10, 0
	goto_if_ne PlayerRoom_SignScript_Bed_13
PlayerRoom_SignScript_Bed_11:
# 53 "data/maps/PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 10
	goto_if_eq PlayerRoom_SignScript_Bed_17
PlayerRoom_SignScript_Bed_16:
# 58 "data/maps/PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_1
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_9:
# 45 "data/maps/PlayerRoom/scripts.pory"
	clearflag FLAG_REVERSED_GUARD
# 46 "data/maps/PlayerRoom/scripts.pory"
	setflag FLAG_TOURNAMENT
	goto PlayerRoom_SignScript_Bed_8

PlayerRoom_SignScript_Bed_12:
# 50 "data/maps/PlayerRoom/scripts.pory"
	addvar VAR_STORY_PROGRESSION, 1
# 51 "data/maps/PlayerRoom/scripts.pory"
	clearflag FLAG_BATTLE_WON
	goto PlayerRoom_SignScript_Bed_11

PlayerRoom_SignScript_Bed_13:
# 48 "data/maps/PlayerRoom/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, PlayerRoom_SignScript_Bed_12
	goto PlayerRoom_SignScript_Bed_11

PlayerRoom_SignScript_Bed_17:
# 55 "data/maps/PlayerRoom/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 56 "data/maps/PlayerRoom/scripts.pory"
	clearflag FLAG_HIDE_LEADER
	goto PlayerRoom_SignScript_Bed_16


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
	.string "You could use a rest if you need it.\p"
	.string "Do you want to sleep and rest up for\n"
	.string "today?$"

PlayerRoom_SignScript_Bed_Text_1:
# 58 "data/maps/PlayerRoom/scripts.pory"
	.string "You feel refreshed!$"

PlayerRoom_SignScript_Bed_Text_2:
# 62 "data/maps/PlayerRoom/scripts.pory"
	.string "Maybe later.$"

PlayerRoom_SignScript_Bed_Text_3:
# 67 "data/maps/PlayerRoom/scripts.pory"
	.string "It's your bed.\n"
	.string "You don't feel tired though, so there\l"
	.string "seems to be no reason right now to\l"
	.string "sleep$"
