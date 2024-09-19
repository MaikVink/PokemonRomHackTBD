MODHeadquarters_BattleDojoReplica_MapScripts::
# 12 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_BattleDojoReplica_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_BattleDojoReplica_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 1, BattleDojoReplica_HideNPCs_OnTransition
# 14 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 2, BattleDojoReplica_HideNPCs_OnTransition
# 15 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 3, BattleDojoReplica_HideNPCs_OnTransition
# 16 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 4, BattleDojoReplica_HideNPCs_OnTransition
# 17 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 5, BattleDojoReplica_HideNPCs_OnTransition
# 18 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 6, BattleDojoReplica_HideNPCs_OnTransition
# 19 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 7, BattleDojoReplica_HideNPCs_OnTransition
# 20 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 8, BattleDojoReplica_HideNPCs_OnTransition
	.2byte 0


BattleDojoReplica_HideNPCs_OnTransition::
# 25 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_HideNPCs
# 26 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_FaceRight
# 27 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 29 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_HideNPCs_OnTransition_3
# 32 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_HideNPCs_OnTransition_4
# 35 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_HideNPCs_OnTransition_5
# 38 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_HideNPCs_OnTransition_6
# 41 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 5, BattleDojoReplica_HideNPCs_OnTransition_7
# 44 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_HideNPCs_OnTransition_8
# 47 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_HideNPCs_OnTransition_9
# 50 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_HideNPCs_OnTransition_10
# 54 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_HideNPCs_OnTransition_Text_0
BattleDojoReplica_HideNPCs_OnTransition_1:
# 56 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 57 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_BattleDojoReplicaBattles
	return

BattleDojoReplica_HideNPCs_OnTransition_3:
# 30 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 7
# 31 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 7
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_4:
# 33 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 4
# 34 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 8
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_5:
# 36 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 9
# 37 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 9
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_6:
# 39 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 2
# 40 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 10
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_7:
# 42 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 8
# 43 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 11
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_8:
# 45 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 3
# 46 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 12
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_9:
# 48 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 5
# 49 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 13
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_10:
# 51 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 6
# 52 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 14
	goto BattleDojoReplica_HideNPCs_OnTransition_1


BattleDojoReplica_HideNPCs::
# 61 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 8, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 62 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 6, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 63 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 7, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 64 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 9, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 65 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 3, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 66 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 2, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 67 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 4, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 68 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat 5, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 69 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojoReplica_HNS1::
# 74 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 3
	return


BattleDojoReplica_Event_Surge::
# 78 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_Event_Surge_Text_0, MSGBOX_YESNO
# 79 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojoReplica_Event_Surge_1
# 85 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_Event_Surge_Text_1
	return

BattleDojoReplica_Event_Surge_1:
# 81 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_GridChoice
	return


BattleDojoReplica_PLayerMoveToBattleSpot::
# 90 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 91 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_PLayerMoveToBattleSpot_3
# 95 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_PLayerMoveToBattleSpot_4
# 97 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_PLayerMoveToBattleSpot_5
# 99 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_PLayerMoveToBattleSpot_6
BattleDojoReplica_PLayerMoveToBattleSpot_1:
# 102 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
	return

BattleDojoReplica_PLayerMoveToBattleSpot_3:
# 94 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotDown
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_4:
# 96 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotUp
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_5:
# 98 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotRight
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_6:
# 100 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotLeft
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1


BattleDojoReplica_GridChoice::
# 107 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_0
# 108 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	multichoicegrid 0, 0, MULTI_DOJO_GRID, 3, 0
# 109 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	closemessage
# 110 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 111 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 0, BattleDojoReplica_GridChoice_3
# 117 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_GridChoice_4
# 121 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_GridChoice_5
# 125 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_GridChoice_6
# 129 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_GridChoice_7
# 133 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 5, BattleDojoReplica_GridChoice_8
# 137 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_GridChoice_9
# 141 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_GridChoice_10
# 145 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_GridChoice_11
# 149 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_GridChoice_12
# 153 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_GridChoice_13
# 157 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_GridChoice_14
# 161 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_GridChoice_15
# 165 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_GridChoice_16
# 169 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_GridChoice_17
# 174 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_1
# 175 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	releaseall
	end

BattleDojoReplica_GridChoice_1:
# 178 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_2, MSGBOX_YESNO
# 179 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojoReplica_GridChoice_19
# 206 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_GridChoice
	return

BattleDojoReplica_GridChoice_3:
# 114 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 5
# 115 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 0
# 116 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 9
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_4:
# 118 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 6
# 119 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 1
# 120 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 10
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_5:
# 122 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 7
# 123 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 2
# 124 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 11
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_6:
# 126 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 8
# 127 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 3
# 128 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 12
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_7:
# 130 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 9
# 131 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 4
# 132 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 13
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_8:
# 134 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 10
# 135 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 5
# 136 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 14
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_9:
# 138 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 11
# 139 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 6
# 140 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 15
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_10:
# 142 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 12
# 143 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 7
# 144 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_11:
# 146 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 13
# 147 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 8
# 148 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_12:
# 150 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 14
# 151 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 9
# 152 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 9
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_13:
# 154 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 15
# 155 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 10
# 156 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_14:
# 158 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 16
# 159 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 11
# 160 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_15:
# 162 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 17
# 163 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 12
# 164 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_16:
# 166 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 18
# 167 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 13
# 168 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_17:
# 170 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 19
# 171 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 14
# 172 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_19:
# 181 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_3
# 182 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	fadescreen FADE_TO_BLACK
# 183 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	playfanfare MUS_HEAL
# 184 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	special HealPlayerParty
# 185 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitfanfare
# 186 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 187 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_4
# 188 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_PLayerMoveToBattleSpot
# 189 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 191 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_GridChoice_24
# 192 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_GridChoice_24
# 193 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_GridChoice_24
# 194 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_GridChoice_24
# 195 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_GridChoice_24
# 196 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_GridChoice_24
# 197 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 15, BattleDojoReplica_GridChoice_24
# 202 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_BattleDojoReplicaBattles
	return

BattleDojoReplica_GridChoice_24:
# 198 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_5
# 199 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	warp MAP_MODHEADQUARTERS_BATTLE_DOJO, 3, 6
	end


BattleDojoReplica_BattleDojoReplicaBattles::
# 211 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_0
# 212 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 213 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	showobjectat VAR_TEMP_1, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 214 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_OpponentWalksToSpot
# 215 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 216 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_2
# 217 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_BattleDojoReplicaBattles_3
# 219 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_BattleDojoReplicaBattles_4
# 221 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_5
# 223 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_6
# 225 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_BattleDojoReplicaBattles_7
# 227 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_BattleDojoReplicaBattles_8
# 229 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_BattleDojoReplicaBattles_9
# 231 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_10
BattleDojoReplica_BattleDojoReplicaBattles_1:
# 234 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_WalkLeft
# 235 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_WalkRight
# 236 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 237 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_2
# 239 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_BattleDojoReplicaBattles_13
# 241 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_BattleDojoReplicaBattles_14
# 243 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_15
# 245 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_16
# 247 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_BattleDojoReplicaBattles_17
# 249 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_BattleDojoReplicaBattles_18
# 251 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_BattleDojoReplicaBattles_19
# 253 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_20
BattleDojoReplica_BattleDojoReplicaBattles_11:
# 256 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_WalkRightBackwards
# 257 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_WalkLeftBackwards
# 258 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 259 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_2
# 261 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_BattleDojoReplicaBattles_23
# 263 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_BattleDojoReplicaBattles_24
# 265 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_25
# 267 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_26
# 269 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_BattleDojoReplicaBattles_27
# 271 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_BattleDojoReplicaBattles_28
# 273 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_BattleDojoReplicaBattles_29
# 275 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_30
BattleDojoReplica_BattleDojoReplicaBattles_21:
# 278 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_OpponentLeave
# 279 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 280 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat VAR_TEMP_1, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 281 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalkBackSurge
# 282 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 283 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement 1, BattleDojoReplica_Movement_FaceLeft
# 284 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_17
# 285 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	releaseall
	return

BattleDojoReplica_BattleDojoReplicaBattles_3:
# 218 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_1
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_4:
# 220 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_2
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_5:
# 222 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_3
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_6:
# 224 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_4
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_7:
# 226 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_5
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_8:
# 228 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_6
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_9:
# 230 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_7
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_10:
# 232 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_8
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_13:
# 240 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOENIX_B0, Phoenix_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_14:
# 242 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_PAULA_B0, Paula_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_15:
# 244 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_HERA_B0, Hera_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_16:
# 246 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_NIKO_B0, Niko_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_17:
# 248 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIA_B0, Maria_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_18:
# 250 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSANNE_B0, Rosanne_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_19:
# 252 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_TESSA_B0, Tessa_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_20:
# 254 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_RAOUL_B0, Raoul_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_23:
# 262 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_9
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_24:
# 264 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_10
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_25:
# 266 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_11
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_26:
# 268 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_12
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_27:
# 270 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_13
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_28:
# 272 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_14
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_29:
# 274 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_15
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_30:
# 276 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_16
	goto BattleDojoReplica_BattleDojoReplicaBattles_21


# 288 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotUp:
# 289 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 289 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 289 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 290 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 291 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 294 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotLeft:
# 295 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 295 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 296 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 296 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 297 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 300 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotDown:
# 301 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 301 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 301 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 302 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 302 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 302 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 303 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 306 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotRight:
# 307 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 308 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 308 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 308 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 308 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 309 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 310 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 313 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalkBackSurge:
# 314 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 314 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 315 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 315 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
	step_end

# 318 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_OpponentWalksToSpot:
# 319 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 319 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 320 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 320 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 320 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 321 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 321 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 321 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 321 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 322 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_left
	step_end

# 325 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_OpponentLeave:
# 326 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 326 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 326 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 326 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 327 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 327 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 327 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 328 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 328 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 329 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_in_place_down
	step_end

# 332 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceDown:
# 333 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_down
	step_end

# 336 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceLeft:
# 337 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_left
	step_end

# 340 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceRight:
# 341 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 344 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkLeft:
# 345 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
	step_end

# 348 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkRight:
# 349 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
	step_end

# 352 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkLeftBackwards:
# 353 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	lock_facing_direction
# 354 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 355 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	unlock_facing_direction
	step_end

# 358 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkRightBackwards:
# 359 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	lock_facing_direction
# 360 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 361 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	unlock_facing_direction
	step_end

BattleDojoReplica_HideNPCs_OnTransition_Text_0:
# 54 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "var was invalid$"

BattleDojoReplica_Event_Surge_Text_0:
# 78 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Here for another fight?$"

BattleDojoReplica_Event_Surge_Text_1:
# 85 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, talk to me if you ever\n"
	.string "want to fight one of your colleagues.$"

BattleDojoReplica_GridChoice_Text_0:
# 107 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Who do you want to fight?$"

BattleDojoReplica_GridChoice_Text_1:
# 174 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Changed your mind?\n"
	.string "Talk to me if you want to battle one of\l"
	.string "your colleagues!$"

BattleDojoReplica_GridChoice_Text_2:
# 178 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Do you want to fight\n"
	.string "{STR_VAR_1}?$"

BattleDojoReplica_GridChoice_Text_3:
# 181 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, frist things first.$"

BattleDojoReplica_GridChoice_Text_4:
# 187 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, you know what to do.$"

BattleDojoReplica_GridChoice_Text_5:
# 198 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: give me a moment to get {STR_VAR_1}$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_0:
# 211 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: {STR_VAR_1}, YOU'VE BEEN\n"
	.string "CALLED FOR BATTLE!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_1:
# 218 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: I can forsee that this will be\n"
	.string "an interesting battle!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_2:
# 220 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Paula{COLOR DARK_GRAY}: I hope you have taken good care\n"
	.string "of your pokemon throughout your\l"
	.string "journey.\l"
	.string "Now let's see how strong you've become!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_3:
# 222 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: Have you already gone out with\n"
	.string "your pokemon?$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_4:
# 224 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: ...\p"
	.string "SNEAK ATTACK!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_5:
# 226 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Glad you have found the training\n"
	.string "field\p"
	.string "Now let's see if the experience I\n"
	.string "anything as I imagined!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_6:
# 228 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: Every battle is a new\n"
	.string "experience, so bring your worst!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_7:
# 230 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I have to warn you, my starter is\n"
	.string "very strong!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_8:
# 232 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: Alright Raoul, stay focussed and\n"
	.string "don't panic.\p"
	.string "Let's do this!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_9:
# 262 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: I forsee a lot more training\n"
	.string "for me if I ever want to defeat you. Well\l"
	.string "fought {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_10:
# 264 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Paula{COLOR DARK_GRAY}: I see you have taken excellent\n"
	.string "care of your pokemon. Keep it up\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_11:
# 266 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: You're skills are far beyond what\n"
	.string "I had expected. Good battle {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_12:
# 268 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: My tactics were not hidden\n"
	.string "enough. I'll keep training and next time\l"
	.string "you won't see me coming!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_13:
# 270 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Thank you {PLAYER}, this was\n"
	.string "the exact experience I hoped to get\l"
	.string "when asking for this training ground.$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_14:
# 272 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: Every battle is a new\n"
	.string "experience, so it does not matter if you\l"
	.string "lose or win, as long as you learn\l"
	.string "something from it. Until our next battle\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_15:
# 274 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I guess I should not be\n"
	.string "surprised everyone had gotten a strong\l"
	.string "Starter. Keep up the good work\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_16:
# 276 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: I got a lot of things to think\n"
	.string "about after this battle, I better go\l"
	.string "and start doing that.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_17:
# 284 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "Well done {PLAYER}!\p"
	.string "Come talk to me if you ever want to\n"
	.string "fight another one of your colleagues.$"

Niko_Lost::
# 364 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "You saw straight through me!$"

Hera_Lost::
# 368 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "I seem to still not yet be ready.$"

Raoul_Lost::
# 372 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "Wait! Just give me a second to catch my\n"
	.string "breath!$"

Paula_Lost::
# 376 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "You really are something else, aren't\n"
	.string "you?$"

Maria_Lost::
# 380 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "This is exactly the experience I hoped\n"
	.string "for!$"

Phoenix_Lost::
# 384 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "If I only could forsee that I lost!$"

Rosanne_Lost::
# 388 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "I guess we're done here!$"

Tessa_Lost::
# 392 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "Your starter is also quite strong I see!$"
