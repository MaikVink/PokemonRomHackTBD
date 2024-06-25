Hall1_MapScripts::
	.byte 0


Hall1_SignScript_StatueNormal::
# 4 "data/maps/Hall1/scripts.pory"
	lockall
# 5 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_SignScript_StatueNormal_Text_0
# 6 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_SignScript_PotNormal::
# 10 "data/maps/Hall1/scripts.pory"
	lockall
# 11 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_SignScript_PotNormal_Text_0
# 12 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_GuardLeft::
# 16 "data/maps/Hall1/scripts.pory"
	lockall
# 17 "data/maps/Hall1/scripts.pory"
	faceplayer
# 18 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_0
# 19 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_GuardRight::
# 23 "data/maps/Hall1/scripts.pory"
	lockall
# 24 "data/maps/Hall1/scripts.pory"
	faceplayer
# 25 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_0
# 26 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_Wanderer::
# 30 "data/maps/Hall1/scripts.pory"
	lockall
# 31 "data/maps/Hall1/scripts.pory"
	faceplayer
# 32 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_0
# 33 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_Beauty::
# 37 "data/maps/Hall1/scripts.pory"
	lockall
# 38 "data/maps/Hall1/scripts.pory"
	faceplayer
# 39 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_0
# 40 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_Trigger_NotYet::
# 44 "data/maps/Hall1/scripts.pory"
	lock
# 45 "data/maps/Hall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Hall1_Movement_MoveBack
# 46 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_Trigger_NotYet_Text_0
# 47 "data/maps/Hall1/scripts.pory"
	release
	return


# 50 "data/maps/Hall1/scripts.pory"
Hall1_Movement_MoveBack:
# 51 "data/maps/Hall1/scripts.pory"
	walk_up
	step_end

Hall1_SignScript_StatueNormal_Text_0:
# 5 "data/maps/Hall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Hall1_SignScript_PotNormal_Text_0:
# 11 "data/maps/Hall1/scripts.pory"
	.string "It just an ordinary pot.$"

Hall1_EventScript_GuardLeft_Text_0:
# 18 "data/maps/Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "Once you get you retrieve your pokemon\l"
	.string "you should return here.$"

Hall1_EventScript_GuardRight_Text_0:
# 25 "data/maps/Hall1/scripts.pory"
	.string "Today is a special day huh?\n"
	.string "Don't worry initiative!\l"
	.string "We will make sure nothing goes wrong\l"
	.string "today.$"

Hall1_EventScript_Wanderer_Text_0:
# 32 "data/maps/Hall1/scripts.pory"
	.string "Have you gotten your pokemon already?\p"
	.string "You can get it from the professor down\n"
	.string "the hall to the right!$"

Hall1_EventScript_Beauty_Text_0:
# 39 "data/maps/Hall1/scripts.pory"
	.string "I'm sorry dear, but I'm not here to make\n"
	.string "friends, so just move along.$"

Hall1_Trigger_NotYet_Text_0:
# 46 "data/maps/Hall1/scripts.pory"
	.string "You don't have any reason yet to go\n"
	.string "this way.$"
