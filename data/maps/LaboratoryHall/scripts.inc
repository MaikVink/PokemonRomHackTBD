LaboratoryHall_MapScripts::
# 4 "data/maps/LaboratoryHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LaboratoryHall_OnTransition
# 5 "data/maps/LaboratoryHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LaboratoryHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LaboratoryHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/LaboratoryHall/scripts.pory"
	map_script_2 VAR_LABORATORYHALL_STATE, 1, LaboratoryHall_Frame
	.2byte 0


LaboratoryHall_OnTransition::
# 11 "data/maps/LaboratoryHall/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 1
	return


LaboratoryHall_Frame::
# 15 "data/maps/LaboratoryHall/scripts.pory"
	hideobjectat 3, MAP_LABORATORY_HALL
# 16 "data/maps/LaboratoryHall/scripts.pory"
	setvar VAR_LABORATORYHALL_STATE, 2
# 17 "data/maps/LaboratoryHall/scripts.pory"
	release
	return


LaboratoryHall_EventScript_Woman::
# 21 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 22 "data/maps/LaboratoryHall/scripts.pory"
	faceplayer
# 23 "data/maps/LaboratoryHall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 25 "data/maps/LaboratoryHall/scripts.pory"
	case 0, LaboratoryHall_EventScript_Woman_3
# 26 "data/maps/LaboratoryHall/scripts.pory"
	case 1, LaboratoryHall_EventScript_Woman_3
# 27 "data/maps/LaboratoryHall/scripts.pory"
	case 2, LaboratoryHall_EventScript_Woman_3
# 28 "data/maps/LaboratoryHall/scripts.pory"
	case 3, LaboratoryHall_EventScript_Woman_3
# 29 "data/maps/LaboratoryHall/scripts.pory"
	case 4, LaboratoryHall_EventScript_Woman_3
# 31 "data/maps/LaboratoryHall/scripts.pory"
	case 5, LaboratoryHall_EventScript_Woman_4
# 33 "data/maps/LaboratoryHall/scripts.pory"
	case 6, LaboratoryHall_EventScript_Woman_5
# 35 "data/maps/LaboratoryHall/scripts.pory"
	case 7, LaboratoryHall_EventScript_Woman_6
# 37 "data/maps/LaboratoryHall/scripts.pory"
	case 8, LaboratoryHall_EventScript_Woman_7
# 40 "data/maps/LaboratoryHall/scripts.pory"
	case 9, LaboratoryHall_EventScript_Woman_8
# 50 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_7
LaboratoryHall_EventScript_Woman_1:
# 53 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return

LaboratoryHall_EventScript_Woman_3:
# 30 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_0
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_4:
# 32 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_1
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_5:
# 34 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_2
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_6:
# 36 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_3
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_7:
# 38 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_4
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_8:
# 41 "data/maps/LaboratoryHall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, LaboratoryHall_EventScript_Woman_10
# 47 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_6
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_10:
# 43 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_5
	goto LaboratoryHall_EventScript_Woman_1


LaboratoryHall_EventScript_GuardBlock::
# 57 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 58 "data/maps/LaboratoryHall/scripts.pory"
	faceplayer
# 59 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_GuardBlock_Text_0
# 60 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_EventScript_GuardOpen::
# 64 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 65 "data/maps/LaboratoryHall/scripts.pory"
	faceplayer
# 66 "data/maps/LaboratoryHall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 68 "data/maps/LaboratoryHall/scripts.pory"
	case 6, LaboratoryHall_EventScript_GuardOpen_3
# 69 "data/maps/LaboratoryHall/scripts.pory"
	case 7, LaboratoryHall_EventScript_GuardOpen_3
# 70 "data/maps/LaboratoryHall/scripts.pory"
	case 8, LaboratoryHall_EventScript_GuardOpen_3
# 73 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_GuardOpen_Text_1
LaboratoryHall_EventScript_GuardOpen_1:
# 75 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return

LaboratoryHall_EventScript_GuardOpen_3:
# 71 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_GuardOpen_Text_0
	goto LaboratoryHall_EventScript_GuardOpen_1


LaboratoryHall_SignScript_BookCase::
# 79 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 80 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_BookCase_Text_0
# 82 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_LockedDrawer::
# 86 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 87 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_LockedDrawer_Text_0
# 88 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_Egg::
# 92 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 93 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_Egg_Text_0
# 94 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_Trigger_Fiona::
# 98 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 99 "data/maps/LaboratoryHall/scripts.pory"
	opendoor 14, 1
# 100 "data/maps/LaboratoryHall/scripts.pory"
	waitdooranim
# 101 "data/maps/LaboratoryHall/scripts.pory"
	showobjectat 3, MAP_LABORATORY_HALL
# 102 "data/maps/LaboratoryHall/scripts.pory"
	applymovement 3, LaboratoryHalll_NoticePlayer
# 103 "data/maps/LaboratoryHall/scripts.pory"
	waitmovement 0
# 105 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_Trigger_Fiona_Text_0
# 106 "data/maps/LaboratoryHall/scripts.pory"
	applymovement 3, LabrotaryHall_moveDown
# 107 "data/maps/LaboratoryHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabrotaryHall_moveOutOfTheWay
# 108 "data/maps/LaboratoryHall/scripts.pory"
	waitmovement 0
# 109 "data/maps/LaboratoryHall/scripts.pory"
	closedoor 14, 1
# 110 "data/maps/LaboratoryHall/scripts.pory"
	waitdooranim
# 112 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_Trigger_Fiona_Text_1
# 117 "data/maps/LaboratoryHall/scripts.pory"
	applymovement 3, LabrotaryHall_moveAway
# 118 "data/maps/LaboratoryHall/scripts.pory"
	waitmovement 0
# 120 "data/maps/LaboratoryHall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 3
# 121 "data/maps/LaboratoryHall/scripts.pory"
	setflag FLAG_FIONA_HALL_ENCOUNTER
# 122 "data/maps/LaboratoryHall/scripts.pory"
	clearflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 123 "data/maps/LaboratoryHall/scripts.pory"
	removeobject 3, MAP_LABORATORY_HALL
# 124 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_Trigger_HideFiona::
# 128 "data/maps/LaboratoryHall/scripts.pory"
	hideobjectat 3, MAP_LABORATORY_HALL
# 129 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


# 132 "data/maps/LaboratoryHall/scripts.pory"
LaboratoryHalll_NoticePlayer:
# 133 "data/maps/LaboratoryHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 136 "data/maps/LaboratoryHall/scripts.pory"
LabrotaryHall_moveDown:
# 137 "data/maps/LaboratoryHall/scripts.pory"
	walk_down
# 138 "data/maps/LaboratoryHall/scripts.pory"
	face_left
	step_end

# 141 "data/maps/LaboratoryHall/scripts.pory"
LabrotaryHall_moveOutOfTheWay:
# 142 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 143 "data/maps/LaboratoryHall/scripts.pory"
	face_right
	step_end

# 146 "data/maps/LaboratoryHall/scripts.pory"
LabrotaryHall_moveAway:
# 147 "data/maps/LaboratoryHall/scripts.pory"
	walk_down
# 147 "data/maps/LaboratoryHall/scripts.pory"
	walk_down
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 148 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
	step_end

LaboratoryHall_EventScript_Woman_Text_0:
# 30 "data/maps/LaboratoryHall/scripts.pory"
	.string "I just received my pokemon from the\n"
	.string "professor!\p"
	.string "I'm quite surprised about the method\n"
	.string "they use. If you would also like to get\l"
	.string "one, he is just a little bit up ahead!$"

LaboratoryHall_EventScript_Woman_Text_1:
# 32 "data/maps/LaboratoryHall/scripts.pory"
	.string "Getting to meet {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} directly is\n"
	.string "not something everyone can say they\l"
	.string "have done.\l"
	.string "I wonder if that is a good or a bad thing\l"
	.string "tough...$"

LaboratoryHall_EventScript_Woman_Text_2:
# 34 "data/maps/LaboratoryHall/scripts.pory"
	.string "That kid is actually more skilled than\n"
	.string "you might think, I barely managed to\l"
	.string "beat him.$"

LaboratoryHall_EventScript_Woman_Text_3:
# 36 "data/maps/LaboratoryHall/scripts.pory"
	.string "Who knew that pokemon battles are this\n"
	.string "difficult and excilirating! It's a shame\l"
	.string "I lost, would love to battle some more!$"

LaboratoryHall_EventScript_Woman_Text_4:
# 38 "data/maps/LaboratoryHall/scripts.pory"
	.string "I have been thinking...\p"
	.string "I think I will ask Surge if he's alright\n"
	.string "if we're allowed to use the Battle Dojo\l"
	.string "some more after the Tournament. I think\l"
	.string "battling each other could be a good way\l"
	.string "to keep in shape!$"

LaboratoryHall_EventScript_Woman_Text_5:
# 43 "data/maps/LaboratoryHall/scripts.pory"
	.string "Congrats {PLAYER}! I do hope you'll\n"
	.string "give me and the other recruits a chance\l"
	.string "to rematch you some time. I think it can\l"
	.string "also be some good training for you from\l"
	.string "time to time!$"

LaboratoryHall_EventScript_Woman_Text_6:
# 47 "data/maps/LaboratoryHall/scripts.pory"
	.string "My idea was approved by Surge and {COLOR LIGHT_GRAY}The\n"
	.string "Leader{COLOR DARK_GRAY}! Good luck with the finals by the\l"
	.string "way! Afterwards I'm going to ask the\l"
	.string "champion for a battle. I want to see\l"
	.string "what the skill level is at the top!$"

LaboratoryHall_EventScript_Woman_Text_7:
# 50 "data/maps/LaboratoryHall/scripts.pory"
	.string "The battle arena is a good place to\n"
	.string "train your pokemons and to rematch\l"
	.string "other Initiatives if you want to see\l"
	.string "how far they have come.\p"
	.string "The lab on the other hand is a good\n"
	.string "place if you need something more\l"
	.string "specific.$"

LaboratoryHall_EventScript_GuardBlock_Text_0:
# 59 "data/maps/LaboratoryHall/scripts.pory"
	.string "Sorry kid, you're not ready yet to enter\n"
	.string "this area.$"

LaboratoryHall_EventScript_GuardOpen_Text_0:
# 71 "data/maps/LaboratoryHall/scripts.pory"
	.string "This area leads to the battle Dojo, hear\n"
	.string "you'll be performing the Tournament.\p"
	.string "Once you're ready you can enter.$"

LaboratoryHall_EventScript_GuardOpen_Text_1:
# 73 "data/maps/LaboratoryHall/scripts.pory"
	.string "This area lead to the battle Dojo.\p"
	.string "If you want to fight one of your\n"
	.string "colleagues, this is the place to do it!$"

LaboratoryHall_SignScript_BookCase_Text_0:
# 80 "data/maps/LaboratoryHall/scripts.pory"
	.string "It seems to be a bookcase filled with\n"
	.string "books about different topics from\l"
	.string "pokemon biology to the history of the\l"
	.string "world.\p"
	.string "You don't feel like reading right now\n"
	.string "though.$"

LaboratoryHall_SignScript_LockedDrawer_Text_0:
# 87 "data/maps/LaboratoryHall/scripts.pory"
	.string "It's a locked file cabinet. But why is it\n"
	.string "standing here out in the open?$"

LaboratoryHall_SignScript_Egg_Text_0:
# 93 "data/maps/LaboratoryHall/scripts.pory"
	.string "An old pokemon egg is stored in this\n"
	.string "glass container. Who knows what\l"
	.string "pokemon it would contain?$"

LaboratoryHall_Trigger_Fiona_Text_0:
# 105 "data/maps/LaboratoryHall/scripts.pory"
	.string "Oh {PLAYER}, you came!$"

LaboratoryHall_Trigger_Fiona_Text_1:
# 112 "data/maps/LaboratoryHall/scripts.pory"
	.string "I just got my pokemon! They did suprise\n"
	.string "me however with another...\p"
	.string "I shouldn't spoil the surprise for you.\n"
	.string "You get to experience it soon enough!\p"
	.string "I'll be heading to Roll Call now, I will\n"
	.string "wait for you there.\l"
	.string "Maybe we can have a pokemon battle\l"
	.string "when you got your pokemon!\p"
	.string "See ya!$"
