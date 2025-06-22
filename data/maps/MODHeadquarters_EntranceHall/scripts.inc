MODHeadquarters_EntranceHall_MapScripts::
# 6 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Entrancehall_OnTransition
# 7 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_EntranceHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_EntranceHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 10, EntranceHall_FirstEntrace
# 9 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	map_script_2 VAR_MOD_SHOPS_STATE, 1111, EntranceHall_CheckDoor
	.2byte 0


Entrancehall_OnTransition::
# 15 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1000
	goto_if_eq Entrancehall_OnTransition_1
# 15 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 100
	goto_if_eq Entrancehall_OnTransition_1
# 15 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 10
	goto_if_eq Entrancehall_OnTransition_1
# 15 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1
	goto_if_eq Entrancehall_OnTransition_1
# 19 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	goto_if_unset FLAG_HIDE_DENEITH, Entrancehall_OnTransition_2
	return

Entrancehall_OnTransition_1:
# 17 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return

Entrancehall_OnTransition_2:
# 21 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	setflag FLAG_HIDE_DENEITH
	return


EntranceHall_FirstEntrace::
# 26 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lockall
# 27 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	setflag FLAG_HIDE_LEADER
# 28 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookRight
# 29 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 30 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, EntranceHall_FirstEntrace_2
# 37 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_2
# 38 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 40 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_RESULT, SPECIES_EEVEE
	goto_if_eq EntranceHall_FirstEntrace_6
# 46 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	givemon SPECIES_EEVEE, 5, , 4, , 2, , , , , , , , , , , , , , , , , , 1
EntranceHall_FirstEntrace_5:
# 48 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_3
# 49 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitfanfare
# 50 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_4, MSGBOX_YESNO
# 51 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EntranceHall_FirstEntrace_10
EntranceHall_FirstEntrace_9:
# 56 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_5
EntranceHall_FirstEntrace_1:
# 58 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_6
# 59 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookLeft
# 60 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_MoveDownFromLeader
# 61 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 62 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_WalkRightNormal1
# 63 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_WalkRightNormal1
# 64 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_7
# 65 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 66 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 67 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookUp
# 68 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 69 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_8
# 70 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_WalkRightNormal2
# 71 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_WalkRightNormal2
# 72 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_9
# 73 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 74 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 75 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookUp
# 76 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 77 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_10
# 78 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_WalkRightCutOff
# 79 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_WalkRightCutOff
# 80 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_11
# 81 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 82 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 1, EntranceHall_Movement_DeneithBumpLeader
# 83 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 84 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_12
# 85 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookLeft
# 86 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookLeft
# 87 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 1, EntranceHall_Movement_DeneithWalkAway
# 88 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 89 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	removeobject 1, MAP_MODHEADQUARTERS_ENTRANCE_HALL
# 90 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_13
# 91 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 92 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookUp
# 93 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_14
# 94 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_WalkRightCutOff
# 95 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_WalkRightCutOff
# 96 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_15
# 97 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 98 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 99 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookUp
# 100 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 101 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_16
# 102 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_WalkRightNormal2
# 103 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_WalkRightNormal2
# 104 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_17
# 105 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 106 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 107 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookUp
# 108 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 109 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_18
# 110 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_19
# 111 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_WalkRightNormal2
# 112 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_WalkRightNormal2
# 113 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_20
# 114 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_21
# 115 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 116 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 117 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookUp
# 118 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 119 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_22
# 120 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_23
# 121 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_24
# 122 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookUp
# 123 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 124 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_25
# 125 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LookDown
# 126 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 127 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_26
# 128 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_LookLeft
# 129 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 3, EntranceHall_Movement_LeaderWalkAway
# 130 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 131 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	removeobject 3, MAP_MODHEADQUARTERS_ENTRANCE_HALL
# 132 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 11
# 133 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	releaseall
	return

EntranceHall_FirstEntrace_2:
# 32 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_0
# 33 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_FirstEntrace_Text_1
	goto EntranceHall_FirstEntrace_1

EntranceHall_FirstEntrace_6:
# 42 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	givemon SPECIES_RIOLU, 5, , 4, , 2, , , , , , , , , , , , , , , , , , 1
	goto EntranceHall_FirstEntrace_5

EntranceHall_FirstEntrace_10:
# 53 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 54 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto EntranceHall_FirstEntrace_9


EntranceHall_CheckDoor::
# 137 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lockall
# 138 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_CheckDoor_Text_0
# 139 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	setvar VAR_MOD_SHOPS_STATE, 2000
# 140 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 12
# 141 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	releaseall
	return


EntranceHall_Trigger_Deneith::
# 145 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lockall
# 146 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	faceplayer
# 147 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Trigger_Deneith_Text_0
# 148 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement 2, EntranceHall_Movement_LookUp
# 149 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	waitmovement 0
# 150 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	releaseall
	return


EntranceHall_Trigger_NotYet::
# 154 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lock
# 155 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Hall1_Movement_MoveBack
# 156 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Trigger_NotYet_Text_0
# 157 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	release
	return


EntranceHall_Trigger_Release::
# 161 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lockall
# 162 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 13
# 163 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Trigger_Release_Text_0
# 164 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EntranceHall_Movement_PlayerGetCall
# 165 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Trigger_Release_Text_1
# 166 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	releaseall
	return


EntranceHall_Sign_MoveMasters::
# 170 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lock
# 171 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Sign_MoveMasters_Text_0
# 172 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	release
	return


EntranceHall_Sign_GeneralStore::
# 176 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lock
# 177 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Sign_GeneralStore_Text_0
# 178 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	release
	return


EntranceHall_Sign_EvolutionMaster::
# 182 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lock
# 183 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox EntranceHall_Sign_EvolutionMaster_Text_0
# 184 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	release
	return


Entrancehall_Sign_SpecialShop::
# 188 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lock
# 189 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_SpecialShop_Text_0
# 190 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	release
	return


Entrancehall_Sign_Office::
# 194 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lockall
# 195 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	switch VAR_MOD_SHOPS_STATE
# 197 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 11, Entrancehall_Sign_Office_3
# 198 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 101, Entrancehall_Sign_Office_3
# 199 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 1001, Entrancehall_Sign_Office_3
# 200 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 110, Entrancehall_Sign_Office_3
# 201 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 1010, Entrancehall_Sign_Office_3
# 202 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 1100, Entrancehall_Sign_Office_3
# 203 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 111, Entrancehall_Sign_Office_3
# 204 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 1011, Entrancehall_Sign_Office_3
# 205 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 1101, Entrancehall_Sign_Office_3
# 206 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 1110, Entrancehall_Sign_Office_3
# 216 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	case 2000, Entrancehall_Sign_Office_4
# 227 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_6
Entrancehall_Sign_Office_1:
# 229 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	releaseall
	return

Entrancehall_Sign_Office_3:
# 207 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_0, MSGBOX_YESNO
# 208 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Entrancehall_Sign_Office_6
# 214 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_2
	goto Entrancehall_Sign_Office_1

Entrancehall_Sign_Office_4:
# 217 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_3, MSGBOX_YESNO
# 218 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Entrancehall_Sign_Office_9
# 224 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_5
	goto Entrancehall_Sign_Office_1

Entrancehall_Sign_Office_6:
# 210 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_1
	goto Entrancehall_Sign_Office_1

Entrancehall_Sign_Office_9:
# 220 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	msgbox Entrancehall_Sign_Office_Text_4
	goto Entrancehall_Sign_Office_1


# 232 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_LookRight:
# 233 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	face_right
	step_end

# 236 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_LookLeft:
# 237 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	face_left
	step_end

# 240 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_LookUp:
# 241 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	face_up
	step_end

# 244 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_LookDown:
# 245 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	face_down
	step_end

# 248 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_MoveDownFromLeader:
# 249 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_down
# 250 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_right
	step_end

# 253 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_WalkRightNormal1:
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 254 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
	step_end

# 257 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_WalkRightNormal2:
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 258 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
	step_end

# 261 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_WalkRightCutOff:
# 262 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 262 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 262 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
# 262 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_slow_right
	step_end

# 265 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_DeneithBumpLeader:
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 266 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 267 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	lock_facing_direction
# 268 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	jump_right
# 269 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	unlock_facing_direction
	step_end

# 272 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_DeneithWalkAway:
# 273 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_down
# 273 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_down
# 274 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 274 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 275 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_up
# 275 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_up
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
# 276 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_fast_left
	step_end

# 279 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_LeaderWalkAway:
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
# 280 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
EntranceHall_Movement_PlayerGetCall:
# 284 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	emote_exclamation_mark
	step_end

EntranceHall_FirstEntrace_Text_0:
# 32 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: You might wonder why I\n"
	.string "brought you here instead of Fiona,\l"
	.string "right?\p"
	.string "Well, to tell you the truth, me and {COLOR LIGHT_GREEN}PROF\n"
	.string "KECTOR{COLOR DARK_GRAY} expected that you would come\l"
	.string "out of top in this tournament.\p"
	.string "Sadly you didn't, but that does not\n"
	.string "mean you have disappointed us.\p"
	.string "Team MOD is preparing something big in\n"
	.string "the near future, and you could be a\l"
	.string "great asset to my new plan$"

EntranceHall_FirstEntrace_Text_1:
# 33 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "You could wonder why we don't ask Fiona,\n"
	.string "the champion of the Tournament, to join\l"
	.string "us, but I have a reason for that.$"

EntranceHall_FirstEntrace_Text_2:
# 37 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: First things first, your\n"
	.string "just reward$"

EntranceHall_FirstEntrace_Text_3:
# 48 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} gave you a pokemon$"

EntranceHall_FirstEntrace_Text_4:
# 50 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Do you want to give the pokemon a name?$"

EntranceHall_FirstEntrace_Text_5:
# 56 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: {COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY} told me about\n"
	.string "you, you know.\p"
	.string "He told me I should expect great thing\n"
	.string "of you.\l"
	.string "That is also one of the reasons I'm here\l"
	.string "actually.\l"
	.string "So far, you do not dissapoint me.\p"
	.string "I have great plans coming and I could\n"
	.string "use a rekruut like you. But first you\l"
	.string "have to proof yourself to me.$"

EntranceHall_FirstEntrace_Text_6:
# 58 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Please walk with me, than I'll give you a\n"
	.string "proper tour while I'll explain what I'm\l"
	.string "talking about.$"

EntranceHall_FirstEntrace_Text_7:
# 64 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Intelligence, Strenght,\n"
	.string "Compassion.\p"
	.string "These are incredible skills to have but\n"
	.string "in the end we as team MOD only care\l"
	.string "about one thing:\p"
	.string "Loyalty.$"

EntranceHall_FirstEntrace_Text_8:
# 69 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Up here we have the Move\n"
	.string "Masters.\p"
	.string "If you ever want your pokemon to learn\n"
	.string "or forget a move, they'll be the experts\l"
	.string "you want to talk about.\l"
	.string "This is also the place where you can\l"
	.string "rename your pokemons if you ever need\l"
	.string "to.\p"
	.string "That being said, like most services\n"
	.string "handled inside Team MOD, they do\l"
	.string "require a small fee for their services\l"
	.string "So keep that in mind when you need\l"
	.string "them.$"

EntranceHall_FirstEntrace_Text_9:
# 72 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Anyways, as I was saying:\n"
	.string "Loyalty is the core aspect we are\l"
	.string "looking for in our new recruits\p"
	.string "Most people just hope they can fumble\n"
	.string "or cheat their way in, so they are\l"
	.string "allowed to own the power of pokemons.\l"
	.string "But we have systems in place to make\l"
	.string "sure we have mostly people we know we\l"
	.string "can trust with these pokemon.\p"
	.string "That being said, I still have my doubts\n"
	.string "about Fiona's loyalty...\p"
	.string "Yours, on the other, I cannot yet place.$"

EntranceHall_FirstEntrace_Text_10:
# 77 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: This place is team MOD\n"
	.string "general store.\p"
	.string "Pokéballs, repels, potions and anything\n"
	.string "else you might need out in the wild can\l"
	.string "be bought here.\p"
	.string "Though your rank inside team MOD does\n"
	.string "matter what kind of items you can buy.$"

EntranceHall_FirstEntrace_Text_11:
# 80 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: You see, right now you're a\n"
	.string "level 1 Initiative\l"
	.string "Just like all you colleagues that also\l"
	.string "participated in the tournament.\l"
	.string "By showing your skill and loyalty to us,\l"
	.string "you'll grow in level inside our\l"
	.string "organisation.\p"
	.string "Once you-$"

EntranceHall_FirstEntrace_Text_12:
# 84 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: OOF!\p"
	.string "I'm sorry sir-\p"
	.string "O... O my god!\p"
	.string "I'm so sorry Daemion, I did not even\n"
	.string "know you were here.\l"
	.string "I'll get out of your way straight away!\p"
	.string "Again, I'm so sorry and I'll make this\n"
	.string "will never happen again!$"

EntranceHall_FirstEntrace_Text_13:
# 90 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: hm... that might be\n"
	.string "problematic...$"

EntranceHall_FirstEntrace_Text_14:
# 93 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: What? O nothing you need\n"
	.string "to worry about.\p"
	.string "Let's just quickly finish our business\n"
	.string "here, me being '{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}' and all that\l"
	.string "means I don't have much time for myself\l"
	.string "usually. Anyways, where were we?$"

EntranceHall_FirstEntrace_Text_15:
# 96 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Ah Yes, your rank!\p"
	.string "You can increase your rank if you show\n"
	.string "your skill and loyalty to us.\l"
	.string "Once you reach level 10 as Initiative\l"
	.string "you get the chance to perform a\l"
	.string "promotion test.\p"
	.string "If you succeed in that test, you'll\n"
	.string "become an official Rekruut. Maybe still\l"
	.string "low level, but at least more than a\l"
	.string "Rookie.$"

EntranceHall_FirstEntrace_Text_16:
# 101 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Here we have the Evolution\n"
	.string "Masters.\p"
	.string "You might maybe know that certain\n"
	.string "pokemon require specific conditions to\l"
	.string "evolve.\p"
	.string "If you need something specific to\n"
	.string "evolve a pokemon or you want to know\l"
	.string "how to evolve a pokemon, this is the\l"
	.string "place to go!$"

EntranceHall_FirstEntrace_Text_17:
# 104 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Let's talk some more about\n"
	.string "your rank.\p"
	.string "You probably wonder what you need to\n"
	.string "do to increase your rank, aren't you?\l"
	.string "It's simple!\p"
	.string "Go explore {COLOR BLUE}Ludumundi{COLOR DARK_GRAY} with your pokemon.$"

EntranceHall_FirstEntrace_Text_18:
# 109 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Lastly, we have the special\n"
	.string "shop.\p"
	.string "As you might know, long ago we would use\n"
	.string "pokemon to help us throughout our\l"
	.string "travels, but since pokemon have not\l"
	.string "only abondanded us but also have\l"
	.string "proven to be dangerous, we needed some\l"
	.string "alternatives to overcome these common\l"
	.string "obstacles.\p"
	.string "Now, most of these obstacles have\n"
	.string "already been cleared out for most\l"
	.string "common people, but there are still a\l"
	.string "handful of places you might need some\l"
	.string "additional tools.$"

EntranceHall_FirstEntrace_Text_19:
# 110 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "This is the shop for those tools. They\n"
	.string "might be a bit expensive and you might\l"
	.string "not need all of them in your travels,\l"
	.string "but it is worth to take a look at once in\l"
	.string "a while. Some of the tools we sell here\l"
	.string "can be quite usefull.\p"
	.string "Well that is it for the tour, but I'm not\n"
	.string "yet done with you.\l"
	.string "I'll like you to invite you into one of my\l"
	.string "offices here.\l"
	.string "So, if you don't mind.$"

EntranceHall_FirstEntrace_Text_20:
# 113 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Many MOD members wander\n"
	.string "around {COLOR BLUE}Ludumundi{COLOR DARK_GRAY}, but to give you some\l"
	.string "guidance in your quest to become a\l"
	.string "higher ranking Initiative I have made\l"
	.string "some special preparations.\p"
	.string "I have set out 8 generals, who are\n"
	.string "specifically placed to test your skills.\l"
	.string "They are allowed to challenge you in any\l"
	.string "way, shape or form. For every general\l"
	.string "you defeat, you'll increase in rank by 1\p"
	.string "How you get that last rank, is up to you.\n"
	.string "Don't worry, we'll be watching you, so I\l"
	.string "think you'll be able to get a rank by\l"
	.string "just exploring about.\p"
	.string "If after going through all of this you\n"
	.string "still return and want to grow in this\l"
	.string "organisation, you'll have started to\l"
	.string "prove that we can count on your\l"
	.string "loyalty.$"

EntranceHall_FirstEntrace_Text_21:
# 114 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "if not, than depending on your choices\n"
	.string "we'll either let you life your live with\l"
	.string "your pokemon or we'll take away your\l"
	.string "pokemon and put you in prison for\l"
	.string "treason.\p"
	.string "But I assume we don't need to get that\n"
	.string "far.$"

EntranceHall_FirstEntrace_Text_22:
# 119 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Also, don't think you're\n"
	.string "special or anything.\p"
	.string "Well, technically you kinda are, because\n"
	.string "you're the only one I tell this directly\l"
	.string "to, but I mean this challenge is given\l"
	.string "to all Initiatives in your group.\p"
	.string "Everyone has an equal chance of\n"
	.string "becoming a Rekruut and everyone has an\l"
	.string "equal chance of beating you to the\l"
	.string "punch.$"

EntranceHall_FirstEntrace_Text_23:
# 120 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Just because I don't trust everyone,\n"
	.string "does not mean I don't give everyone a\l"
	.string "fair chance to win my trust.\p"
	.string "However there is one last thing I\n"
	.string "wanted to talk with you about, which is\l"
	.string "the reason I brought you here.$"

EntranceHall_FirstEntrace_Text_24:
# 121 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Team A.S..\p"
	.string "You might have heard that name before\n"
	.string "somewhere around here.\p"
	.string "They are an organisation that has been\n"
	.string "trying to undermine Team MOD for years\l"
	.string "now.\p"
	.string "We thought we had defeated them 10\n"
	.string "years ago, but recently they have seen\l"
	.string "to become more active again.\p"
	.string "We don't know what their plan is, but we\n"
	.string "know it can't be anything good.\p"
	.string "As a sign of good faith, I want to show\n"
	.string "you something that will show you what\l"
	.string "Team A.S. really is about!$"

EntranceHall_FirstEntrace_Text_25:
# 124 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Let me just-\p"
	.string "...\p"
	.string "wait, where did i put it?\p"
	.string "i would swear i...\p"
	.string "...\p"
	.string "that little -$"

EntranceHall_FirstEntrace_Text_26:
# 127 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: ...\p"
	.string "I'm sorry {PLAYER}, I seem to have\n"
	.string "lost the keycard to my office. I have an\l"
	.string "idea where to find it, so you just go and\l"
	.string "look around for a bit, while I'll go\l"
	.string "reclaim my keycard.\p"
	.string "Just come back here in a couple of\n"
	.string "minutes and we'll continue this\l"
	.string "conversation.$"

EntranceHall_CheckDoor_Text_0:
# 138 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Enough time should have passed.\p"
	.string "you should check if {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} is in his\n"
	.string "office already.$"

EntranceHall_Trigger_Deneith_Text_0:
# 147 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Oh hé Rookie!\p"
	.string "Don't mind me, I just found this keycard\n"
	.string "and thought it was better if I brought\l"
	.string "it back before someone who isn't\l"
	.string "supposed to pick it up finds it.\p"
	.string "Don't worry, I'll handle it from here!$"

EntranceHall_Trigger_NotYet_Text_0:
# 156 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "You don't have any reason yet to go\n"
	.string "this way.$"

EntranceHall_Trigger_Release_Text_0:
# 163 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "RING RING$"

EntranceHall_Trigger_Release_Text_1:
# 165 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "It seems like your phone is ringing.\l"
	.string "You decide to pick it up.\p"
	.string "???: Hello? Hello hello?\p"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}: Ah good {PLAYER}, it's the\n"
	.string "leader.\p"
	.string "This is quite unusual for me to do, but\n"
	.string "this... 'issue', has proven to be more of\l"
	.string "a problem then I expected.\p"
	.string "I'm sorry to say, but the thing that I\n"
	.string "wanted to show has to wait until later.\l"
	.string "Please, feel free to go outside and\l"
	.string "explore {COLOR BLUE}Ludumundi{COLOR DARK_GRAY}\l"
	.string "You can exit the building by taking the\l"
	.string "exit south of the shops and my office.\l"
	.string "You're free to return anytime, and if I\l"
	.string "happen to be there I'll make up on my\l"
	.string "promise.\l"
	.string "In the meantime, show you're worthy of\l"
	.string "carring pokemon around.\l"
	.string "May your fire burn bright.\p"
	.string "CLICK\p"
	.string "... Was that just your imagination, or did\n"
	.string "you just hear some movement behind\l"
	.string "that door?$"

EntranceHall_Sign_MoveMasters_Text_0:
# 171 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Move Masters\p"
	.string "Wether you're trying to learn or forget,\n"
	.string "Move Masters have your back!$"

EntranceHall_Sign_GeneralStore_Text_0:
# 177 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "MOD general Store\p"
	.string "For all your daily needs at a cheap\n"
	.string "price!$"

EntranceHall_Sign_EvolutionMaster_Text_0:
# 183 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Evolution masters\p"
	.string "we can help you bring pokemon back to\n"
	.string "their best strongest form. Together, we\l"
	.string "can make Pokemon great again!$"

Entrancehall_Sign_SpecialShop_Text_0:
# 189 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Nationals Usefull Tools.\p"
	.string "If you want to have that little extra\n"
	.string "on your journey.\l"
	.string "Satisfaction guaranteed or your money\l"
	.string "back!$"

Entrancehall_Sign_Office_Text_0:
# 207 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "The door is locked and the reflective\n"
	.string "glass makes it impossible to see inside\l"
	.string "Though you do seem to hear someone\l"
	.string "rummiging around inside.\l"
	.string "Knock on the door?$"

Entrancehall_Sign_Office_Text_1:
# 210 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "You knock on the door, but whoever is\n"
	.string "inside seems to not stop with whatever\l"
	.string "they are doing.$"

Entrancehall_Sign_Office_Text_2:
# 214 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "better to not interrupt whatever they\n"
	.string "are doing.$"

Entrancehall_Sign_Office_Text_3:
# 217 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "The door is locked and the reflective\n"
	.string "glass makes it impossible to see inside\l"
	.string "do you want to put your ear to the\l"
	.string "door?$"

Entrancehall_Sign_Office_Text_4:
# 220 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "You think you can hear some breathing,\n"
	.string "though you cannot make out if it comes\l"
	.string "from inside or if you just hear your own\l"
	.string "shallow breaths.$"

Entrancehall_Sign_Office_Text_5:
# 224 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "Why would you do that?$"

Entrancehall_Sign_Office_Text_6:
# 227 "data/maps/MODHeadquarters_EntranceHall/scripts.pory"
	.string "It's you!\p"
	.string "....\p"
	.string "You can only see yourself in the\n"
	.string "reflective glass and the door is locked$"
