Hall1_MapScripts::
# 2 "data/maps/Hall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Hall1/scripts.pory"
	map_script_2 VAR_LABORATORYHALL_STATE, 0, Hall1_OnFrame
# 4 "data/maps/Hall1/scripts.pory"
	map_script_2 VAR_LABORATORYHALL_STATE, 2, Hall1_OnFrame
	.2byte 0


Hall1_OnFrame::
# 9 "data/maps/Hall1/scripts.pory"
	setvar VAR_LABORATORYHALL_STATE, 1
	return


Hall1_SignScript_StatueNormal::
# 13 "data/maps/Hall1/scripts.pory"
	lockall
# 14 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_SignScript_StatueNormal_Text_0
# 15 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_SignScript_PotNormal::
# 19 "data/maps/Hall1/scripts.pory"
	lockall
# 20 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_SignScript_PotNormal_Text_0
# 21 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_GuardLeft::
# 25 "data/maps/Hall1/scripts.pory"
	lockall
# 26 "data/maps/Hall1/scripts.pory"
	faceplayer
# 27 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_0
# 28 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_GuardRight::
# 32 "data/maps/Hall1/scripts.pory"
	lockall
# 33 "data/maps/Hall1/scripts.pory"
	faceplayer
# 34 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_0
# 35 "data/maps/Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_Wanderer::
# 39 "data/maps/Hall1/scripts.pory"
	lockall
# 40 "data/maps/Hall1/scripts.pory"
	faceplayer
# 41 "data/maps/Hall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 43 "data/maps/Hall1/scripts.pory"
	case 0, Hall1_EventScript_Wanderer_3
# 44 "data/maps/Hall1/scripts.pory"
	case 1, Hall1_EventScript_Wanderer_3
# 45 "data/maps/Hall1/scripts.pory"
	case 2, Hall1_EventScript_Wanderer_3
# 46 "data/maps/Hall1/scripts.pory"
	case 3, Hall1_EventScript_Wanderer_3
# 47 "data/maps/Hall1/scripts.pory"
	case 4, Hall1_EventScript_Wanderer_3
# 49 "data/maps/Hall1/scripts.pory"
	case 5, Hall1_EventScript_Wanderer_4
# 52 "data/maps/Hall1/scripts.pory"
	case 6, Hall1_EventScript_Wanderer_5
# 54 "data/maps/Hall1/scripts.pory"
	case 7, Hall1_EventScript_Wanderer_6
# 56 "data/maps/Hall1/scripts.pory"
	case 8, Hall1_EventScript_Wanderer_7
# 58 "data/maps/Hall1/scripts.pory"
	case 9, Hall1_EventScript_Wanderer_8
# 68 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_7
Hall1_EventScript_Wanderer_1:
# 71 "data/maps/Hall1/scripts.pory"
	releaseall
	return

Hall1_EventScript_Wanderer_3:
# 48 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_0
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_4:
# 50 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_1
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_5:
# 53 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_2
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_6:
# 55 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_3
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_7:
# 57 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_4
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_8:
# 59 "data/maps/Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_Wanderer_10
# 65 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_6
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_10:
# 61 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_5
	goto Hall1_EventScript_Wanderer_1


Hall1_EventScript_Beauty::
# 75 "data/maps/Hall1/scripts.pory"
	lockall
# 76 "data/maps/Hall1/scripts.pory"
	faceplayer
# 77 "data/maps/Hall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 79 "data/maps/Hall1/scripts.pory"
	case 0, Hall1_EventScript_Beauty_3
# 80 "data/maps/Hall1/scripts.pory"
	case 1, Hall1_EventScript_Beauty_3
# 81 "data/maps/Hall1/scripts.pory"
	case 2, Hall1_EventScript_Beauty_3
# 82 "data/maps/Hall1/scripts.pory"
	case 3, Hall1_EventScript_Beauty_3
# 83 "data/maps/Hall1/scripts.pory"
	case 4, Hall1_EventScript_Beauty_3
# 85 "data/maps/Hall1/scripts.pory"
	case 5, Hall1_EventScript_Beauty_4
# 87 "data/maps/Hall1/scripts.pory"
	case 6, Hall1_EventScript_Beauty_5
# 88 "data/maps/Hall1/scripts.pory"
	case 7, Hall1_EventScript_Beauty_5
# 90 "data/maps/Hall1/scripts.pory"
	case 8, Hall1_EventScript_Beauty_6
# 99 "data/maps/Hall1/scripts.pory"
	case 9, Hall1_EventScript_Beauty_7
# 112 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_7
Hall1_EventScript_Beauty_1:
# 114 "data/maps/Hall1/scripts.pory"
	releaseall
	return

Hall1_EventScript_Beauty_3:
# 84 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_0
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_4:
# 86 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_1
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_5:
# 89 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_2
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_6:
# 91 "data/maps/Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_Beauty_9
# 97 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_4
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_7:
# 100 "data/maps/Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_Beauty_12
# 109 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_6
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_9:
# 93 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_3
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_12:
# 102 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_5
	goto Hall1_EventScript_Beauty_1


Hall1_Trigger_NotYet::
# 118 "data/maps/Hall1/scripts.pory"
	lock
# 119 "data/maps/Hall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Hall1_Movement_MoveBack
# 120 "data/maps/Hall1/scripts.pory"
	msgbox Hall1_Trigger_NotYet_Text_0
# 121 "data/maps/Hall1/scripts.pory"
	release
	return


# 124 "data/maps/Hall1/scripts.pory"
Hall1_Movement_MoveBack:
# 125 "data/maps/Hall1/scripts.pory"
	walk_up
	step_end

Hall1_SignScript_StatueNormal_Text_0:
# 14 "data/maps/Hall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Hall1_SignScript_PotNormal_Text_0:
# 20 "data/maps/Hall1/scripts.pory"
	.string "It just an ordinary pot.$"

Hall1_EventScript_GuardLeft_Text_0:
# 27 "data/maps/Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "Once you get you retrieve your pokemon\l"
	.string "you should return here.$"

Hall1_EventScript_GuardRight_Text_0:
# 34 "data/maps/Hall1/scripts.pory"
	.string "Today is a special day huh?\n"
	.string "Don't worry initiative!\l"
	.string "We will make sure nothing goes wrong\l"
	.string "today.$"

Hall1_EventScript_Wanderer_Text_0:
# 48 "data/maps/Hall1/scripts.pory"
	.string "Have you gotten your pokemon already?\p"
	.string "You can get it from the professor down\n"
	.string "the hall to the right!$"

Hall1_EventScript_Wanderer_Text_1:
# 50 "data/maps/Hall1/scripts.pory"
	.string "I heard some rumors that Team A.S.\n"
	.string "members were trying to infiltrate this\l"
	.string "place.\p"
	.string "Would that be the reason {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} is\n"
	.string "here?$"

Hall1_EventScript_Wanderer_Text_2:
# 53 "data/maps/Hall1/scripts.pory"
	.string "The Tournament is going well so far, but\n"
	.string "I have to stay ever vigilant, you never\l"
	.string "know who your next opponent will be.$"

Hall1_EventScript_Wanderer_Text_3:
# 55 "data/maps/Hall1/scripts.pory"
	.string "I have made it to the semi-finals! I'm\n"
	.string "not gonna lie, I never though I would be\l"
	.string "able to make it that far.$"

Hall1_EventScript_Wanderer_Text_4:
# 57 "data/maps/Hall1/scripts.pory"
	.string "Damn, Fiona was quite on a different\n"
	.string "level than my previous fights. It was\l"
	.string "like she didn't even break a sweat\l"
	.string "fighitng me!$"

Hall1_EventScript_Wanderer_Text_5:
# 61 "data/maps/Hall1/scripts.pory"
	.string "I guess that people were correct,\n"
	.string "you're very strong! Even though Fiona\l"
	.string "wooped my ass, I would love to fight you\l"
	.string "as well some day!$"

Hall1_EventScript_Wanderer_Text_6:
# 65 "data/maps/Hall1/scripts.pory"
	.string "I heard from the other people here\n"
	.string "you're also quite strong, I'm excited to\l"
	.string "see who of you two is going to win!$"

Hall1_EventScript_Wanderer_Text_7:
# 68 "data/maps/Hall1/scripts.pory"
	.string "You would be surprised to see how many\n"
	.string "people out there are actually part of\l"
	.string "team MOD.\p"
	.string "I wonder how many people are secretly\n"
	.string "team A.S. members?$"

Hall1_EventScript_Beauty_Text_0:
# 84 "data/maps/Hall1/scripts.pory"
	.string "I'm sorry dear, but I'm not here to make\n"
	.string "friends, so just move along.$"

Hall1_EventScript_Beauty_Text_1:
# 86 "data/maps/Hall1/scripts.pory"
	.string "It's no shame to drop out now dear, we\n"
	.string "all know that the best Initaitive is\l"
	.string "sitting right here.$"

Hall1_EventScript_Beauty_Text_2:
# 89 "data/maps/Hall1/scripts.pory"
	.string "O? you're still in the tournament? Don't\n"
	.string "worry dear, it's only a matter of time\l"
	.string "before I'll let you know what defeat is.$"

Hall1_EventScript_Beauty_Text_3:
# 93 "data/maps/Hall1/scripts.pory"
	.string "Hmp, I don't talk to cheaters!$"

Hall1_EventScript_Beauty_Text_4:
# 97 "data/maps/Hall1/scripts.pory"
	.string "Ah, I heard you're my next loser. Hope\n"
	.string "you had fun in this tournament, but\l"
	.string "there is no way you can win against\l"
	.string "such a skillfull person like me.$"

Hall1_EventScript_Beauty_Text_5:
# 102 "data/maps/Hall1/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "well fought i guess...$"

Hall1_EventScript_Beauty_Text_6:
# 109 "data/maps/Hall1/scripts.pory"
	.string "Frankly, I think neither of you two\n"
	.string "deserve to be in the finals. I'm clearly\l"
	.string "the best trainer. But there is little I\l"
	.string "can do to chance the system now.$"

Hall1_EventScript_Beauty_Text_7:
# 112 "data/maps/Hall1/scripts.pory"
	.string "Be careful not to fall off your high\n"
	.string "horse dear. It's only a matter of time\l"
	.string "before somewhere far more handsome\l"
	.string "and skillful will take your place.$"

Hall1_Trigger_NotYet_Text_0:
# 120 "data/maps/Hall1/scripts.pory"
	.string "You don't have any reason yet to go\n"
	.string "this way.$"
