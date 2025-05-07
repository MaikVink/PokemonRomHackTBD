MODHeadquarters_DormHall1_MapScripts::
# 10 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dormhall1_OnTransition
# 11 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 1, Dormhall1_Frame_FirstTimeEnter
# 13 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 10, Dormhall1_Frame_TournamentOver
# 14 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 14, Dormhall1_Frame_DeneithDefeat
	.2byte 0


Dormhall1_OnTransition::
# 19 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_ALWAYS_ON, 1
# 20 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 1
# 21 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	compare VAR_STORY_PROGRESSION, 0
	goto_if_eq Dormhall1_OnTransition_2
Dormhall1_OnTransition_1:
# 35 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, Dormhall1_OnTransition_5
Dormhall1_OnTransition_4:
# 41 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	compare VAR_STORY_PROGRESSION, 14
	goto_if_eq Dormhall1_OnTransition_7
	return

Dormhall1_OnTransition_2:
# 23 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 1
# 24 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 25 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_SYS_ALWAYS_ON
# 26 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_REVERSE_ROLLCALL_FLAG
# 27 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 28 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 29 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_REVERSED_GUARD
# 30 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_LEADER
# 31 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 32 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
# 33 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_REPLICA_SIMULATION_SISTER
	goto Dormhall1_OnTransition_1

Dormhall1_OnTransition_5:
# 37 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 10
# 38 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	clearflag FLAG_FIRST_RIVAL_MEETING
# 39 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	clearflag FLAG_HIDE_LEADER
	goto Dormhall1_OnTransition_4

Dormhall1_OnTransition_7:
# 43 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 44 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	clearflag FLAG_HIDE_AIRANEA
	return


Dormhall1_Frame_FirstTimeEnter::
# 49 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lock
# 50 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_NoticePlayer
# 51 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 52 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_FirstTimeEnter_Text_0
# 54 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_MoveToPlayer
# 55 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 56 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_FirstTimeEnter_Text_1
# 63 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_WalkAway
# 64 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 65 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_FIRST_RIVAL_MEETING
# 66 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 2
# 67 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	removeobject 4, MAP_MODHEADQUARTERS_DORM_HALL1
# 68 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


Dormhall1_Frame_TournamentOver::
# 72 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 73 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, Dormhall1_Frame_TournamentOver_2
# 79 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	call DormHall1_WonTournament
Dormhall1_Frame_TournamentOver_1:
# 81 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_Frame_TournamentOver_2:
# 75 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	call DormHall1_LostTournament
	goto Dormhall1_Frame_TournamentOver_1


DormHall1_LostTournament::
# 85 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_NoticePlayer
# 86 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 87 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_MoveToPlayer
# 88 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 89 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_LostTournament_Text_0
# 95 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_LostTournament_Text_1
# 96 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 5, Dormhall1_Movement_ShockLeft
# 97 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 3, Dormhall1_Movement_ShockLeft
# 98 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 1, Dormhall1_Movement_NoticePlayer
# 99 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 8, Dormhall1_Movement_NoticePlayer
# 100 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_ShockLeft
# 101 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	closemessage
# 102 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_Move_To_PlayerLost
# 103 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movemement_DelayedLookDown
# 104 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 105 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_LostTournament_Text_2
# 106 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_LostTournament_Text_3
# 107 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_MoveOutOfTheWay
# 108 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 109 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 2, CommonMovement_WalkUpSlow1
# 110 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_LostTournament_Text_4
# 113 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	warp MAP_MODHEADQUARTERS_ENTRANCE_HALL, 2, 2
	return


DormHall1_WonTournament::
# 117 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_WonTournament_Text_0
# 118 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 5, Dormhall1_Movement_ShockLeft
# 119 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 3, Dormhall1_Movement_ShockLeft
# 120 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 1, Dormhall1_Movement_NoticePlayer
# 121 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 8, Dormhall1_Movement_NoticePlayer
# 122 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	closemessage
# 123 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_Move_To_PlayerWon
# 124 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 125 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_LostTournament_Text_4
# 128 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	warp MAP_MODHEADQUARTERS_ENTRANCE_HALL, 2, 2
	return


Dormhall1_Frame_DeneithDefeat::
# 132 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 133 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CommonMovement_LookLeft
# 134 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 9, CommonMovement_LookRight
# 135 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 136 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_DeneithDefeat_Text_0
# 144 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_DeneithDefeat_Text_1
# 150 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	closemessage
# 151 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 9, Dormhall1_Movemement_MoveAway
# 152 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 153 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	removeobject 9, MAP_MODHEADQUARTERS_DORM_HALL1
# 154 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_AIRANEA
# 155 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 15
# 156 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


DormHall1_EventScript_LadyInitiative::
# 160 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 161 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 163 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_LadyInitiative_3
# 164 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_LadyInitiative_3
# 165 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_LadyInitiative_3
# 166 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_LadyInitiative_3
# 167 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_LadyInitiative_3
# 169 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_LadyInitiative_4
# 171 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_LadyInitiative_5
# 173 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_LadyInitiative_6
# 175 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_LadyInitiative_7
# 177 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_LadyInitiative_8
# 187 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_7
DormHall1_EventScript_LadyInitiative_1:
# 189 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_LadyInitiative_3:
# 168 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_0
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_4:
# 170 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_1
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_5:
# 172 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_2
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_6:
# 174 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_3
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_7:
# 176 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_4
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_8:
# 178 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_LadyInitiative_10
# 184 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_6
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_10:
# 180 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_5
	goto DormHall1_EventScript_LadyInitiative_1


DormHall1_EventScript_ManInitiative::
# 193 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 194 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 196 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_ManInitiative_3
# 197 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_ManInitiative_3
# 198 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_ManInitiative_3
# 199 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_ManInitiative_3
# 200 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_ManInitiative_3
# 202 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_ManInitiative_4
# 204 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_ManInitiative_5
# 206 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_ManInitiative_6
# 208 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_ManInitiative_7
# 210 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_ManInitiative_8
# 222 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_7
DormHall1_EventScript_ManInitiative_1:
# 224 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_ManInitiative_3:
# 201 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_0
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_4:
# 203 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_1
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_5:
# 205 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_2
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_6:
# 207 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_3
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_7:
# 209 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_4
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_8:
# 211 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_ManInitiative_10
# 219 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_6
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_10:
# 213 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_5
	goto DormHall1_EventScript_ManInitiative_1


DormHall1_EventScript_StatueInitiative::
# 228 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 229 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 230 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 232 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_StatueInitiative_3
# 233 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_StatueInitiative_3
# 234 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_StatueInitiative_3
# 235 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_StatueInitiative_3
# 236 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_StatueInitiative_3
# 238 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_StatueInitiative_4
# 240 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_StatueInitiative_5
# 242 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_StatueInitiative_6
# 243 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_StatueInitiative_6
# 245 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_StatueInitiative_7
# 255 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_6
DormHall1_EventScript_StatueInitiative_1:
# 258 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_StatueInitiative_3:
# 237 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_0
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_4:
# 239 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_1
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_5:
# 241 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_2
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_6:
# 244 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_3
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_7:
# 246 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_StatueInitiative_9
# 252 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_5
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_9:
# 248 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_4
	goto DormHall1_EventScript_StatueInitiative_1


Dormhall1_EventScript_NinjaInitiative::
# 262 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 263 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 264 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 266 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, Dormhall1_EventScript_NinjaInitiative_3
# 267 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, Dormhall1_EventScript_NinjaInitiative_3
# 268 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, Dormhall1_EventScript_NinjaInitiative_3
# 269 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, Dormhall1_EventScript_NinjaInitiative_3
# 270 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, Dormhall1_EventScript_NinjaInitiative_3
# 272 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, Dormhall1_EventScript_NinjaInitiative_4
# 274 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, Dormhall1_EventScript_NinjaInitiative_5
# 277 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, Dormhall1_EventScript_NinjaInitiative_6
# 278 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, Dormhall1_EventScript_NinjaInitiative_6
# 280 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, Dormhall1_EventScript_NinjaInitiative_7
# 291 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_6
Dormhall1_EventScript_NinjaInitiative_1:
# 293 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 5, Dormhall1_Movement_LookOriginalDireciton
# 294 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_EventScript_NinjaInitiative_3:
# 271 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_0
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_4:
# 273 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_1
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_5:
# 275 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_2
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_6:
# 279 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_3
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_7:
# 281 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Dormhall1_EventScript_NinjaInitiative_9
# 287 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_5
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_9:
# 283 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_4
	goto Dormhall1_EventScript_NinjaInitiative_1


Dormhall1_EventScript_GuardTop::
# 298 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 299 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 300 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardTop_Text_0
# 301 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardBottem::
# 305 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 306 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 307 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardBottem_Text_0
# 308 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_StatueNormal::
# 312 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 313 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
# 314 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_SpecialStatueBack::
# 318 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 319 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 320 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_RESULT
# 322 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, Dormhall1_SignScript_SpecialStatueBack_3
# 323 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, Dormhall1_SignScript_SpecialStatueBack_3
# 324 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, Dormhall1_SignScript_SpecialStatueBack_3
# 328 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, Dormhall1_SignScript_SpecialStatueBack_4
Dormhall1_SignScript_SpecialStatueBack_1:
# 331 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_SignScript_SpecialStatueBack_3:
# 325 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_SpecialStatueBack_Text_0
	goto Dormhall1_SignScript_SpecialStatueBack_1

Dormhall1_SignScript_SpecialStatueBack_4:
# 329 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
	goto Dormhall1_SignScript_SpecialStatueBack_1


Dormhall1_Trigger_NoEntry::
# 335 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 336 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Dormhall1_Movement_MoveBack
# 337 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Trigger_NoEntry_Text_0
# 338 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 339 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_SetWarpValue1::
# 343 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 1
# 344 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue2::
# 348 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 2
# 349 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue3::
# 353 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 3
# 354 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


# 357 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_NoticePlayer:
# 358 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	emote_exclamation_mark
	step_end

# 361 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_ShockLeft:
# 362 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	emote_exclamation_mark
# 363 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	face_right
	step_end

# 366 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_MoveToPlayer:
# 367 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_up
# 367 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_up
	step_end

# 370 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_WalkAway:
# 371 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 371 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 371 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 371 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 372 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 372 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 372 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 372 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 373 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
	step_end

# 376 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_MoveBack:
# 377 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
	step_end

# 380 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_LookOriginalDireciton:
# 381 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	face_down
	step_end

# 384 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_Move_To_PlayerWon:
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 385 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 386 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_up
# 386 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_up
	step_end

# 389 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_Move_To_PlayerLost:
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 390 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 391 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_up
	step_end

# 394 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movemement_DelayedLookDown:
# 395 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	delay_8
# 395 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	delay_8
# 395 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	delay_8
# 395 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	delay_8
# 395 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	delay_8
# 395 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	delay_8
# 396 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	face_down
	step_end

# 399 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_MoveOutOfTheWay:
# 400 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	face_right
# 401 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lock_facing_direction
# 402 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 403 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	unlock_facing_direction
	step_end

# 406 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movemement_MoveAway:
# 407 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 407 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 407 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 408 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
	step_end

Dormhall1_Frame_FirstTimeEnter_Text_0:
# 52 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {COLOR BLUE}{PLAYER}! {COLOR DARK_GRAY}You're awake. I have\n"
	.string "been waiting for you!$"

Dormhall1_Frame_FirstTimeEnter_Text_1:
# 56 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
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

DormHall1_LostTournament_Text_0:
# 89 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Oh {PLAYER}, you're finally\n"
	.string "awake!\p"
	.string "After you lost you kinda seemed to be\n"
	.string "out of it for a while...\l"
	.string "this is the first time you left your\l"
	.string "room since the tournament is over!\p"
	.string "Oh in case you don't know already, I've\n"
	.string "won that tournament!\p"
	.string "They give me this interesting price...\l"
	.string "If you have time I would like to show\l"
	.string "you...$"

DormHall1_LostTournament_Text_1:
# 95 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}???{COLOR DARK_GRAY}: Hold that thought Fiona.$"

DormHall1_LostTournament_Text_2:
# 105 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}Leader{COLOR DARK_GRAY}: Excuse me Fiona, but I'm here\n"
	.string "for {PLAYER}$"

DormHall1_LostTournament_Text_3:
# 106 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Oh... Oké$"

DormHall1_LostTournament_Text_4:
# 110 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}Leader{COLOR DARK_GRAY}: I would like to talk to you\n"
	.string "personally, if you wouldn't mind.\p"
	.string "But let's do that somewhere with less\n"
	.string "prying eyes and gawking mounths.\l"
	.string "If you would please follow me.$"

DormHall1_WonTournament_Text_0:
# 117 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}???{COLOR DARK_GRAY}: {PLAYER}, stay there for a\n"
	.string "moment$"

Dormhall1_Frame_DeneithDefeat_Text_0:
# 136 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR RED}Airanea{COLOR DARK_GRAY}: Ah {PLAYER}, you're awake\n"
	.string "again!\l"
	.string "That is great to see.\p"
	.string "I applaud your bravely, not many people\n"
	.string "would dare to fight against a team A.S.\l"
	.string "member, let alone someone like you who\l"
	.string "just started their journey.\p"
	.string "From what I could see through the door,\n"
	.string "that girl, Deneith, knocked you out,\l"
	.string "after she beat your pokemon up.\l"
	.string "By the time we got the door open, she\l"
	.string "was long gone...\l"
	.string "and whatever she stole with it.\p"
	.string "Don't blame yourself, you should never\n"
	.string "have been in that position anyways.\l"
	.string "We're all just glad you're oké.\p"
	.string "$"

Dormhall1_Frame_DeneithDefeat_Text_1:
# 144 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "If you're wandering you haven't been\n"
	.string "out for long, so don't worry. I was just\l"
	.string "standing guard on orders of {COLOR LIGHT_GRAY}the Leader{COLOR DARK_GRAY}.\l"
	.string "Now you're back up again, I'll be going. I\l"
	.string "have other important stuff to take\l"
	.string "care off.\p"
	.string "A warning though before I go: watch out\n"
	.string "of these Team A.S. members, they don't\l"
	.string "honour the basic rules of pokemon\l"
	.string "battle like you do.\l"
	.string "If you win, they might still attack you\l"
	.string "directly without a care, and if they\l"
	.string "win... well you experienced that first\l"
	.string "hand didn't you?\p"
	.string "If you would manage to bring in a Team\n"
	.string "A.S. member you would be rewardly\l"
	.string "greatly, but I would advice against it,\l"
	.string "because it might caused you your life.\l"
	.string "It would be a shame to lose such a\l"
	.string "valuable member like you are.$"

DormHall1_EventScript_LadyInitiative_Text_0:
# 168 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Does he really think we don't notice\n"
	.string "him?$"

DormHall1_EventScript_LadyInitiative_Text_1:
# 170 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I never had a pokemon before and now I\n"
	.string "have to fight in a tournament. I wonder\l"
	.string "how it will go...$"

DormHall1_EventScript_LadyInitiative_Text_2:
# 172 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Did you really have to go that hard on\n"
	.string "me? You could have at least given me a\l"
	.string "chance!$"

DormHall1_EventScript_LadyInitiative_Text_3:
# 174 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I saw your fight! Fiona is really a\n"
	.string "powerfull Pokemon Trainer\p"
	.string "She has a good chance at winning this\n"
	.string "whole Tournament!$"

DormHall1_EventScript_LadyInitiative_Text_4:
# 176 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "You can always ask for a rematch!\n"
	.string "I'll make sure I won't lose this time!$"

DormHall1_EventScript_LadyInitiative_Text_5:
# 180 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I really thought Fiona had the upper\n"
	.string "hand in that battle for a moment!$"

DormHall1_EventScript_LadyInitiative_Text_6:
# 184 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Todays final is gonna be very\n"
	.string "interesting! Fiona and {PLAYER} have\l"
	.string "both shown incredible skill!$"

DormHall1_EventScript_LadyInitiative_Text_7:
# 187 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: The world outside can be a scary\n"
	.string "place, but at least with my Pokemon I\l"
	.string "can make sure I'm safe.$"

DormHall1_EventScript_ManInitiative_Text_0:
# 201 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Just ignore that guy, let him enjoy the\n"
	.string "moment.$"

DormHall1_EventScript_ManInitiative_Text_1:
# 203 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Don't worry about it, I'm sure {COLOR LIGHT_GRAY}The\n"
	.string "Leader{COLOR DARK_GRAY} made this a safe environment to\l"
	.string "test out the waters.$"

DormHall1_EventScript_ManInitiative_Text_2:
# 205 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I'm sorry. I guess I was just a bit too\n"
	.string "much focussed on impressing Surge and\l"
	.string "possibly the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

DormHall1_EventScript_ManInitiative_Text_3:
# 207 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Wow, that Fiona Lass is really something\n"
	.string "else, she wiped the floor with me.$"

DormHall1_EventScript_ManInitiative_Text_4:
# 209 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Seeing the other Initatives fight each\n"
	.string "other makes me realize I still have much\l"
	.string "to learn.$"

DormHall1_EventScript_ManInitiative_Text_5:
# 213 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I was so close to be the tournament\n"
	.string "champion losers, guess I have to live\l"
	.string "with the fact I'm just a regular loser.\p"
	.string "...\p"
	.string "Don't you dare, Vera!$"

DormHall1_EventScript_ManInitiative_Text_6:
# 219 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "It certainly is! I hope Fiona will win, at\n"
	.string "least then I can say I lost to the\l"
	.string "Tournament Champion...$"

DormHall1_EventScript_ManInitiative_Text_7:
# 222 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Tristan{COLOR DARK_GRAY}: You should watch out for\n"
	.string "those A.S. members, they look very\l"
	.string "strong...$"

DormHall1_EventScript_StatueInitiative_Text_0:
# 237 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I wonder what kind of pokemon these\n"
	.string "statues are supposed to be.$"

DormHall1_EventScript_StatueInitiative_Text_1:
# 239 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "With the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} here, who knows\n"
	.string "what kinds of things we can learn from\l"
	.string "{COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY}.$"

DormHall1_EventScript_StatueInitiative_Text_2:
# 241 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I underestimated how little I actually\n"
	.string "know about using my skills out on the\l"
	.string "field.$"

DormHall1_EventScript_StatueInitiative_Text_3:
# 244 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I have been reflecting on my failures\n"
	.string "and I think I should try becoming more\l"
	.string "of do-er and less of learner.$"

DormHall1_EventScript_StatueInitiative_Text_4:
# 248 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Impressive {PLAYER}! I do hope you\n"
	.string "would allow a low level trainer like me\l"
	.string "take you on sometime!$"

DormHall1_EventScript_StatueInitiative_Text_5:
# 252 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "You know, watching you have made me\n"
	.string "realize I have still a long way to go,\l"
	.string "but that does not mean I intend to give\l"
	.string "up that easily!$"

DormHall1_EventScript_StatueInitiative_Text_6:
# 255 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: Strange how no matter what kind\n"
	.string "of pokemon I encounter, I have never\l"
	.string "seen a pokemon like this statue...$"

Dormhall1_EventScript_NinjaInitiative_Text_0:
# 271 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "sssh, don't let them know I'm hiding\n"
	.string "here.$"

Dormhall1_EventScript_NinjaInitiative_Text_1:
# 273 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I have to improve my ninja skills if I\n"
	.string "want to impress the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

Dormhall1_EventScript_NinjaInitiative_Text_2:
# 275 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I thought I was very sneaky with my\n"
	.string "tactics, but my opponent saw straight\l"
	.string "through me.\p"
	.string "I have to improve my sneaking skills if\n"
	.string "I ever want to make it far in MOD!$"

Dormhall1_EventScript_NinjaInitiative_Text_3:
# 279 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I'm impressed you have gotten this far\n"
	.string "without making sure you got the upper\l"
	.string "hand on your opponent.$"

Dormhall1_EventScript_NinjaInitiative_Text_4:
# 283 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Congratulations {PLAYER}, you have\n"
	.string "done a great job! If you ever feel like\l"
	.string "someone is watching you, just... ignore\l"
	.string "it for me will you?$"

Dormhall1_EventScript_NinjaInitiative_Text_5:
# 287 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "You and Fiona are both fascinating\n"
	.string "trainers to watch!\p"
	.string "I might try to shadow you for a while to\n"
	.string "learn a thing or two from you!$"

Dormhall1_EventScript_NinjaInitiative_Text_6:
# 291 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: Fighting head on is not always the\n"
	.string "best tactic, I have learned that\l"
	.string "sneaking about can give you a better\l"
	.string "idea what is going on than to beat the\l"
	.string "answers out of people.$"

Dormhall1_EventScript_GuardTop_Text_0:
# 300 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "This area lead to a special area not\n"
	.string "meant for initiatives, you better move\l"
	.string "to other way.$"

Dormhall1_EventScript_GuardBottem_Text_0:
# 307 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Our duty is to prevent any nosey\n"
	.string "initiative from entering this area.$"

Dormhall1_SignScript_StatueNormal_Text_0:
# 313 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Dormhall1_SignScript_SpecialStatueBack_Text_0:
# 325 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Hé, there seems to be something etched\n"
	.string "on the back of this statue:\p"
	.string "'forgotten, but not gone.\n"
	.string "-Team A.S.'$"

Dormhall1_Trigger_NoEntry_Text_0:
# 337 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Sorry kid, no entry without prior\n"
	.string "authorization.$"
