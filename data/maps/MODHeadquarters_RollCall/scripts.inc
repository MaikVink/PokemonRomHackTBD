MODHeadquarters_RollCall_MapScripts::
	.byte 0


RollCall_EventScript_FatGuy::
# 21 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 22 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	faceplayer
# 23 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 25 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 0, RollCall_EventScript_FatGuy_3
# 26 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 1, RollCall_EventScript_FatGuy_3
# 27 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 2, RollCall_EventScript_FatGuy_3
# 28 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 3, RollCall_EventScript_FatGuy_3
# 29 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 4, RollCall_EventScript_FatGuy_3
# 32 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 5, RollCall_EventScript_FatGuy_4
# 34 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 6, RollCall_EventScript_FatGuy_5
# 44 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 7, RollCall_EventScript_FatGuy_6
# 53 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 8, RollCall_EventScript_FatGuy_7
# 62 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 9, RollCall_EventScript_FatGuy_8
# 73 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_10
RollCall_EventScript_FatGuy_1:
# 75 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return

RollCall_EventScript_FatGuy_3:
# 30 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_0
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_4:
# 33 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_1
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_5:
# 35 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_10
# 42 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_3
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_6:
# 45 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_13
# 51 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_5
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_7:
# 54 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_16
# 60 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_7
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_8:
# 63 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_FatGuy_19
# 69 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_9
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_10:
# 37 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_2
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_13:
# 47 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_4
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_16:
# 56 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_6
	goto RollCall_EventScript_FatGuy_1

RollCall_EventScript_FatGuy_19:
# 65 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_8
	goto RollCall_EventScript_FatGuy_1


RollCall_EventScript_LadyLeft::
# 79 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 80 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 82 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 0, RollCall_EventScript_LadyLeft_3
# 83 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 1, RollCall_EventScript_LadyLeft_3
# 84 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 2, RollCall_EventScript_LadyLeft_3
# 85 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 3, RollCall_EventScript_LadyLeft_3
# 86 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 4, RollCall_EventScript_LadyLeft_3
# 88 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 5, RollCall_EventScript_LadyLeft_4
# 90 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 6, RollCall_EventScript_LadyLeft_5
# 92 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 7, RollCall_EventScript_LadyLeft_6
# 94 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 8, RollCall_EventScript_LadyLeft_7
# 96 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 9, RollCall_EventScript_LadyLeft_8
# 106 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_7
RollCall_EventScript_LadyLeft_1:
# 109 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return

RollCall_EventScript_LadyLeft_3:
# 87 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_0
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_4:
# 89 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_1
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_5:
# 91 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_2
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_6:
# 93 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_3
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_7:
# 95 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_4
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_8:
# 97 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_LadyLeft_10
# 103 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_6
	goto RollCall_EventScript_LadyLeft_1

RollCall_EventScript_LadyLeft_10:
# 99 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_5
	goto RollCall_EventScript_LadyLeft_1


RollCall_EventScript_LadyRight::
# 113 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 114 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 116 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 0, RollCall_EventScript_LadyRight_3
# 117 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 1, RollCall_EventScript_LadyRight_3
# 118 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 2, RollCall_EventScript_LadyRight_3
# 119 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 3, RollCall_EventScript_LadyRight_3
# 120 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 4, RollCall_EventScript_LadyRight_3
# 122 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 5, RollCall_EventScript_LadyRight_4
# 124 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 6, RollCall_EventScript_LadyRight_5
# 126 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 7, RollCall_EventScript_LadyRight_6
# 128 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 8, RollCall_EventScript_LadyRight_7
# 130 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	case 9, RollCall_EventScript_LadyRight_8
# 140 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_7
RollCall_EventScript_LadyRight_1:
# 142 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return

RollCall_EventScript_LadyRight_3:
# 121 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_0
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_4:
# 123 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_1
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_5:
# 125 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_2
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_6:
# 127 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_3
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_7:
# 129 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_4
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_8:
# 131 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, RollCall_EventScript_LadyRight_10
# 137 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_6
	goto RollCall_EventScript_LadyRight_1

RollCall_EventScript_LadyRight_10:
# 133 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_5
	goto RollCall_EventScript_LadyRight_1


RollCall_EventScript_Guard::
# 146 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 147 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	faceplayer
# 148 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_Guard_Text_0
# 149 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return


RollCall_EventScript_Fiona::
# 153 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 154 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	faceplayer
# 155 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_EventScript_Fiona_Text_0
# 157 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return


RollCall_Trigger_MeetTheLeaderLeft::
# 161 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 162 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_Trigger_MeetTheLeaderLeft_Text_0
# 163 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_MoveForwardLeft
# 164 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 165 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	call RollCall_MeetTheLeader
# 166 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return


RollCall_Trigger_MeetTheLeaderRight::
# 170 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	lockall
# 171 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_Trigger_MeetTheLeaderLeft_Text_0
# 172 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_MoveForwardRight
# 173 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 174 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	call RollCall_MeetTheLeader
# 175 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	releaseall
	return


RollCall_MeetTheLeader::
# 179 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_0
# 180 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 1, RollCall_Movement_WalkOutOfTheWay
# 181 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	showobjectat 3, MAP_MODHEADQUARTERS_ROLL_CALL
# 182 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 3, RollCall_Movement_InFrame
# 183 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_1
# 184 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 185 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_2
# 186 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookUp
# 187 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 6, CommonMovement_LookUp
# 188 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 189 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_3
# 190 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	hideobjectat 14, MAP_MODHEADQUARTERS_ROLL_CALL
# 192 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RollCall_Movement_Player
# 193 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 6, RollCall_Movement_Fiona
# 194 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 9, CommonMovement_WalkUp1
# 195 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 4, RollCall_Movement_Woman2
# 196 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 10, RollCall_Movement_Man3
# 197 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 2, RollCall_Movement_Hiker
# 198 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 5, RollCall_Movement_Receptionist
# 199 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 8, CommonMovement_WalkOutOfTheWayDown
# 200 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 13, RollCall_Movement_FatGuy
# 201 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 11, RollCall_Movement_Mom
# 202 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 12, RollCall_Movement_NinjaBoy
# 203 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 2
# 204 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 7, RollCall_Movement_Man5
# 205 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 206 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	showobjectat 3, MAP_MODHEADQUARTERS_ROLL_CALL
# 208 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_4
# 211 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 3, CommonMovement_WalkOutOfTheWayLeft
# 212 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 213 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_5
# 214 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	showobjectat 14, MAP_MODHEADQUARTERS_ROLL_CALL
# 215 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 14, RollCall_Movement_Leader_Enter
# 216 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 217 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_6
# 221 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_7
# 226 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_8
# 229 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_9
# 230 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_10
# 231 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 14, RollCall_Movement_Leader_Exit
# 232 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 233 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	hideobjectat 14, MAP_MODHEADQUARTERS_ROLL_CALL
# 235 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 3, RollCall_Movement_TakePlace
# 236 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 237 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_11
# 238 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 3, RollCall_Movement_OutOfFrame
# 239 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 240 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_ROLL_CALL
# 241 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 1, RollCall_Movement_Guard_BlockDoor
# 242 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 6, CommonMovement_WalkLeft1
# 243 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookRight
# 244 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 245 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 10, RollCall_Movement_WalkAwayShort
# 246 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 7, RollCall_Movement_WalkAwayShort
# 247 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 2, RollCall_Movement_WalkAwayShort
# 248 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 8, RollCall_Movement_WalkAwayShort
# 249 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 12, RollCall_Movement_WalkAwayShort
# 250 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 11, RollCall_Movement_WalkAwayShort
# 251 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 9, RollCall_Movement_WalkAwayLong
# 252 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 13, RollCall_Movement_FatGuy_Return
# 253 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 4, CommonMovement_WalkDown1
# 254 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	msgbox RollCall_MeetTheLeader_Text_12
# 261 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 262 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 10, MAP_MODHEADQUARTERS_ROLL_CALL
# 263 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 7, MAP_MODHEADQUARTERS_ROLL_CALL
# 264 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 11, MAP_MODHEADQUARTERS_ROLL_CALL
# 265 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 12, MAP_MODHEADQUARTERS_ROLL_CALL
# 266 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 8, MAP_MODHEADQUARTERS_ROLL_CALL
# 267 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 2, MAP_MODHEADQUARTERS_ROLL_CALL
# 268 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 9, MAP_MODHEADQUARTERS_ROLL_CALL
# 270 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookDown
# 271 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	applymovement 6, RollCall_Movement_WalkAwayLong
# 272 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	waitmovement 0
# 273 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	removeobject 6, MAP_MODHEADQUARTERS_ROLL_CALL
# 275 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	setflag FLAG_REVERSE_ROLLCALL_FLAG
# 276 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	setflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 277 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	clearflag FLAG_FIONA_ROOM
# 278 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 5
# 279 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	setflag FLAG_BATTLE_WON
	return


# 282 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_MoveForwardLeft:
# 283 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 283 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 283 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 283 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 283 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 286 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_MoveForwardRight:
# 287 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 287 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 288 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 289 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 289 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 289 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 292 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_WalkOutOfTheWay:
# 293 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 294 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_down
	step_end

# 297 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_InFrame:
# 298 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 299 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 299 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 299 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 300 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_down
	step_end

# 303 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Fiona:
# 304 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 305 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 305 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 306 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 309 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Player:
# 310 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 310 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 310 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 313 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Woman2:
# 314 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 315 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 315 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 318 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Man3:
# 319 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 320 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_up
	step_end

# 323 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Man5:
# 324 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 325 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_up
	step_end

# 328 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Hiker:
# 329 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 329 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 329 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 329 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 330 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 331 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_up
	step_end

# 334 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Receptionist:
# 335 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 335 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 336 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_up
	step_end

# 339 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_FatGuy:
# 340 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 340 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 340 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 341 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 341 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 342 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 342 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 343 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 343 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 346 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Mom:
# 347 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 347 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 348 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 348 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 349 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_up
	step_end

# 352 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_NinjaBoy:
# 353 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 353 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
# 353 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 356 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Leader_Enter:
# 357 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_down
# 358 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_left
# 358 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_left
# 358 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_left
# 359 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_down
	step_end

# 362 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Leader_Exit:
# 363 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_right
# 363 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_right
# 363 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_right
# 364 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_slow_up
	step_end

# 367 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_TakePlace:
# 368 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 369 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_down
	step_end

# 372 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_OutOfFrame:
# 373 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 373 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 373 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_right
# 374 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_up
	step_end

# 377 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_Guard_BlockDoor:
# 378 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 379 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_down
	step_end

# 382 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_WalkAwayShort:
# 383 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 383 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 383 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 383 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 383 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 383 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
	step_end

# 386 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_WalkAwayLong:
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 387 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
	step_end

# 390 "data/maps/MODHeadquarters_RollCall/scripts.pory"
RollCall_Movement_FatGuy_Return:
# 391 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 391 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 391 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 391 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_down
# 392 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 392 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 392 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 392 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 392 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	walk_left
# 393 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	face_right
	step_end

RollCall_EventScript_FatGuy_Text_0:
# 30 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "We were told to go to this room after we\n"
	.string "got our pokemon.\p"
	.string "I wonder if this means we will get to\n"
	.string "meet {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}...$"

RollCall_EventScript_FatGuy_Text_1:
# 33 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I cannot believe, the rumors are true!\n"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} was here and he talked to us\l"
	.string "directly!\l"
	.string "I have never been more excited in my\l"
	.string "life!$"

RollCall_EventScript_FatGuy_Text_2:
# 37 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Did you come to check up on me?\n"
	.string "Don't worry I don't hate you or anything\l"
	.string "for beating me. I acknowledge that I\l"
	.string "lacked the skill to win this battle, you\l"
	.string "won fair and square!\l"
	.string "I'll be rooting for you to win!$"

RollCall_EventScript_FatGuy_Text_3:
# 42 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "So you're going to be my first ever\n"
	.string "opponent? I'm not going to lie, I'm very\l"
	.string "nervous for my first ever pokemon\l"
	.string "battle.$"

RollCall_EventScript_FatGuy_Text_4:
# 47 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Another win under your belt,\n"
	.string "you really are something else!$"

RollCall_EventScript_FatGuy_Text_5:
# 51 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: A new day, a new round.\n"
	.string "Good luck in the tournament {PLAYER}!$"

RollCall_EventScript_FatGuy_Text_6:
# 56 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Did you see the look on that\n"
	.string "Bella's face? It was like your win\l"
	.string "insulted her entire existance\l"
	.string "HAHAHAHA!$"

RollCall_EventScript_FatGuy_Text_7:
# 60 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: I'm already rooting for you, but\n"
	.string "you'll do everyone here a favor if you\l"
	.string "would win the next battle, believe me.$"

RollCall_EventScript_FatGuy_Text_8:
# 65 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: YOU ACTUALLY DID IT! I'm so\n"
	.string "honoured to be your first loss, my dear\l"
	.string "Champion. I wonder what the reward was\l"
	.string "that {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} promised...$"

RollCall_EventScript_FatGuy_Text_9:
# 69 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Today is the Finals, isn't it?\n"
	.string "I'll be rooting for you extra hard\l"
	.string "today!$"

RollCall_EventScript_FatGuy_Text_10:
# 73 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: I wish I could join you going\n"
	.string "outside and travel around {COLOR BLUE}Ludumundi{COLOR DARK_GRAY}\l"
	.string "but I don't feel confident enough that\l"
	.string "I can keep my Munchlax safe out there...$"

RollCall_EventScript_LadyLeft_Text_0:
# 87 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I was so suprised I got an Eevee! What\n"
	.string "pokemon did you get from your test?$"

RollCall_EventScript_LadyLeft_Text_1:
# 89 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Do you know who that was? it was the\n"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}!$"

RollCall_EventScript_LadyLeft_Text_2:
# 91 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Eevee is more powerful than I thought!\n"
	.string "I do assume you didn't take it easy on\l"
	.string "me?$"

RollCall_EventScript_LadyLeft_Text_3:
# 93 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Ugh, I hate that I lost to her. I don't\n"
	.string "mind that she is better, but does she\l"
	.string "really need to gloat so much about it?$"

RollCall_EventScript_LadyLeft_Text_4:
# 95 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I wonder which two will make it to the\n"
	.string "finals?$"

RollCall_EventScript_LadyLeft_Text_5:
# 99 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{PLAYER} won, but Fiona had an\n"
	.string "equally good chance!$"

RollCall_EventScript_LadyLeft_Text_6:
# 103 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I know right! I cannot wait to see who\n"
	.string "comes out victorious!$"

RollCall_EventScript_LadyLeft_Text_7:
# 106 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: I still cannot decide what I\n"
	.string "want to do with my Eevee, I have so many\l"
	.string "options when it comes to letting it\l"
	.string "evolve... Should I ask her what she\l"
	.string "wants to be?$"

RollCall_EventScript_LadyRight_Text_0:
# 121 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "My test resulted into a Charmander! I\n"
	.string "cannot wait to be able to fly on my\l"
	.string "charizards back!$"

RollCall_EventScript_LadyRight_Text_1:
# 123 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I know right! But I do wonder what\n"
	.string "important business brought {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} here...$"

RollCall_EventScript_LadyRight_Text_2:
# 125 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Not at all! My Charmander did not stand\n"
	.string "a chance after that sand-attack!$"

RollCall_EventScript_LadyRight_Text_3:
# 127 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I heard from more people she is quite\n"
	.string "annoying. I hope someone can beat her\l"
	.string "ass in this tournament...$"

RollCall_EventScript_LadyRight_Text_4:
# 129 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "I hope it is Fiona and {PLAYER}, they\n"
	.string "have shown incredible skill so far!$"

RollCall_EventScript_LadyRight_Text_5:
# 133 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "That was the best battle I have seen in\n"
	.string "this tournament!$"

RollCall_EventScript_LadyRight_Text_6:
# 137 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "This Finals is gonna be so exciting!\n"
	.string "These are some very strong trainers!$"

RollCall_EventScript_LadyRight_Text_7:
# 140 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I know what you're talking\n"
	.string "about. I cannot wait for my Charmeleon\l"
	.string "to become a Charizard, but he just\l"
	.string "looks so cute$"

RollCall_EventScript_Guard_Text_0:
# 148 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Sorry, nobody is allowed past this\n"
	.string "point.$"

RollCall_EventScript_Fiona_Text_0:
# 155 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Have you gotten your pokemon\n"
	.string "already? We can't have a pokemon battle\l"
	.string "without pokemon.\l"
	.string "Go to the professor to collect your\l"
	.string "pokemon!$"

RollCall_Trigger_MeetTheLeaderLeft_Text_0:
# 162 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: {PLAYER}, come here for a\n"
	.string "moment!$"

RollCall_MeetTheLeader_Text_0:
# 179 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: I see you finally got your\n"
	.string "pokemon as well!$"

RollCall_MeetTheLeader_Text_1:
# 183 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Now we both have a pokemon, I think\n"
	.string "this could be a good time to do our\l"
	.string "first pok-$"

RollCall_MeetTheLeader_Text_2:
# 185 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: INITIATIVES, IN FORMATION!$"

RollCall_MeetTheLeader_Text_3:
# 189 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Oh, I guess we have to hold off on that\n"
	.string "fight for now then.$"

RollCall_MeetTheLeader_Text_4:
# 208 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: Initiatives, while according to any\n"
	.string "of my calculations it does not make\l"
	.string "sense you get rewarded this way, {COLOR LIGHT_GRAY}The\l"
	.string "Leader{COLOR DARK_GRAY} has decided to speak to you\l"
	.string "directly today.\p"
	.string "Please show respect and keep your\n"
	.string "mouth shut while {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} is talking!\p"
	.string "Remember, only speak when spoken to!$"

RollCall_MeetTheLeader_Text_5:
# 213 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}???{COLOR DARK_GRAY}: They are ready, sir!$"

RollCall_MeetTheLeader_Text_6:
# 217 "data/maps/MODHeadquarters_RollCall/scripts.pory"
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
# 221 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Each of you will have received a\n"
	.string "pokemon, tailored specifically to your\l"
	.string "abilities. I trust in G-,\l"
	.string "I mean Professors Kectors capabilities\l"
	.string "that he has judged you properly.\p"
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
# 226 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Over the next 3 days, starting\n"
	.string "tomorrow, a tournament will be held.\p"
	.string "It will be a one on one battles with your\n"
	.string "given starter pokemon. The winner\l"
	.string "continues to next round, the loser has\l"
	.string "to think about why they lost.\p"
	.string "The Tournament winner will, of course,\n"
	.string "be rightfully rewarded.$"

RollCall_MeetTheLeader_Text_9:
# 229 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "Don't worry about losing, this\n"
	.string "tournament is more about your\l"
	.string "performance than your result.$"

RollCall_MeetTheLeader_Text_10:
# 230 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "With that being said, go rest and good\n"
	.string "luck with the tournament. May the best\l"
	.string "rookie win!$"

RollCall_MeetTheLeader_Text_11:
# 237 "data/maps/MODHeadquarters_RollCall/scripts.pory"
	.string "{COLOR LIGHT_RED}Airanea{COLOR DARK_GRAY}: You heard {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} Initiatives, go\n"
	.string "to your room charge yourself up!\l"
	.string "You better be ready for the days to\l"
	.string "come.$"

RollCall_MeetTheLeader_Text_12:
# 254 "data/maps/MODHeadquarters_RollCall/scripts.pory"
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
