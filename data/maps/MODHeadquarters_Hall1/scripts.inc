MODHeadquarters_Hall1_MapScripts::
# 2 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_Hall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_Hall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	map_script_2 VAR_LABORATORYHALL_STATE, 0, Hall1_OnFrame
# 4 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	map_script_2 VAR_LABORATORYHALL_STATE, 2, Hall1_OnFrame
	.2byte 0


Hall1_OnFrame::
# 9 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	setvar VAR_LABORATORYHALL_STATE, 1
	return


Hall1_SignScript_StatueNormal::
# 13 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 14 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_SignScript_StatueNormal_Text_0
# 15 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return


Hall1_SignScript_PotNormal::
# 19 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 20 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_SignScript_PotNormal_Text_0
# 21 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return


Hall1_SignScript_PotEasterEgg::
# 25 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 26 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_SignScript_PotEasterEgg_Text_0
# 27 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return


Hall1_EventScript_GuardLeft::
# 31 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 32 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	faceplayer
# 33 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 35 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 0, Hall1_EventScript_GuardLeft_3
# 36 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 1, Hall1_EventScript_GuardLeft_3
# 37 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 2, Hall1_EventScript_GuardLeft_3
# 38 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 3, Hall1_EventScript_GuardLeft_3
# 40 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 4, Hall1_EventScript_GuardLeft_4
# 42 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 5, Hall1_EventScript_GuardLeft_5
# 43 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 6, Hall1_EventScript_GuardLeft_5
# 44 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 7, Hall1_EventScript_GuardLeft_5
# 45 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 8, Hall1_EventScript_GuardLeft_5
# 47 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 9, Hall1_EventScript_GuardLeft_6
# 57 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_5
Hall1_EventScript_GuardLeft_1:
# 59 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return

Hall1_EventScript_GuardLeft_3:
# 39 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_0
	goto Hall1_EventScript_GuardLeft_1

Hall1_EventScript_GuardLeft_4:
# 41 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_1
	goto Hall1_EventScript_GuardLeft_1

Hall1_EventScript_GuardLeft_5:
# 46 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_2
	goto Hall1_EventScript_GuardLeft_1

Hall1_EventScript_GuardLeft_6:
# 48 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_GuardLeft_8
# 54 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_4
	goto Hall1_EventScript_GuardLeft_1

Hall1_EventScript_GuardLeft_8:
# 50 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardLeft_Text_3
	goto Hall1_EventScript_GuardLeft_1


Hall1_EventScript_GuardRight::
# 63 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 64 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	faceplayer
# 65 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 67 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 0, Hall1_EventScript_GuardRight_3
# 68 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 1, Hall1_EventScript_GuardRight_3
# 69 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 2, Hall1_EventScript_GuardRight_3
# 70 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 3, Hall1_EventScript_GuardRight_3
# 71 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 4, Hall1_EventScript_GuardRight_3
# 72 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 5, Hall1_EventScript_GuardRight_3
# 74 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 6, Hall1_EventScript_GuardRight_4
# 75 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 7, Hall1_EventScript_GuardRight_4
# 76 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 8, Hall1_EventScript_GuardRight_4
# 80 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 9, Hall1_EventScript_GuardRight_5
# 91 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_4
Hall1_EventScript_GuardRight_1:
# 93 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return

Hall1_EventScript_GuardRight_3:
# 73 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_0
	goto Hall1_EventScript_GuardRight_1

Hall1_EventScript_GuardRight_4:
# 77 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_1
	goto Hall1_EventScript_GuardRight_1

Hall1_EventScript_GuardRight_5:
# 81 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_GuardRight_7
# 88 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_3
	goto Hall1_EventScript_GuardRight_1

Hall1_EventScript_GuardRight_7:
# 83 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_GuardRight_Text_2
	goto Hall1_EventScript_GuardRight_1


Hall1_EventScript_Wanderer::
# 97 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 98 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	faceplayer
# 99 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 101 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 0, Hall1_EventScript_Wanderer_3
# 102 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 1, Hall1_EventScript_Wanderer_3
# 103 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 2, Hall1_EventScript_Wanderer_3
# 104 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 3, Hall1_EventScript_Wanderer_3
# 105 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 4, Hall1_EventScript_Wanderer_3
# 107 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 5, Hall1_EventScript_Wanderer_4
# 110 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 6, Hall1_EventScript_Wanderer_5
# 112 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 7, Hall1_EventScript_Wanderer_6
# 114 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 8, Hall1_EventScript_Wanderer_7
# 116 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 9, Hall1_EventScript_Wanderer_8
# 126 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_7
Hall1_EventScript_Wanderer_1:
# 129 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return

Hall1_EventScript_Wanderer_3:
# 106 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_0
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_4:
# 108 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_1
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_5:
# 111 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_2
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_6:
# 113 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_3
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_7:
# 115 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_4
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_8:
# 117 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_Wanderer_10
# 123 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_6
	goto Hall1_EventScript_Wanderer_1

Hall1_EventScript_Wanderer_10:
# 119 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Wanderer_Text_5
	goto Hall1_EventScript_Wanderer_1


Hall1_EventScript_Beauty::
# 133 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lockall
# 134 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	faceplayer
# 135 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 137 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 0, Hall1_EventScript_Beauty_3
# 138 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 1, Hall1_EventScript_Beauty_3
# 139 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 2, Hall1_EventScript_Beauty_3
# 140 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 3, Hall1_EventScript_Beauty_3
# 141 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 4, Hall1_EventScript_Beauty_3
# 143 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 5, Hall1_EventScript_Beauty_4
# 145 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 6, Hall1_EventScript_Beauty_5
# 146 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 7, Hall1_EventScript_Beauty_5
# 148 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 8, Hall1_EventScript_Beauty_6
# 157 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	case 9, Hall1_EventScript_Beauty_7
# 170 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_7
Hall1_EventScript_Beauty_1:
# 172 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	releaseall
	return

Hall1_EventScript_Beauty_3:
# 142 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_0
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_4:
# 144 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_1
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_5:
# 147 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_2
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_6:
# 149 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_Beauty_9
# 155 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_4
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_7:
# 158 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Hall1_EventScript_Beauty_12
# 167 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_6
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_9:
# 151 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_3
	goto Hall1_EventScript_Beauty_1

Hall1_EventScript_Beauty_12:
# 160 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_EventScript_Beauty_Text_5
	goto Hall1_EventScript_Beauty_1


Hall1_Trigger_NotYet::
# 176 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	lock
# 177 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_WalkUp1
# 178 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	msgbox Hall1_Trigger_NotYet_Text_0
# 179 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	release
	return


Hall1_SignScript_StatueNormal_Text_0:
# 14 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Hall1_SignScript_PotNormal_Text_0:
# 20 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "It just an ordinary pot.$"

Hall1_SignScript_PotEasterEgg_Text_0:
# 26 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Hé there is a green rupee inside the\n"
	.string "pot!$"

Hall1_EventScript_GuardLeft_Text_0:
# 39 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "Once you get you retrieve your pokemon\l"
	.string "you should return here.$"

Hall1_EventScript_GuardLeft_Text_1:
# 41 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "You should go ahead, {COLOR LIGHT_GRAY}He{COLOR DARK_GRAY} will be waiting\l"
	.string "for you.$"

Hall1_EventScript_GuardLeft_Text_2:
# 46 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "This room will be used if there are any\l"
	.string "important updates for your training.$"

Hall1_EventScript_GuardLeft_Text_3:
# 50 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "If {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} intends to meet you here\l"
	.string "we'll let you know.$"

Hall1_EventScript_GuardLeft_Text_4:
# 54 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "This room leads to rollcall.\n"
	.string "I assume you know that by now.$"

Hall1_EventScript_GuardLeft_Text_5:
# 57 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "This room leads to rollcall in case you\n"
	.string "forgot.$"

Hall1_EventScript_GuardRight_Text_0:
# 73 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Today is a special day huh?\n"
	.string "Don't worry initiative!\l"
	.string "We will make sure nothing goes wrong\l"
	.string "today.$"

Hall1_EventScript_GuardRight_Text_1:
# 77 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Today is a special day huh?\n"
	.string "Don't worry initiative!\l"
	.string "We will make sure nothing goes wrong\l"
	.string "today.\p"
	.string "Huh?\n"
	.string "You want to know what this day makes it\l"
	.string "so special?\p"
	.string "Well...\n"
	.string "Anyday can be a special day if you make\l"
	.string "it right?$"

Hall1_EventScript_GuardRight_Text_2:
# 83 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Hahaha, I told you today was an extra\n"
	.string "special day.\l"
	.string "Well done initiative!\p"
	.string "At this rate you don't need us to\n"
	.string "protect you!$"

Hall1_EventScript_GuardRight_Text_3:
# 88 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Today is an extra special day isn't?\n"
	.string "Good luck today!\p"
	.string "And of course don't worry.\l"
	.string "We will make sure nothing goes wrong\l"
	.string "today.$"

Hall1_EventScript_GuardRight_Text_4:
# 91 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Don't forget to make every day your\n"
	.string "special day!$"

Hall1_EventScript_Wanderer_Text_0:
# 106 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Have you gotten your pokemon already?\p"
	.string "You can get it from the professor down\n"
	.string "the hall to the right!$"

Hall1_EventScript_Wanderer_Text_1:
# 108 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "I heard some rumors that Team A.S.\n"
	.string "members were trying to infiltrate this\l"
	.string "place.\p"
	.string "Would that be the reason {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} is\n"
	.string "here?$"

Hall1_EventScript_Wanderer_Text_2:
# 111 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "The Tournament is going well so far, but\n"
	.string "I have to stay ever vigilant, you never\l"
	.string "know who your next opponent will be.$"

Hall1_EventScript_Wanderer_Text_3:
# 113 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "I have made it to the semi-finals! I'm\n"
	.string "not gonna lie, I never though I would be\l"
	.string "able to make it that far.$"

Hall1_EventScript_Wanderer_Text_4:
# 115 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Damn, Fiona was quite on a different\n"
	.string "level than my previous fights. It was\l"
	.string "like she didn't even break a sweat\l"
	.string "fighitng me!$"

Hall1_EventScript_Wanderer_Text_5:
# 119 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "I guess that people were correct,\n"
	.string "you're very strong! Even though Fiona\l"
	.string "wooped my ass, I would love to fight you\l"
	.string "as well some day!$"

Hall1_EventScript_Wanderer_Text_6:
# 123 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "I heard from the other people here\n"
	.string "you're also quite strong, I'm excited to\l"
	.string "see who of you two is going to win!$"

Hall1_EventScript_Wanderer_Text_7:
# 126 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: You would be surprised to see\n"
	.string "how many people out there are actually\l"
	.string "part of team MOD.\p"
	.string "I wonder how many people are secretly\n"
	.string "team A.S. members?$"

Hall1_EventScript_Beauty_Text_0:
# 142 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "I'm sorry dear, but I'm not here to make\n"
	.string "friends, so just move along.$"

Hall1_EventScript_Beauty_Text_1:
# 144 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "It's no shame to drop out now dear, we\n"
	.string "all know that the best Initaitive is\l"
	.string "sitting right here.$"

Hall1_EventScript_Beauty_Text_2:
# 147 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "O? you're still in the tournament? Don't\n"
	.string "worry dear, it's only a matter of time\l"
	.string "before I'll let you know what defeat is.$"

Hall1_EventScript_Beauty_Text_3:
# 151 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Hmp, I don't talk to cheaters!$"

Hall1_EventScript_Beauty_Text_4:
# 155 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "Ah, I heard you're my next loser. Hope\n"
	.string "you had fun in this tournament, but\l"
	.string "there is no way you can win against\l"
	.string "such a skillfull person like me.$"

Hall1_EventScript_Beauty_Text_5:
# 160 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: ...\p"
	.string "...\p"
	.string "...\p"
	.string "well fought i guess...$"

Hall1_EventScript_Beauty_Text_6:
# 167 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Frankly, I think neither of you\n"
	.string "two deserve to be in the finals. I'm\l"
	.string "clearly the best trainer. But there is\l"
	.string "little I can do to chance the system\l"
	.string "now.$"

Hall1_EventScript_Beauty_Text_7:
# 170 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Be careful not to fall off your\n"
	.string "high horse dear. It's only a matter of\l"
	.string "time before somewhere far more\l"
	.string "handsome and skillful will take your\l"
	.string "place.$"

Hall1_Trigger_NotYet_Text_0:
# 178 "data/maps/MODHeadquarters_Hall1/scripts.pory"
	.string "You don't have any reason yet to go\n"
	.string "this way.$"
