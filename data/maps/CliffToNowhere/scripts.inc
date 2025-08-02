CliffToNowhere_MapScripts::
# 5 "data/maps/CliffToNowhere/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CliffToNowhere_ShowDeneith
# 6 "data/maps/CliffToNowhere/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CliffToNowhere_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CliffToNowhere_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/CliffToNowhere/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 13, CliffToNowhere_EscapeSequence
	.2byte 0


CliffToNowhere_ShowDeneith::
# 12 "data/maps/CliffToNowhere/scripts.pory"
	compare VAR_STORY_PROGRESSION, 13
	goto_if_eq CliffToNowhere_ShowDeneith_1
# 20 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 21 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
	return

CliffToNowhere_ShowDeneith_1:
# 14 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_FREE_SIMULATION
# 15 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
# 16 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_AIRANEA
	return


CliffToNowhere_EscapeSequence::
# 26 "data/maps/CliffToNowhere/scripts.pory"
	lockall
# 27 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 1, MAP_CLIFF_TO_NOWHERE
# 28 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 2, MAP_CLIFF_TO_NOWHERE
# 29 "data/maps/CliffToNowhere/scripts.pory"
	setobjectxy 1, 16, 15
# 30 "data/maps/CliffToNowhere/scripts.pory"
	setobjectxy 2, 16, 15
# 32 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_WalkDown1
# 33 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 35 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_NoticeUp
# 37 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 38 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 39 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 40 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 1, MAP_CLIFF_TO_NOWHERE
# 41 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_RunDown
# 42 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 43 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 44 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 45 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_BreakDoor
# 46 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 47 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 48 "data/maps/CliffToNowhere/scripts.pory"
	waitse
# 49 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_1
# 52 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_2
# 53 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_3
# 54 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_4
# 55 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CommonMovement_NoticeDown
# 56 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 57 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_5
# 65 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 14
# 66 "data/maps/CliffToNowhere/scripts.pory"
	special HealPlayerParty
# 67 "data/maps/CliffToNowhere/scripts.pory"
	trainerbattle_no_intro TRAINER_DENEITH_1, CliffToNowhere_DeneithLost
# 68 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 15
# 69 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_6
# 75 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 76 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_USB_STICK
# 77 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CliffToNowhere_PushedBack
# 78 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_Jumpoff
# 79 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 80 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 0, 1
# 81 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 1, 2
# 82 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 2, 6
# 83 "data/maps/CliffToNowhere/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT_CUSTOM
# 84 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_M_FLY
# 85 "data/maps/CliffToNowhere/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT_CUSTOM
# 86 "data/maps/CliffToNowhere/scripts.pory"
	removeobject 1, MAP_CLIFF_TO_NOWHERE
# 87 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 88 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 89 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 90 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 2, MAP_CLIFF_TO_NOWHERE
# 91 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CliffToNowhere_Pursue
# 92 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 93 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 94 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 95 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_7
# 96 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CliffToNowhere_BackToPlayer
# 97 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 98 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookRight
# 99 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 100 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_8, MSGBOX_YESNO
# 104 "data/maps/CliffToNowhere/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CliffToNowhere_EscapeSequence_2
# 116 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_10
CliffToNowhere_EscapeSequence_1:
# 120 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_11, MSGBOX_DEFAULT
# 124 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 125 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CliffToNowhere_BackToEntrance
# 126 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 127 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 128 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 129 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CommonMovement_WalkUp1
# 130 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 131 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 2, MAP_CLIFF_TO_NOWHERE
# 132 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 133 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 134 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
# 135 "data/maps/CliffToNowhere/scripts.pory"
	releaseall
	return

CliffToNowhere_EscapeSequence_2:
# 106 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_EscapeSequence_Text_9
# 111 "data/maps/CliffToNowhere/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 1
# 112 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_USB_STICK
	goto CliffToNowhere_EscapeSequence_1


CliffToNowhere_Event_DemoEnding::
# 140 "data/maps/CliffToNowhere/scripts.pory"
	lockall
# 141 "data/maps/CliffToNowhere/scripts.pory"
	faceplayer
# 142 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Event_DemoEnding_Text_0
# 151 "data/maps/CliffToNowhere/scripts.pory"
	releaseall
	return


# 158 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_RunDown:
# 159 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 160 "data/maps/CliffToNowhere/scripts.pory"
	face_up
	step_end

# 163 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BreakDoor:
# 164 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 165 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 166 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 167 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_up
# 168 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 169 "data/maps/CliffToNowhere/scripts.pory"
	jump_down
# 170 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
	step_end

# 173 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_PushedBack:
# 174 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 175 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 176 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
# 177 "data/maps/CliffToNowhere/scripts.pory"
	face_right
# 178 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 179 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_left
# 180 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
# 181 "data/maps/CliffToNowhere/scripts.pory"
	face_down
	step_end

# 184 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_Jumpoff:
# 185 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 185 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 185 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 185 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 185 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 186 "data/maps/CliffToNowhere/scripts.pory"
	jump_2_down
	step_end

# 189 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_Pursue:
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 190 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
	step_end

# 193 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BackToPlayer:
# 194 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 194 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 194 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 194 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 195 "data/maps/CliffToNowhere/scripts.pory"
	face_left
	step_end

# 198 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BackToEntrance:
# 199 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 199 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
	step_end

CliffToNowhere_EscapeSequence_Text_0:
# 35 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: STOP HER, RIGHT NOW!$"

CliffToNowhere_EscapeSequence_Text_1:
# 49 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: What are you doing?\n"
	.string "Open this door right now!\l"
	.string "We can't let {COLOR RED}her{COLOR DARK_GRAY} escape!$"

CliffToNowhere_EscapeSequence_Text_2:
# 52 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: W-w-we're trying {COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}, but it\n"
	.string "seems {COLOR RED}she{COLOR DARK_GRAY} has broken the door...$"

CliffToNowhere_EscapeSequence_Text_3:
# 53 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: Then go fix it!$"

CliffToNowhere_EscapeSequence_Text_4:
# 54 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: that should keep them busy at\n"
	.string "least...$"

CliffToNowhere_EscapeSequence_Text_5:
# 57 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Damn, seems like I didn't manage to\n"
	.string "outsmart all {COLOR LIGHT_GRAY}his{COLOR DARK_GRAY} henchman.\p"
	.string "Wait... I know you!\n"
	.string "You're that Special Initiative that was\l"
	.string "talking to {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}!\p"
	.string "I would love to stick around and talk\n"
	.string "some more with you, but I've places to\l"
	.string "be.\p"
	.string "...\p"
	.string "What do you mean you're not going to\n"
	.string "let me go?\p"
	.string "sigh... I'm not really prepared for a\n"
	.string "fight like this, but I've gotten too far\l"
	.string "to let someone stop me now!\l"
	.string "Bring it on Hotshot!$"

CliffToNowhere_EscapeSequence_Text_6:
# 69 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Deneith{COLOR DARK_GRAY}: And I would have gotten away\n"
	.string "with it if it wasn't for you...\p"
	.string "No matter, hear take your stupid usb\n"
	.string "back, we don't need it anyways.\l"
	.string "I was just a distraction so that\l"
	.string "nobody would notice Zero hacking their\l"
	.string "PCs and get all the data we needed.\p"
	.string "Still, I would recommend you watch what\n"
	.string "is on that stick.\l"
	.string "It'll contain some secrets of team MOD\l"
	.string "they will never disclose to you\l"
	.string "personally.\p"
	.string "Until our next encounter Hotshot!$"

CliffToNowhere_EscapeSequence_Text_7:
# 95 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: SHIT! just lost them.$"

CliffToNowhere_EscapeSequence_Text_8:
# 100 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: I thank you for your services\n"
	.string "{PLAYER}. You managed to distract her\l"
	.string "almost long enough for us to catch her\l"
	.string "before she escaped.\p"
	.string "I know you tried your best, but sadly\n"
	.string "these team A.S. members don't care for\l"
	.string "the result in a pokemon battle.\p"
	.string "This is important though, did you by\n"
	.string "any chance manage to snatch something\l"
	.string "of her or did she drop something by\l"
	.string "accident?\l"
	.string "I mean anything, did you manage to get\l"
	.string "anything at all from her?$"

CliffToNowhere_EscapeSequence_Text_9:
# 106 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: Great job apprenhending this\n"
	.string "{PLAYER}!\l"
	.string "This usb contains some...\l"
	.string "'sensative' data we would prefer to not\l"
	.string "fall in the enemies hands.\p"
	.string "We will take it over from here\n"
	.string "{PLAYER}.\p"
	.string "Please take this, as thanks for your\n"
	.string "hard work and loyalty.$"

CliffToNowhere_EscapeSequence_Text_10:
# 116 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: DAMMIT!\p"
	.string "...\p"
	.string "You don't need to worry too much about\n"
	.string "it {PLAYER}, let me take care of it\l"
	.string "from here, you go on your quest now, we\l"
	.string "will probably speak each other another\l"
	.string "time.$"

CliffToNowhere_EscapeSequence_Text_11:
# 120 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: One more thing though, be\n"
	.string "carefull around these A.S. Members\p"
	.string "Though you'll certainly be handsomely\n"
	.string "rewarded if you can bring any of them\l"
	.string "in, it has a 99.72% change of ending in\l"
	.string "your death.\p"
	.string "So please be very carefull around them,\l"
	.string "it would be shame to lose such a great\l"
	.string "asset.$"

CliffToNowhere_Event_DemoEnding_Text_0:
# 142 "data/maps/CliffToNowhere/scripts.pory"
	.string "Congratulations!\p"
	.string "This is the ending of the demo, the\n"
	.string "rest of the game will be worked on in\l"
	.string "the next couple of years.\p"
	.string "feel free to share feedback about the\n"
	.string "demo and what things you would like to\l"
	.string "see improved in the full version.\l"
	.string "Feel also free to share any spelling\l"
	.string "mistakes made in the demo, there are\l"
	.string "probably a lot.\p"
	.string "Found any exploits or mistakes? any\n"
	.string "glitches or bugs? any things that\l"
	.string "didn't work quite as well?\l"
	.string "All feedback is welcome!\p"
	.string "You're free to explore the MOD\n"
	.string "headquarters for as long as you like,\l"
	.string "but the official demo ends here.\p"
	.string "Also a warning, I cannot guarantee\n"
	.string "that any progress you made in this demo\l"
	.string "will be kept in the full release.\p"
	.string "With that being said: thank you for\n"
	.string "playing this demo!$"

CliffToNowhere_DeneithLost::
# 154 "data/maps/CliffToNowhere/scripts.pory"
	.string "Damn, I guess I should have been beter\n"
	.string "prepared for this$"
