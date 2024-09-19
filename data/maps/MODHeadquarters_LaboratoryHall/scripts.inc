MODHeadquarters_LaboratoryHall_MapScripts::
# 4 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LaboratoryHall_OnTransition
# 5 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_LaboratoryHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_LaboratoryHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	map_script_2 VAR_LABORATORYHALL_STATE, 1, LaboratoryHall_Frame
	.2byte 0


LaboratoryHall_OnTransition::
# 11 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 1
	return


LaboratoryHall_Frame::
# 15 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_LABORATORY_HALL
# 16 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	setvar VAR_LABORATORYHALL_STATE, 2
# 17 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	release
	return


LaboratoryHall_Trigger_ToBattleDojo::
# 21 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabrotaryHall_moveUp
# 22 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	warp MAP_MODHEADQUARTERS_BATTLE_DOJO, 6, 11
	return


LaboratoryHall_EventScript_Woman::
# 26 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 27 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	faceplayer
# 28 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 30 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 0, LaboratoryHall_EventScript_Woman_3
# 31 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 1, LaboratoryHall_EventScript_Woman_3
# 32 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 2, LaboratoryHall_EventScript_Woman_3
# 33 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 3, LaboratoryHall_EventScript_Woman_3
# 34 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 4, LaboratoryHall_EventScript_Woman_3
# 36 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 5, LaboratoryHall_EventScript_Woman_4
# 38 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 6, LaboratoryHall_EventScript_Woman_5
# 40 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 7, LaboratoryHall_EventScript_Woman_6
# 42 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 8, LaboratoryHall_EventScript_Woman_7
# 44 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 9, LaboratoryHall_EventScript_Woman_8
# 54 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_7
LaboratoryHall_EventScript_Woman_1:
# 56 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return

LaboratoryHall_EventScript_Woman_3:
# 35 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_0
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_4:
# 37 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_1
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_5:
# 39 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_2
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_6:
# 41 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_3
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_7:
# 43 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_4
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_8:
# 45 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, LaboratoryHall_EventScript_Woman_10
# 51 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_6
	goto LaboratoryHall_EventScript_Woman_1

LaboratoryHall_EventScript_Woman_10:
# 47 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_5
	goto LaboratoryHall_EventScript_Woman_1


LaboratoryHall_EventScript_GuardBlock::
# 60 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 61 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	faceplayer
# 62 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_GuardBlock_Text_0
# 63 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_EventScript_GuardOpen::
# 67 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 68 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	faceplayer
# 69 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 71 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 6, LaboratoryHall_EventScript_GuardOpen_3
# 72 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 7, LaboratoryHall_EventScript_GuardOpen_3
# 73 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	case 8, LaboratoryHall_EventScript_GuardOpen_3
# 76 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_GuardOpen_Text_1
LaboratoryHall_EventScript_GuardOpen_1:
# 78 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return

LaboratoryHall_EventScript_GuardOpen_3:
# 74 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_GuardOpen_Text_0
	goto LaboratoryHall_EventScript_GuardOpen_1


LaboratoryHall_SignScript_BookCase::
# 82 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 83 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_BookCase_Text_0
# 84 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_LockedDrawer::
# 88 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 89 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_LockedDrawer_Text_0
# 90 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_Egg::
# 94 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 95 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_Egg_Text_0
# 96 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_Trigger_Fiona::
# 100 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	lockall
# 101 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	opendoor 14, 1
# 102 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	waitdooranim
# 103 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	showobjectat 3, MAP_MODHEADQUARTERS_LABORATORY_HALL
# 104 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	applymovement 3, LaboratoryHalll_NoticePlayer
# 105 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	waitmovement 0
# 107 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_Trigger_Fiona_Text_0
# 108 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	applymovement 3, LabrotaryHall_moveDown
# 109 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabrotaryHall_moveOutOfTheWay
# 110 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	waitmovement 0
# 111 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	closedoor 14, 1
# 112 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	waitdooranim
# 114 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_Trigger_Fiona_Text_1
# 116 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	applymovement 3, LabrotaryHall_moveAway
# 117 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	waitmovement 0
# 119 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 3
# 120 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	setflag FLAG_FIONA_HALL_ENCOUNTER
# 121 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	clearflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 122 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	removeobject 3, MAP_MODHEADQUARTERS_LABORATORY_HALL
# 123 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_Trigger_HideFiona::
# 127 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_LABORATORY_HALL
# 128 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	releaseall
	return


# 131 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
LaboratoryHalll_NoticePlayer:
# 132 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
LabrotaryHall_moveDown:
# 136 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_down
# 137 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	face_left
	step_end

# 140 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
LabrotaryHall_moveOutOfTheWay:
# 141 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 142 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	face_right
	step_end

# 145 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
LabrotaryHall_moveAway:
# 146 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_down
# 146 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_down
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
# 147 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_left
	step_end

# 150 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
LabrotaryHall_moveUp:
# 151 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	walk_up
	step_end

LaboratoryHall_EventScript_Woman_Text_0:
# 35 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "I just received my pokemon from the\n"
	.string "professor!\p"
	.string "I'm quite surprised about the method\n"
	.string "they use. If you would also like to get\l"
	.string "one, he is just a little bit up ahead!$"

LaboratoryHall_EventScript_Woman_Text_1:
# 37 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "Getting to meet {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} directly is\n"
	.string "not something everyone can say they\l"
	.string "have done.\l"
	.string "I wonder if that is a good or a bad thing\l"
	.string "tough...$"

LaboratoryHall_EventScript_Woman_Text_2:
# 39 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "That kid is actually more skilled than\n"
	.string "you might think, I barely managed to\l"
	.string "beat him.$"

LaboratoryHall_EventScript_Woman_Text_3:
# 41 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "Who knew that pokemon battles are this\n"
	.string "difficult and excilirating! It's a shame\l"
	.string "I lost, would love to battle some more!$"

LaboratoryHall_EventScript_Woman_Text_4:
# 43 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "I have been thinking...\p"
	.string "I think I will ask Surge if he's alright\n"
	.string "if we're allowed to use the Battle Dojo\l"
	.string "some more after the Tournament. I think\l"
	.string "battling each other could be a good way\l"
	.string "to keep in shape!$"

LaboratoryHall_EventScript_Woman_Text_5:
# 47 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "Congrats {PLAYER}! I do hope you'll\n"
	.string "give me and the other recruits a chance\l"
	.string "to rematch you some time. I think it can\l"
	.string "also be some good training for you from\l"
	.string "time to time!$"

LaboratoryHall_EventScript_Woman_Text_6:
# 51 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "My idea was approved by Surge and {COLOR LIGHT_GRAY}The\n"
	.string "Leader{COLOR DARK_GRAY}! Good luck with the finals by the\l"
	.string "way! Afterwards I'm going to ask the\l"
	.string "champion for a battle. I want to see\l"
	.string "what the skill level is at the top!$"

LaboratoryHall_EventScript_Woman_Text_7:
# 54 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: The battle arena is a good place\n"
	.string "to train your pokemons and to rematch\l"
	.string "other Initiatives if you want to see\l"
	.string "how far they have come.\p"
	.string "The lab on the other hand is a good\n"
	.string "place if you need something more\l"
	.string "specific.$"

LaboratoryHall_EventScript_GuardBlock_Text_0:
# 62 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "Sorry kid, you're not ready yet to enter\n"
	.string "this area.$"

LaboratoryHall_EventScript_GuardOpen_Text_0:
# 74 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "This area leads to the battle Dojo, hear\n"
	.string "you'll be performing the Tournament.\p"
	.string "Once you're ready you can enter.$"

LaboratoryHall_EventScript_GuardOpen_Text_1:
# 76 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "This area lead to the battle Dojo.\p"
	.string "If you want to fight one of your\n"
	.string "colleagues, this is the place to do it!$"

LaboratoryHall_SignScript_BookCase_Text_0:
# 83 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "It seems to be a bookcase filled with\n"
	.string "books about different topics from\l"
	.string "pokemon biology to the history of the\l"
	.string "world.\p"
	.string "You don't feel like reading right now\n"
	.string "though.$"

LaboratoryHall_SignScript_LockedDrawer_Text_0:
# 89 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "It's a locked file cabinet. But why is it\n"
	.string "standing here out in the open?$"

LaboratoryHall_SignScript_Egg_Text_0:
# 95 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "An old pokemon egg is stored in this\n"
	.string "glass container. Who knows what\l"
	.string "pokemon it would contain?$"

LaboratoryHall_Trigger_Fiona_Text_0:
# 107 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "Oh {PLAYER}, you came!$"

LaboratoryHall_Trigger_Fiona_Text_1:
# 114 "data/maps/MODHeadquarters_LaboratoryHall/scripts.pory"
	.string "I just got my pokemon! They did suprise\n"
	.string "me however with another...\p"
	.string "I shouldn't spoil the surprise for you.\n"
	.string "You get to experience it soon enough!\p"
	.string "I'll be heading to Roll Call now, I will\n"
	.string "wait for you there.\l"
	.string "Maybe we can have a pokemon battle\l"
	.string "when you got your pokemon!\p"
	.string "See ya!$"
