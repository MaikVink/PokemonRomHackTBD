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
	setobjectxy 8, 6, 12
# 70 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 6, 6, 12
# 71 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 7, 6, 12
# 72 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 9, 6, 12
# 73 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 3, 6, 12
# 74 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 2, 6, 12
# 75 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 4, 6, 12
# 76 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setobjectxy 5, 6, 12
# 77 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojoReplica_HNS1::
# 82 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 3
	return


BattleDojoReplica_Event_Surge::
# 86 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_Event_Surge_Text_0, MSGBOX_YESNO
# 87 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojoReplica_Event_Surge_1
# 93 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_Event_Surge_Text_1
	return

BattleDojoReplica_Event_Surge_1:
# 89 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_GridChoice
	return


BattleDojoReplica_PLayerMoveToBattleSpot::
# 98 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 99 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_PLayerMoveToBattleSpot_3
# 103 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_PLayerMoveToBattleSpot_4
# 105 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_PLayerMoveToBattleSpot_5
# 107 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_PLayerMoveToBattleSpot_6
BattleDojoReplica_PLayerMoveToBattleSpot_1:
# 110 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
	return

BattleDojoReplica_PLayerMoveToBattleSpot_3:
# 102 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotDown
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_4:
# 104 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotUp
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_5:
# 106 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotRight
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_6:
# 108 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotLeft
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1


BattleDojoReplica_GridChoice::
# 115 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_0
# 116 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	multichoicegrid 0, 0, MULTI_DOJO_GRID, 3, 0
# 117 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	closemessage
# 118 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 119 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 0, BattleDojoReplica_GridChoice_3
# 125 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_GridChoice_4
# 129 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_GridChoice_5
# 133 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_GridChoice_6
# 137 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_GridChoice_7
# 141 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 5, BattleDojoReplica_GridChoice_8
# 145 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_GridChoice_9
# 149 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_GridChoice_10
# 153 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_GridChoice_11
# 157 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_GridChoice_12
# 161 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_GridChoice_13
# 165 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_GridChoice_14
# 169 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_GridChoice_15
# 173 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_GridChoice_16
# 177 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_GridChoice_17
# 182 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_1
# 183 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	releaseall
	end

BattleDojoReplica_GridChoice_1:
# 186 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_2, MSGBOX_YESNO
# 187 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojoReplica_GridChoice_19
# 214 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_GridChoice
	return

BattleDojoReplica_GridChoice_3:
# 122 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 5
# 123 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 0
# 124 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 9
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_4:
# 126 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 6
# 127 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 1
# 128 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 10
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_5:
# 130 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 7
# 131 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 2
# 132 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 11
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_6:
# 134 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 8
# 135 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 3
# 136 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 12
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_7:
# 138 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 9
# 139 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 4
# 140 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 13
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_8:
# 142 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 10
# 143 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 5
# 144 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 14
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_9:
# 146 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 11
# 147 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 6
# 148 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 15
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_10:
# 150 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 12
# 151 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 7
# 152 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_11:
# 154 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 13
# 155 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 8
# 156 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_12:
# 158 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 14
# 159 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 9
# 160 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 9
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_13:
# 162 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 15
# 163 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 10
# 164 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_14:
# 166 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 16
# 167 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 11
# 168 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_15:
# 170 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 17
# 171 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 12
# 172 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_16:
# 174 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 18
# 175 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 13
# 176 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_17:
# 178 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 19
# 179 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_2, 14
# 180 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_19:
# 189 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_3
# 190 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	playfanfare MUS_HEAL
# 192 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	special HealPlayerParty
# 193 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitfanfare
# 194 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 195 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_4
# 196 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_PLayerMoveToBattleSpot
# 197 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 199 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_GridChoice_24
# 200 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_GridChoice_24
# 201 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_GridChoice_24
# 202 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_GridChoice_24
# 203 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_GridChoice_24
# 204 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_GridChoice_24
# 205 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 15, BattleDojoReplica_GridChoice_24
# 210 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_BattleDojoReplicaBattles
	return

BattleDojoReplica_GridChoice_24:
# 206 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_5
# 207 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	warp MAP_MODHEADQUARTERS_BATTLE_DOJO, 3, 6
	end


BattleDojoReplica_BattleDojoReplicaBattles::
# 219 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_0
# 220 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 221 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	showobjectat VAR_TEMP_1, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 222 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_OpponentWalksToSpot
# 223 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 224 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_2
# 225 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_BattleDojoReplicaBattles_3
# 227 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_BattleDojoReplicaBattles_4
# 229 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_5
# 231 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_6
# 233 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_BattleDojoReplicaBattles_7
# 235 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_BattleDojoReplicaBattles_8
# 237 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_BattleDojoReplicaBattles_9
# 239 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_10
BattleDojoReplica_BattleDojoReplicaBattles_1:
# 242 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_WalkLeft
# 243 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_WalkRight
# 244 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 245 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_2
# 247 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_BattleDojoReplicaBattles_13
# 249 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_BattleDojoReplicaBattles_14
# 251 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_15
# 253 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_16
# 255 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_BattleDojoReplicaBattles_17
# 257 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_BattleDojoReplicaBattles_18
# 259 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_BattleDojoReplicaBattles_19
# 261 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_20
BattleDojoReplica_BattleDojoReplicaBattles_11:
# 264 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_WalkRightBackwards
# 265 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_WalkLeftBackwards
# 266 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 267 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_2
# 269 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_BattleDojoReplicaBattles_23
# 271 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_BattleDojoReplicaBattles_24
# 273 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_25
# 275 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_26
# 277 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_BattleDojoReplicaBattles_27
# 279 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_BattleDojoReplicaBattles_28
# 281 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_BattleDojoReplicaBattles_29
# 283 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_30
BattleDojoReplica_BattleDojoReplicaBattles_21:
# 286 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_OpponentLeave
# 287 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 288 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	hideobjectat VAR_TEMP_1, MAP_MODHEADQUARTERS_BATTLE_DOJO_REPLICA
# 289 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalkBackSurge
# 290 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	waitmovement 0
# 291 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	applymovement 1, BattleDojoReplica_Movement_FaceLeft
# 292 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_17
# 293 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	releaseall
	return

BattleDojoReplica_BattleDojoReplicaBattles_3:
# 226 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_1
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_4:
# 228 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_2
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_5:
# 230 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_3
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_6:
# 232 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_4
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_7:
# 234 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_5
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_8:
# 236 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_6
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_9:
# 238 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_7
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_10:
# 240 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_8
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_13:
# 248 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOENIX_B0, Phoenix_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_14:
# 250 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_PAULA_B0, Paula_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_15:
# 252 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_HERA_B0, Hera_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_16:
# 254 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_NIKO_B0, Niko_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_17:
# 256 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIA_B0, Maria_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_18:
# 258 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSANNE_B0, Rosanne_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_19:
# 260 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_TESSA_B0, Tessa_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_20:
# 262 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_RAOUL_B0, Raoul_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_23:
# 270 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_9
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_24:
# 272 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_10
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_25:
# 274 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_11
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_26:
# 276 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_12
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_27:
# 278 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_13
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_28:
# 280 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_14
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_29:
# 282 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_15
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_30:
# 284 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_16
	goto BattleDojoReplica_BattleDojoReplicaBattles_21


# 296 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotUp:
# 297 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 297 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 297 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 298 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 299 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 302 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotLeft:
# 303 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 303 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 304 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 304 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 305 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 308 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotDown:
# 309 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 309 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 309 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 310 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 310 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 310 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 311 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 314 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotRight:
# 315 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 316 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 316 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 316 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 316 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 317 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 318 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 321 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalkBackSurge:
# 322 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 322 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 323 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 323 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
	step_end

# 326 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_OpponentWalksToSpot:
# 327 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 327 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 328 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 328 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 328 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 329 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 329 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 329 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 329 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_up
# 330 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_left
	step_end

# 333 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_OpponentLeave:
# 334 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 334 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 334 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 334 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 335 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 335 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 335 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 336 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 336 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_down
# 337 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_in_place_down
	step_end

# 340 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceDown:
# 341 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_down
	step_end

# 344 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceLeft:
# 345 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_left
	step_end

# 348 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceRight:
# 349 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 352 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkLeft:
# 353 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
	step_end

# 356 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkRight:
# 357 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
	step_end

# 360 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkLeftBackwards:
# 361 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	lock_facing_direction
# 362 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_left
# 363 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	unlock_facing_direction
	step_end

# 366 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkRightBackwards:
# 367 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	lock_facing_direction
# 368 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	walk_right
# 369 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	unlock_facing_direction
	step_end

BattleDojoReplica_HideNPCs_OnTransition_Text_0:
# 54 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "var was invalid$"

BattleDojoReplica_Event_Surge_Text_0:
# 86 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Here for another fight?$"

BattleDojoReplica_Event_Surge_Text_1:
# 93 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, talk to me if you ever\n"
	.string "want to fight one of your colleagues.$"

BattleDojoReplica_GridChoice_Text_0:
# 115 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Who do you want to fight?$"

BattleDojoReplica_GridChoice_Text_1:
# 182 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Changed your mind?\n"
	.string "Talk to me if you want to battle one of\l"
	.string "your colleagues!$"

BattleDojoReplica_GridChoice_Text_2:
# 186 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Do you want to fight\n"
	.string "{STR_VAR_1}?$"

BattleDojoReplica_GridChoice_Text_3:
# 189 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, frist things first.$"

BattleDojoReplica_GridChoice_Text_4:
# 195 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, you know what to do.$"

BattleDojoReplica_GridChoice_Text_5:
# 206 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: give me a moment to get {STR_VAR_1}$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_0:
# 219 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: {STR_VAR_1}, YOU'VE BEEN\n"
	.string "CALLED FOR BATTLE!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_1:
# 226 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: I can forsee that this will be\n"
	.string "an interesting battle!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_2:
# 228 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Paula{COLOR DARK_GRAY}: I hope you have taken good care\n"
	.string "of your pokemon throughout your\l"
	.string "journey.\l"
	.string "Now let's see how strong you've become!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_3:
# 230 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: Have you already gone out with\n"
	.string "your pokemon?$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_4:
# 232 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: ...\p"
	.string "SNEAK ATTACK!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_5:
# 234 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Glad you have found the training\n"
	.string "field\p"
	.string "Now let's see if the experience I\n"
	.string "anything as I imagined!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_6:
# 236 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: Every battle is a new\n"
	.string "experience, so bring your worst!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_7:
# 238 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I have to warn you, my starter is\n"
	.string "very strong!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_8:
# 240 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: Alright Raoul, stay focussed and\n"
	.string "don't panic.\p"
	.string "Let's do this!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_9:
# 270 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: I forsee a lot more training\n"
	.string "for me if I ever want to defeat you. Well\l"
	.string "fought {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_10:
# 272 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Paula{COLOR DARK_GRAY}: I see you have taken excellent\n"
	.string "care of your pokemon. Keep it up\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_11:
# 274 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: You're skills are far beyond what\n"
	.string "I had expected. Good battle {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_12:
# 276 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: My tactics were not hidden\n"
	.string "enough. I'll keep training and next time\l"
	.string "you won't see me coming!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_13:
# 278 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Thank you {PLAYER}, this was\n"
	.string "the exact experience I hoped to get\l"
	.string "when asking for this training ground.$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_14:
# 280 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: Every battle is a new\n"
	.string "experience, so it does not matter if you\l"
	.string "lose or win, as long as you learn\l"
	.string "something from it. Until our next battle\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_15:
# 282 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I guess I should not be\n"
	.string "surprised everyone had gotten a strong\l"
	.string "Starter. Keep up the good work\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_16:
# 284 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: I got a lot of things to think\n"
	.string "about after this battle, I better go\l"
	.string "and start doing that.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_17:
# 292 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "Well done {PLAYER}!\p"
	.string "Come talk to me if you ever want to\n"
	.string "fight another one of your colleagues.$"

Niko_Lost::
# 372 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "You saw straight through me!$"

Hera_Lost::
# 376 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "I seem to still not yet be ready.$"

Raoul_Lost::
# 380 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "Wait! Just give me a second to catch my\n"
	.string "breath!$"

Paula_Lost::
# 384 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "You really are something else, aren't\n"
	.string "you?$"

Maria_Lost::
# 388 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "This is exactly the experience I hoped\n"
	.string "for!$"

Phoenix_Lost::
# 392 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "If I only could forsee that I lost!$"

Rosanne_Lost::
# 396 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "I guess we're done here!$"

Tessa_Lost::
# 400 "data/maps/MODHeadquarters_BattleDojoReplica/scripts.pory"
	.string "Your starter is also quite strong I see!$"
