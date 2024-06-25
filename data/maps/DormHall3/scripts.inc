DormHall3_MapScripts::
	.byte 0


DormHallBottemLeft_EventScript_Hiker::
# 6 "data/maps/DormHall3/scripts.pory"
	lockall
# 7 "data/maps/DormHall3/scripts.pory"
	faceplayer
# 8 "data/maps/DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_0
# 11 "data/maps/DormHall3/scripts.pory"
	releaseall
	return


DormHallBottemLeft_EventScript_Woman::
# 15 "data/maps/DormHall3/scripts.pory"
	lockall
# 16 "data/maps/DormHall3/scripts.pory"
	faceplayer
# 17 "data/maps/DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_0
# 20 "data/maps/DormHall3/scripts.pory"
	releaseall
	return


DormhallBottemLeft_SignScript_StatueNormal::
# 24 "data/maps/DormHall3/scripts.pory"
	lockall
# 25 "data/maps/DormHall3/scripts.pory"
	msgbox DormhallBottemLeft_SignScript_StatueNormal_Text_0
# 26 "data/maps/DormHall3/scripts.pory"
	releaseall
	return


DormhallBottemLeft_Trigger_SetWarpValue1::
# 30 "data/maps/DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 9
# 31 "data/maps/DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue2::
# 35 "data/maps/DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 10
# 36 "data/maps/DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue3::
# 40 "data/maps/DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 11
# 41 "data/maps/DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue4::
# 45 "data/maps/DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 12
# 46 "data/maps/DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue5::
# 50 "data/maps/DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 13
# 51 "data/maps/DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue6::
# 55 "data/maps/DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 14
# 56 "data/maps/DormHall3/scripts.pory"
	release
	return


DormHallBottemLeft_EventScript_Hiker_Text_0:
# 8 "data/maps/DormHall3/scripts.pory"
	.string "If you want to look in my room, go\n"
	.string "ahead!\l"
	.string "As long as you allow me also to look in\l"
	.string "your room, of course!\l"
	.string "I cannot deny that I'm also curious to\l"
	.string "see what the other initiatives have\l"
	.string "done with the limiting house rules we\l"
	.string "have been given.$"

DormHallBottemLeft_EventScript_Woman_Text_0:
# 17 "data/maps/DormHall3/scripts.pory"
	.string "Have you gotten your pokemon already?\p"
	.string "I was not prepared for the test they\n"
	.string "gave me before they handed the\l"
	.string "pokemon to me.\p"
	.string "Such a strange method to decide what\n"
	.string "pokemon you should get...$"

DormhallBottemLeft_SignScript_StatueNormal_Text_0:
# 25 "data/maps/DormHall3/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"
