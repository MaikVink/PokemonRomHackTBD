MODHeadquarters_BattleDojo_MapScripts::
# 12 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_BattleDojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_BattleDojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_HIDE_OBJECTS, 1, BattleDojo_HideNPCs_OnTransition
# 14 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 9, BattleDojo_Return
# 15 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 10, BattleDojo_Return
# 16 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 11, BattleDojo_Return
# 17 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 12, BattleDojo_Return
# 18 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 13, BattleDojo_Return
# 19 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 14, BattleDojo_Return
# 20 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 15, BattleDojo_Return
	.2byte 0


BattleDojo_Return::
# 25 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_HideNPCs
# 26 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_FaceRight
# 27 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 29 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 9, BattleDojo_Return_3
# 32 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 10, BattleDojo_Return_4
# 35 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 11, BattleDojo_Return_5
# 38 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 12, BattleDojo_Return_6
# 41 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 13, BattleDojo_Return_7
# 44 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 14, BattleDojo_Return_8
# 47 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 15, BattleDojo_Return_9
# 51 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Return_Text_0
BattleDojo_Return_1:
# 53 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 54 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_BattleDojoBattles
	return

BattleDojo_Return_3:
# 30 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 8
# 31 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto BattleDojo_Return_1

BattleDojo_Return_4:
# 33 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 2
# 34 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto BattleDojo_Return_1

BattleDojo_Return_5:
# 36 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 4
# 37 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto BattleDojo_Return_1

BattleDojo_Return_6:
# 39 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 3
# 40 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto BattleDojo_Return_1

BattleDojo_Return_7:
# 42 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 5
# 43 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto BattleDojo_Return_1

BattleDojo_Return_8:
# 45 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 6
# 46 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 5
	goto BattleDojo_Return_1

BattleDojo_Return_9:
# 48 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 7
# 49 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 6
	goto BattleDojo_Return_1


BattleDojo_HideNPCs_OnTransition::
# 58 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 8, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 59 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 60 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 4, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 61 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 5, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 62 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 2, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 63 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 7, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 64 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 6, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 65 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 8, 6, 11
# 66 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 3, 6, 11
# 67 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 4, 6, 11
# 68 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 5, 6, 11
# 69 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 2, 6, 11
# 70 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 7, 6, 11
# 71 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 6, 6, 11
# 72 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojo_HideNPCs::
# 76 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 8, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 77 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 78 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 4, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 79 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 5, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 80 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 2, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 81 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 7, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 82 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 6, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 83 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 8, 6, 11
# 84 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 3, 6, 11
# 85 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 4, 6, 11
# 86 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 5, 6, 11
# 87 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 2, 6, 11
# 88 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 7, 6, 11
# 89 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setobjectxy 6, 6, 11
# 90 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojo_HNS1::
# 95 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 3
	return


BattleDojo_Event_Surge::
# 99 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	lock
# 100 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	faceplayer
# 101 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 103 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 6, BattleDojo_Event_Surge_3
# 164 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 7, BattleDojo_Event_Surge_4
# 220 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 8, BattleDojo_Event_Surge_5
# 271 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 9, BattleDojo_Event_Surge_6
# 328 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_UNLOCK_BATTLEDOJO, BattleDojo_Event_Surge_21
# 334 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_34
# 335 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_35
# 336 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_UNLOCK_BATTLEDOJO
BattleDojo_Event_Surge_20:
# 338 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_36, MSGBOX_YESNO
# 339 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_40
# 345 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_37
BattleDojo_Event_Surge_1:
# 348 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_Event_Surge_3:
# 104 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_9
# 110 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_25
# 116 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_2
# 120 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_1, MSGBOX_YESNO
BattleDojo_Event_Surge_24:
# 122 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_43
# 161 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 162 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_8
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_4:
# 165 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_12
# 171 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_29
# 177 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_11, MSGBOX_YESNO
BattleDojo_Event_Surge_28:
# 181 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_46
# 217 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 218 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_17
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_5:
# 221 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_15
# 227 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_33
# 233 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_19, MSGBOX_YESNO
BattleDojo_Event_Surge_32:
# 235 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_49
# 268 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 269 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_17
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_6:
# 272 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_18
# 278 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_37
# 284 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_27, MSGBOX_YESNO
BattleDojo_Event_Surge_36:
# 286 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_52
# 324 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 325 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_33
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_9:
# 106 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_0
# 107 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_12:
# 167 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_9
# 168 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_15:
# 223 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_18
# 224 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_18:
# 274 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_25
# 275 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_21:
	goto BattleDojo_Event_Surge_20

BattleDojo_Event_Surge_25:
# 112 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_1, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_24

BattleDojo_Event_Surge_29:
# 173 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_10, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_28

BattleDojo_Event_Surge_33:
# 229 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_10, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_32

BattleDojo_Event_Surge_37:
# 280 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_26, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_36

BattleDojo_Event_Surge_40:
# 341 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_GridChoice
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_43:
# 124 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_TOURNAMENT_LOST
# 125 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_3
# 126 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 127 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 128 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_4
# 129 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 2, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 130 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_OpponentWalksToSpot
# 131 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 132 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_5
# 133 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_WalkLeft
# 134 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 135 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 136 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FABIAN_1, Fabian_LostTournament
# 137 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 2, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 138 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 139 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 140 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 141 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_WalkRightBackwards
# 142 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 143 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 144 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_6
# 147 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_OpponentLeave
# 148 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 149 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 2, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 150 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 151 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 152 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 153 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_7
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_46:
# 183 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_TOURNAMENT_LOST
# 184 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_12
# 186 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 187 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 188 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_13
# 189 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 4, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 190 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_OpponentWalksToSpot
# 191 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 192 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_14
# 193 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_WalkLeft
# 194 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 195 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 196 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_HERALD_1, Herald_LostTournament
# 197 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 4, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 198 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 199 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 200 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 201 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_WalkRightBackwards
# 202 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 203 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 204 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_15
# 205 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_OpponentLeave
# 206 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 207 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 4, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 208 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 209 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 210 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 211 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_16
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_49:
# 237 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_TOURNAMENT_LOST
# 238 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_20
# 239 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 240 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 241 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_21
# 242 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 3, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 243 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_OpponentWalksToSpot
# 244 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 245 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_22
# 246 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_WalkLeft
# 247 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 248 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 249 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BELLA_1, Bella_LostTournament
# 250 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 3, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 251 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 252 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 253 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 254 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_WalkRightBackwards
# 255 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 256 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 257 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_23
# 258 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_OpponentLeave
# 259 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 260 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 261 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 262 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 263 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 264 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_24
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_52:
# 288 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_TOURNAMENT_LOST
# 289 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_28
# 290 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 291 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 292 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_29
# 293 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat 8, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 294 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_OpponentWalksToSpot
# 295 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 296 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_30
# 297 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_WalkLeft
# 298 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 299 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 300 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_1, Fiona_LostTournament
# 301 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 302 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 303 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 304 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_WalkRightBackwards
# 305 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 306 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 307 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_31
# 312 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_OpponentLeave
# 313 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 314 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat 8, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 315 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 316 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 317 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 318 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_32
	goto BattleDojo_Event_Surge_1


BattleDojo_PLayerMoveToBattleSpot::
# 352 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 353 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_RESULT
# 355 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 1, BattleDojo_PLayerMoveToBattleSpot_3
# 357 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 2, BattleDojo_PLayerMoveToBattleSpot_4
# 359 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 3, BattleDojo_PLayerMoveToBattleSpot_5
# 361 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 4, BattleDojo_PLayerMoveToBattleSpot_6
BattleDojo_PLayerMoveToBattleSpot_1:
# 364 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
	return

BattleDojo_PLayerMoveToBattleSpot_3:
# 356 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotDown
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_4:
# 358 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotUp
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_5:
# 360 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotRight
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_6:
# 362 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotLeft
	goto BattleDojo_PLayerMoveToBattleSpot_1


BattleDojo_GridChoice::
# 369 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_0
# 370 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	multichoicegrid 0, 0, MULTI_DOJO_GRID, 3, 0
# 372 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	closemessage
# 373 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 374 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_RESULT
# 376 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 0, BattleDojo_GridChoice_3
# 380 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 1, BattleDojo_GridChoice_4
# 384 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 2, BattleDojo_GridChoice_5
# 388 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 3, BattleDojo_GridChoice_6
# 392 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 4, BattleDojo_GridChoice_7
# 396 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 5, BattleDojo_GridChoice_8
# 400 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 6, BattleDojo_GridChoice_9
# 404 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 7, BattleDojo_GridChoice_10
# 408 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 8, BattleDojo_GridChoice_11
# 412 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 9, BattleDojo_GridChoice_12
# 416 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 10, BattleDojo_GridChoice_13
# 420 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 11, BattleDojo_GridChoice_14
# 424 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 12, BattleDojo_GridChoice_15
# 428 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 13, BattleDojo_GridChoice_16
# 432 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 14, BattleDojo_GridChoice_17
# 437 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_1
# 438 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_GridChoice_1:
# 441 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_2, MSGBOX_YESNO
# 442 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_GridChoice_20
# 470 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_GridChoice
BattleDojo_GridChoice_19:
# 472 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_GridChoice_3:
# 377 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 5
# 378 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 0
# 379 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_4:
# 381 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 6
# 382 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 1
# 383 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_5:
# 385 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 7
# 386 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 2
# 387 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_6:
# 389 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 8
# 390 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 3
# 391 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_7:
# 393 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 9
# 394 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 4
# 395 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_8:
# 397 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 10
# 398 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 5
# 399 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_9:
# 401 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 11
# 402 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 6
# 403 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_10:
# 405 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 12
# 406 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 7
# 407 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 1
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_11:
# 409 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 13
# 410 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 8
# 411 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 2
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_12:
# 413 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 14
# 414 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 9
# 415 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 3
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_13:
# 417 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 15
# 418 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 10
# 419 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 4
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_14:
# 421 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 16
# 422 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 11
# 423 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 5
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_15:
# 425 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 17
# 426 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 12
# 427 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 6
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_16:
# 429 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 18
# 430 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 13
# 431 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 7
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_17:
# 433 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 19
# 434 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_TEMP_2, 14
# 435 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 8
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_20:
# 444 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_3
# 445 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 446 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	playfanfare MUS_HEAL
# 447 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	special HealPlayerParty
# 448 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitfanfare
# 449 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 450 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_4
# 451 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 452 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 454 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 1, BattleDojo_GridChoice_25
# 455 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 2, BattleDojo_GridChoice_25
# 456 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 3, BattleDojo_GridChoice_25
# 457 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 4, BattleDojo_GridChoice_25
# 458 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 5, BattleDojo_GridChoice_25
# 459 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 6, BattleDojo_GridChoice_25
# 460 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 7, BattleDojo_GridChoice_25
# 461 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 8, BattleDojo_GridChoice_25
# 466 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	call BattleDojo_BattleDojoBattles
	goto BattleDojo_GridChoice_19

BattleDojo_GridChoice_25:
# 462 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_5
# 463 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	warp MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA, 3, 5
	end


BattleDojo_BattleDojoBattles::
# 476 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_0
# 477 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	clearflag FLAG_IN_BATTLE_MODE
# 478 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	showobjectat VAR_TEMP_1, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 479 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_OpponentWalksToSpot
# 480 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 481 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_TEMP_2
# 483 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 1, BattleDojo_BattleDojoBattles_3
# 485 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 2, BattleDojo_BattleDojoBattles_4
# 487 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 3, BattleDojo_BattleDojoBattles_5
# 489 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 0, BattleDojo_BattleDojoBattles_6
# 498 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 6, BattleDojo_BattleDojoBattles_7
# 500 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 4, BattleDojo_BattleDojoBattles_8
# 502 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 5, BattleDojo_BattleDojoBattles_9
BattleDojo_BattleDojoBattles_1:
# 505 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_WalkLeft
# 506 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 507 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 508 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_TEMP_2
# 510 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 1, BattleDojo_BattleDojoBattles_12
# 512 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 2, BattleDojo_BattleDojoBattles_13
# 514 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 3, BattleDojo_BattleDojoBattles_14
# 516 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 0, BattleDojo_BattleDojoBattles_15
# 525 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 4, BattleDojo_BattleDojoBattles_16
# 527 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 5, BattleDojo_BattleDojoBattles_17
# 529 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 6, BattleDojo_BattleDojoBattles_18
BattleDojo_BattleDojoBattles_10:
# 532 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_WalkRightBackwards
# 533 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 534 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 535 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	switch VAR_TEMP_2
# 537 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 1, BattleDojo_BattleDojoBattles_24
# 539 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 2, BattleDojo_BattleDojoBattles_25
# 541 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 3, BattleDojo_BattleDojoBattles_26
# 543 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 0, BattleDojo_BattleDojoBattles_27
# 552 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 4, BattleDojo_BattleDojoBattles_28
# 554 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 5, BattleDojo_BattleDojoBattles_29
# 556 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	case 6, BattleDojo_BattleDojoBattles_30
BattleDojo_BattleDojoBattles_22:
# 559 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_OpponentLeave
# 560 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 561 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	hideobjectat VAR_TEMP_1, MAP_MODHEADQUARTERS_BATTLE_DOJO
# 562 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 563 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	waitmovement 0
# 564 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 565 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_17
# 566 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_BattleDojoBattles_3:
# 484 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_1
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_4:
# 486 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_2
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_5:
# 488 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_3
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_6:
# 490 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, BattleDojo_BattleDojoBattles_19
# 496 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_5
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_7:
# 499 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_6
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_8:
# 501 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_7
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_9:
# 503 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_8
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_12:
# 511 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FABIAN_B0, Fabian_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_13:
# 513 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_HERALD_B0, Herald_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_14:
# 515 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BELLA_B0, Bella_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_15:
# 517 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, BattleDojo_BattleDojoBattles_31
# 523 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_B0, Fiona_LostNormal
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_16:
# 526 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR_B0, Victor_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_17:
# 528 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_VERA_B0, Vera_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_18:
# 530 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_TRISTAN_B0, Tristan_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_19:
# 492 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_4
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_24:
# 538 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_9
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_25:
# 540 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_10
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_26:
# 542 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_11
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_27:
# 544 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, BattleDojo_BattleDojoBattles_34
# 550 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_13
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_28:
# 553 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_14
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_29:
# 555 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_15
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_30:
# 557 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_16
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_31:
# 519 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_B0_SHINY, Fiona_LostShiny
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_34:
# 546 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_12
	goto BattleDojo_BattleDojoBattles_22


# 569 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotUp:
# 570 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 570 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 570 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 571 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 572 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_right
	step_end

# 575 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotLeft:
# 576 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 576 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 577 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 577 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 578 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_right
	step_end

# 581 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotDown:
# 582 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 582 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 582 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 583 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 583 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 583 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 584 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_right
	step_end

# 587 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotRight:
# 588 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 589 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 589 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 589 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 589 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 590 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 591 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_right
	step_end

# 594 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalkBackSurge:
# 595 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 595 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 596 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
# 596 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
	step_end

# 599 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_OpponentWalksToSpot:
# 600 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 600 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 601 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
# 601 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
# 601 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
# 602 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 602 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 602 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 602 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_up
# 603 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_left
	step_end

# 606 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_OpponentLeave:
# 607 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 607 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 607 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 607 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 608 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 608 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 608 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 609 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 609 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_down
# 610 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_in_place_down
	step_end

# 613 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_FaceDown:
# 614 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_down
	step_end

# 617 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_FaceLeft:
# 618 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	face_left
	step_end

# 621 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_WalkLeft:
# 622 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
	step_end

# 625 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_WalkRight:
# 626 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
	step_end

# 629 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_WalkLeftBackwards:
# 630 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	lock_facing_direction
# 631 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_left
# 632 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	unlock_facing_direction
	step_end

# 635 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
BattleDojo_Movement_WalkRightBackwards:
# 636 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	lock_facing_direction
# 637 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	walk_right
# 638 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	unlock_facing_direction
	step_end

BattleDojo_Return_Text_0:
# 51 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "var was invalid$"

BattleDojo_Event_Surge_Text_0:
# 106 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: You have fought well today\n"
	.string "{PLAYER}, go rest now.\l"
	.string "Tomorrow your next battle will be ready!$"

BattleDojo_Event_Surge_Text_1:
# 112 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready to do you first\n"
	.string "ever pokemon battle?$"

BattleDojo_Event_Surge_Text_2:
# 116 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}???{COLOR DARK_GRAY}: Welcome Rekruut! This is the\n"
	.string "Battle Dojo, a safe place to perform\l"
	.string "pokemon battles!\p"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: My name is Surge and I'm the\n"
	.string "person that will judge your performance\l"
	.string "in this Tournament.\p"
	.string "Pokemon are dangerous to handle, so\n"
	.string "this Tournament would allow a safe\l"
	.string "space to see how well you can handle\l"
	.string "taking on this dangerous living weapon.\p"
	.string "Don't worry, if you would lose control\n"
	.string "over your pokemon, I'm more than\l"
	.string "capable to subdue the situation.$"

BattleDojo_Event_Surge_Text_3:
# 125 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, you can stand ready and\n"
	.string "I'll call your first opponent than.$"

BattleDojo_Event_Surge_Text_4:
# 128 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}:FABIAN, YOU CAN ENTER!$"

BattleDojo_Event_Surge_Text_5:
# 132 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: This is our first ever battle,\n"
	.string "let's go easy on this one, OK?$"

BattleDojo_Event_Surge_Text_6:
# 144 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Wow, that totally did not go as\n"
	.string "I expected.\p"
	.string "But fair is fair, you were clearly the\n"
	.string "stronger trainer.\p"
	.string "Good luck in the rest of the\n"
	.string "tournament! I'll go think what I can do\l"
	.string "to become a better trainer!$"

BattleDojo_Event_Surge_Text_7:
# 153 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Well fought {PLAYER}, I can\n"
	.string "see you can get far in this tournament.\p"
	.string "In my eyes you have already proven\n"
	.string "yourself to be capable of handling\l"
	.string "these dangerous pokemon.\p"
	.string "Still, I ask you to continue in this\n"
	.string "tournament. I would like to see how far\l"
	.string "you can get.\p"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} will have prepared something\n"
	.string "special if you win!\p"
	.string "You can go rest now, tomorrow your next\n"
	.string "battle will be ready!$"

BattleDojo_Event_Surge_Text_8:
# 162 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: that's fine, come talk to me when\n"
	.string "you're ready!$"

BattleDojo_Event_Surge_Text_9:
# 167 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: You already managed to make it\n"
	.string "to the semi finals!\l"
	.string "now go rest and be preparred for yet\l"
	.string "another battle tomorrow!$"

BattleDojo_Event_Surge_Text_10:
# 173 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready for your next\n"
	.string "battle?$"

BattleDojo_Event_Surge_Text_11:
# 177 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: One battle down, three to go.\p"
	.string "Every Initiative has a different\n"
	.string "pokemon so it's impossible for anyone\l"
	.string "to know how these battles will go.\p"
	.string "Still, are you ready for your next\n"
	.string "battle?$"

BattleDojo_Event_Surge_Text_12:
# 184 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Fantastic!\p"
	.string "Go stand where you stood yesterday and\n"
	.string "I'll call your next opponent forward.$"

BattleDojo_Event_Surge_Text_13:
# 188 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: HERALD, YOU MAY ENTER!$"

BattleDojo_Event_Surge_Text_14:
# 192 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Don't think I'm gonna take it\n"
	.string "easy on you because we're colleague's.\p"
	.string "I'm here to win!$"

BattleDojo_Event_Surge_Text_15:
# 204 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Guess my ego went to my head a\n"
	.string "bit after my first win.\p"
	.string "Thank you for keeping me humble,\n"
	.string "{PLAYER}!\l"
	.string "Good luck in the rest of the\l"
	.string "tournament, I'll be rooting for you!$"

BattleDojo_Event_Surge_Text_16:
# 211 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: And that makes two: you have\n"
	.string "already made it to the semi-finals.\l"
	.string "Congrats {PLAYER}!\p"
	.string "That does not mean the battles will\n"
	.string "become easier from here on out,\l"
	.string "tomorrow is another opponent and\l"
	.string "another battle.\p"
	.string "Go rest so you're ready for the battle\n"
	.string "that comes next!$"

BattleDojo_Event_Surge_Text_17:
# 218 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: No shame in being overprepared.\n"
	.string "Come talk to me when you're ready!$"

BattleDojo_Event_Surge_Text_18:
# 223 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Good job on making it to the\n"
	.string "finals {PLAYER}!\l"
	.string "Now go rest and be preparred for the\l"
	.string "thoughest battle tomorrow!$"

BattleDojo_Event_Surge_Text_19:
# 233 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, you're halfway.\n"
	.string "Keep it up!\p"
	.string "Do expect these battle to become\n"
	.string "harder through the tournament though.\l"
	.string "I would hate to see you lose because\l"
	.string "you were holding back!\p"
	.string "Are you ready for your next battle?$"

BattleDojo_Event_Surge_Text_20:
# 238 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Understood! You know what to do.$"

BattleDojo_Event_Surge_Text_21:
# 241 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: BELLA, ITS YOUR TIME TO SHINE!$"

BattleDojo_Event_Surge_Text_22:
# 245 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}BELLA{COLOR DARK_GRAY}: Thanks for playing dear, but\n"
	.string "this will be the end of the road for you.\l"
	.string "It's time for the REAL pokemon trainers\l"
	.string "to come out and play!$"

BattleDojo_Event_Surge_Text_23:
# 257 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}BELLA{COLOR DARK_GRAY}: hmp.\p"
	.string "Don't think you're better than me just\n"
	.string "because you won!\p"
	.string "I just went easy on you, next time you\n"
	.string "won't be so lucky, mark my words!$"

BattleDojo_Event_Surge_Text_24:
# 264 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Another well fought battle\n"
	.string "{PLAYER}!\l"
	.string "Congratulations on making it to the\l"
	.string "finals!\p"
	.string "You're not allowed to know who your\n"
	.string "final opponent is, but I think you're\l"
	.string "able to guess who it is gonna be.\p"
	.string "So go rest {PLAYER}, tomorrow is not\n"
	.string "gonna be as easy as your last three\l"
	.string "battles were.$"

BattleDojo_Event_Surge_Text_25:
# 274 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Good job Champion!\n"
	.string "Go rest for now, I'll talk with {COLOR LIGHT_GRAY}The\l"
	.string "Leader{COLOR DARK_GRAY} about your reward!$"

BattleDojo_Event_Surge_Text_26:
# 280 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready for the Finals?$"

BattleDojo_Event_Surge_Text_27:
# 284 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: The finals...\p"
	.string "The best and second best are also the\n"
	.string "best and second best pokemon trainers,\l"
	.string "who would have expected?\p"
	.string "Today we're going to see, who really, is\n"
	.string "the most skilled trainer out of the two\l"
	.string "of you.\p"
	.string "Are you ready for the final battle of\n"
	.string "the Tournament?$"

BattleDojo_Event_Surge_Text_28:
# 289 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Excellent!\n"
	.string "So please {PLAYER}, for the last time\l"
	.string "this tournament...$"

BattleDojo_Event_Surge_Text_29:
# 292 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: FIONA, IT IS TIME!$"

BattleDojo_Event_Surge_Text_30:
# 296 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: So, you have kept your promise\n"
	.string "and also made it to the finals?\p"
	.string "Good!\p"
	.string "Let's show everyone here, what a real\n"
	.string "pokemon battle means!$"

BattleDojo_Event_Surge_Text_31:
# 307 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: I...\p"
	.string "I'm speechless!\p"
	.string "It seems you're even more skilled than I\n"
	.string "thought!\p"
	.string "Don't celebrate too hard though\n"
	.string "{PLAYER}. I'm your rival after all!\l"
	.string "I'll train and become stronger, and next\l"
	.string "time I'll come out victorious!\p"
	.string "Mark my words!$"

BattleDojo_Event_Surge_Text_32:
# 318 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Congratulations {PLAYER}, I\n"
	.string "knew you would come out victorious!\p"
	.string "You know...\n"
	.string "{COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} was also watching this\l"
	.string "battle and is very impressed. He has big\l"
	.string "plans preparred for you!\p"
	.string "I'll go talk with {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} to see about your\n"
	.string "reward.\l"
	.string "Go rest and relax from this fight,\l"
	.string "tomorrow you'll get your reward and\l"
	.string "than you'll be able to go explore the\l"
	.string "world with your new pokemon!$"

BattleDojo_Event_Surge_Text_33:
# 325 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Don't keep everyone waiting for\n"
	.string "too long!\l"
	.string "We all want to see how this next battle\l"
	.string "is gonna go!$"

BattleDojo_Event_Surge_Text_34:
# 334 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Welcome back {PLAYER}.\p"
	.string "Maria asked some things around and\n"
	.string "came with a proposition for us to use\l"
	.string "this Battle Dojo as a training grounds\p"
	.string "Considering this is the safest\n"
	.string "environment you Initiatives could learn\l"
	.string "to handle your pokemon and it is also a\l"
	.string "good place for us to monitor you guys\l"
	.string "progress, there was no reason to refuse\l"
	.string "this proposal\p"
	.string "So from now on, you can come to me and\n"
	.string "ask any of the other Initiatives to\l"
	.string "fight you.$"

BattleDojo_Event_Surge_Text_35:
# 335 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "You can use it to train, to expand your\n"
	.string "pokedex, to earn some money, or to test\l"
	.string "out new strategies.\l"
	.string "What you do in this Dojo is completely\l"
	.string "up to you!\p"
	.string "so...$"

BattleDojo_Event_Surge_Text_36:
# 338 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Here for another fight?$"

BattleDojo_Event_Surge_Text_37:
# 345 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, talk to me if you ever\n"
	.string "want to fight one of your colleagues.$"

BattleDojo_GridChoice_Text_0:
# 369 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Who do you want to fight?$"

BattleDojo_GridChoice_Text_1:
# 437 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Changed your mind?\n"
	.string "Talk to me if you want to battle one of\l"
	.string "your colleagues!$"

BattleDojo_GridChoice_Text_2:
# 441 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Do you want to fight\n"
	.string "{STR_VAR_1}?$"

BattleDojo_GridChoice_Text_3:
# 444 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, frist things first.$"

BattleDojo_GridChoice_Text_4:
# 450 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, you know what to do.$"

BattleDojo_GridChoice_Text_5:
# 462 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: give me a moment to get {STR_VAR_1}.$"

BattleDojo_BattleDojoBattles_Text_0:
# 476 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: {STR_VAR_1}, YOU'VE BEEN\n"
	.string "CALLED FOR BATTLE!$"

BattleDojo_BattleDojoBattles_Text_1:
# 484 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: I'm not here expecting to win,\n"
	.string "but that does not mean I'm not going to\l"
	.string "try!$"

BattleDojo_BattleDojoBattles_Text_2:
# 486 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: I'm getting a bit too\n"
	.string "comfortable with winning. Let me feel\l"
	.string "again how it is to lose!$"

BattleDojo_BattleDojoBattles_Text_3:
# 488 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Hope you had fun dear.\n"
	.string "It's time to show you how a real\l"
	.string "upcoming MOD LORD fights!$"

BattleDojo_BattleDojoBattles_Text_4:
# 492 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Alright, let's do this {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_5:
# 496 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: This time, I'm coming to win!$"

BattleDojo_BattleDojoBattles_Text_6:
# 499 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Tristan{COLOR DARK_GRAY}: Time to test out my new\n"
	.string "strategy!$"

BattleDojo_BattleDojoBattles_Text_7:
# 501 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: Show me what makes you so\n"
	.string "special!$"

BattleDojo_BattleDojoBattles_Text_8:
# 503 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: Let's see what you have learned\n"
	.string "in your journey {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_9:
# 538 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: I never mind losing against you\n"
	.string "{PLAYER}, you can call me anything if\l"
	.string "you want an easy Pokemon battle!$"

BattleDojo_BattleDojoBattles_Text_10:
# 540 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Well I better go out there and\n"
	.string "train some more if I ever want to beat\l"
	.string "you.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_11:
# 542 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Just because you defeated me,\n"
	.string "doesn't mean your better than me dear.\l"
	.string "Soon enough you'll have to listen to my\l"
	.string "commands wether you like it or not.$"

BattleDojo_BattleDojoBattles_Text_12:
# 546 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Seems like you haven't sit still\n"
	.string "either! I'll keep training and won't make\l"
	.string "it as easy on you next time!$"

BattleDojo_BattleDojoBattles_Text_13:
# 550 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: It seems like I still not strong\n"
	.string "enough. But mark my words, I won't make\l"
	.string "it as easy for you the next time!$"

BattleDojo_BattleDojoBattles_Text_14:
# 553 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: No matter how often we fight,\n"
	.string "you always amaze me.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_15:
# 555 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: You have quite the interesting\n"
	.string "set of pokemon on your team, I'll love\l"
	.string "to battle your more often!\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_16:
# 557 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Tristan{COLOR DARK_GRAY}: I need some more training to\n"
	.string "be able to use my knowledge in battle...\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_17:
# 565 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Well done {PLAYER}!\p"
	.string "Come talk to me if you ever want to\n"
	.string "fight another one of your colleagues.$"

Fabian_LostTournament::
# 641 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Hé, I thought we would take it easy!$"

Bella_LostTournament::
# 645 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Wait... that doesn't count!$"

Herald_LostTournament::
# 649 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "What... just happened?$"

Fiona_LostTournament::
# 653 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Is this... is this how I lose it all?$"

Fiona_LostShiny::
# 657 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Wow, you've grown a lot since our last\n"
	.string "battle!$"

Fiona_LostNormal::
# 661 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "It's clear that my training is not yet\n"
	.string "complete!$"

Fabian_Lost::
# 665 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "HAHAHAHA! Yet another lose!$"

Herald_Lost::
# 669 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Back to ground zero once again!$"

Bella_Lost::
# 673 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "Hmpf!$"

Tristan_Lost::
# 677 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "I still need some more field experience\n"
	.string "it seems.$"

Victor_Lost::
# 681 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "I understand now!$"

Vera_Lost::
# 685 "data/maps/MODHeadquarters_BattleDojo/scripts.pory"
	.string "How can I already been defeated?$"
