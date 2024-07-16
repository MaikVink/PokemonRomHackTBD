DormHall1_MapScripts::
# 9 "data/maps/DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dormhall1_OnTransition
# 10 "data/maps/DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 1, Dormhall1_Frame
# 12 "data/maps/DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 10, Dormhall1_Frame_TournamentOver
	.2byte 0


Dormhall1_OnTransition::
# 17 "data/maps/DormHall1/scripts.pory"
	setvar VAR_ALWAYS_ON, 1
# 18 "data/maps/DormHall1/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 1
# 19 "data/maps/DormHall1/scripts.pory"
	compare VAR_STORY_PROGRESSION, 0
	goto_if_eq Dormhall1_OnTransition_2
Dormhall1_OnTransition_1:
# 30 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, Dormhall1_OnTransition_4
	return

Dormhall1_OnTransition_2:
# 21 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 1
# 22 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 23 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_SYS_ALWAYS_ON
# 24 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_REVERSE_ROLLCALL_FLAG
# 25 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 26 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 27 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_REVERSED_GUARD
# 28 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_HIDE_LEADER
	goto Dormhall1_OnTransition_1

Dormhall1_OnTransition_4:
# 32 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 10
# 33 "data/maps/DormHall1/scripts.pory"
	clearflag FLAG_FIRST_RIVAL_MEETING
# 34 "data/maps/DormHall1/scripts.pory"
	clearflag FLAG_HIDE_LEADER
	return


Dormhall1_Frame_TournamentOver::
# 39 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, Dormhall1_Frame_TournamentOver_1
	return

Dormhall1_Frame_TournamentOver_1:
	return


Dormhall1_Frame::
# 50 "data/maps/DormHall1/scripts.pory"
	lock
# 51 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_NoticePlayer
# 52 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 53 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_0
# 55 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_MoveToPlayer
# 56 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 57 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_1
# 64 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_WalkAway
# 65 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 66 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIRST_RIVAL_MEETING
# 67 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 2
# 68 "data/maps/DormHall1/scripts.pory"
	removeobject 2
# 69 "data/maps/DormHall1/scripts.pory"
	release
	return


DormHall1_EventScript_LadyInitiative::
# 73 "data/maps/DormHall1/scripts.pory"
	lockall
# 74 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 76 "data/maps/DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_LadyInitiative_3
# 77 "data/maps/DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_LadyInitiative_3
# 78 "data/maps/DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_LadyInitiative_3
# 79 "data/maps/DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_LadyInitiative_3
# 80 "data/maps/DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_LadyInitiative_3
# 82 "data/maps/DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_LadyInitiative_4
# 84 "data/maps/DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_LadyInitiative_5
# 86 "data/maps/DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_LadyInitiative_6
# 88 "data/maps/DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_LadyInitiative_7
# 90 "data/maps/DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_LadyInitiative_8
# 100 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_7
DormHall1_EventScript_LadyInitiative_1:
# 102 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_LadyInitiative_3:
# 81 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_0
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_4:
# 83 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_1
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_5:
# 85 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_2
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_6:
# 87 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_3
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_7:
# 89 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_4
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_8:
# 91 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_LadyInitiative_10
# 97 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_6
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_10:
# 93 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_5
	goto DormHall1_EventScript_LadyInitiative_1


DormHall1_EventScript_ManInitiative::
# 106 "data/maps/DormHall1/scripts.pory"
	lockall
# 107 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 109 "data/maps/DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_ManInitiative_3
# 110 "data/maps/DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_ManInitiative_3
# 111 "data/maps/DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_ManInitiative_3
# 112 "data/maps/DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_ManInitiative_3
# 113 "data/maps/DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_ManInitiative_3
# 115 "data/maps/DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_ManInitiative_4
# 117 "data/maps/DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_ManInitiative_5
# 119 "data/maps/DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_ManInitiative_6
# 121 "data/maps/DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_ManInitiative_7
# 123 "data/maps/DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_ManInitiative_8
# 135 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_7
DormHall1_EventScript_ManInitiative_1:
# 137 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_ManInitiative_3:
# 114 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_0
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_4:
# 116 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_1
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_5:
# 118 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_2
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_6:
# 120 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_3
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_7:
# 122 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_4
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_8:
# 124 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_ManInitiative_10
# 132 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_6
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_10:
# 126 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_5
	goto DormHall1_EventScript_ManInitiative_1


DormHall1_EventScript_StatueInitiative::
# 141 "data/maps/DormHall1/scripts.pory"
	lockall
# 142 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 143 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 145 "data/maps/DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_StatueInitiative_3
# 146 "data/maps/DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_StatueInitiative_3
# 147 "data/maps/DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_StatueInitiative_3
# 148 "data/maps/DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_StatueInitiative_3
# 149 "data/maps/DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_StatueInitiative_3
# 151 "data/maps/DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_StatueInitiative_4
# 153 "data/maps/DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_StatueInitiative_5
# 155 "data/maps/DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_StatueInitiative_6
# 156 "data/maps/DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_StatueInitiative_6
# 158 "data/maps/DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_StatueInitiative_7
# 168 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_6
DormHall1_EventScript_StatueInitiative_1:
# 171 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_StatueInitiative_3:
# 150 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_0
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_4:
# 152 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_1
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_5:
# 154 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_2
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_6:
# 157 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_3
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_7:
# 159 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_StatueInitiative_9
# 165 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_5
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_9:
# 161 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_4
	goto DormHall1_EventScript_StatueInitiative_1


Dormhall1_EventScript_NinjaInitiative::
# 175 "data/maps/DormHall1/scripts.pory"
	lockall
# 176 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 177 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 179 "data/maps/DormHall1/scripts.pory"
	case 0, Dormhall1_EventScript_NinjaInitiative_3
# 180 "data/maps/DormHall1/scripts.pory"
	case 1, Dormhall1_EventScript_NinjaInitiative_3
# 181 "data/maps/DormHall1/scripts.pory"
	case 2, Dormhall1_EventScript_NinjaInitiative_3
# 182 "data/maps/DormHall1/scripts.pory"
	case 3, Dormhall1_EventScript_NinjaInitiative_3
# 183 "data/maps/DormHall1/scripts.pory"
	case 4, Dormhall1_EventScript_NinjaInitiative_3
# 185 "data/maps/DormHall1/scripts.pory"
	case 5, Dormhall1_EventScript_NinjaInitiative_4
# 187 "data/maps/DormHall1/scripts.pory"
	case 6, Dormhall1_EventScript_NinjaInitiative_5
# 190 "data/maps/DormHall1/scripts.pory"
	case 7, Dormhall1_EventScript_NinjaInitiative_6
# 191 "data/maps/DormHall1/scripts.pory"
	case 8, Dormhall1_EventScript_NinjaInitiative_6
# 193 "data/maps/DormHall1/scripts.pory"
	case 9, Dormhall1_EventScript_NinjaInitiative_7
# 204 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_6
Dormhall1_EventScript_NinjaInitiative_1:
# 206 "data/maps/DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_LookOriginalDireciton
# 207 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_EventScript_NinjaInitiative_3:
# 184 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_0
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_4:
# 186 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_1
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_5:
# 188 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_2
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_6:
# 192 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_3
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_7:
# 194 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Dormhall1_EventScript_NinjaInitiative_9
# 200 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_5
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_9:
# 196 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_4
	goto Dormhall1_EventScript_NinjaInitiative_1


Dormhall1_EventScript_GuardTop::
# 211 "data/maps/DormHall1/scripts.pory"
	lockall
# 212 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 213 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardTop_Text_0
# 214 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardBottem::
# 218 "data/maps/DormHall1/scripts.pory"
	lockall
# 219 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 220 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardBottem_Text_0
# 221 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_StatueNormal::
# 225 "data/maps/DormHall1/scripts.pory"
	lockall
# 226 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
# 227 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_SpecialStatueBack::
# 231 "data/maps/DormHall1/scripts.pory"
	lockall
# 232 "data/maps/DormHall1/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 233 "data/maps/DormHall1/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/DormHall1/scripts.pory"
	case 1, Dormhall1_SignScript_SpecialStatueBack_3
# 236 "data/maps/DormHall1/scripts.pory"
	case 3, Dormhall1_SignScript_SpecialStatueBack_3
# 237 "data/maps/DormHall1/scripts.pory"
	case 4, Dormhall1_SignScript_SpecialStatueBack_3
# 241 "data/maps/DormHall1/scripts.pory"
	case 2, Dormhall1_SignScript_SpecialStatueBack_4
Dormhall1_SignScript_SpecialStatueBack_1:
# 244 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_SignScript_SpecialStatueBack_3:
# 238 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_SpecialStatueBack_Text_0
	goto Dormhall1_SignScript_SpecialStatueBack_1

Dormhall1_SignScript_SpecialStatueBack_4:
# 242 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
	goto Dormhall1_SignScript_SpecialStatueBack_1


Dormhall1_Trigger_NoEntry::
# 248 "data/maps/DormHall1/scripts.pory"
	lockall
# 249 "data/maps/DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Dormhall1_Movement_MoveBack
# 250 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Trigger_NoEntry_Text_0
# 251 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 252 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_SetWarpValue1::
# 256 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 1
# 257 "data/maps/DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue2::
# 261 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 2
# 262 "data/maps/DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue3::
# 266 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 3
# 267 "data/maps/DormHall1/scripts.pory"
	release
	return


DormHall1_WonTournament::
# 271 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_WonTournament_Text_0
# 272 "data/maps/DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_ShockLeft
# 273 "data/maps/DormHall1/scripts.pory"
	applymovement 3, Dormhall1_Movement_ShockLeft
# 274 "data/maps/DormHall1/scripts.pory"
	applymovement 1, Dormhall1_Movement_NoticePlayer
# 275 "data/maps/DormHall1/scripts.pory"
	applymovement 7, Dormhall1_Movement_NoticePlayer
# 276 "data/maps/DormHall1/scripts.pory"
	applymovement 8, Dormhall1_Movemnt_Move_To_PlayerWon
# 277 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 278 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_WonTournament_Text_1
	return


# 284 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_NoticePlayer:
# 285 "data/maps/DormHall1/scripts.pory"
	emote_exclamation_mark
	step_end

# 288 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_ShockLeft:
# 289 "data/maps/DormHall1/scripts.pory"
	emote_exclamation_mark
# 290 "data/maps/DormHall1/scripts.pory"
	face_left
	step_end

# 293 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveToPlayer:
# 294 "data/maps/DormHall1/scripts.pory"
	walk_up
# 294 "data/maps/DormHall1/scripts.pory"
	walk_up
	step_end

# 297 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_WalkAway:
# 298 "data/maps/DormHall1/scripts.pory"
	walk_down
# 298 "data/maps/DormHall1/scripts.pory"
	walk_down
# 298 "data/maps/DormHall1/scripts.pory"
	walk_down
# 298 "data/maps/DormHall1/scripts.pory"
	walk_down
# 299 "data/maps/DormHall1/scripts.pory"
	walk_left
# 299 "data/maps/DormHall1/scripts.pory"
	walk_left
# 299 "data/maps/DormHall1/scripts.pory"
	walk_left
# 299 "data/maps/DormHall1/scripts.pory"
	walk_left
# 300 "data/maps/DormHall1/scripts.pory"
	walk_down
	step_end

# 303 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveBack:
# 304 "data/maps/DormHall1/scripts.pory"
	walk_left
	step_end

# 307 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_LookOriginalDireciton:
# 308 "data/maps/DormHall1/scripts.pory"
	face_down
	step_end

# 311 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movemnt_Move_To_PlayerWon:
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 312 "data/maps/DormHall1/scripts.pory"
	walk_right
# 313 "data/maps/DormHall1/scripts.pory"
	walk_up
# 313 "data/maps/DormHall1/scripts.pory"
	walk_up
# 313 "data/maps/DormHall1/scripts.pory"
	walk_up
# 313 "data/maps/DormHall1/scripts.pory"
	walk_up
	step_end

Dormhall1_Frame_Text_0:
# 53 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {COLOR BLUE}{PLAYER}! {COLOR DARK_GRAY}You're awake. I have\n"
	.string "been waiting for you!$"

Dormhall1_Frame_Text_1:
# 57 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???:{COLOR DARK_GRAY} What is that look on your face?\n"
	.string "Don't you remember me?\p"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: It's me, Fiona! I was the second\n"
	.string "best of the class, just below you!\p"
	.string "I guess being the second best at\n"
	.string "anything is not that impressive huh?\p"
	.string "Anyway, today is the day, we're gonna\n"
	.string "recieve our first pokemon! I'm so\l"
	.string "excited, aren't you?\p"
	.string "I'll go ahead.\n"
	.string "Remember, we get our pokemon from the\l"
	.string "professor inside the headquarters.\l"
	.string "he is down the hallway, directly below\l"
	.string "our Dormhall.\p"
	.string "Catch you later, {COLOR BLUE}{PLAYER}{COLOR DARK_GRAY}!$"

DormHall1_EventScript_LadyInitiative_Text_0:
# 81 "data/maps/DormHall1/scripts.pory"
	.string "Does he really think we don't notice\n"
	.string "him?$"

DormHall1_EventScript_LadyInitiative_Text_1:
# 83 "data/maps/DormHall1/scripts.pory"
	.string "I never had a pokemon before and now I\n"
	.string "have to fight in a tournament. I wonder\l"
	.string "how it will go...$"

DormHall1_EventScript_LadyInitiative_Text_2:
# 85 "data/maps/DormHall1/scripts.pory"
	.string "Did you really have to go that hard on\n"
	.string "me? You could have at least given me a\l"
	.string "chance!$"

DormHall1_EventScript_LadyInitiative_Text_3:
# 87 "data/maps/DormHall1/scripts.pory"
	.string "I saw your fight! Fiona is really a\n"
	.string "powerfull Pokemon Trainer\p"
	.string "She has a good chance at winning this\n"
	.string "whole Tournament!$"

DormHall1_EventScript_LadyInitiative_Text_4:
# 89 "data/maps/DormHall1/scripts.pory"
	.string "You can always ask for a rematch!\n"
	.string "I'll make sure I won't lose this time!$"

DormHall1_EventScript_LadyInitiative_Text_5:
# 93 "data/maps/DormHall1/scripts.pory"
	.string "I really thought Fiona had the upper\n"
	.string "hand in that battle for a moment!$"

DormHall1_EventScript_LadyInitiative_Text_6:
# 97 "data/maps/DormHall1/scripts.pory"
	.string "Todays final is gonna be very\n"
	.string "interesting! Fiona and {PLAYER} have\l"
	.string "both shown incredible skill!$"

DormHall1_EventScript_LadyInitiative_Text_7:
# 100 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: The world outside can be a scary\n"
	.string "place, but at least with my Pokemon I\l"
	.string "can make sure I'm safe.$"

DormHall1_EventScript_ManInitiative_Text_0:
# 114 "data/maps/DormHall1/scripts.pory"
	.string "Just ignore that guy, let him enjoy the\n"
	.string "moment.$"

DormHall1_EventScript_ManInitiative_Text_1:
# 116 "data/maps/DormHall1/scripts.pory"
	.string "Don't worry about it, I'm sure {COLOR LIGHT_GRAY}The\n"
	.string "Leader{COLOR DARK_GRAY} made this a safe environment to\l"
	.string "test out the waters.$"

DormHall1_EventScript_ManInitiative_Text_2:
# 118 "data/maps/DormHall1/scripts.pory"
	.string "I'm sorry. I guess I was just a bit too\n"
	.string "much focussed on impressing Surge and\l"
	.string "possibly the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

DormHall1_EventScript_ManInitiative_Text_3:
# 120 "data/maps/DormHall1/scripts.pory"
	.string "Wow, that Fiona Lass is really something\n"
	.string "else, she wiped the floor with me.$"

DormHall1_EventScript_ManInitiative_Text_4:
# 122 "data/maps/DormHall1/scripts.pory"
	.string "Seeing the other Initatives fight each\n"
	.string "other makes me realize I still have much\l"
	.string "to learn.$"

DormHall1_EventScript_ManInitiative_Text_5:
# 126 "data/maps/DormHall1/scripts.pory"
	.string "I was so close to be the tournament\n"
	.string "champion losers, guess I have to live\l"
	.string "with the fact I'm just a regular loser.\p"
	.string "...\p"
	.string "Don't you dare, Vera!$"

DormHall1_EventScript_ManInitiative_Text_6:
# 132 "data/maps/DormHall1/scripts.pory"
	.string "It certainly is! I hope Fiona will win, at\n"
	.string "least then I can say I lost to the\l"
	.string "Tournament Champion...$"

DormHall1_EventScript_ManInitiative_Text_7:
# 135 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR BLUE}Tristan{COLOR DARK_GRAY}: You should watch out for\n"
	.string "those A.S. members, they look very\l"
	.string "strong...$"

DormHall1_EventScript_StatueInitiative_Text_0:
# 150 "data/maps/DormHall1/scripts.pory"
	.string "I wonder what kind of pokemon these\n"
	.string "statues are supposed to be.$"

DormHall1_EventScript_StatueInitiative_Text_1:
# 152 "data/maps/DormHall1/scripts.pory"
	.string "With the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} here, who knows\n"
	.string "what kinds of things we can learn from\l"
	.string "{COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY}.$"

DormHall1_EventScript_StatueInitiative_Text_2:
# 154 "data/maps/DormHall1/scripts.pory"
	.string "I underestimated how little I actually\n"
	.string "know about using my skills out on the\l"
	.string "field.$"

DormHall1_EventScript_StatueInitiative_Text_3:
# 157 "data/maps/DormHall1/scripts.pory"
	.string "I have been reflecting on my failures\n"
	.string "and I think I should try becoming more\l"
	.string "of do-er and less of learner.$"

DormHall1_EventScript_StatueInitiative_Text_4:
# 161 "data/maps/DormHall1/scripts.pory"
	.string "Impressive {PLAYER}! I do hope you\n"
	.string "would allow a low level trainer like me\l"
	.string "take you on sometime!$"

DormHall1_EventScript_StatueInitiative_Text_5:
# 165 "data/maps/DormHall1/scripts.pory"
	.string "You know, watching you have made me\n"
	.string "realize I have still a long way to go,\l"
	.string "but that does not mean I intend to give\l"
	.string "up that easily!$"

DormHall1_EventScript_StatueInitiative_Text_6:
# 168 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: Strange how no matter what kind\n"
	.string "of pokemon I encounter, I have never\l"
	.string "seen a pokemon like this statue...$"

Dormhall1_EventScript_NinjaInitiative_Text_0:
# 184 "data/maps/DormHall1/scripts.pory"
	.string "sssh, don't let them know I'm hiding\n"
	.string "here.$"

Dormhall1_EventScript_NinjaInitiative_Text_1:
# 186 "data/maps/DormHall1/scripts.pory"
	.string "I have to improve my ninja skills if I\n"
	.string "want to impress the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

Dormhall1_EventScript_NinjaInitiative_Text_2:
# 188 "data/maps/DormHall1/scripts.pory"
	.string "I thought I was very sneaky with my\n"
	.string "tactics, but my opponent saw straight\l"
	.string "through me.\p"
	.string "I have to improve my sneaking skills if\n"
	.string "I ever want to make it far in MOD!$"

Dormhall1_EventScript_NinjaInitiative_Text_3:
# 192 "data/maps/DormHall1/scripts.pory"
	.string "I'm impressed you have gotten this far\n"
	.string "without making sure you got the upper\l"
	.string "hand on your opponent.$"

Dormhall1_EventScript_NinjaInitiative_Text_4:
# 196 "data/maps/DormHall1/scripts.pory"
	.string "Congratulations {PLAYER}, you have\n"
	.string "done a great job! If you ever feel like\l"
	.string "someone is watching you, just... ignore\l"
	.string "it for me will you?$"

Dormhall1_EventScript_NinjaInitiative_Text_5:
# 200 "data/maps/DormHall1/scripts.pory"
	.string "You and Fiona are both fascinating\n"
	.string "trainers to watch!\p"
	.string "I might try to shadow you for a while to\n"
	.string "learn a thing or two from you!$"

Dormhall1_EventScript_NinjaInitiative_Text_6:
# 204 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: Fighting head on is not always the\n"
	.string "best tactic, I have learned that\l"
	.string "sneaking about can give you a better\l"
	.string "idea what is going on than to beat the\l"
	.string "answers out of people.$"

Dormhall1_EventScript_GuardTop_Text_0:
# 213 "data/maps/DormHall1/scripts.pory"
	.string "This area lead to a special area not\n"
	.string "meant for initiatives, you better move\l"
	.string "to other way.$"

Dormhall1_EventScript_GuardBottem_Text_0:
# 220 "data/maps/DormHall1/scripts.pory"
	.string "Our duty is to prevent any nosey\n"
	.string "initiative from entering this area.$"

Dormhall1_SignScript_StatueNormal_Text_0:
# 226 "data/maps/DormHall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Dormhall1_SignScript_SpecialStatueBack_Text_0:
# 238 "data/maps/DormHall1/scripts.pory"
	.string "Hé, there seems to be something etched\n"
	.string "on the back of this statue:\p"
	.string "'forgotten, but not gone.\n"
	.string "-Team A.S.'$"

Dormhall1_Trigger_NoEntry_Text_0:
# 250 "data/maps/DormHall1/scripts.pory"
	.string "Sorry kid, no entry without prior\n"
	.string "authorization.$"

DormHall1_WonTournament_Text_0:
# 271 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}???{COLOR DARK_GRAY}: {PLAYER}, stay there for a\n"
	.string "moment$"

DormHall1_WonTournament_Text_1:
# 278 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}Leader{COLOR DARK_GRAY}: I would like to talk to you\n"
	.string "personally, if you wouldn't mind.\p"
	.string "But let's do that somewhere with less\n"
	.string "prying eyes and gawking mounths.\l"
	.string "If you would please follow me.$"
