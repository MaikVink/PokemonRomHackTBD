LaboratoryHall_MapScripts::
# 4 "data/maps/LaboratoryHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LaboratoryHall_OnTransition
	.byte 0


LaboratoryHall_OnTransition::
# 8 "data/maps/LaboratoryHall/scripts.pory"
	hideobjectat 1, MAP_LABORATORY_HALL
# 9 "data/maps/LaboratoryHall/scripts.pory"
	hideobjectat 2, MAP_LABORATORY_HALL
# 10 "data/maps/LaboratoryHall/scripts.pory"
	hideobjectat 3, MAP_LABORATORY_HALL
	return


LaboratoryHall_EventScript_Woman::
# 14 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 15 "data/maps/LaboratoryHall/scripts.pory"
	faceplayer
# 16 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Woman_Text_0
# 17 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_EventScript_Guard::
# 21 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 22 "data/maps/LaboratoryHall/scripts.pory"
	faceplayer
# 23 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_EventScript_Guard_Text_0
# 24 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_BookCase::
# 28 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 29 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_BookCase_Text_0
# 31 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_LockedDrawer::
# 35 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 36 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_LockedDrawer_Text_0
# 37 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_SignScript_Egg::
# 41 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 42 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_SignScript_Egg_Text_0
# 43 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


LaboratoryHall_Trigger_Fiona::
# 47 "data/maps/LaboratoryHall/scripts.pory"
	lockall
# 48 "data/maps/LaboratoryHall/scripts.pory"
	opendoor 14, 1
# 49 "data/maps/LaboratoryHall/scripts.pory"
	waitdooranim
# 50 "data/maps/LaboratoryHall/scripts.pory"
	showobjectat 3, MAP_LABORATORY_HALL
# 51 "data/maps/LaboratoryHall/scripts.pory"
	applymovement 3, LaboratoryHalll_NoticePlayer
# 52 "data/maps/LaboratoryHall/scripts.pory"
	waitmovement 0
# 54 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_Trigger_Fiona_Text_0
# 55 "data/maps/LaboratoryHall/scripts.pory"
	applymovement 3, LabrotaryHall_moveDown
# 56 "data/maps/LaboratoryHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabrotaryHall_moveOutOfTheWay
# 57 "data/maps/LaboratoryHall/scripts.pory"
	waitmovement 0
# 58 "data/maps/LaboratoryHall/scripts.pory"
	closedoor 14, 1
# 59 "data/maps/LaboratoryHall/scripts.pory"
	waitdooranim
# 61 "data/maps/LaboratoryHall/scripts.pory"
	msgbox LaboratoryHall_Trigger_Fiona_Text_1
# 66 "data/maps/LaboratoryHall/scripts.pory"
	applymovement 3, LabrotaryHall_moveAway
# 67 "data/maps/LaboratoryHall/scripts.pory"
	waitmovement 0
# 69 "data/maps/LaboratoryHall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 3
# 70 "data/maps/LaboratoryHall/scripts.pory"
	removeobject 3
# 71 "data/maps/LaboratoryHall/scripts.pory"
	releaseall
	return


# 74 "data/maps/LaboratoryHall/scripts.pory"
LaboratoryHalll_NoticePlayer:
# 75 "data/maps/LaboratoryHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 78 "data/maps/LaboratoryHall/scripts.pory"
LabrotaryHall_moveDown:
# 79 "data/maps/LaboratoryHall/scripts.pory"
	walk_down
# 80 "data/maps/LaboratoryHall/scripts.pory"
	face_left
	step_end

# 83 "data/maps/LaboratoryHall/scripts.pory"
LabrotaryHall_moveOutOfTheWay:
# 84 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 85 "data/maps/LaboratoryHall/scripts.pory"
	face_right
	step_end

# 88 "data/maps/LaboratoryHall/scripts.pory"
LabrotaryHall_moveAway:
# 89 "data/maps/LaboratoryHall/scripts.pory"
	walk_down
# 89 "data/maps/LaboratoryHall/scripts.pory"
	walk_down
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
# 90 "data/maps/LaboratoryHall/scripts.pory"
	walk_left
	step_end

LaboratoryHall_EventScript_Woman_Text_0:
# 16 "data/maps/LaboratoryHall/scripts.pory"
	.string "I just received my pokemon from the\n"
	.string "professor!\p"
	.string "I'm quite surprised about the method\n"
	.string "they use. If you would also like to get\l"
	.string "one, he is just a little bit up ahead!$"

LaboratoryHall_EventScript_Guard_Text_0:
# 23 "data/maps/LaboratoryHall/scripts.pory"
	.string "Sorry kid, you're not ready yet to enter\n"
	.string "this area.$"

LaboratoryHall_SignScript_BookCase_Text_0:
# 29 "data/maps/LaboratoryHall/scripts.pory"
	.string "It seems to be a bookcase filled with\n"
	.string "books about different topics from\l"
	.string "pokemon biology to the history of the\l"
	.string "world.\p"
	.string "You don't feel like reading right now\n"
	.string "though.$"

LaboratoryHall_SignScript_LockedDrawer_Text_0:
# 36 "data/maps/LaboratoryHall/scripts.pory"
	.string "It's a locked file cabinet. But why is it\n"
	.string "standing here out in the open?$"

LaboratoryHall_SignScript_Egg_Text_0:
# 42 "data/maps/LaboratoryHall/scripts.pory"
	.string "An old pokemon egg is stored in this\n"
	.string "glass container. Who knows what\l"
	.string "pokemon it would contain?$"

LaboratoryHall_Trigger_Fiona_Text_0:
# 54 "data/maps/LaboratoryHall/scripts.pory"
	.string "Oh {PLAYER}, you came!$"

LaboratoryHall_Trigger_Fiona_Text_1:
# 61 "data/maps/LaboratoryHall/scripts.pory"
	.string "I just got my pokemon! They did suprise\n"
	.string "me however with another...\p"
	.string "I shouldn't spoil the surprise for you.\n"
	.string "You get to experience it soon enough!\p"
	.string "I'll be heading to Roll Call now, I will\n"
	.string "wait for you there.\l"
	.string "Maybe we can have a pokemon battle\l"
	.string "when you got your pokemon!\p"
	.string "See ya!$"
