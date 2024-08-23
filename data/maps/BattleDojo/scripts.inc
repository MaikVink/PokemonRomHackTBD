BattleDojo_MapScripts::
# 12 "data/maps/BattleDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleDojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleDojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_HIDE_OBJECTS, 1, BattleDojo_HideNPCs_OnTransition
# 14 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 12, BattleDojo_Return
# 15 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 13, BattleDojo_Return
# 16 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 14, BattleDojo_Return
# 17 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 15, BattleDojo_Return
# 18 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 16, BattleDojo_Return
# 19 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 17, BattleDojo_Return
# 20 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_BATTLE_DOJO_STATE, 18, BattleDojo_Return
	.2byte 0


BattleDojo_Return::
# 25 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_HideNPCs
# 26 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojoReplica_Movement_FaceRight
# 27 "data/maps/BattleDojo/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 29 "data/maps/BattleDojo/scripts.pory"
	case 12, BattleDojo_Return_3
# 31 "data/maps/BattleDojo/scripts.pory"
	case 13, BattleDojo_Return_4
# 33 "data/maps/BattleDojo/scripts.pory"
	case 14, BattleDojo_Return_5
# 35 "data/maps/BattleDojo/scripts.pory"
	case 15, BattleDojo_Return_6
# 37 "data/maps/BattleDojo/scripts.pory"
	case 16, BattleDojo_Return_7
# 39 "data/maps/BattleDojo/scripts.pory"
	case 17, BattleDojo_Return_8
# 41 "data/maps/BattleDojo/scripts.pory"
	case 18, BattleDojo_Return_9
# 44 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Return_Text_0
BattleDojo_Return_1:
# 46 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 47 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_BattleDojoBattles
	return

BattleDojo_Return_3:
# 30 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojo_Return_1

BattleDojo_Return_4:
# 32 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojo_Return_1

BattleDojo_Return_5:
# 34 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojo_Return_1

BattleDojo_Return_6:
# 36 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto BattleDojo_Return_1

BattleDojo_Return_7:
# 38 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojo_Return_1

BattleDojo_Return_8:
# 40 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojo_Return_1

BattleDojo_Return_9:
# 42 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojo_Return_1


BattleDojo_HideNPCs_OnTransition::
# 51 "data/maps/BattleDojo/scripts.pory"
	fadescreen 1
# 52 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 5, MAP_BATTLE_DOJO
# 53 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 4, MAP_BATTLE_DOJO
# 54 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 3, MAP_BATTLE_DOJO
# 55 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 6, MAP_BATTLE_DOJO
# 56 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 2, MAP_BATTLE_DOJO
# 57 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 8, MAP_BATTLE_DOJO
# 58 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 7, MAP_BATTLE_DOJO
# 59 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
# 60 "data/maps/BattleDojo/scripts.pory"
	fadescreen 0
	return


BattleDojo_HideNPCs::
# 64 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 5, MAP_BATTLE_DOJO
# 65 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 4, MAP_BATTLE_DOJO
# 66 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 3, MAP_BATTLE_DOJO
# 67 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 6, MAP_BATTLE_DOJO
# 68 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 2, MAP_BATTLE_DOJO
# 69 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 8, MAP_BATTLE_DOJO
# 70 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 7, MAP_BATTLE_DOJO
# 71 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojo_HNS1::
# 76 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 3
	return


BattleDojo_Event_Surge::
# 80 "data/maps/BattleDojo/scripts.pory"
	lock
# 81 "data/maps/BattleDojo/scripts.pory"
	faceplayer
# 82 "data/maps/BattleDojo/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 84 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_Event_Surge_3
# 145 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_Event_Surge_4
# 205 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_Event_Surge_5
# 264 "data/maps/BattleDojo/scripts.pory"
	case 9, BattleDojo_Event_Surge_6
# 333 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_UNLOCK_BATTLEDOJO, BattleDojo_Event_Surge_21
# 339 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_36
# 343 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_37
# 346 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_UNLOCK_BATTLEDOJO
BattleDojo_Event_Surge_20:
# 348 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_38, MSGBOX_YESNO
# 349 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_40
# 355 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_39
BattleDojo_Event_Surge_1:
# 358 "data/maps/BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_Event_Surge_3:
# 85 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_9
# 91 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_25
# 97 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_2
# 101 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_1, MSGBOX_YESNO
BattleDojo_Event_Surge_24:
# 103 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_43
# 142 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 143 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_8
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_4:
# 146 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_12
# 153 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_29
# 159 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_11, MSGBOX_YESNO
BattleDojo_Event_Surge_28:
# 163 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_46
# 201 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 202 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_17
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_5:
# 206 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_15
# 213 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_33
# 219 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_19, MSGBOX_YESNO
BattleDojo_Event_Surge_32:
# 223 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_49
# 260 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 261 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_17
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_6:
# 265 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_18
# 272 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_37
# 278 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_27, MSGBOX_YESNO
BattleDojo_Event_Surge_36:
# 283 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_52
# 329 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 330 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_35
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_9:
# 87 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_0
# 88 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_12:
# 148 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_9
# 150 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_15:
# 208 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_18
# 210 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_18:
# 267 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_25
# 269 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_21:
	goto BattleDojo_Event_Surge_20

BattleDojo_Event_Surge_25:
# 93 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_1, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_24

BattleDojo_Event_Surge_29:
# 155 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_10, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_28

BattleDojo_Event_Surge_33:
# 215 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_10, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_32

BattleDojo_Event_Surge_37:
# 274 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_26, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_36

BattleDojo_Event_Surge_40:
# 351 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_GridChoice
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_43:
# 105 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_TOURNAMENT_LOST
# 106 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_3
# 107 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 108 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 109 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_4
# 110 "data/maps/BattleDojo/scripts.pory"
	showobjectat 2, MAP_BATTLE_DOJO
# 111 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_OpponentWalksToSpot
# 112 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 113 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_5
# 114 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_WalkLeft
# 115 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 116 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 117 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FABIAN_1, Fabian_LostTournament
# 118 "data/maps/BattleDojo/scripts.pory"
	showobjectat 2, MAP_BATTLE_DOJO
# 119 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 120 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 121 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 122 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_WalkRightBackwards
# 123 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 124 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 125 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_6
# 128 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_OpponentLeave
# 129 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 130 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 2, MAP_BATTLE_DOJO
# 131 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 132 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 133 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 134 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_7
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_46:
# 165 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_12
# 166 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 167 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 168 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_13
# 169 "data/maps/BattleDojo/scripts.pory"
	showobjectat 3, MAP_BATTLE_DOJO
# 170 "data/maps/BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_OpponentWalksToSpot
# 171 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 172 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_14
# 174 "data/maps/BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_WalkLeft
# 175 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 176 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 177 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_HERALD_1, Herald_LostTournament
# 178 "data/maps/BattleDojo/scripts.pory"
	showobjectat 3, MAP_BATTLE_DOJO
# 179 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 180 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 181 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 182 "data/maps/BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_WalkRightBackwards
# 183 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 184 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 185 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_15
# 188 "data/maps/BattleDojo/scripts.pory"
	applymovement 3, BattleDojo_Movement_OpponentLeave
# 189 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 190 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 3, MAP_BATTLE_DOJO
# 191 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 192 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 193 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 194 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_16
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_49:
# 225 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_20
# 226 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 227 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 228 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_21
# 229 "data/maps/BattleDojo/scripts.pory"
	showobjectat 4, MAP_BATTLE_DOJO
# 230 "data/maps/BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_OpponentWalksToSpot
# 231 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 232 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_22
# 234 "data/maps/BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_WalkLeft
# 235 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 236 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 237 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BELLA_1, Bella_LostTournament
# 238 "data/maps/BattleDojo/scripts.pory"
	showobjectat 4, MAP_BATTLE_DOJO
# 239 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 240 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 241 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 242 "data/maps/BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_WalkRightBackwards
# 243 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 244 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 245 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_23
# 248 "data/maps/BattleDojo/scripts.pory"
	applymovement 4, BattleDojo_Movement_OpponentLeave
# 249 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 250 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 4, MAP_BATTLE_DOJO
# 251 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 252 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 253 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 254 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_24
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_52:
# 285 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_28
# 286 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 287 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 288 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_29
# 289 "data/maps/BattleDojo/scripts.pory"
	showobjectat 5, MAP_BATTLE_DOJO
# 290 "data/maps/BattleDojo/scripts.pory"
	applymovement 5, BattleDojo_Movement_OpponentWalksToSpot
# 291 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 292 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_30
# 296 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_31
# 299 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_32
# 300 "data/maps/BattleDojo/scripts.pory"
	applymovement 5, BattleDojo_Movement_WalkLeft
# 301 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 302 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 303 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_1, Fiona_LostTournament
# 304 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 305 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 306 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 307 "data/maps/BattleDojo/scripts.pory"
	applymovement 5, BattleDojo_Movement_WalkRightBackwards
# 308 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 309 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 310 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_33
# 316 "data/maps/BattleDojo/scripts.pory"
	applymovement 5, BattleDojo_Movement_OpponentLeave
# 317 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 318 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 5, MAP_BATTLE_DOJO
# 319 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 320 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 321 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 322 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_34
	goto BattleDojo_Event_Surge_1


BattleDojo_PLayerMoveToBattleSpot::
# 362 "data/maps/BattleDojo/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 363 "data/maps/BattleDojo/scripts.pory"
	switch VAR_RESULT
# 365 "data/maps/BattleDojo/scripts.pory"
	case 1, BattleDojo_PLayerMoveToBattleSpot_3
# 367 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_PLayerMoveToBattleSpot_4
# 369 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_PLayerMoveToBattleSpot_5
# 371 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_PLayerMoveToBattleSpot_6
BattleDojo_PLayerMoveToBattleSpot_1:
# 374 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
	return

BattleDojo_PLayerMoveToBattleSpot_3:
# 366 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotDown
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_4:
# 368 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotUp
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_5:
# 370 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotRight
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_6:
# 372 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotLeft
	goto BattleDojo_PLayerMoveToBattleSpot_1


BattleDojo_GridChoice::
# 379 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_0
# 380 "data/maps/BattleDojo/scripts.pory"
	multichoicegrid 0, 0, MULTI_DOJO_GRID, 3, 0
# 382 "data/maps/BattleDojo/scripts.pory"
	closemessage
# 383 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 0
# 384 "data/maps/BattleDojo/scripts.pory"
	switch VAR_RESULT
# 386 "data/maps/BattleDojo/scripts.pory"
	case 0, BattleDojo_GridChoice_3
# 389 "data/maps/BattleDojo/scripts.pory"
	case 1, BattleDojo_GridChoice_4
# 392 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_GridChoice_5
# 395 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_GridChoice_6
# 398 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_GridChoice_7
# 401 "data/maps/BattleDojo/scripts.pory"
	case 5, BattleDojo_GridChoice_8
# 404 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_GridChoice_9
# 407 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_GridChoice_10
# 410 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_GridChoice_11
# 413 "data/maps/BattleDojo/scripts.pory"
	case 9, BattleDojo_GridChoice_12
# 416 "data/maps/BattleDojo/scripts.pory"
	case 10, BattleDojo_GridChoice_13
# 419 "data/maps/BattleDojo/scripts.pory"
	case 11, BattleDojo_GridChoice_14
# 422 "data/maps/BattleDojo/scripts.pory"
	case 12, BattleDojo_GridChoice_15
# 425 "data/maps/BattleDojo/scripts.pory"
	case 13, BattleDojo_GridChoice_16
# 428 "data/maps/BattleDojo/scripts.pory"
	case 14, BattleDojo_GridChoice_17
# 432 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_1
# 434 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_GridChoice_1:
# 437 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_2, MSGBOX_YESNO
# 438 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_GridChoice_20
# 466 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_GridChoice
BattleDojo_GridChoice_19:
# 468 "data/maps/BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_GridChoice_3:
# 387 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 5
# 388 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_4:
# 390 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 6
# 391 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_5:
# 393 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 7
# 394 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_6:
# 396 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 8
# 397 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_7:
# 399 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 9
# 400 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_8:
# 402 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 10
# 403 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_9:
# 405 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 11
# 406 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_10:
# 408 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 12
# 409 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 4
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_11:
# 411 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 13
# 412 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 3
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_12:
# 414 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 14
# 415 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 9
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_13:
# 417 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 15
# 418 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 2
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_14:
# 420 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 16
# 421 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 6
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_15:
# 423 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 17
# 424 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 1
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_16:
# 426 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 18
# 427 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 7
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_17:
# 429 "data/maps/BattleDojo/scripts.pory"
	buffertrainername STR_VAR_1, 19
# 430 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_BATTLE_DOJO_STATE, 8
	goto BattleDojo_GridChoice_1

BattleDojo_GridChoice_20:
# 440 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_3
# 441 "data/maps/BattleDojo/scripts.pory"
	fadescreen FADE_TO_BLACK
# 442 "data/maps/BattleDojo/scripts.pory"
	playfanfare MUS_HEAL
# 443 "data/maps/BattleDojo/scripts.pory"
	special HealPlayerParty
# 444 "data/maps/BattleDojo/scripts.pory"
	waitfanfare
# 445 "data/maps/BattleDojo/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 446 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_4
# 447 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 448 "data/maps/BattleDojo/scripts.pory"
	switch VAR_BATTLE_DOJO_STATE
# 450 "data/maps/BattleDojo/scripts.pory"
	case 1, BattleDojo_GridChoice_25
# 451 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_GridChoice_25
# 452 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_GridChoice_25
# 453 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_GridChoice_25
# 454 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_GridChoice_25
# 455 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_GridChoice_25
# 456 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_GridChoice_25
# 457 "data/maps/BattleDojo/scripts.pory"
	case 9, BattleDojo_GridChoice_25
# 462 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_BattleDojoBattles
	goto BattleDojo_GridChoice_19

BattleDojo_GridChoice_25:
# 458 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_GridChoice_Text_5
# 459 "data/maps/BattleDojo/scripts.pory"
	warp MAP_BATTLE_DOJO_REPLICA, 3, 6
	end


BattleDojo_BattleDojoBattles::
# 472 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_0
# 473 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_IN_BATTLE_MODE
# 474 "data/maps/BattleDojo/scripts.pory"
	showobjectat VAR_TEMP_1, MAP_BATTLE_DOJO
# 475 "data/maps/BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_OpponentWalksToSpot
# 476 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 477 "data/maps/BattleDojo/scripts.pory"
	switch VAR_TEMP_1
# 479 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_BattleDojoBattles_3
# 481 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_BattleDojoBattles_4
# 483 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_BattleDojoBattles_5
# 486 "data/maps/BattleDojo/scripts.pory"
	case 5, BattleDojo_BattleDojoBattles_6
# 495 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_BattleDojoBattles_7
# 497 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_BattleDojoBattles_8
# 499 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_BattleDojoBattles_9
BattleDojo_BattleDojoBattles_1:
# 502 "data/maps/BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_WalkLeft
# 503 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 504 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 505 "data/maps/BattleDojo/scripts.pory"
	switch VAR_TEMP_1
# 507 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_BattleDojoBattles_12
# 509 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_BattleDojoBattles_13
# 511 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_BattleDojoBattles_14
# 513 "data/maps/BattleDojo/scripts.pory"
	case 5, BattleDojo_BattleDojoBattles_15
# 522 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_BattleDojoBattles_16
# 524 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_BattleDojoBattles_17
# 526 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_BattleDojoBattles_18
BattleDojo_BattleDojoBattles_10:
# 529 "data/maps/BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_WalkRightBackwards
# 530 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 531 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 532 "data/maps/BattleDojo/scripts.pory"
	switch VAR_TEMP_1
# 534 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_BattleDojoBattles_24
# 536 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_BattleDojoBattles_25
# 539 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_BattleDojoBattles_26
# 541 "data/maps/BattleDojo/scripts.pory"
	case 5, BattleDojo_BattleDojoBattles_27
# 550 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_BattleDojoBattles_28
# 553 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_BattleDojoBattles_29
# 556 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_BattleDojoBattles_30
BattleDojo_BattleDojoBattles_22:
# 560 "data/maps/BattleDojo/scripts.pory"
	applymovement VAR_TEMP_1, BattleDojo_Movement_OpponentLeave
# 561 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 562 "data/maps/BattleDojo/scripts.pory"
	hideobjectat VAR_TEMP_1, MAP_BATTLE_DOJO
# 563 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 564 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 565 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 566 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_17
# 568 "data/maps/BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_BattleDojoBattles_3:
# 480 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_1
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_4:
# 482 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_2
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_5:
# 484 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_3
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_6:
# 487 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, BattleDojo_BattleDojoBattles_19
# 493 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_5
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_7:
# 496 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_6
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_8:
# 498 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_7
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_9:
# 500 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_8
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_12:
# 508 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FABIAN_B0, Fabian_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_13:
# 510 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_HERALD_B0, Herald_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_14:
# 512 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BELLA_B0, Bella_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_15:
# 514 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, BattleDojo_BattleDojoBattles_31
# 520 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_B0, Fiona_LostNormal
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_16:
# 523 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_TRISTAN_B0, Tristan_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_17:
# 525 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR_B0, Victor_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_18:
# 527 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_VERA_B0, Vera_Lost
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_19:
# 489 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_4
	goto BattleDojo_BattleDojoBattles_1

BattleDojo_BattleDojoBattles_24:
# 535 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_9
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_25:
# 537 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_10
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_26:
# 540 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_11
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_27:
# 542 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, BattleDojo_BattleDojoBattles_34
# 548 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_13
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_28:
# 551 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_14
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_29:
# 554 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_15
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_30:
# 557 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_16
	goto BattleDojo_BattleDojoBattles_22

BattleDojo_BattleDojoBattles_31:
# 516 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_B0_SHINY, Fiona_LostShiny
	goto BattleDojo_BattleDojoBattles_10

BattleDojo_BattleDojoBattles_34:
# 544 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_BattleDojoBattles_Text_12
	goto BattleDojo_BattleDojoBattles_22


# 571 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotUp:
# 572 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 572 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 572 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 573 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 574 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 577 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotLeft:
# 578 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 578 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 579 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 579 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 580 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 583 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotDown:
# 584 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 584 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 584 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 585 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 585 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 585 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 586 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 589 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotRight:
# 590 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 591 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 591 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 591 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 591 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 592 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 593 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 596 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalkBackSurge:
# 597 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 597 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 598 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 598 "data/maps/BattleDojo/scripts.pory"
	walk_right
	step_end

# 601 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_OpponentWalksToSpot:
# 602 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 602 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 603 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 603 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 603 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 604 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 604 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 604 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 604 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 605 "data/maps/BattleDojo/scripts.pory"
	face_left
	step_end

# 608 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_OpponentLeave:
# 609 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 609 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 609 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 609 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 610 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 610 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 610 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 611 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 611 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 612 "data/maps/BattleDojo/scripts.pory"
	walk_in_place_down
	step_end

# 615 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_FaceDown:
# 616 "data/maps/BattleDojo/scripts.pory"
	face_down
	step_end

# 619 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_FaceLeft:
# 620 "data/maps/BattleDojo/scripts.pory"
	face_left
	step_end

# 623 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkLeft:
# 624 "data/maps/BattleDojo/scripts.pory"
	walk_left
	step_end

# 627 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkRight:
# 628 "data/maps/BattleDojo/scripts.pory"
	walk_right
	step_end

# 631 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkLeftBackwards:
# 632 "data/maps/BattleDojo/scripts.pory"
	lock_facing_direction
# 633 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 634 "data/maps/BattleDojo/scripts.pory"
	unlock_facing_direction
	step_end

# 637 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkRightBackwards:
# 638 "data/maps/BattleDojo/scripts.pory"
	lock_facing_direction
# 639 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 640 "data/maps/BattleDojo/scripts.pory"
	unlock_facing_direction
	step_end

BattleDojo_Return_Text_0:
# 44 "data/maps/BattleDojo/scripts.pory"
	.string "var was invalid$"

BattleDojo_Event_Surge_Text_0:
# 87 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: You have fought well today\n"
	.string "{PLAYER}, go rest now.\l"
	.string "Tomorrow your next battle will be ready!$"

BattleDojo_Event_Surge_Text_1:
# 93 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready to do you first\n"
	.string "ever pokemon battle?$"

BattleDojo_Event_Surge_Text_2:
# 97 "data/maps/BattleDojo/scripts.pory"
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
# 106 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, you can stand ready and\n"
	.string "I'll call your first opponent than.$"

BattleDojo_Event_Surge_Text_4:
# 109 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}:FABIAN, YOU CAN ENTER!$"

BattleDojo_Event_Surge_Text_5:
# 113 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: This is our first ever battle,\n"
	.string "let's go easy on this one, OK?$"

BattleDojo_Event_Surge_Text_6:
# 125 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Wow, that totally did not go as\n"
	.string "I expected.\p"
	.string "But fair is fair, you were clearly the\n"
	.string "stronger trainer.\p"
	.string "Good luck in the rest of the\n"
	.string "tournament! I'll go think what I can do\l"
	.string "to become a better trainer!$"

BattleDojo_Event_Surge_Text_7:
# 134 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Well fought {PLAYER}, I can\n"
	.string "see you can get far in this tournament.\p"
	.string "In my eyes you have already proven\n"
	.string "yourself to be capable of handling\l"
	.string "these dangerous pokemon.\p"
	.string "Still, I ask you to continue in this\n"
	.string "tournament. I would like to see how far\l"
	.string "you can get.\p"
	.string "Who knows? Maybe you can win this whole\n"
	.string "tournament! I know {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} will have\l"
	.string "prepared something special if you would\l"
	.string "become our champion today!\p"
	.string "You can go rest now, tomorrow your next\n"
	.string "battle will be ready!$"

BattleDojo_Event_Surge_Text_8:
# 143 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: that's fine, come talk to me when\n"
	.string "you're ready$"

BattleDojo_Event_Surge_Text_9:
# 148 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: You already managed to make it\n"
	.string "to the semi finals!!\l"
	.string "now go rest and be preparred for yet\l"
	.string "another battle tomorrow!$"

BattleDojo_Event_Surge_Text_10:
# 155 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready for your next\n"
	.string "battle?$"

BattleDojo_Event_Surge_Text_11:
# 159 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: One battle down, three to go.\p"
	.string "Every Initiative has a different\n"
	.string "pokemon so it's impossible for anyone\l"
	.string "to know how these battles will go. Still,\l"
	.string "are you ready for your next battle?$"

BattleDojo_Event_Surge_Text_12:
# 165 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Fantastic! go stand where you\n"
	.string "stood yesterday and I'll call your next\l"
	.string "opponent forward$"

BattleDojo_Event_Surge_Text_13:
# 168 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: HERALD, YOU MAY ENTER!$"

BattleDojo_Event_Surge_Text_14:
# 172 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Don't think I'm gonna take it\n"
	.string "easy on you because we're colleague's.\p"
	.string "I'm here to win!$"

BattleDojo_Event_Surge_Text_15:
# 185 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Guess my ego got a bit too my\n"
	.string "head after my first win.\p"
	.string "Thank you for keeping me humble\n"
	.string "{PLAYER}.\l"
	.string "Good luck in the rest of the\l"
	.string "tournament, I'll be rooting for you!$"

BattleDojo_Event_Surge_Text_16:
# 194 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: And that makes two: you have\n"
	.string "already made it to the semi-finals.\l"
	.string "Congrats {PLAYER}!\p"
	.string "That does not mean the battles will\n"
	.string "become easier from here, tomorrow is\l"
	.string "another opponent and another battle.\p"
	.string "Go rest so you're ready for the battle\n"
	.string "that comes next!$"

BattleDojo_Event_Surge_Text_17:
# 202 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: No shame in being overprepared.\n"
	.string "come talk to me when you're ready$"

BattleDojo_Event_Surge_Text_18:
# 208 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Good job on making it to the\n"
	.string "finals {PLAYER}!\l"
	.string "now go rest and be preparred for the\l"
	.string "thoughest battle tomorrow!$"

BattleDojo_Event_Surge_Text_19:
# 219 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, You're halfway, keep it up!\p"
	.string "Do expect these battle to become\n"
	.string "harder through the tournament though.\l"
	.string "I would hate to see you lose because\l"
	.string "you were holding back!\p"
	.string "Are you ready for your next battle?$"

BattleDojo_Event_Surge_Text_20:
# 225 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Understood! You know what to do.$"

BattleDojo_Event_Surge_Text_21:
# 228 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: BELLA, ITS YOUR TIME TO SHINE!$"

BattleDojo_Event_Surge_Text_22:
# 232 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}BELLA{COLOR DARK_GRAY}: Thanks for playing dear, but\n"
	.string "this will be the end of the road for you.\l"
	.string "It's time for the REAL pokemon trainers\l"
	.string "to come out and play!$"

BattleDojo_Event_Surge_Text_23:
# 245 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}BELLA{COLOR DARK_GRAY}: hmp.\p"
	.string "Don't think you're better than me just\n"
	.string "because you won!\p"
	.string "I just went easy on you, next time you\n"
	.string "won't be so lucky, mark my words!$"

BattleDojo_Event_Surge_Text_24:
# 254 "data/maps/BattleDojo/scripts.pory"
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
# 267 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Good job Champion!\n"
	.string "Go rest for now, I'll talk with {COLOR LIGHT_GRAY}The\l"
	.string "Leader{COLOR DARK_GRAY} tomorrow about your reward!$"

BattleDojo_Event_Surge_Text_26:
# 274 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready for the Finals?$"

BattleDojo_Event_Surge_Text_27:
# 278 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: The Finals...\p"
	.string "The best and second best are also the\n"
	.string "best and second best pokemon trainers,\l"
	.string "who would have expected?\p"
	.string "Today we're going to see, who really, is\n"
	.string "the most skilled trainer out of the two\l"
	.string "of you.\p"
	.string "Are you ready for the final battle of\n"
	.string "the Tournament?$"

BattleDojo_Event_Surge_Text_28:
# 285 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Excellent!\n"
	.string "So please {PLAYER}, for the last time\l"
	.string "this tournament...$"

BattleDojo_Event_Surge_Text_29:
# 288 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: FIONA, IT IS TIME!$"

BattleDojo_Event_Surge_Text_30:
# 292 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: So, you have kept your promise\n"
	.string "and also made it to the finals?\p"
	.string "Good!\p"
	.string "Let's show everyone here, what a real\n"
	.string "pokemon battle means!\l"
	.string "I'm not gonna hold back and I hope\l"
	.string "you'll do the same to me!$"

BattleDojo_Event_Surge_Text_31:
# 296 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: INITIATIVES! You two have\n"
	.string "already proved from your first battle\l"
	.string "you're responsible, capable trainers\l"
	.string "able to take care of these dangerous\l"
	.string "pokemon!\l"
	.string "Todays battle is not to prove yourself\l"
	.string "worthy of owning pokemon, todays\l"
	.string "battle is about proving yourself worthy\l"
	.string "of {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} respect!\l"
	.string "Win this battle and get properly\l"
	.string "rewarded. If both fighters are ready,\l"
	.string "than you can start!$"

BattleDojo_Event_Surge_Text_32:
# 299 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Let's do this {PLAYER}!$"

BattleDojo_Event_Surge_Text_33:
# 310 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: I...\p"
	.string "I'm speechless!\p"
	.string "It seems you're even more skilled than I\n"
	.string "thought!\p"
	.string "Don't celebrate too hard though\n"
	.string "{PLAYER}, I'm your rival after all!\l"
	.string "I'll train and become stronger, and I'll\l"
	.string "battle you again and next time I'll come\l"
	.string "out victorious!\p"
	.string "Mark my words!$"

BattleDojo_Event_Surge_Text_34:
# 322 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Congratulations {PLAYER}, I\n"
	.string "knew you would come out victorious!\p"
	.string "You know {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} was also watching\n"
	.string "this battle and is very impressed, he\l"
	.string "says he has big plans preparred for\l"
	.string "you!\p"
	.string "I'll go talk with the leader to see about\n"
	.string "your reward.\l"
	.string "Go rest and relax from this fight,\l"
	.string "tomorrow you'll get your reward and\l"
	.string "than you'll be able to go explore the\l"
	.string "world with your new pokemon!$"

BattleDojo_Event_Surge_Text_35:
# 330 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Don't keep everyone waiting for\n"
	.string "too long, we all want to see how this\l"
	.string "next battle is gonna go!$"

BattleDojo_Event_Surge_Text_36:
# 339 "data/maps/BattleDojo/scripts.pory"
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

BattleDojo_Event_Surge_Text_37:
# 343 "data/maps/BattleDojo/scripts.pory"
	.string "You can use it to train, to expand your\n"
	.string "pokedex, to earn some money, or to test\l"
	.string "out new strategies.\l"
	.string "What you do in this Dojo is completely\l"
	.string "up to you!\p"
	.string "so...$"

BattleDojo_Event_Surge_Text_38:
# 348 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Here for another fight?$"

BattleDojo_Event_Surge_Text_39:
# 355 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, talk to me if you ever\n"
	.string "want to fight one of your colleagues.$"

BattleDojo_GridChoice_Text_0:
# 379 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Who do you want to fight?$"

BattleDojo_GridChoice_Text_1:
# 432 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Changed your mind?\n"
	.string "Talk to me if you want to battle one of\l"
	.string "your colleagues!$"

BattleDojo_GridChoice_Text_2:
# 437 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Do you want to fight\n"
	.string "{STR_VAR_1}?$"

BattleDojo_GridChoice_Text_3:
# 440 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, frist things first.$"

BattleDojo_GridChoice_Text_4:
# 446 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, you know what to do.$"

BattleDojo_GridChoice_Text_5:
# 458 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: give me a moment to get {STR_VAR_1}$"

BattleDojo_BattleDojoBattles_Text_0:
# 472 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: {STR_VAR_1}, YOU'VE BEEN\n"
	.string "CALLED FOR BATTLE!$"

BattleDojo_BattleDojoBattles_Text_1:
# 480 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: I'm not here expecting to win,\n"
	.string "but that does not mean I'm not going to\l"
	.string "try!$"

BattleDojo_BattleDojoBattles_Text_2:
# 482 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: I'm getting a bit too\n"
	.string "comfortable with winning. Let me feel\l"
	.string "again how it is to lose!$"

BattleDojo_BattleDojoBattles_Text_3:
# 484 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Hope you had fun dear.\n"
	.string "It's time to show you how a real\l"
	.string "upcoming MOD LORD fights!$"

BattleDojo_BattleDojoBattles_Text_4:
# 489 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Alright, let's do this {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_5:
# 493 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: This time, I'm coming to win!$"

BattleDojo_BattleDojoBattles_Text_6:
# 496 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Tristan{COLOR DARK_GRAY}: Show me what makes you so\n"
	.string "special!$"

BattleDojo_BattleDojoBattles_Text_7:
# 498 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: Time to test out my new\n"
	.string "strategy!$"

BattleDojo_BattleDojoBattles_Text_8:
# 500 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: Let's see what you have learned\n"
	.string "in your journey {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_9:
# 535 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: I never mind losing against you\n"
	.string "{PLAYER}, you can call me anything if\l"
	.string "you want an easy Pokemon battle!$"

BattleDojo_BattleDojoBattles_Text_10:
# 537 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Well I better go out there and\n"
	.string "train some more if I ever want to beat\l"
	.string "you.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_11:
# 540 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Bella{COLOR DARK_GRAY}: Just because you defeated me,\n"
	.string "doesn't mean your better than me dear.\l"
	.string "Soon enough you'll have to listen to my\l"
	.string "commands wether you like it or not.$"

BattleDojo_BattleDojoBattles_Text_12:
# 544 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Seems like you haven't sit still\n"
	.string "either! I'll keep training and won't make\l"
	.string "it as easy on you next time!$"

BattleDojo_BattleDojoBattles_Text_13:
# 548 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: It seems like I still not strong\n"
	.string "enough. But mark my words, I won't make\l"
	.string "it as easy for you the next time!$"

BattleDojo_BattleDojoBattles_Text_14:
# 551 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: I got losts of things to think\n"
	.string "about after this battle, I better go\l"
	.string "and start doing that.\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_15:
# 554 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Victor{COLOR DARK_GRAY}: I need some more training to be\n"
	.string "able to use my knowledge in battle...\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_16:
# 557 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Vera{COLOR DARK_GRAY}: You have quite the interesting\n"
	.string "set of pokemon on your team, I'll love\l"
	.string "to battle your more often!\l"
	.string "Thanks for the battle {PLAYER}!$"

BattleDojo_BattleDojoBattles_Text_17:
# 566 "data/maps/BattleDojo/scripts.pory"
	.string "Well done {PLAYER}!\p"
	.string "Come talk to me if you ever want to\n"
	.string "fight another one of your colleagues.$"

Fabian_LostTournament::
# 643 "data/maps/BattleDojo/scripts.pory"
	.string "Hé, I thought we would take it easy!$"

Bella_LostTournament::
# 647 "data/maps/BattleDojo/scripts.pory"
	.string "Wait... that doesn't count!$"

Herald_LostTournament::
# 651 "data/maps/BattleDojo/scripts.pory"
	.string "What... just happened?$"

Fiona_LostTournament::
# 655 "data/maps/BattleDojo/scripts.pory"
	.string "Is this... is this how I lose it all?$"

Fiona_LostShiny::
# 659 "data/maps/BattleDojo/scripts.pory"
	.string "Wow, you've grown a lot since our last\n"
	.string "battle!$"

Fiona_LostNormal::
# 663 "data/maps/BattleDojo/scripts.pory"
	.string "It's clear that my training is not yet\n"
	.string "complete!$"

Fabian_Lost::
# 667 "data/maps/BattleDojo/scripts.pory"
	.string "HAHAHAHA! Yet another lose!$"

Herald_Lost::
# 671 "data/maps/BattleDojo/scripts.pory"
	.string "Back to ground zero once again!$"

Bella_Lost::
# 675 "data/maps/BattleDojo/scripts.pory"
	.string "Hmpf!$"

Tristan_Lost::
# 679 "data/maps/BattleDojo/scripts.pory"
	.string "I understand now$"

Victor_Lost::
# 683 "data/maps/BattleDojo/scripts.pory"
	.string "I still need some more field experience\n"
	.string "it seems.$"

Vera_Lost::
# 687 "data/maps/BattleDojo/scripts.pory"
	.string "How can I already been defeated?$"
