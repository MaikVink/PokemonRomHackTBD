BattleDojoReplica_MapScripts::
# 12 "data/maps/BattleDojoReplica/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleDojoReplica_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleDojoReplica_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 1, BattleDojoReplica_HideNPCs_OnTransition
# 14 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 2, BattleDojoReplica_HideNPCs_OnTransition
# 15 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 3, BattleDojoReplica_HideNPCs_OnTransition
# 16 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 4, BattleDojoReplica_HideNPCs_OnTransition
# 17 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 6, BattleDojoReplica_HideNPCs_OnTransition
# 18 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 7, BattleDojoReplica_HideNPCs_OnTransition
# 19 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 8, BattleDojoReplica_HideNPCs_OnTransition
# 20 "data/maps/BattleDojoReplica/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 9, BattleDojoReplica_HideNPCs_OnTransition
	.2byte 0


BattleDojoReplica_HideNPCs_OnTransition::
# 25 "data/maps/BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_HideNPCs
# 26 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_FaceRight
# 27 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 29 "data/maps/BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_HideNPCs_OnTransition_3
# 31 "data/maps/BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_HideNPCs_OnTransition_4
# 33 "data/maps/BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_HideNPCs_OnTransition_5
# 35 "data/maps/BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_HideNPCs_OnTransition_6
# 37 "data/maps/BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_HideNPCs_OnTransition_7
# 39 "data/maps/BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_HideNPCs_OnTransition_8
# 41 "data/maps/BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_HideNPCs_OnTransition_9
# 43 "data/maps/BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_HideNPCs_OnTransition_10
# 46 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_HideNPCs_OnTransition_Text_0
BattleDojoReplica_HideNPCs_OnTransition_1:
# 48 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 49 "data/maps/BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_BattleDojoReplicaBattles
	return

BattleDojoReplica_HideNPCs_OnTransition_3:
# 30 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_4:
# 32 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_5:
# 34 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_6:
# 36 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_7:
# 38 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_8:
# 40 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_9:
# 42 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojoReplica_HideNPCs_OnTransition_1

BattleDojoReplica_HideNPCs_OnTransition_10:
# 44 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 9
	goto BattleDojoReplica_HideNPCs_OnTransition_1


BattleDojoReplica_HideNPCs::
# 53 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 6, MAP_BATTLE_DOJO
# 54 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 8, MAP_BATTLE_DOJO
# 55 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 4, MAP_BATTLE_DOJO
# 56 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 9, MAP_BATTLE_DOJO
# 57 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 1, MAP_BATTLE_DOJO
# 58 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 2, MAP_BATTLE_DOJO
# 59 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 3, MAP_BATTLE_DOJO
# 60 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat 7, MAP_BATTLE_DOJO
# 61 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojoReplica_HNS1::
# 66 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 3
	return


BattleDojoReplica_Event_Surge::
# 70 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_Event_Surge_Text_0, MSGBOX_YESNO
# 71 "data/maps/BattleDojoReplica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojoReplica_Event_Surge_1
# 77 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_Event_Surge_Text_1
	return

BattleDojoReplica_Event_Surge_1:
# 73 "data/maps/BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_GridChoice
	return


BattleDojoReplica_PLayerMoveToBattleSpot::
# 82 "data/maps/BattleDojoReplica/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 83 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_PLayerMoveToBattleSpot_3
# 87 "data/maps/BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_PLayerMoveToBattleSpot_4
# 89 "data/maps/BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_PLayerMoveToBattleSpot_5
# 91 "data/maps/BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_PLayerMoveToBattleSpot_6
BattleDojoReplica_PLayerMoveToBattleSpot_1:
# 94 "data/maps/BattleDojoReplica/scripts.pory"
	waitmovement 0
	return

BattleDojoReplica_PLayerMoveToBattleSpot_3:
# 86 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotDown
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_4:
# 88 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotUp
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_5:
# 90 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotRight
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1

BattleDojoReplica_PLayerMoveToBattleSpot_6:
# 92 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalksToSpotLeft
	goto BattleDojoReplica_PLayerMoveToBattleSpot_1


BattleDojoReplica_GridChoice::
# 99 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_0
# 100 "data/maps/BattleDojoReplica/scripts.pory"
	multichoicegrid 0, 0, MULTI_DOJO_GRID, 3, 0
# 101 "data/maps/BattleDojoReplica/scripts.pory"
	closemessage
# 102 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 103 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/BattleDojoReplica/scripts.pory"
	case 0, BattleDojoReplica_GridChoice_3
# 108 "data/maps/BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_GridChoice_4
# 111 "data/maps/BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_GridChoice_5
# 114 "data/maps/BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_GridChoice_6
# 117 "data/maps/BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_GridChoice_7
# 120 "data/maps/BattleDojoReplica/scripts.pory"
	case 5, BattleDojoReplica_GridChoice_8
# 123 "data/maps/BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_GridChoice_9
# 126 "data/maps/BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_GridChoice_10
# 129 "data/maps/BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_GridChoice_11
# 132 "data/maps/BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_GridChoice_12
# 135 "data/maps/BattleDojoReplica/scripts.pory"
	case 10, BattleDojoReplica_GridChoice_13
# 138 "data/maps/BattleDojoReplica/scripts.pory"
	case 11, BattleDojoReplica_GridChoice_14
# 141 "data/maps/BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_GridChoice_15
# 144 "data/maps/BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_GridChoice_16
# 147 "data/maps/BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_GridChoice_17
# 151 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_1
# 153 "data/maps/BattleDojoReplica/scripts.pory"
	releaseall
	end

BattleDojoReplica_GridChoice_1:
# 156 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_2, MSGBOX_YESNO
# 157 "data/maps/BattleDojoReplica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojoReplica_GridChoice_19
# 184 "data/maps/BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_GridChoice
	return

BattleDojoReplica_GridChoice_3:
# 106 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 5
# 107 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 15
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_4:
# 109 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 6
# 110 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 12
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_5:
# 112 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 7
# 113 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 13
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_6:
# 115 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 8
# 116 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 14
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_7:
# 118 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 9
# 119 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 16
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_8:
# 121 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 10
# 122 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 17
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_9:
# 124 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 11
# 125 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 18
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_10:
# 127 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 12
# 128 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_11:
# 130 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 13
# 131 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_12:
# 133 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 14
# 134 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 9
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_13:
# 136 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 15
# 137 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_14:
# 139 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 16
# 140 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_15:
# 142 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 17
# 143 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_16:
# 145 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 18
# 146 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_17:
# 148 "data/maps/BattleDojoReplica/scripts.pory"
	buffertrainername STR_VAR_1, 19
# 149 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojoReplica_GridChoice_1

BattleDojoReplica_GridChoice_19:
# 159 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_3
# 160 "data/maps/BattleDojoReplica/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/BattleDojoReplica/scripts.pory"
	playfanfare MUS_HEAL
# 162 "data/maps/BattleDojoReplica/scripts.pory"
	special HealPlayerParty
# 163 "data/maps/BattleDojoReplica/scripts.pory"
	waitfanfare
# 164 "data/maps/BattleDojoReplica/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 165 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_4
# 166 "data/maps/BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_PLayerMoveToBattleSpot
# 167 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 169 "data/maps/BattleDojoReplica/scripts.pory"
	case 12, BattleDojoReplica_GridChoice_24
# 170 "data/maps/BattleDojoReplica/scripts.pory"
	case 13, BattleDojoReplica_GridChoice_24
# 171 "data/maps/BattleDojoReplica/scripts.pory"
	case 14, BattleDojoReplica_GridChoice_24
# 172 "data/maps/BattleDojoReplica/scripts.pory"
	case 15, BattleDojoReplica_GridChoice_24
# 173 "data/maps/BattleDojoReplica/scripts.pory"
	case 16, BattleDojoReplica_GridChoice_24
# 174 "data/maps/BattleDojoReplica/scripts.pory"
	case 17, BattleDojoReplica_GridChoice_24
# 175 "data/maps/BattleDojoReplica/scripts.pory"
	case 18, BattleDojoReplica_GridChoice_24
# 180 "data/maps/BattleDojoReplica/scripts.pory"
	call BattleDojoReplica_BattleDojoReplicaBattles
	return

BattleDojoReplica_GridChoice_24:
# 176 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_GridChoice_Text_5
# 177 "data/maps/BattleDojoReplica/scripts.pory"
	warp MAP_BATTLE_DOJO, 3, 6
	end


BattleDojoReplica_BattleDojoReplicaBattles::
# 189 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_0
# 190 "data/maps/BattleDojoReplica/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 191 "data/maps/BattleDojoReplica/scripts.pory"
	showobjectat VAR_TEMP_1, MAP_BATTLE_DOJO
# 192 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_OpponentWalksToSpot
# 193 "data/maps/BattleDojoReplica/scripts.pory"
	waitmovement 0
# 194 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_1
# 195 "data/maps/BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_BattleDojoReplicaBattles_3
# 197 "data/maps/BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_BattleDojoReplicaBattles_4
# 200 "data/maps/BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_BattleDojoReplicaBattles_5
# 202 "data/maps/BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_BattleDojoReplicaBattles_6
# 205 "data/maps/BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_BattleDojoReplicaBattles_7
# 208 "data/maps/BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_8
# 210 "data/maps/BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_9
# 212 "data/maps/BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_10
BattleDojoReplica_BattleDojoReplicaBattles_1:
# 216 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_WalkLeft
# 217 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_WalkRight
# 218 "data/maps/BattleDojoReplica/scripts.pory"
	waitmovement 0
# 219 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_1
# 221 "data/maps/BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_BattleDojoReplicaBattles_13
# 223 "data/maps/BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_BattleDojoReplicaBattles_14
# 225 "data/maps/BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_BattleDojoReplicaBattles_15
# 227 "data/maps/BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_BattleDojoReplicaBattles_16
# 229 "data/maps/BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_BattleDojoReplicaBattles_17
# 231 "data/maps/BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_18
# 233 "data/maps/BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_19
# 235 "data/maps/BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_20
BattleDojoReplica_BattleDojoReplicaBattles_11:
# 238 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_WalkRightBackwards
# 239 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_WalkLeftBackwards
# 240 "data/maps/BattleDojoReplica/scripts.pory"
	waitmovement 0
# 241 "data/maps/BattleDojoReplica/scripts.pory"
	switch VAR_TEMP_1
# 243 "data/maps/BattleDojoReplica/scripts.pory"
	case 1, BattleDojoReplica_BattleDojoReplicaBattles_23
# 245 "data/maps/BattleDojoReplica/scripts.pory"
	case 2, BattleDojoReplica_BattleDojoReplicaBattles_24
# 247 "data/maps/BattleDojoReplica/scripts.pory"
	case 3, BattleDojoReplica_BattleDojoReplicaBattles_25
# 249 "data/maps/BattleDojoReplica/scripts.pory"
	case 4, BattleDojoReplica_BattleDojoReplicaBattles_26
# 251 "data/maps/BattleDojoReplica/scripts.pory"
	case 6, BattleDojoReplica_BattleDojoReplicaBattles_27
# 253 "data/maps/BattleDojoReplica/scripts.pory"
	case 7, BattleDojoReplica_BattleDojoReplicaBattles_28
# 255 "data/maps/BattleDojoReplica/scripts.pory"
	case 8, BattleDojoReplica_BattleDojoReplicaBattles_29
# 257 "data/maps/BattleDojoReplica/scripts.pory"
	case 9, BattleDojoReplica_BattleDojoReplicaBattles_30
BattleDojoReplica_BattleDojoReplicaBattles_21:
# 261 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojoReplica_Movement_OpponentLeave
# 262 "data/maps/BattleDojoReplica/scripts.pory"
	waitmovement 0
# 263 "data/maps/BattleDojoReplica/scripts.pory"
	hideobjectat VAR_TEMP_1, MAP_BATTLE_DOJO
# 264 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_movement_PlayerWalkBackSurge
# 265 "data/maps/BattleDojoReplica/scripts.pory"
	waitmovement 0
# 266 "data/maps/BattleDojoReplica/scripts.pory"
	applymovement 5, BattleDojoReplica_Movement_FaceLeft
# 267 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_17
# 269 "data/maps/BattleDojoReplica/scripts.pory"
	releaseall
	return

BattleDojoReplica_BattleDojoReplicaBattles_3:
# 196 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_1
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_4:
# 198 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_2
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_5:
# 201 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_3
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_6:
# 203 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_4
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_7:
# 206 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_5
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_8:
# 209 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_6
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_9:
# 211 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_7
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_10:
# 213 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_8
	goto BattleDojoReplica_BattleDojoReplicaBattles_1

BattleDojoReplica_BattleDojoReplicaBattles_13:
# 222 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOENIX_B0, Phoenix_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_14:
# 224 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_PAULA_B0, Paula_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_15:
# 226 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_HERA_B0, Hera_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_16:
# 228 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_NIKO_B0, Niko_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_17:
# 230 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIA_B0, Maria_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_18:
# 232 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSANNE_B0, Rosanne_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_19:
# 234 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_TESSA_B0, Tessa_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_20:
# 236 "data/maps/BattleDojoReplica/scripts.pory"
	trainerbattle_no_intro TRAINER_RAOUL_B0, Raoul_Lost
	goto BattleDojoReplica_BattleDojoReplicaBattles_11

BattleDojoReplica_BattleDojoReplicaBattles_23:
# 244 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_9
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_24:
# 246 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_10
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_25:
# 248 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_11
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_26:
# 250 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_12
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_27:
# 252 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_13
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_28:
# 254 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_14
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_29:
# 256 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_15
	goto BattleDojoReplica_BattleDojoReplicaBattles_21

BattleDojoReplica_BattleDojoReplicaBattles_30:
# 258 "data/maps/BattleDojoReplica/scripts.pory"
	msgbox BattleDojoReplica_BattleDojoReplicaBattles_Text_16
	goto BattleDojoReplica_BattleDojoReplicaBattles_21


# 272 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotUp:
# 273 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 273 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 273 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 274 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 275 "data/maps/BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 278 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotLeft:
# 279 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 279 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 280 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 280 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 281 "data/maps/BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 284 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotDown:
# 285 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 285 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 285 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 286 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 286 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 286 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 287 "data/maps/BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 290 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalksToSpotRight:
# 291 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 292 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 292 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 292 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 292 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 293 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 294 "data/maps/BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 297 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_movement_PlayerWalkBackSurge:
# 298 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 298 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 299 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
# 299 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
	step_end

# 302 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_OpponentWalksToSpot:
# 303 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 303 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 304 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
# 304 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
# 304 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
# 305 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 305 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 305 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 305 "data/maps/BattleDojoReplica/scripts.pory"
	walk_up
# 306 "data/maps/BattleDojoReplica/scripts.pory"
	face_left
	step_end

# 309 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_OpponentLeave:
# 310 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 310 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 310 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 310 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 311 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 311 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 311 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 312 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 312 "data/maps/BattleDojoReplica/scripts.pory"
	walk_down
# 313 "data/maps/BattleDojoReplica/scripts.pory"
	walk_in_place_down
	step_end

# 316 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceDown:
# 317 "data/maps/BattleDojoReplica/scripts.pory"
	face_down
	step_end

# 320 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceLeft:
# 321 "data/maps/BattleDojoReplica/scripts.pory"
	face_left
	step_end

# 324 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_FaceRight:
# 325 "data/maps/BattleDojoReplica/scripts.pory"
	face_right
	step_end

# 328 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkLeft:
# 329 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
	step_end

# 332 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkRight:
# 333 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
	step_end

# 336 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkLeftBackwards:
# 337 "data/maps/BattleDojoReplica/scripts.pory"
	lock_facing_direction
# 338 "data/maps/BattleDojoReplica/scripts.pory"
	walk_left
# 339 "data/maps/BattleDojoReplica/scripts.pory"
	unlock_facing_direction
	step_end

# 342 "data/maps/BattleDojoReplica/scripts.pory"
BattleDojoReplica_Movement_WalkRightBackwards:
# 343 "data/maps/BattleDojoReplica/scripts.pory"
	lock_facing_direction
# 344 "data/maps/BattleDojoReplica/scripts.pory"
	walk_right
# 345 "data/maps/BattleDojoReplica/scripts.pory"
	unlock_facing_direction
	step_end

BattleDojoReplica_HideNPCs_OnTransition_Text_0:
# 46 "data/maps/BattleDojoReplica/scripts.pory"
	.string "var was invalid$"

BattleDojoReplica_Event_Surge_Text_0:
# 70 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Here for another fight?$"

BattleDojoReplica_Event_Surge_Text_1:
# 77 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, talk to me if you ever\n"
	.string "want to fight one of your colleagues.$"

BattleDojoReplica_GridChoice_Text_0:
# 99 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Who do you want to fight?$"

BattleDojoReplica_GridChoice_Text_1:
# 151 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Changed your mind?\n"
	.string "Talk to me if you want to battle one of\l"
	.string "your colleagues!$"

BattleDojoReplica_GridChoice_Text_2:
# 156 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Do you want to fight\n"
	.string "{STR_VAR_1}?$"

BattleDojoReplica_GridChoice_Text_3:
# 159 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, frist things first.$"

BattleDojoReplica_GridChoice_Text_4:
# 165 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, you know what to do.$"

BattleDojoReplica_GridChoice_Text_5:
# 176 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: give me a moment to get {STR_VAR_1}$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_0:
# 189 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: {STR_VAR_1}, YOU'VE BEEN\n"
	.string "CALLED FOR BATTLE!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_1:
# 196 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: I can forsee that this will be\n"
	.string "an interesting battle!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_2:
# 198 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Paula{COLOR DARK_GRAY}: I hope you have taken good care\n"
	.string "of your pokemon throughout your\l"
	.string "journey.\l"
	.string "Now let's see how strong you've become!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_3:
# 201 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: Have you already gone out with\n"
	.string "your pokemon?$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_4:
# 203 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: ...\p"
	.string "SNEAK ATTACK!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_5:
# 206 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Glad you have found the training\n"
	.string "field\p"
	.string "Now let's see if the experience I\n"
	.string "anything as I imagined!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_6:
# 209 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: Every battle is a new\n"
	.string "experience, so bring your worst!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_7:
# 211 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I have to warn you, my starter is\n"
	.string "very strong!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_8:
# 213 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: Alright Raoul, stay focussed and\n"
	.string "don't panic.\p"
	.string "Let's do this!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_9:
# 244 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Phoenix{COLOR DARK_GRAY}: I forsee a lot more training\n"
	.string "for me if I ever want to defeat you. Well\l"
	.string "fought {PLAYER}$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_10:
# 246 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Paula{COLOR DARK_GRAY}: I see you have taken excellent\n"
	.string "care of your pokemon. Keep it up\l"
	.string "{PLAYER}$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_11:
# 248 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: You're skills are far beyond what\n"
	.string "I had expected. Good battle {PLAYER}$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_12:
# 250 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Niko{COLOR DARK_GRAY}: My tactics were not hidden\n"
	.string "enough. I'll keep training and next time\l"
	.string "you won't see me coming!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_13:
# 252 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Maria{COLOR DARK_GRAY}: Thank you {PLAYER}, this was\n"
	.string "the exact experience I hoped to get\l"
	.string "when asking for this training ground.$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_14:
# 254 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Rosanne{COLOR DARK_GRAY}: Every battle is a new\n"
	.string "experience, so it does not matter if you\l"
	.string "lose or win, as long as you learn\l"
	.string "something from it. Until our next battle\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_15:
# 256 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Tessa{COLOR DARK_GRAY}: I guess I should not be\n"
	.string "surprised everyone had gotten a strong\l"
	.string "Starter. Keep up the good work\l"
	.string "{PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_16:
# 258 "data/maps/BattleDojoReplica/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: I got losts of things to think\n"
	.string "about after this battle, I better go\l"
	.string "and start doing that.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojoReplica_BattleDojoReplicaBattles_Text_17:
# 267 "data/maps/BattleDojoReplica/scripts.pory"
	.string "Well done {PLAYER}!\p"
	.string "Come talk to me if you ever want to\n"
	.string "fight another one of your colleagues.$"

Niko_Lost::
# 348 "data/maps/BattleDojoReplica/scripts.pory"
	.string "You saw straight through me!$"

Hera_Lost::
# 352 "data/maps/BattleDojoReplica/scripts.pory"
	.string "I seem to still not yet be ready.$"

Raoul_Lost::
# 356 "data/maps/BattleDojoReplica/scripts.pory"
	.string "Wait! Just give me a second to catch my\n"
	.string "breath!$"

Paula_Lost::
# 360 "data/maps/BattleDojoReplica/scripts.pory"
	.string "You really are something else, aren't\n"
	.string "you$"

Maria_Lost::
# 364 "data/maps/BattleDojoReplica/scripts.pory"
	.string "This is exactly the experience I hoped\n"
	.string "for!$"

Phoenix_Lost::
# 368 "data/maps/BattleDojoReplica/scripts.pory"
	.string "If I only could forsee that I lost!$"

Rosanne_Lost::
# 372 "data/maps/BattleDojoReplica/scripts.pory"
	.string "I guess we're done here!$"

Tessa_Lost::
# 376 "data/maps/BattleDojoReplica/scripts.pory"
	.string "Your starter is also quite strong I see!$"
