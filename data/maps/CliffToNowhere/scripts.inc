CliffToNowhere_MapScripts::
# 6 "data/maps/CliffToNowhere/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CliffToNowhere_ShowDeneith
	.byte 0


CliffToNowhere_ShowDeneith::
# 10 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
# 11 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 1, MAP_CLIFF_TO_NOWHERE
# 12 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 2, MAP_CLIFF_TO_NOWHERE
	return


CliffToNowhere_Trigger_EscapeLeft::
# 16 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_NoticeUp
# 17 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 19 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 1, MAP_CLIFF_TO_NOWHERE
# 20 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 21 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 22 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_RunDown
# 23 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 24 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 25 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 26 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_BreakDoor
# 27 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 28 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 29 "data/maps/CliffToNowhere/scripts.pory"
	waitse
# 30 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_1
# 33 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_2
# 34 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_3
# 35 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_4
# 36 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CommonMovement_NoticeDown
# 37 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 38 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_5
# 46 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 14
# 47 "data/maps/CliffToNowhere/scripts.pory"
	trainerbattle_no_intro TRAINER_DENEITH_1, CliffToNowhere_DeneithLost
# 48 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 15
# 49 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_6
# 55 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 56 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CliffToNowhere_PushedBack
# 57 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_Jumpoff
# 58 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 59 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 1, 1
# 60 "data/maps/CliffToNowhere/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 61 "data/maps/CliffToNowhere/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 62 "data/maps/CliffToNowhere/scripts.pory"
	removeobject 1, MAP_CLIFF_TO_NOWHERE
	return


# 69 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_RunDown:
# 70 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 71 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 72 "data/maps/CliffToNowhere/scripts.pory"
	face_up
	step_end

# 75 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BreakDoor:
# 76 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 77 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 78 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 79 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_up
# 80 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 81 "data/maps/CliffToNowhere/scripts.pory"
	jump_down
# 82 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
	step_end

# 85 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_PushedBack:
# 86 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 87 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 88 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 89 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
# 90 "data/maps/CliffToNowhere/scripts.pory"
	face_right
# 91 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 92 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_left
# 93 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
# 94 "data/maps/CliffToNowhere/scripts.pory"
	face_down
	step_end

# 97 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_Jumpoff:
# 98 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 98 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 98 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 98 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 98 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 99 "data/maps/CliffToNowhere/scripts.pory"
	jump_2_down
	step_end

CliffToNowhere_Trigger_EscapeLeft_Text_0:
# 17 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: STOP HER, RIGHT NOW!$"

CliffToNowhere_Trigger_EscapeLeft_Text_1:
# 30 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: What are you doing?\n"
	.string "Open this door right now!\l"
	.string "We can't let {COLOR RED}her{COLOR DARK_GRAY} escape!$"

CliffToNowhere_Trigger_EscapeLeft_Text_2:
# 33 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: W-w-we're {COLOR RED}Airanea{COLOR DARK_GRAY}, but it seems\n"
	.string "{COLOR RED}she{COLOR DARK_GRAY} has broken the door...$"

CliffToNowhere_Trigger_EscapeLeft_Text_3:
# 34 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: Then go fix it!$"

CliffToNowhere_Trigger_EscapeLeft_Text_4:
# 35 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: that should keep them busy at\n"
	.string "least...$"

CliffToNowhere_Trigger_EscapeLeft_Text_5:
# 38 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Damn, seems like I didn't manage to\n"
	.string "outsmart all {COLOR LIGHT_GRAY}his{COLOR DARK_GRAY} henchman.\p"
	.string "Wait... I know you!\n"
	.string "You're that Special Initiative that was\l"
	.string "talking to {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}!\p"
	.string "I would love to stick around and talk\n"
	.string "some more with you, but I've places to\l"
	.string "be.\p"
	.string "...\p"
	.string "What do you mean you're not going to let\n"
	.string "me go?\p"
	.string "sigh... I'm not really prepared for a\n"
	.string "fight like this, but I've gotten too far\l"
	.string "to let someone stop me now!\l"
	.string "Bring it on Hotshot!$"

CliffToNowhere_Trigger_EscapeLeft_Text_6:
# 49 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Deneith{COLOR DARK_GRAY}: And I would have gotten away\n"
	.string "with it if it wasn't for you...\p"
	.string "No matter, hear take your stupid usb\n"
	.string "back, we don't need it anyways.\l"
	.string "I was just a distraction so that nobody\l"
	.string "would notice Zero hacking their PCs and\l"
	.string "get all the data we needed.\p"
	.string "Still, I would recommend you watch what\n"
	.string "is on that stick.\l"
	.string "It'll contain some secrets of team MOD\l"
	.string "they will never disclose to you\l"
	.string "personally.\p"
	.string "Until our next encounter Hotshot!$"

CliffToNowhere_DeneithLost::
# 65 "data/maps/CliffToNowhere/scripts.pory"
	.string "Damn, I guess I should have been beter\n"
	.string "preparred for this$"
