CliffToNowhere_MapScripts::
# 7 "data/maps/CliffToNowhere/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CliffToNowhere_ShowDeneith
	.byte 0


CliffToNowhere_ShowDeneith::
# 11 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 12 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
# 13 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_FREE_SIMULATION
# 14 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 1, MAP_CLIFF_TO_NOWHERE
# 15 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 2, MAP_CLIFF_TO_NOWHERE
	return


CliffToNowhere_Trigger_EscapeLeft::
# 19 "data/maps/CliffToNowhere/scripts.pory"
	lockall
# 20 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
# 21 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_WalkDown1
# 22 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 23 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 2, MAP_CLIFF_TO_NOWHERE
# 24 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 1, MAP_CLIFF_TO_NOWHERE
# 25 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_NoticeUp
# 27 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 28 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 29 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 30 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 1, MAP_CLIFF_TO_NOWHERE
# 31 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_RunDown
# 32 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 33 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 34 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 35 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_BreakDoor
# 36 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 37 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 38 "data/maps/CliffToNowhere/scripts.pory"
	waitse
# 39 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_1
# 42 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_2
# 43 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_3
# 44 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_4
# 45 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CommonMovement_WalkDownAndNotice
# 46 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 47 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_5
# 55 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 14
# 56 "data/maps/CliffToNowhere/scripts.pory"
	trainerbattle_no_intro TRAINER_DENEITH_1, CliffToNowhere_DeneithLost
# 57 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 15
# 58 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_6
# 64 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 65 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_AIRANEA
# 66 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_USB_STICK
# 67 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CliffToNowhere_PushedBack
# 68 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 1, CliffToNowhere_Jumpoff
# 69 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 70 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 4, MAP_CLIFF_TO_NOWHERE
# 71 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 3, MAP_CLIFF_TO_NOWHERE
# 72 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 0, 1
# 73 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 1, 2
# 74 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 2, 6
# 75 "data/maps/CliffToNowhere/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT_CUSTOM
# 76 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_M_FLY
# 77 "data/maps/CliffToNowhere/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT_CUSTOM
# 78 "data/maps/CliffToNowhere/scripts.pory"
	removeobject 1, MAP_CLIFF_TO_NOWHERE
# 79 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 80 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 81 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 82 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 3, MAP_CLIFF_TO_NOWHERE
# 83 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 3, CliffToNowhere_Pursue
# 84 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 85 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 86 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 87 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_7
# 88 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 3, CliffToNowhere_BackToPlayer
# 89 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 90 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookRight
# 91 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 92 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_8, MSGBOX_YESNO
# 96 "data/maps/CliffToNowhere/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CliffToNowhere_Trigger_EscapeLeft_2
# 107 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_10
CliffToNowhere_Trigger_EscapeLeft_1:
# 111 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_11, MSGBOX_DEFAULT
# 116 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 117 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 3, CliffToNowhere_BackToEntrance
# 118 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 119 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 16, 15
# 120 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 121 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 3, CommonMovement_WalkUp1
# 122 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 123 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 3, MAP_CLIFF_TO_NOWHERE
# 124 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 16, 15
# 125 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 126 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
# 127 "data/maps/CliffToNowhere/scripts.pory"
	releaseall
	return

CliffToNowhere_Trigger_EscapeLeft_2:
# 98 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_9
# 102 "data/maps/CliffToNowhere/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 1
# 103 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_USB_STICK
	goto CliffToNowhere_Trigger_EscapeLeft_1


CliffToNowhere_Trigger_EscapeRight::
# 131 "data/maps/CliffToNowhere/scripts.pory"
	lockall
# 132 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
# 133 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_WalkDown1
# 134 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 135 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 2, MAP_CLIFF_TO_NOWHERE
# 136 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 1, MAP_CLIFF_TO_NOWHERE
# 137 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_0, MSGBOX_DEFAULT
# 138 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_NoticeUp
# 139 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 140 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 17, 15
# 141 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 142 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 2, MAP_CLIFF_TO_NOWHERE
# 143 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CliffToNowhere_RunDown
# 144 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 145 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 17, 15
# 146 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 147 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CliffToNowhere_BreakDoor
# 148 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 149 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 150 "data/maps/CliffToNowhere/scripts.pory"
	waitse
# 151 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_1
# 154 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_2
# 155 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_3
# 156 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_4
# 157 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CommonMovement_WalkDownAndNotice
# 158 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 159 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_5
# 167 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 14
# 168 "data/maps/CliffToNowhere/scripts.pory"
	trainerbattle_no_intro TRAINER_DENEITH_1, CliffToNowhere_DeneithLost
# 169 "data/maps/CliffToNowhere/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 15
# 170 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_6
# 176 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 177 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_HIDE_AIRANEA
# 178 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_USB_STICK
# 179 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CliffToNowhere_PushedBack
# 180 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 2, CliffToNowhere_Jumpoff
# 181 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 182 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 3, MAP_CLIFF_TO_NOWHERE
# 183 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 4, MAP_CLIFF_TO_NOWHERE
# 184 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 0, 2
# 185 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 1, 2
# 186 "data/maps/CliffToNowhere/scripts.pory"
	setfieldeffectargument 2, 6
# 187 "data/maps/CliffToNowhere/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT_CUSTOM
# 188 "data/maps/CliffToNowhere/scripts.pory"
	playse SE_M_FLY
# 189 "data/maps/CliffToNowhere/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT_CUSTOM
# 190 "data/maps/CliffToNowhere/scripts.pory"
	removeobject 2, MAP_CLIFF_TO_NOWHERE
# 191 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 192 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 17, 15
# 193 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 194 "data/maps/CliffToNowhere/scripts.pory"
	showobjectat 4, MAP_CLIFF_TO_NOWHERE
# 195 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 4, CliffToNowhere_Pursue
# 196 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 197 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 17, 15
# 198 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 199 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_7
# 200 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 4, CliffToNowhere_BackToPlayer
# 201 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 202 "data/maps/CliffToNowhere/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookRight
# 203 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 204 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_8, MSGBOX_YESNO
# 208 "data/maps/CliffToNowhere/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CliffToNowhere_Trigger_EscapeRight_2
# 219 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_10
CliffToNowhere_Trigger_EscapeRight_1:
# 223 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_11, MSGBOX_DEFAULT
# 228 "data/maps/CliffToNowhere/scripts.pory"
	closemessage
# 229 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 4, CliffToNowhere_BackToEntrance
# 230 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 231 "data/maps/CliffToNowhere/scripts.pory"
	opendoor 17, 15
# 232 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 233 "data/maps/CliffToNowhere/scripts.pory"
	applymovement 4, CommonMovement_WalkUp1
# 234 "data/maps/CliffToNowhere/scripts.pory"
	waitmovement 0
# 235 "data/maps/CliffToNowhere/scripts.pory"
	hideobjectat 4, MAP_CLIFF_TO_NOWHERE
# 236 "data/maps/CliffToNowhere/scripts.pory"
	closedoor 17, 15
# 237 "data/maps/CliffToNowhere/scripts.pory"
	waitdooranim
# 238 "data/maps/CliffToNowhere/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
# 239 "data/maps/CliffToNowhere/scripts.pory"
	releaseall
	return

CliffToNowhere_Trigger_EscapeRight_2:
# 210 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Trigger_EscapeLeft_Text_9
# 214 "data/maps/CliffToNowhere/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 1
# 215 "data/maps/CliffToNowhere/scripts.pory"
	clearflag FLAG_USB_STICK
	goto CliffToNowhere_Trigger_EscapeRight_1


CliffToNowhere_Event_DemoEnding::
# 244 "data/maps/CliffToNowhere/scripts.pory"
	lockall
# 245 "data/maps/CliffToNowhere/scripts.pory"
	faceplayer
# 246 "data/maps/CliffToNowhere/scripts.pory"
	msgbox CliffToNowhere_Event_DemoEnding_Text_0
# 255 "data/maps/CliffToNowhere/scripts.pory"
	releaseall
	return


# 262 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_RunDown:
# 263 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 264 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 265 "data/maps/CliffToNowhere/scripts.pory"
	face_up
	step_end

# 268 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BreakDoor:
# 269 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 270 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 271 "data/maps/CliffToNowhere/scripts.pory"
	walk_in_place_fast_up
# 272 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_up
# 273 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 274 "data/maps/CliffToNowhere/scripts.pory"
	jump_down
# 275 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
	step_end

# 278 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_PushedBack:
# 279 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 280 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 281 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
# 282 "data/maps/CliffToNowhere/scripts.pory"
	face_right
# 283 "data/maps/CliffToNowhere/scripts.pory"
	lock_facing_direction
# 284 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_left
# 285 "data/maps/CliffToNowhere/scripts.pory"
	unlock_facing_direction
# 286 "data/maps/CliffToNowhere/scripts.pory"
	face_down
	step_end

# 289 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_Jumpoff:
# 290 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 290 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 290 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 290 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 291 "data/maps/CliffToNowhere/scripts.pory"
	jump_2_down
	step_end

# 294 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_Pursue:
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
# 295 "data/maps/CliffToNowhere/scripts.pory"
	walk_fast_down
	step_end

# 298 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BackToPlayer:
# 299 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 299 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 299 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 300 "data/maps/CliffToNowhere/scripts.pory"
	face_left
	step_end

# 303 "data/maps/CliffToNowhere/scripts.pory"
CliffToNowhere_BackToEntrance:
# 304 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 304 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
# 304 "data/maps/CliffToNowhere/scripts.pory"
	walk_up
	step_end

CliffToNowhere_Trigger_EscapeLeft_Text_0:
# 25 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: STOP HER, RIGHT NOW!$"

CliffToNowhere_Trigger_EscapeLeft_Text_1:
# 39 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: What are you doing?\n"
	.string "Open this door right now!\l"
	.string "We can't let {COLOR RED}her{COLOR DARK_GRAY} escape!$"

CliffToNowhere_Trigger_EscapeLeft_Text_2:
# 42 "data/maps/CliffToNowhere/scripts.pory"
	.string "???: W-w-we're trying {COLOR RED}Airanea{COLOR DARK_GRAY}, but it\n"
	.string "seems {COLOR RED}she{COLOR DARK_GRAY} has broken the door...$"

CliffToNowhere_Trigger_EscapeLeft_Text_3:
# 43 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: Then go fix it!$"

CliffToNowhere_Trigger_EscapeLeft_Text_4:
# 44 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: that should keep them busy at\n"
	.string "least...$"

CliffToNowhere_Trigger_EscapeLeft_Text_5:
# 47 "data/maps/CliffToNowhere/scripts.pory"
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
# 58 "data/maps/CliffToNowhere/scripts.pory"
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

CliffToNowhere_Trigger_EscapeLeft_Text_7:
# 87 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: SHIT! just lost them.$"

CliffToNowhere_Trigger_EscapeLeft_Text_8:
# 92 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: I thank you for your services\n"
	.string "{PLAYER}. You managed to distract her\l"
	.string "almost long enough for us to catch her\l"
	.string "before she escaped.\p"
	.string "I know you tried your best, but sadly\n"
	.string "these team A.S. members don't care for\l"
	.string "the result in a pokemon battle.\p"
	.string "This is important though, did you by any\n"
	.string "chance manage to snatch something of\l"
	.string "her or did she drop something by\l"
	.string "accident?\l"
	.string "I mean anything, did you manage to get\l"
	.string "anything at all from her?$"

CliffToNowhere_Trigger_EscapeLeft_Text_9:
# 98 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: Great job apprenhending this\n"
	.string "{PLAYER}!\l"
	.string "This usb contains some very sensative\l"
	.string "data we would prefer to not fall in the\l"
	.string "enemies hands.\p"
	.string "We will take it over from here\n"
	.string "{PLAYER}.\p"
	.string "Please take this as thanks for your\n"
	.string "hard work and loyalty.$"

CliffToNowhere_Trigger_EscapeLeft_Text_10:
# 107 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: DAMMIT!\p"
	.string "...\p"
	.string "You don't need to worry too much about\n"
	.string "it {PLAYER}, let me take care of it\l"
	.string "from here, you go on your quest now, we\l"
	.string "will probably speak each other another\l"
	.string "time.$"

CliffToNowhere_Trigger_EscapeLeft_Text_11:
# 111 "data/maps/CliffToNowhere/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: One more thing though, be\n"
	.string "carefull around these A.S. Members\p"
	.string "They don't honour the rules of normal\n"
	.string "Pokemon battles, so even if you win,\l"
	.string "they will not give themselves over so\l"
	.string "easily.\p"
	.string "You'll certainly be handsomely rewarded\n"
	.string "if you can bring any of them in, but I\l"
	.string "doubt a little initiative like you will be\l"
	.string "able to do so.\p"
	.string "Furthermore, we have high hopes for\n"
	.string "you, so please be very carefull around\l"
	.string "them.\l"
	.string "It would be a shame if you died by their\l"
	.string "hands.$"

CliffToNowhere_Event_DemoEnding_Text_0:
# 246 "data/maps/CliffToNowhere/scripts.pory"
	.string "Congratulations!\p"
	.string "This is the ending of the demo, the rest\n"
	.string "of the game will be worked on in the\l"
	.string "next couple of years.\p"
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
	.string "Also a warning, I cannot guarantee that\n"
	.string "any progress you made in this demo will\l"
	.string "be kept in the full release.\p"
	.string "With that being said: thank you for\n"
	.string "playing this demo!$"

CliffToNowhere_DeneithLost::
# 258 "data/maps/CliffToNowhere/scripts.pory"
	.string "Damn, I guess I should have been beter\n"
	.string "prepared for this$"
