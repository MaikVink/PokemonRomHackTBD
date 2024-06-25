DormHall2_MapScripts::
	.byte 0


DormhallTopLeft_EventScript_WindowWatcher::
# 6 "data/maps/DormHall2/scripts.pory"
	lockall
# 7 "data/maps/DormHall2/scripts.pory"
	faceplayer
# 8 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_0
# 9 "data/maps/DormHall2/scripts.pory"
	releaseall
	return


DormhallTopLeft_EventScript_NervousWalker::
# 13 "data/maps/DormHall2/scripts.pory"
	lockall
# 14 "data/maps/DormHall2/scripts.pory"
	faceplayer
# 15 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_0
# 16 "data/maps/DormHall2/scripts.pory"
	releaseall
	return


DormhallTopLeft_SignScript_StatueNormal::
# 20 "data/maps/DormHall2/scripts.pory"
	lockall
# 21 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_SignScript_StatueNormal_Text_0
# 22 "data/maps/DormHall2/scripts.pory"
	releaseall
	return


DormhallTopLeft_Trigger_SetWarpValue1::
# 26 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 4
# 27 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue2::
# 31 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 5
# 32 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue3::
# 36 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 6
# 37 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue4::
# 41 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 7
# 42 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue5::
# 46 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 8
# 47 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_EventScript_WindowWatcher_Text_0:
# 8 "data/maps/DormHall2/scripts.pory"
	.string "I wonder when we will be allowed to\n"
	.string "leave this place with our pokemon$"

DormhallTopLeft_EventScript_NervousWalker_Text_0:
# 15 "data/maps/DormHall2/scripts.pory"
	.string "Aaah, I'm so nervous to collect my\n"
	.string "pokemon!\p"
	.string "What if I get a pokemon I don't like?\n"
	.string "What if I'm stuck with a pokemon I\l"
	.string "hate?\p"
	.string "Should I wait to see what other people\n"
	.string "get or should I just rip off this\l"
	.string "bandage?$"

DormhallTopLeft_SignScript_StatueNormal_Text_0:
# 21 "data/maps/DormHall2/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"
