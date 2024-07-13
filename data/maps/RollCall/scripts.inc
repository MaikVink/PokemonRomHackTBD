RollCall_MapScripts::
	.byte 0


RollCall_EventScript_FatGuy::
# 21 "data/maps/RollCall/scripts.pory"
	lockall
# 22 "data/maps/RollCall/scripts.pory"
	faceplayer
# 23 "data/maps/RollCall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 25 "data/maps/RollCall/scripts.pory"
	case 0, RollCall_EventScript_FatGuy_3
# 26 "data/maps/RollCall/scripts.pory"
	case 1, RollCall_EventScript_FatGuy_3
# 27 "data/maps/RollCall/scripts.pory"
	case 2, RollCall_EventScript_FatGuy_3
# 28 "data/maps/RollCall/scripts.pory"
	case 3, RollCall_EventScript_FatGuy_3
# 29 "data/maps/RollCall/scripts.pory"
	case 4, RollCall_EventScript_FatGuy_3
# 32 "data/maps/RollCall/scripts.pory"
	case 5, RollCall_EventScript_FatGuy_4
# 34 "data/maps/RollCall/scripts.pory"
	case 6, RollCall_EventScript_FatGuy_5
# 44 "data/maps/RollCall/scripts.pory"
	case 7, RollCall_EventScript_FatGuy_6
# 53 "data/maps/RollCall/scripts.pory"
	case 8, RollCall_EventScript_FatGuy_7
# 62 "data/maps/RollCall/scripts.pory"
	case 9, RollCall_EventScript_FatGuy_8
# 72 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_10
RollCall_EventScript_FatGuy_1:
# 74 "data/maps/RollCall/scripts.pory"
	releaseall
	return

RollCall_EventScript_FatGuy_3:
# 30 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_0
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_4:
# 33 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_1
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_5:
# 35 "data/maps/RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_10
# 42 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_3
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_6:
# 45 "data/maps/RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_13
# 51 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_5
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_7:
# 54 "data/maps/RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_16
# 60 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_7
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_8:
# 63 "data/maps/RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_19
# 69 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_9
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_10:
# 37 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_2
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_13:
# 47 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_4
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_16:
# 56 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_6
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_19:
# 65 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_8
	goto RollCall_EventScript_FatGuy_1


RollCall_EventScript_LadyLeft::
# 78 "data/maps/RollCall/scripts.pory"
	lockall
# 79 "data/maps/RollCall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 81 "data/maps/RollCall/scripts.pory"
	case 0, RollCall_EventScript_LadyLeft_3
# 82 "data/maps/RollCall/scripts.pory"
	case 1, RollCall_EventScript_LadyLeft_3
# 83 "data/maps/RollCall/scripts.pory"
	case 2, RollCall_EventScript_LadyLeft_3
# 84 "data/maps/RollCall/scripts.pory"
	case 3, RollCall_EventScript_LadyLeft_3
# 85 "data/maps/RollCall/scripts.pory"
	case 4, RollCall_EventScript_LadyLeft_3
# 87 "data/maps/RollCall/scripts.pory"
	case 5, RollCall_EventScript_LadyLeft_4
# 89 "data/maps/RollCall/scripts.pory"
	case 6, RollCall_EventScript_LadyLeft_5
# 91 "data/maps/RollCall/scripts.pory"
	case 7, RollCall_EventScript_LadyLeft_6
# 93 "data/maps/RollCall/scripts.pory"
	case 8, RollCall_EventScript_LadyLeft_7
# 95 "data/maps/RollCall/scripts.pory"
	case 9, RollCall_EventScript_LadyLeft_8
# 105 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_7
RollCall_EventScript_LadyLeft_1:
# 108 "data/maps/RollCall/scripts.pory"
	releaseall
	return

RollCall_EventScript_LadyLeft_3:
# 86 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_0
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_4:
# 88 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_1
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_5:
# 90 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_2
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_6:
# 92 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_3
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_7:
# 94 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_4
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_8:
# 96 "data/maps/RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_LadyLeft_10
# 102 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_6
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_10:
# 98 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_5
	goto RollCall_EventScript_LadyLeft_1


RollCall_EventScript_LadyRight::
# 112 "data/maps/RollCall/scripts.pory"
	lockall
# 113 "data/maps/RollCall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 115 "data/maps/RollCall/scripts.pory"
	case 0, RollCall_EventScript_LadyRight_3
# 116 "data/maps/RollCall/scripts.pory"
	case 1, RollCall_EventScript_LadyRight_3
# 117 "data/maps/RollCall/scripts.pory"
	case 2, RollCall_EventScript_LadyRight_3
# 118 "data/maps/RollCall/scripts.pory"
	case 3, RollCall_EventScript_LadyRight_3
# 119 "data/maps/RollCall/scripts.pory"
	case 4, RollCall_EventScript_LadyRight_3
# 121 "data/maps/RollCall/scripts.pory"
	case 5, RollCall_EventScript_LadyRight_4
# 123 "data/maps/RollCall/scripts.pory"
	case 6, RollCall_EventScript_LadyRight_5
# 125 "data/maps/RollCall/scripts.pory"
	case 7, RollCall_EventScript_LadyRight_6
# 127 "data/maps/RollCall/scripts.pory"
	case 8, RollCall_EventScript_LadyRight_7
# 129 "data/maps/RollCall/scripts.pory"
	case 9, RollCall_EventScript_LadyRight_8
# 139 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_7
RollCall_EventScript_LadyRight_1:
# 141 "data/maps/RollCall/scripts.pory"
	releaseall
	return

RollCall_EventScript_LadyRight_3:
# 120 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_0
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_4:
# 122 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_1
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_5:
# 124 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_2
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_6:
# 126 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_3
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_7:
# 128 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_4
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_8:
# 130 "data/maps/RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_LadyRight_10
# 136 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_6
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_10:
# 132 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_5
	goto RollCall_EventScript_LadyRight_1


RollCall_EventScript_Guard::
# 145 "data/maps/RollCall/scripts.pory"
	lockall
# 146 "data/maps/RollCall/scripts.pory"
	faceplayer
# 147 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_Guard_Text_0
# 148 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_EventScript_Fiona::
# 152 "data/maps/RollCall/scripts.pory"
	lockall
# 153 "data/maps/RollCall/scripts.pory"
	faceplayer
# 154 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_Fiona_Text_0
# 156 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_Trigger_MeetTheLeaderLeft::
# 160 "data/maps/RollCall/scripts.pory"
	lockall
# 161 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_Trigger_MeetTheLeaderLeft_Text_0
# 162 "data/maps/RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_MoveForwardLeft
# 163 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 164 "data/maps/RollCall/scripts.pory"
	call RollCall_MeetTheLeader
# 165 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_Trigger_MeetTheLeaderRight::
# 169 "data/maps/RollCall/scripts.pory"
	lockall
# 170 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_Trigger_MeetTheLeaderLeft_Text_0
# 171 "data/maps/RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_MoveForwardRight
# 172 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 173 "data/maps/RollCall/scripts.pory"
	call RollCall_MeetTheLeader
# 174 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_MeetTheLeader::
# 178 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_0
# 179 "data/maps/RollCall/scripts.pory"
	applymovement 1, RollCall_Movement_WalkOutOfTheWay
# 180 "data/maps/RollCall/scripts.pory"
	showobjectat 14, MAP_ROLL_CALL
# 181 "data/maps/RollCall/scripts.pory"
	applymovement 14, RollCall_Movement_InFrame
# 182 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_1
# 183 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 184 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_2
# 185 "data/maps/RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_JumpScare
# 186 "data/maps/RollCall/scripts.pory"
	applymovement 5, RollCall_Movement_JumpScare
# 187 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 188 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_3
# 189 "data/maps/RollCall/scripts.pory"
	hideobjectat 13, MAP_ROLL_CALL
# 191 "data/maps/RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_Player
# 192 "data/maps/RollCall/scripts.pory"
	applymovement 5, RollCall_Movement_Fiona
# 193 "data/maps/RollCall/scripts.pory"
	applymovement 6, RollCall_Movement_PokeFanF
# 194 "data/maps/RollCall/scripts.pory"
	applymovement 3, RollCall_Movement_Woman2
# 195 "data/maps/RollCall/scripts.pory"
	applymovement 11, RollCall_Movement_Man3
# 196 "data/maps/RollCall/scripts.pory"
	applymovement 7, RollCall_Movement_Hiker
# 197 "data/maps/RollCall/scripts.pory"
	applymovement 4, RollCall_Movement_Receptionist
# 198 "data/maps/RollCall/scripts.pory"
	applymovement 12, RollCall_Movement_Woman5
# 199 "data/maps/RollCall/scripts.pory"
	applymovement 2, RollCall_Movement_FatGuy
# 200 "data/maps/RollCall/scripts.pory"
	applymovement 8, RollCall_Movement_Mom
# 201 "data/maps/RollCall/scripts.pory"
	applymovement 10, RollCall_Movement_NinjaBoy
# 202 "data/maps/RollCall/scripts.pory"
	waitmovement 2
# 203 "data/maps/RollCall/scripts.pory"
	applymovement 9, RollCall_Movement_Man5
# 204 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 205 "data/maps/RollCall/scripts.pory"
	showobjectat 14, MAP_ROLL_CALL
# 207 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_4
# 210 "data/maps/RollCall/scripts.pory"
	applymovement 14, RollCall_Movement_BodyGuard_MakeSpace
# 211 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 212 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_5
# 213 "data/maps/RollCall/scripts.pory"
	showobjectat 13, MAP_ROLL_CALL
# 214 "data/maps/RollCall/scripts.pory"
	applymovement 13, RollCall_Movement_Leader_Enter
# 215 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 216 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_6
# 220 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_7
# 225 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_8
# 228 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_9
# 232 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_10
# 234 "data/maps/RollCall/scripts.pory"
	applymovement 13, RollCall_Movement_Leader_Exit
# 235 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 236 "data/maps/RollCall/scripts.pory"
	hideobjectat 13, MAP_ROLL_CALL
# 238 "data/maps/RollCall/scripts.pory"
	applymovement 14, RollCall_Movement_TakePlace
# 239 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 240 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_11
# 241 "data/maps/RollCall/scripts.pory"
	applymovement 14, RollCall_Movement_OutOfFrame
# 242 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 243 "data/maps/RollCall/scripts.pory"
	hideobjectat 14, MAP_ROLL_CALL
# 244 "data/maps/RollCall/scripts.pory"
	applymovement 1, RollCall_Movement_Guard_BlockDoor
# 245 "data/maps/RollCall/scripts.pory"
	applymovement 5, RollCall_Movement_WalkLeft
# 246 "data/maps/RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_LookRight
# 247 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 248 "data/maps/RollCall/scripts.pory"
	applymovement 11, RollCall_Movement_WalkAwayShort
# 249 "data/maps/RollCall/scripts.pory"
	applymovement 9, RollCall_Movement_WalkAwayShort
# 250 "data/maps/RollCall/scripts.pory"
	applymovement 7, RollCall_Movement_WalkAwayShort
# 251 "data/maps/RollCall/scripts.pory"
	applymovement 12, RollCall_Movement_WalkAwayShort
# 252 "data/maps/RollCall/scripts.pory"
	applymovement 10, RollCall_Movement_WalkAwayShort
# 253 "data/maps/RollCall/scripts.pory"
	applymovement 8, RollCall_Movement_WalkAwayShort
# 254 "data/maps/RollCall/scripts.pory"
	applymovement 6, RollCall_Movement_WalkAwayLong
# 255 "data/maps/RollCall/scripts.pory"
	applymovement 2, RollCall_Movement_FatGuy_Return
# 256 "data/maps/RollCall/scripts.pory"
	applymovement 3, RollCall_Movement_WalkDown
# 257 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_12
# 264 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 265 "data/maps/RollCall/scripts.pory"
	removeobject 11, MAP_ROLL_CALL
# 266 "data/maps/RollCall/scripts.pory"
	removeobject 9, MAP_ROLL_CALL
# 267 "data/maps/RollCall/scripts.pory"
	removeobject 8, MAP_ROLL_CALL
# 268 "data/maps/RollCall/scripts.pory"
	removeobject 10, MAP_ROLL_CALL
# 269 "data/maps/RollCall/scripts.pory"
	removeobject 12, MAP_ROLL_CALL
# 270 "data/maps/RollCall/scripts.pory"
	removeobject 7, MAP_ROLL_CALL
# 271 "data/maps/RollCall/scripts.pory"
	removeobject 6, MAP_ROLL_CALL
# 273 "data/maps/RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_LookDown
# 274 "data/maps/RollCall/scripts.pory"
	applymovement 5, RollCall_Movement_WalkAwayLong
# 275 "data/maps/RollCall/scripts.pory"
	waitmovement 0
# 276 "data/maps/RollCall/scripts.pory"
	removeobject 5, MAP_ROLL_CALL
# 278 "data/maps/RollCall/scripts.pory"
	setflag FLAG_REVERSE_ROLLCALL_FLAG
# 279 "data/maps/RollCall/scripts.pory"
	setflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 280 "data/maps/RollCall/scripts.pory"
	clearflag FLAG_FIONA_ROOM
# 281 "data/maps/RollCall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 5
# 282 "data/maps/RollCall/scripts.pory"
	setflag FLAG_BATTLE_WON
	return


# 285 "data/maps/RollCall/scripts.pory"
RollCall_Movement_MoveForwardLeft:
# 286 "data/maps/RollCall/scripts.pory"
	walk_up
# 286 "data/maps/RollCall/scripts.pory"
	walk_up
# 286 "data/maps/RollCall/scripts.pory"
	walk_up
# 286 "data/maps/RollCall/scripts.pory"
	walk_up
# 286 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 289 "data/maps/RollCall/scripts.pory"
RollCall_Movement_MoveForwardRight:
# 290 "data/maps/RollCall/scripts.pory"
	walk_up
# 290 "data/maps/RollCall/scripts.pory"
	walk_up
# 291 "data/maps/RollCall/scripts.pory"
	walk_left
# 292 "data/maps/RollCall/scripts.pory"
	walk_up
# 292 "data/maps/RollCall/scripts.pory"
	walk_up
# 292 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 295 "data/maps/RollCall/scripts.pory"
RollCall_Movement_WalkOutOfTheWay:
# 296 "data/maps/RollCall/scripts.pory"
	walk_right
# 297 "data/maps/RollCall/scripts.pory"
	face_down
	step_end

# 300 "data/maps/RollCall/scripts.pory"
RollCall_Movement_InFrame:
# 301 "data/maps/RollCall/scripts.pory"
	walk_down
# 302 "data/maps/RollCall/scripts.pory"
	walk_left
# 302 "data/maps/RollCall/scripts.pory"
	walk_left
# 302 "data/maps/RollCall/scripts.pory"
	walk_left
# 303 "data/maps/RollCall/scripts.pory"
	face_down
	step_end

# 306 "data/maps/RollCall/scripts.pory"
RollCall_Movement_JumpScare:
# 307 "data/maps/RollCall/scripts.pory"
	face_up
# 308 "data/maps/RollCall/scripts.pory"
	emote_exclamation_mark
	step_end

# 311 "data/maps/RollCall/scripts.pory"
RollCall_Movement_PokeFanF:
# 312 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 315 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Fiona:
# 316 "data/maps/RollCall/scripts.pory"
	walk_up
# 317 "data/maps/RollCall/scripts.pory"
	walk_right
# 317 "data/maps/RollCall/scripts.pory"
	walk_right
# 318 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 321 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Player:
# 322 "data/maps/RollCall/scripts.pory"
	walk_up
# 322 "data/maps/RollCall/scripts.pory"
	walk_up
# 322 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 325 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Woman2:
# 326 "data/maps/RollCall/scripts.pory"
	walk_right
# 327 "data/maps/RollCall/scripts.pory"
	walk_up
# 327 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 330 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Man3:
# 331 "data/maps/RollCall/scripts.pory"
	walk_right
# 332 "data/maps/RollCall/scripts.pory"
	face_up
	step_end

# 335 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Man5:
# 336 "data/maps/RollCall/scripts.pory"
	walk_right
# 337 "data/maps/RollCall/scripts.pory"
	face_up
	step_end

# 340 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Hiker:
# 341 "data/maps/RollCall/scripts.pory"
	walk_down
# 341 "data/maps/RollCall/scripts.pory"
	walk_down
# 341 "data/maps/RollCall/scripts.pory"
	walk_down
# 341 "data/maps/RollCall/scripts.pory"
	walk_down
# 342 "data/maps/RollCall/scripts.pory"
	walk_right
# 343 "data/maps/RollCall/scripts.pory"
	face_up
	step_end

# 346 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Receptionist:
# 347 "data/maps/RollCall/scripts.pory"
	walk_right
# 347 "data/maps/RollCall/scripts.pory"
	walk_right
# 348 "data/maps/RollCall/scripts.pory"
	face_up
	step_end

# 351 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Woman5:
# 352 "data/maps/RollCall/scripts.pory"
	walk_down
# 353 "data/maps/RollCall/scripts.pory"
	face_up
	step_end

# 356 "data/maps/RollCall/scripts.pory"
RollCall_Movement_FatGuy:
# 357 "data/maps/RollCall/scripts.pory"
	walk_right
# 357 "data/maps/RollCall/scripts.pory"
	walk_right
# 357 "data/maps/RollCall/scripts.pory"
	walk_right
# 358 "data/maps/RollCall/scripts.pory"
	walk_up
# 358 "data/maps/RollCall/scripts.pory"
	walk_up
# 359 "data/maps/RollCall/scripts.pory"
	walk_right
# 359 "data/maps/RollCall/scripts.pory"
	walk_right
# 360 "data/maps/RollCall/scripts.pory"
	walk_up
# 360 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 363 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Mom:
# 364 "data/maps/RollCall/scripts.pory"
	walk_up
# 364 "data/maps/RollCall/scripts.pory"
	walk_up
# 365 "data/maps/RollCall/scripts.pory"
	walk_left
# 365 "data/maps/RollCall/scripts.pory"
	walk_left
# 366 "data/maps/RollCall/scripts.pory"
	face_up
	step_end

# 369 "data/maps/RollCall/scripts.pory"
RollCall_Movement_NinjaBoy:
# 370 "data/maps/RollCall/scripts.pory"
	walk_up
# 370 "data/maps/RollCall/scripts.pory"
	walk_up
# 370 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/RollCall/scripts.pory"
RollCall_Movement_BodyGuard_MakeSpace:
# 374 "data/maps/RollCall/scripts.pory"
	walk_left
# 375 "data/maps/RollCall/scripts.pory"
	face_right
	step_end

# 378 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Leader_Enter:
# 379 "data/maps/RollCall/scripts.pory"
	walk_slow_down
# 380 "data/maps/RollCall/scripts.pory"
	walk_slow_left
# 380 "data/maps/RollCall/scripts.pory"
	walk_slow_left
# 380 "data/maps/RollCall/scripts.pory"
	walk_slow_left
# 381 "data/maps/RollCall/scripts.pory"
	face_down
	step_end

# 384 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Leader_Exit:
# 385 "data/maps/RollCall/scripts.pory"
	walk_slow_right
# 385 "data/maps/RollCall/scripts.pory"
	walk_slow_right
# 385 "data/maps/RollCall/scripts.pory"
	walk_slow_right
# 386 "data/maps/RollCall/scripts.pory"
	walk_slow_up
	step_end

# 389 "data/maps/RollCall/scripts.pory"
RollCall_Movement_TakePlace:
# 390 "data/maps/RollCall/scripts.pory"
	walk_right
# 391 "data/maps/RollCall/scripts.pory"
	face_down
	step_end

# 394 "data/maps/RollCall/scripts.pory"
RollCall_Movement_OutOfFrame:
# 395 "data/maps/RollCall/scripts.pory"
	walk_right
# 395 "data/maps/RollCall/scripts.pory"
	walk_right
# 395 "data/maps/RollCall/scripts.pory"
	walk_right
# 396 "data/maps/RollCall/scripts.pory"
	walk_up
	step_end

# 399 "data/maps/RollCall/scripts.pory"
RollCall_Movement_Guard_BlockDoor:
# 400 "data/maps/RollCall/scripts.pory"
	walk_left
# 401 "data/maps/RollCall/scripts.pory"
	face_down
	step_end

# 404 "data/maps/RollCall/scripts.pory"
RollCall_Movement_WalkLeft:
# 405 "data/maps/RollCall/scripts.pory"
	walk_left
	step_end

# 408 "data/maps/RollCall/scripts.pory"
RollCall_Movement_LookRight:
# 409 "data/maps/RollCall/scripts.pory"
	face_right
	step_end

# 412 "data/maps/RollCall/scripts.pory"
RollCall_Movement_LookDown:
# 413 "data/maps/RollCall/scripts.pory"
	face_down
	step_end

# 416 "data/maps/RollCall/scripts.pory"
RollCall_Movement_WalkAwayShort:
# 417 "data/maps/RollCall/scripts.pory"
	walk_down
# 417 "data/maps/RollCall/scripts.pory"
	walk_down
# 417 "data/maps/RollCall/scripts.pory"
	walk_down
# 417 "data/maps/RollCall/scripts.pory"
	walk_down
# 417 "data/maps/RollCall/scripts.pory"
	walk_down
# 417 "data/maps/RollCall/scripts.pory"
	walk_down
	step_end

# 420 "data/maps/RollCall/scripts.pory"
RollCall_Movement_WalkAwayLong:
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
# 421 "data/maps/RollCall/scripts.pory"
	walk_down
	step_end

# 424 "data/maps/RollCall/scripts.pory"
RollCall_Movement_WalkDown:
# 425 "data/maps/RollCall/scripts.pory"
	walk_down
	step_end

# 428 "data/maps/RollCall/scripts.pory"
RollCall_Movement_FatGuy_Return:
# 429 "data/maps/RollCall/scripts.pory"
	walk_down
# 429 "data/maps/RollCall/scripts.pory"
	walk_down
# 429 "data/maps/RollCall/scripts.pory"
	walk_down
# 429 "data/maps/RollCall/scripts.pory"
	walk_down
# 430 "data/maps/RollCall/scripts.pory"
	walk_left
# 430 "data/maps/RollCall/scripts.pory"
	walk_left
# 430 "data/maps/RollCall/scripts.pory"
	walk_left
# 430 "data/maps/RollCall/scripts.pory"
	walk_left
# 430 "data/maps/RollCall/scripts.pory"
	walk_left
# 431 "data/maps/RollCall/scripts.pory"
	face_right
	step_end

RollCall_EventScript_FatGuy_Text_0:
# 30 "data/maps/RollCall/scripts.pory"
	.string "We were told to go to this room after we\n"
	.string "got our pokemon.\p"
	.string "I wonder if this means we will get to\n"
	.string "meet {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}...$"

RollCall_EventScript_FatGuy_Text_1:
# 33 "data/maps/RollCall/scripts.pory"
	.string "I cannot believe, the rumors are true!\n"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} was here and he talked to us\l"
	.string "directly!\l"
	.string "I have never been more excited in my\l"
	.string "life!$"

RollCall_EventScript_FatGuy_Text_2:
# 37 "data/maps/RollCall/scripts.pory"
	.string "Did you come to check up on me? Don't\n"
	.string "worry I don't hate you or anything for\l"
	.string "beating me. I acknowledge that I lacked\l"
	.string "the skill to win this battle, you won\l"
	.string "fair and square!\l"
	.string "I'll be rooting for you to win!$"

RollCall_EventScript_FatGuy_Text_3:
# 42 "data/maps/RollCall/scripts.pory"
	.string "So you're going to be my first ever\n"
	.string "opponent? I'm not going to lie, I'm very\l"
	.string "nervous for my first ever pokemon\l"
	.string "battle.$"

RollCall_EventScript_FatGuy_Text_4:
# 47 "data/maps/RollCall/scripts.pory"
	.string "Another win under your belt, you really\n"
	.string "are something else!$"

RollCall_EventScript_FatGuy_Text_5:
# 51 "data/maps/RollCall/scripts.pory"
	.string "A new day, a new round.\n"
	.string "Good luck in the tournament {PLAYER}!$"

RollCall_EventScript_FatGuy_Text_6:
# 56 "data/maps/RollCall/scripts.pory"
	.string "Did you see the look on that Bella's\n"
	.string "face? It was like your win insulted her\l"
	.string "entire existance HAHAHAHA!$"

RollCall_EventScript_FatGuy_Text_7:
# 60 "data/maps/RollCall/scripts.pory"
	.string "I'm already rooting for you, but you'll\n"
	.string "do everyone here a favor if you would\l"
	.string "win the next battle, believe me.$"

RollCall_EventScript_FatGuy_Text_8:
# 65 "data/maps/RollCall/scripts.pory"
	.string "YOU ACTUALLY DID IT! I'm so honoured to\n"
	.string "be your first loss, my dear Champion. I\l"
	.string "wonder what the reward was that {COLOR LIGHT_GRAY}The\l"
	.string "Leader{COLOR DARK_GRAY} promised...$"

RollCall_EventScript_FatGuy_Text_9:
# 69 "data/maps/RollCall/scripts.pory"
	.string "Today is the Finals, isn't it?\l"
	.string "I'll be rooting for you extra hard\l"
	.string "today!$"

RollCall_EventScript_FatGuy_Text_10:
# 72 "data/maps/RollCall/scripts.pory"
	.string "I wish I could join you going outside\n"
	.string "and travel around {COLOR BLUE}Ludumundi{COLOR DARK_GRAY} but I don't\l"
	.string "feel confident enough that I can keep\l"
	.string "my Munchlax safe out there...$"

RollCall_EventScript_LadyLeft_Text_0:
# 86 "data/maps/RollCall/scripts.pory"
	.string "I was so suprised I got an Eevee! What\n"
	.string "pokemon did you get from your test?$"

RollCall_EventScript_LadyLeft_Text_1:
# 88 "data/maps/RollCall/scripts.pory"
	.string "Do you know who that was? it was the\n"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}!$"

RollCall_EventScript_LadyLeft_Text_2:
# 90 "data/maps/RollCall/scripts.pory"
	.string "Eevee is more powerful than I thought!\n"
	.string "I do assume you didn't take it easy on\l"
	.string "me?$"

RollCall_EventScript_LadyLeft_Text_3:
# 92 "data/maps/RollCall/scripts.pory"
	.string "Ugh, I hate that I lost to her. I don't\n"
	.string "mind that she is better, but does she\l"
	.string "really need to gloat so much about it?$"

RollCall_EventScript_LadyLeft_Text_4:
# 94 "data/maps/RollCall/scripts.pory"
	.string "I wonder which two will make it to the\n"
	.string "finals?$"

RollCall_EventScript_LadyLeft_Text_5:
# 98 "data/maps/RollCall/scripts.pory"
	.string "{PLAYER} won, but Fiona had an\n"
	.string "equally good chance!$"

RollCall_EventScript_LadyLeft_Text_6:
# 102 "data/maps/RollCall/scripts.pory"
	.string "I know right! I cannot wait to see who\n"
	.string "comes out victorious!$"

RollCall_EventScript_LadyLeft_Text_7:
# 105 "data/maps/RollCall/scripts.pory"
	.string "I still cannot decide what I want to do\n"
	.string "with my Eevee, I have so many options\l"
	.string "when it comes to letting it evolve...\l"
	.string "Should I ask her what she wants to be?$"

RollCall_EventScript_LadyRight_Text_0:
# 120 "data/maps/RollCall/scripts.pory"
	.string "My test resulted into a Charmander! I\n"
	.string "cannot wait to be able to fly on my\l"
	.string "charizards back!$"

RollCall_EventScript_LadyRight_Text_1:
# 122 "data/maps/RollCall/scripts.pory"
	.string "I know right! But I do wonder what\n"
	.string "important business brought {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} here...$"

RollCall_EventScript_LadyRight_Text_2:
# 124 "data/maps/RollCall/scripts.pory"
	.string "Not at all! My Charmander did not stand\n"
	.string "a chance after that sand-attack!$"

RollCall_EventScript_LadyRight_Text_3:
# 126 "data/maps/RollCall/scripts.pory"
	.string "I heard from more people she is quite\n"
	.string "annoying. I hope someone can beat her\l"
	.string "ass in this tournament...$"

RollCall_EventScript_LadyRight_Text_4:
# 128 "data/maps/RollCall/scripts.pory"
	.string "I hope it is Fiona and {PLAYER}, they\n"
	.string "have shown incredible skill so far!$"

RollCall_EventScript_LadyRight_Text_5:
# 132 "data/maps/RollCall/scripts.pory"
	.string "That was the best battle I have seen in\n"
	.string "this tournament!$"

RollCall_EventScript_LadyRight_Text_6:
# 136 "data/maps/RollCall/scripts.pory"
	.string "This Finals is gonna be so exciting!\n"
	.string "These are some very strong trainers!$"

RollCall_EventScript_LadyRight_Text_7:
# 139 "data/maps/RollCall/scripts.pory"
	.string "I know what you're talking about. I\n"
	.string "cannot wait for my Charmeleon to\l"
	.string "become a Charizard, but he just looks\l"
	.string "so cute$"

RollCall_EventScript_Guard_Text_0:
# 147 "data/maps/RollCall/scripts.pory"
	.string "Sorry, nobody is allowed past this\n"
	.string "point.$"

RollCall_EventScript_Fiona_Text_0:
# 154 "data/maps/RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Have you gotten your pokemon\n"
	.string "already? We can't have a pokemon battle\l"
	.string "without pokemon.\l"
	.string "Go to the professor to collect your\l"
	.string "pokemon!$"

RollCall_Trigger_MeetTheLeaderLeft_Text_0:
# 161 "data/maps/RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: {PLAYER}, come here for a\n"
	.string "moment!$"

RollCall_MeetTheLeader_Text_0:
# 178 "data/maps/RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: I see you finally got your\n"
	.string "pokemon as well!$"

RollCall_MeetTheLeader_Text_1:
# 182 "data/maps/RollCall/scripts.pory"
	.string "Now we both have a pokemon, I think\n"
	.string "this could be a good time to do our\l"
	.string "first pok-$"

RollCall_MeetTheLeader_Text_2:
# 184 "data/maps/RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: INITIATIVES, IN FORMATION!$"

RollCall_MeetTheLeader_Text_3:
# 188 "data/maps/RollCall/scripts.pory"
	.string "Oh, I guess we have to hold off on that\n"
	.string "fight for now then.$"

RollCall_MeetTheLeader_Text_4:
# 207 "data/maps/RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: Initiatives, while according to any\n"
	.string "of my calculations it does not make\l"
	.string "sense you get rewarded this way, {COLOR LIGHT_GRAY}The\l"
	.string "Leader{COLOR DARK_GRAY} has decided to speak to you\l"
	.string "directly today.\p"
	.string "Please show respect and keep your\n"
	.string "mouth shut while {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} is talking.\p"
	.string "Remember, only speak when spoken to!$"

RollCall_MeetTheLeader_Text_5:
# 212 "data/maps/RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: They are ready, sir!$"

RollCall_MeetTheLeader_Text_6:
# 216 "data/maps/RollCall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Thank you Airanea.\p"
	.string "LISTEN UP ROOKIES!\p"
	.string "usually I don't waste my time talking to\n"
	.string "you newbloods until you have proven\l"
	.string "yourself.\p"
	.string "You're lucky I had today other business\n"
	.string "here that I wanted to make today an\l"
	.string "exception and see what younglins were\l"
	.string "brought in here with the promise of\l"
	.string "power.$"

RollCall_MeetTheLeader_Text_7:
# 220 "data/maps/RollCall/scripts.pory"
	.string "Each of you will have received a\n"
	.string "pokemon, tailored specifically to your\l"
	.string "abilities. I trust in G-,\l"
	.string "I mean Professors Kectors capabilities\l"
	.string "that he has judged you correctly.\p"
	.string "Having a pokemon might make you feel\n"
	.string "superior over the general public. But\l"
	.string "remember: For how useful pokemon can\l"
	.string "be in our daily life, they are also\l"
	.string "extremly dangerous.\p"
	.string "Each of you have proven yourself\n"
	.string "responsable and strong enough to take\l"
	.string "care of these pokemon, but now you\l"
	.string "have to show that you didn't just luck\l"
	.string "out.$"

RollCall_MeetTheLeader_Text_8:
# 225 "data/maps/RollCall/scripts.pory"
	.string "Over the next 3 days, starting\n"
	.string "tomorrow, a tournament will be held.\p"
	.string "It will be a one on one battles with your\n"
	.string "given starter pokemon. The winner\l"
	.string "continues to next round, the loser has\l"
	.string "to think about why they lost.\p"
	.string "The Tournament winner will, of course,\n"
	.string "be rightfully rewarded.$"

RollCall_MeetTheLeader_Text_9:
# 228 "data/maps/RollCall/scripts.pory"
	.string "Don't worry about losing, this\n"
	.string "tournament is more about your\l"
	.string "performance than your result.\p"
	.string "But don't come to anyone here with bad\n"
	.string "excuses on why you failed. Owning a\l"
	.string "pokemon carries a lot of\l"
	.string "responsabilities, both for the health\l"
	.string "of the pokemon as the health of\l"
	.string "everyone around you.\p"
	.string "While you own a pokemon, or even\n"
	.string "multiple pokemon later down the line,\l"
	.string "than there doesn't exists something\l"
	.string "like a good or a bad day.\l"
	.string "It's just a day.$"

RollCall_MeetTheLeader_Text_10:
# 232 "data/maps/RollCall/scripts.pory"
	.string "If you need to be in a good mood to take\n"
	.string "on the danger that pokemon can bring\l"
	.string "with them, than you know where the\l"
	.string "nearest exit is and you don't have to\l"
	.string "come back.\p"
	.string "With that being said, go rest and good\n"
	.string "luck with the tournament. May the best\l"
	.string "rookie win!$"

RollCall_MeetTheLeader_Text_11:
# 240 "data/maps/RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: You heard {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} Initiatives, go\n"
	.string "to your room set yourself in sleep mode!\l"
	.string "Tomorrow we need your mind and body to\l"
	.string "be fully charged.$"

RollCall_MeetTheLeader_Text_12:
# 257 "data/maps/RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Wow, who would have thought that\n"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} would come speak to us\l"
	.string "directly.\l"
	.string "If he is here for official busniness it\l"
	.string "must be something serious...\p"
	.string "Anyways, I think he is right and we\n"
	.string "should act responsible with our\l"
	.string "pokemon and not just do a pokemon\l"
	.string "battle to have 'fun'.\p"
	.string "These pokemons can be far too\n"
	.string "dangerous for that.\p"
	.string "That being said, you do own me a\n"
	.string "pokemon battle, so you better make\l"
	.string "sure that you don't get knocked out of\l"
	.string "the tournament before you have a\l"
	.string "chance to fight me.\l"
	.string "I'll do the same for you!\p"
	.string "Good luck and good night {PLAYER}!$"
