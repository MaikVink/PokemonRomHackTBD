MODHeadquarters_DormHall1_MapScripts::
# 9 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dormhall1_OnTransition
# 10 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 1, Dormhall1_Frame
# 12 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 10, Dormhall1_Frame_TournamentOver
	.2byte 0


Dormhall1_OnTransition::
# 17 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_ALWAYS_ON, 1
# 18 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 1
# 19 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	compare VAR_STORY_PROGRESSION, 0
	goto_if_eq Dormhall1_OnTransition_2
Dormhall1_OnTransition_1:
# 32 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, Dormhall1_OnTransition_4
	return

Dormhall1_OnTransition_2:
# 21 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 1
# 22 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 23 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_SYS_ALWAYS_ON
# 24 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_REVERSE_ROLLCALL_FLAG
# 25 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 26 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 27 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_REVERSED_GUARD
# 28 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_LEADER
# 29 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_DENEITH
# 30 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_HIDE_REPLICA_SIMULATION_SISTER
	goto Dormhall1_OnTransition_1

Dormhall1_OnTransition_4:
# 34 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 10
# 35 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	clearflag FLAG_FIRST_RIVAL_MEETING
# 36 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	clearflag FLAG_HIDE_LEADER
	return


Dormhall1_Frame_TournamentOver::
# 41 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 42 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, Dormhall1_Frame_TournamentOver_2
# 47 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	call DormHall1_WonTournament
Dormhall1_Frame_TournamentOver_1:
# 49 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_Frame_TournamentOver_2:
	goto Dormhall1_Frame_TournamentOver_1


Dormhall1_Frame::
# 53 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lock
# 54 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_NoticePlayer
# 55 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 56 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_0
# 58 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_MoveToPlayer
# 59 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 60 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_1
# 67 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_WalkAway
# 68 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 69 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setflag FLAG_FIRST_RIVAL_MEETING
# 70 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 2
# 71 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	removeobject 4, MAP_MODHEADQUARTERS_DORM_HALL1
# 72 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


DormHall1_EventScript_LadyInitiative::
# 76 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 77 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 79 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_LadyInitiative_3
# 80 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_LadyInitiative_3
# 81 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_LadyInitiative_3
# 82 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_LadyInitiative_3
# 83 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_LadyInitiative_3
# 85 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_LadyInitiative_4
# 87 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_LadyInitiative_5
# 89 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_LadyInitiative_6
# 91 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_LadyInitiative_7
# 93 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_LadyInitiative_8
# 103 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_7
DormHall1_EventScript_LadyInitiative_1:
# 105 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_LadyInitiative_3:
# 84 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_0
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_4:
# 86 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_1
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_5:
# 88 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_2
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_6:
# 90 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_3
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_7:
# 92 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_4
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_8:
# 94 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_LadyInitiative_10
# 100 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_6
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_10:
# 96 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_5
	goto DormHall1_EventScript_LadyInitiative_1


DormHall1_EventScript_ManInitiative::
# 109 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 110 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 112 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_ManInitiative_3
# 113 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_ManInitiative_3
# 114 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_ManInitiative_3
# 115 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_ManInitiative_3
# 116 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_ManInitiative_3
# 118 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_ManInitiative_4
# 120 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_ManInitiative_5
# 122 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_ManInitiative_6
# 124 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_ManInitiative_7
# 126 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_ManInitiative_8
# 138 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_7
DormHall1_EventScript_ManInitiative_1:
# 140 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_ManInitiative_3:
# 117 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_0
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_4:
# 119 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_1
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_5:
# 121 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_2
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_6:
# 123 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_3
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_7:
# 125 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_4
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_8:
# 127 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_ManInitiative_10
# 135 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_6
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_10:
# 129 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_5
	goto DormHall1_EventScript_ManInitiative_1


DormHall1_EventScript_StatueInitiative::
# 144 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 145 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 146 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 148 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_StatueInitiative_3
# 149 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_StatueInitiative_3
# 150 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_StatueInitiative_3
# 151 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_StatueInitiative_3
# 152 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_StatueInitiative_3
# 154 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_StatueInitiative_4
# 156 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_StatueInitiative_5
# 158 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_StatueInitiative_6
# 159 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_StatueInitiative_6
# 161 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_StatueInitiative_7
# 171 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_6
DormHall1_EventScript_StatueInitiative_1:
# 174 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_StatueInitiative_3:
# 153 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_0
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_4:
# 155 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_1
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_5:
# 157 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_2
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_6:
# 160 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_3
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_7:
# 162 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_StatueInitiative_9
# 168 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_5
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_9:
# 164 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_4
	goto DormHall1_EventScript_StatueInitiative_1


Dormhall1_EventScript_NinjaInitiative::
# 178 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 179 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 180 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 182 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 0, Dormhall1_EventScript_NinjaInitiative_3
# 183 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, Dormhall1_EventScript_NinjaInitiative_3
# 184 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, Dormhall1_EventScript_NinjaInitiative_3
# 185 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, Dormhall1_EventScript_NinjaInitiative_3
# 186 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, Dormhall1_EventScript_NinjaInitiative_3
# 188 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 5, Dormhall1_EventScript_NinjaInitiative_4
# 190 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 6, Dormhall1_EventScript_NinjaInitiative_5
# 193 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 7, Dormhall1_EventScript_NinjaInitiative_6
# 194 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 8, Dormhall1_EventScript_NinjaInitiative_6
# 196 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 9, Dormhall1_EventScript_NinjaInitiative_7
# 207 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_6
Dormhall1_EventScript_NinjaInitiative_1:
# 209 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 5, Dormhall1_Movement_LookOriginalDireciton
# 210 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_EventScript_NinjaInitiative_3:
# 187 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_0
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_4:
# 189 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_1
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_5:
# 191 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_2
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_6:
# 195 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_3
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_7:
# 197 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Dormhall1_EventScript_NinjaInitiative_9
# 203 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_5
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_9:
# 199 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_4
	goto Dormhall1_EventScript_NinjaInitiative_1


Dormhall1_EventScript_GuardTop::
# 214 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 215 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 216 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardTop_Text_0
# 217 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardBottem::
# 221 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 222 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	faceplayer
# 223 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardBottem_Text_0
# 224 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_StatueNormal::
# 228 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 229 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
# 230 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_SpecialStatueBack::
# 234 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 235 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 236 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	switch VAR_RESULT
# 238 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 1, Dormhall1_SignScript_SpecialStatueBack_3
# 239 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 3, Dormhall1_SignScript_SpecialStatueBack_3
# 240 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 4, Dormhall1_SignScript_SpecialStatueBack_3
# 244 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	case 2, Dormhall1_SignScript_SpecialStatueBack_4
Dormhall1_SignScript_SpecialStatueBack_1:
# 247 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_SignScript_SpecialStatueBack_3:
# 241 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_SpecialStatueBack_Text_0
	goto Dormhall1_SignScript_SpecialStatueBack_1

Dormhall1_SignScript_SpecialStatueBack_4:
# 245 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
	goto Dormhall1_SignScript_SpecialStatueBack_1


Dormhall1_Trigger_NoEntry::
# 251 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	lockall
# 252 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Dormhall1_Movement_MoveBack
# 253 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox Dormhall1_Trigger_NoEntry_Text_0
# 254 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 255 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_SetWarpValue1::
# 259 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 1
# 260 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue2::
# 264 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 2
# 265 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue3::
# 269 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 3
# 270 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	release
	return


DormHall1_WonTournament::
# 274 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_WonTournament_Text_0
# 275 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 5, Dormhall1_Movement_ShockLeft
# 276 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 3, Dormhall1_Movement_ShockLeft
# 277 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 1, Dormhall1_Movement_NoticePlayer
# 278 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 8, Dormhall1_Movement_NoticePlayer
# 279 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	closemessage
# 280 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_Move_To_PlayerWon
# 281 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	waitmovement 0
# 282 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	msgbox DormHall1_WonTournament_Text_1
# 285 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	warp MAP_MODHEADQUARTERS_ENTRANCE_HALL, 2, 2
	return


# 289 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_NoticePlayer:
# 290 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	emote_exclamation_mark
	step_end

# 293 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_ShockLeft:
# 294 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	emote_exclamation_mark
# 295 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	face_right
	step_end

# 298 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_MoveToPlayer:
# 299 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_up
# 299 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_up
	step_end

# 302 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_WalkAway:
# 303 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 303 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 303 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 303 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
# 304 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 304 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 304 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 304 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
# 305 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_MoveBack:
# 309 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_left
	step_end

# 312 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_LookOriginalDireciton:
# 313 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	face_down
	step_end

# 316 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
Dormhall1_Movement_Move_To_PlayerWon:
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 317 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_right
# 318 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_up
# 318 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	walk_slow_up
	step_end

Dormhall1_Frame_Text_0:
# 56 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {COLOR BLUE}{PLAYER}! {COLOR DARK_GRAY}You're awake. I have\n"
	.string "been waiting for you!$"

Dormhall1_Frame_Text_1:
# 60 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
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
# 84 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Does he really think we don't notice\n"
	.string "him?$"

DormHall1_EventScript_LadyInitiative_Text_1:
# 86 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I never had a pokemon before and now I\n"
	.string "have to fight in a tournament. I wonder\l"
	.string "how it will go...$"

DormHall1_EventScript_LadyInitiative_Text_2:
# 88 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Did you really have to go that hard on\n"
	.string "me? You could have at least given me a\l"
	.string "chance!$"

DormHall1_EventScript_LadyInitiative_Text_3:
# 90 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I saw your fight! Fiona is really a\n"
	.string "powerfull Pokemon Trainer\p"
	.string "She has a good chance at winning this\n"
	.string "whole Tournament!$"

DormHall1_EventScript_LadyInitiative_Text_4:
# 92 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "You can always ask for a rematch!\n"
	.string "I'll make sure I won't lose this time!$"

DormHall1_EventScript_LadyInitiative_Text_5:
# 96 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I really thought Fiona had the upper\n"
	.string "hand in that battle for a moment!$"

DormHall1_EventScript_LadyInitiative_Text_6:
# 100 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Todays final is gonna be very\n"
	.string "interesting! Fiona and {PLAYER} have\l"
	.string "both shown incredible skill!$"

DormHall1_EventScript_LadyInitiative_Text_7:
# 103 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: The world outside can be a scary\n"
	.string "place, but at least with my Pokemon I\l"
	.string "can make sure I'm safe.$"

DormHall1_EventScript_ManInitiative_Text_0:
# 117 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Just ignore that guy, let him enjoy the\n"
	.string "moment.$"

DormHall1_EventScript_ManInitiative_Text_1:
# 119 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Don't worry about it, I'm sure {COLOR LIGHT_GRAY}The\n"
	.string "Leader{COLOR DARK_GRAY} made this a safe environment to\l"
	.string "test out the waters.$"

DormHall1_EventScript_ManInitiative_Text_2:
# 121 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I'm sorry. I guess I was just a bit too\n"
	.string "much focussed on impressing Surge and\l"
	.string "possibly the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

DormHall1_EventScript_ManInitiative_Text_3:
# 123 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Wow, that Fiona Lass is really something\n"
	.string "else, she wiped the floor with me.$"

DormHall1_EventScript_ManInitiative_Text_4:
# 125 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Seeing the other Initatives fight each\n"
	.string "other makes me realize I still have much\l"
	.string "to learn.$"

DormHall1_EventScript_ManInitiative_Text_5:
# 129 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I was so close to be the tournament\n"
	.string "champion losers, guess I have to live\l"
	.string "with the fact I'm just a regular loser.\p"
	.string "...\p"
	.string "Don't you dare, Vera!$"

DormHall1_EventScript_ManInitiative_Text_6:
# 135 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "It certainly is! I hope Fiona will win, at\n"
	.string "least then I can say I lost to the\l"
	.string "Tournament Champion...$"

DormHall1_EventScript_ManInitiative_Text_7:
# 138 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Tristan{COLOR DARK_GRAY}: You should watch out for\n"
	.string "those A.S. members, they look very\l"
	.string "strong...$"

DormHall1_EventScript_StatueInitiative_Text_0:
# 153 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I wonder what kind of pokemon these\n"
	.string "statues are supposed to be.$"

DormHall1_EventScript_StatueInitiative_Text_1:
# 155 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "With the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} here, who knows\n"
	.string "what kinds of things we can learn from\l"
	.string "{COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY}.$"

DormHall1_EventScript_StatueInitiative_Text_2:
# 157 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I underestimated how little I actually\n"
	.string "know about using my skills out on the\l"
	.string "field.$"

DormHall1_EventScript_StatueInitiative_Text_3:
# 160 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I have been reflecting on my failures\n"
	.string "and I think I should try becoming more\l"
	.string "of do-er and less of learner.$"

DormHall1_EventScript_StatueInitiative_Text_4:
# 164 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Impressive {PLAYER}! I do hope you\n"
	.string "would allow a low level trainer like me\l"
	.string "take you on sometime!$"

DormHall1_EventScript_StatueInitiative_Text_5:
# 168 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "You know, watching you have made me\n"
	.string "realize I have still a long way to go,\l"
	.string "but that does not mean I intend to give\l"
	.string "up that easily!$"

DormHall1_EventScript_StatueInitiative_Text_6:
# 171 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: Strange how no matter what kind\n"
	.string "of pokemon I encounter, I have never\l"
	.string "seen a pokemon like this statue...$"

Dormhall1_EventScript_NinjaInitiative_Text_0:
# 187 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "sssh, don't let them know I'm hiding\n"
	.string "here.$"

Dormhall1_EventScript_NinjaInitiative_Text_1:
# 189 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I have to improve my ninja skills if I\n"
	.string "want to impress the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

Dormhall1_EventScript_NinjaInitiative_Text_2:
# 191 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I thought I was very sneaky with my\n"
	.string "tactics, but my opponent saw straight\l"
	.string "through me.\p"
	.string "I have to improve my sneaking skills if\n"
	.string "I ever want to make it far in MOD!$"

Dormhall1_EventScript_NinjaInitiative_Text_3:
# 195 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "I'm impressed you have gotten this far\n"
	.string "without making sure you got the upper\l"
	.string "hand on your opponent.$"

Dormhall1_EventScript_NinjaInitiative_Text_4:
# 199 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Congratulations {PLAYER}, you have\n"
	.string "done a great job! If you ever feel like\l"
	.string "someone is watching you, just... ignore\l"
	.string "it for me will you?$"

Dormhall1_EventScript_NinjaInitiative_Text_5:
# 203 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "You and Fiona are both fascinating\n"
	.string "trainers to watch!\p"
	.string "I might try to shadow you for a while to\n"
	.string "learn a thing or two from you!$"

Dormhall1_EventScript_NinjaInitiative_Text_6:
# 207 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: Fighting head on is not always the\n"
	.string "best tactic, I have learned that\l"
	.string "sneaking about can give you a better\l"
	.string "idea what is going on than to beat the\l"
	.string "answers out of people.$"

Dormhall1_EventScript_GuardTop_Text_0:
# 216 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "This area lead to a special area not\n"
	.string "meant for initiatives, you better move\l"
	.string "to other way.$"

Dormhall1_EventScript_GuardBottem_Text_0:
# 223 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Our duty is to prevent any nosey\n"
	.string "initiative from entering this area.$"

Dormhall1_SignScript_StatueNormal_Text_0:
# 229 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Dormhall1_SignScript_SpecialStatueBack_Text_0:
# 241 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Hé, there seems to be something etched\n"
	.string "on the back of this statue:\p"
	.string "'forgotten, but not gone.\n"
	.string "-Team A.S.'$"

Dormhall1_Trigger_NoEntry_Text_0:
# 253 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "Sorry kid, no entry without prior\n"
	.string "authorization.$"

DormHall1_WonTournament_Text_0:
# 274 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}???{COLOR DARK_GRAY}: {PLAYER}, stay there for a\n"
	.string "moment$"

DormHall1_WonTournament_Text_1:
# 282 "data/maps/MODHeadquarters_DormHall1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}Leader{COLOR DARK_GRAY}: I would like to talk to you\n"
	.string "personally, if you wouldn't mind.\p"
	.string "But let's do that somewhere with less\n"
	.string "prying eyes and gawking mounths.\l"
	.string "If you would please follow me.$"
