BattleDojo_MapScripts::
# 20 "data/maps/BattleDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleDojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleDojo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/BattleDojo/scripts.pory"
	map_script_2 VAR_HIDE_OBJECTS, 1, BattleDojo_HideNPCs
	.2byte 0


BattleDojo_HideNPCs::
# 26 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 2, MAP_BATTLE_DOJO
# 27 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 3, MAP_BATTLE_DOJO
# 28 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 4, MAP_BATTLE_DOJO
# 29 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 5, MAP_BATTLE_DOJO
# 30 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 6, MAP_BATTLE_DOJO
# 31 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 7, MAP_BATTLE_DOJO
# 32 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 8, MAP_BATTLE_DOJO
# 33 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 9, MAP_BATTLE_DOJO
# 34 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 10, MAP_BATTLE_DOJO
# 35 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 11, MAP_BATTLE_DOJO
# 36 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 12, MAP_BATTLE_DOJO
# 37 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 13, MAP_BATTLE_DOJO
# 38 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 14, MAP_BATTLE_DOJO
# 39 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 15, MAP_BATTLE_DOJO
# 40 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 16, MAP_BATTLE_DOJO
# 41 "data/maps/BattleDojo/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 2
	return


BattleDojo_Event_Surge::
# 45 "data/maps/BattleDojo/scripts.pory"
	lock
# 46 "data/maps/BattleDojo/scripts.pory"
	faceplayer
# 47 "data/maps/BattleDojo/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 49 "data/maps/BattleDojo/scripts.pory"
	case 6, BattleDojo_Event_Surge_3
# 110 "data/maps/BattleDojo/scripts.pory"
	case 7, BattleDojo_Event_Surge_4
# 170 "data/maps/BattleDojo/scripts.pory"
	case 8, BattleDojo_Event_Surge_5
# 229 "data/maps/BattleDojo/scripts.pory"
	case 9, BattleDojo_Event_Surge_6
BattleDojo_Event_Surge_1:
# 298 "data/maps/BattleDojo/scripts.pory"
	releaseall
	return

BattleDojo_Event_Surge_3:
# 50 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_8
# 56 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_20
# 62 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_2
# 66 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_1, MSGBOX_YESNO
BattleDojo_Event_Surge_19:
# 68 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_35
# 107 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 108 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_8
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_4:
# 111 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_11
# 118 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_24
# 124 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_11, MSGBOX_YESNO
BattleDojo_Event_Surge_23:
# 128 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_38
# 166 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 167 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_17
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_5:
# 171 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_14
# 178 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_28
# 184 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_19, MSGBOX_YESNO
BattleDojo_Event_Surge_27:
# 188 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_41
# 225 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 226 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_17
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_6:
# 230 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, BattleDojo_Event_Surge_17
# 237 "data/maps/BattleDojo/scripts.pory"
	goto_if_set FLAG_REUSABLE_SKIP_FLAG, BattleDojo_Event_Surge_32
# 243 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_27, MSGBOX_YESNO
BattleDojo_Event_Surge_31:
# 248 "data/maps/BattleDojo/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleDojo_Event_Surge_44
# 294 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_REUSABLE_SKIP_FLAG
# 295 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_35
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_8:
# 52 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_0
# 53 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_11:
# 113 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_9
# 115 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_14:
# 173 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_18
# 175 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_17:
# 232 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_25
# 234 "data/maps/BattleDojo/scripts.pory"
	releaseall
	end

BattleDojo_Event_Surge_20:
# 58 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_1, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_19

BattleDojo_Event_Surge_24:
# 120 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_10, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_23

BattleDojo_Event_Surge_28:
# 180 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_10, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_27

BattleDojo_Event_Surge_32:
# 239 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_26, MSGBOX_YESNO
	goto BattleDojo_Event_Surge_31

BattleDojo_Event_Surge_35:
# 70 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_TOURNAMENT_LOST
# 71 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_3
# 72 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 73 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 74 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_4
# 75 "data/maps/BattleDojo/scripts.pory"
	showobjectat 14, MAP_BATTLE_DOJO
# 76 "data/maps/BattleDojo/scripts.pory"
	applymovement 14, BattleDojo_Movement_OpponentWalksToSpot
# 77 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 78 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_5
# 79 "data/maps/BattleDojo/scripts.pory"
	applymovement 14, BattleDojo_Movement_WalkLeft
# 80 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 81 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 82 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FABIAN_1, Fabian_Lost
# 83 "data/maps/BattleDojo/scripts.pory"
	showobjectat 14, MAP_BATTLE_DOJO
# 84 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 85 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 86 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 87 "data/maps/BattleDojo/scripts.pory"
	applymovement 14, BattleDojo_Movement_WalkRightBackwards
# 88 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 89 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 90 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_6
# 93 "data/maps/BattleDojo/scripts.pory"
	applymovement 14, BattleDojo_Movement_OpponentLeave
# 94 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 95 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 14, MAP_BATTLE_DOJO
# 96 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 97 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 98 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 99 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_7
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_38:
# 130 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_12
# 131 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 132 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 133 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_13
# 134 "data/maps/BattleDojo/scripts.pory"
	showobjectat 9, MAP_BATTLE_DOJO
# 135 "data/maps/BattleDojo/scripts.pory"
	applymovement 9, BattleDojo_Movement_OpponentWalksToSpot
# 136 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 137 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_14
# 139 "data/maps/BattleDojo/scripts.pory"
	applymovement 9, BattleDojo_Movement_WalkLeft
# 140 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 141 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 142 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_HERALD_1, Herald_Lost
# 143 "data/maps/BattleDojo/scripts.pory"
	showobjectat 9, MAP_BATTLE_DOJO
# 144 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 145 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 146 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 147 "data/maps/BattleDojo/scripts.pory"
	applymovement 9, BattleDojo_Movement_WalkRightBackwards
# 148 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 149 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 150 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_15
# 153 "data/maps/BattleDojo/scripts.pory"
	applymovement 9, BattleDojo_Movement_OpponentLeave
# 154 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 155 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 9, MAP_BATTLE_DOJO
# 156 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 157 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 158 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 159 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_16
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_41:
# 190 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_20
# 191 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 192 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 193 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_21
# 194 "data/maps/BattleDojo/scripts.pory"
	showobjectat 8, MAP_BATTLE_DOJO
# 195 "data/maps/BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_OpponentWalksToSpot
# 196 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 197 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_22
# 199 "data/maps/BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_WalkLeft
# 200 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 201 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 202 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BELLA_1, Bella_Lost
# 203 "data/maps/BattleDojo/scripts.pory"
	showobjectat 8, MAP_BATTLE_DOJO
# 204 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 205 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 206 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 207 "data/maps/BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_WalkRightBackwards
# 208 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 209 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 210 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_23
# 213 "data/maps/BattleDojo/scripts.pory"
	applymovement 8, BattleDojo_Movement_OpponentLeave
# 214 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 215 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 8, MAP_BATTLE_DOJO
# 216 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 217 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 218 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 219 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_24
	goto BattleDojo_Event_Surge_1

BattleDojo_Event_Surge_44:
# 250 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_28
# 251 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceDown
# 252 "data/maps/BattleDojo/scripts.pory"
	call BattleDojo_PLayerMoveToBattleSpot
# 253 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_29
# 254 "data/maps/BattleDojo/scripts.pory"
	showobjectat 2, MAP_BATTLE_DOJO
# 255 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_OpponentWalksToSpot
# 256 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 257 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_30
# 261 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_31
# 264 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_32
# 265 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_WalkLeft
# 266 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkRight
# 267 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 268 "data/maps/BattleDojo/scripts.pory"
	trainerbattle_no_intro TRAINER_FIONA_1, Fiona_Lost
# 269 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_TOURNAMENT_LOST
# 270 "data/maps/BattleDojo/scripts.pory"
	setflag FLAG_BATTLE_WON
# 271 "data/maps/BattleDojo/scripts.pory"
	clearflag FLAG_REUSABLE_SKIP_FLAG
# 272 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_WalkRightBackwards
# 273 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_Movement_WalkLeftBackwards
# 274 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 275 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_33
# 281 "data/maps/BattleDojo/scripts.pory"
	applymovement 2, BattleDojo_Movement_OpponentLeave
# 282 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 283 "data/maps/BattleDojo/scripts.pory"
	hideobjectat 2, MAP_BATTLE_DOJO
# 284 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalkBackSurge
# 285 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
# 286 "data/maps/BattleDojo/scripts.pory"
	applymovement 1, BattleDojo_Movement_FaceLeft
# 287 "data/maps/BattleDojo/scripts.pory"
	msgbox BattleDojo_Event_Surge_Text_34
	goto BattleDojo_Event_Surge_1


BattleDojo_PLayerMoveToBattleSpot::
# 302 "data/maps/BattleDojo/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 303 "data/maps/BattleDojo/scripts.pory"
	switch VAR_RESULT
# 305 "data/maps/BattleDojo/scripts.pory"
	case 1, BattleDojo_PLayerMoveToBattleSpot_3
# 307 "data/maps/BattleDojo/scripts.pory"
	case 2, BattleDojo_PLayerMoveToBattleSpot_4
# 309 "data/maps/BattleDojo/scripts.pory"
	case 3, BattleDojo_PLayerMoveToBattleSpot_5
# 311 "data/maps/BattleDojo/scripts.pory"
	case 4, BattleDojo_PLayerMoveToBattleSpot_6
BattleDojo_PLayerMoveToBattleSpot_1:
# 314 "data/maps/BattleDojo/scripts.pory"
	waitmovement 0
	return

BattleDojo_PLayerMoveToBattleSpot_3:
# 306 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotDown
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_4:
# 308 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotUp
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_5:
# 310 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotRight
	goto BattleDojo_PLayerMoveToBattleSpot_1

BattleDojo_PLayerMoveToBattleSpot_6:
# 312 "data/maps/BattleDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleDojo_movement_PlayerWalksToSpotLeft
	goto BattleDojo_PLayerMoveToBattleSpot_1


# 318 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotUp:
# 319 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 319 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 319 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 320 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 321 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 324 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotLeft:
# 325 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 325 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 326 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 326 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 327 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 330 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotDown:
# 331 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 331 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 331 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 332 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 332 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 332 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 333 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 336 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalksToSpotRight:
# 337 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 338 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 338 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 338 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 338 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 339 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 340 "data/maps/BattleDojo/scripts.pory"
	face_right
	step_end

# 343 "data/maps/BattleDojo/scripts.pory"
BattleDojo_movement_PlayerWalkBackSurge:
# 344 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 344 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 345 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 345 "data/maps/BattleDojo/scripts.pory"
	walk_right
	step_end

# 348 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_OpponentWalksToSpot:
# 349 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 349 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 350 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 350 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 350 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 351 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 351 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 351 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 351 "data/maps/BattleDojo/scripts.pory"
	walk_up
# 352 "data/maps/BattleDojo/scripts.pory"
	face_left
	step_end

# 355 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_OpponentLeave:
# 356 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 356 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 356 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 356 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 357 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 357 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 357 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 358 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 358 "data/maps/BattleDojo/scripts.pory"
	walk_down
# 359 "data/maps/BattleDojo/scripts.pory"
	walk_in_place_down
	step_end

# 362 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_FaceDown:
# 363 "data/maps/BattleDojo/scripts.pory"
	face_down
	step_end

# 366 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_FaceLeft:
# 367 "data/maps/BattleDojo/scripts.pory"
	face_left
	step_end

# 370 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkLeft:
# 371 "data/maps/BattleDojo/scripts.pory"
	walk_left
	step_end

# 374 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkRight:
# 375 "data/maps/BattleDojo/scripts.pory"
	walk_right
	step_end

# 378 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkLeftBackwards:
# 379 "data/maps/BattleDojo/scripts.pory"
	lock_facing_direction
# 380 "data/maps/BattleDojo/scripts.pory"
	walk_left
# 381 "data/maps/BattleDojo/scripts.pory"
	unlock_facing_direction
	step_end

# 384 "data/maps/BattleDojo/scripts.pory"
BattleDojo_Movement_WalkRightBackwards:
# 385 "data/maps/BattleDojo/scripts.pory"
	lock_facing_direction
# 386 "data/maps/BattleDojo/scripts.pory"
	walk_right
# 387 "data/maps/BattleDojo/scripts.pory"
	unlock_facing_direction
	step_end

BattleDojo_Event_Surge_Text_0:
# 52 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: You have fought well today\n"
	.string "{PLAYER}, go rest now.\l"
	.string "Tomorrow your next battle will be ready!$"

BattleDojo_Event_Surge_Text_1:
# 58 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready to do you first\n"
	.string "ever pokemon battle?$"

BattleDojo_Event_Surge_Text_2:
# 62 "data/maps/BattleDojo/scripts.pory"
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
# 71 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Alright, you can stand ready and\n"
	.string "I'll call your first opponent than.$"

BattleDojo_Event_Surge_Text_4:
# 74 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}:FABIAN, YOU CAN ENTER!$"

BattleDojo_Event_Surge_Text_5:
# 78 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: This is our first ever battle,\n"
	.string "let's go easy on this one, OK?$"

BattleDojo_Event_Surge_Text_6:
# 90 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Fabian{COLOR DARK_GRAY}: Wow, that totally did not go as\n"
	.string "I expected.\p"
	.string "But fair is fair, you were clearly the\n"
	.string "stronger trainer.\p"
	.string "Good luck in the rest of the\n"
	.string "tournament! I'll go think what I can do\l"
	.string "to become a better trainer!$"

BattleDojo_Event_Surge_Text_7:
# 99 "data/maps/BattleDojo/scripts.pory"
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
# 108 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: that's fine, come talk to me when\n"
	.string "you're ready$"

BattleDojo_Event_Surge_Text_9:
# 113 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: You already managed to make it\n"
	.string "to the semi finals!!\l"
	.string "now go rest and be preparred for yet\l"
	.string "another battle tomorrow!$"

BattleDojo_Event_Surge_Text_10:
# 120 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready for your next\n"
	.string "battle?$"

BattleDojo_Event_Surge_Text_11:
# 124 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: One battle down, three to go.\p"
	.string "Every Initiative has a different\n"
	.string "pokemon so it's impossible for anyone\l"
	.string "to know how these battles will go. Still,\l"
	.string "are you ready for your next battle?$"

BattleDojo_Event_Surge_Text_12:
# 130 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Fantastic! go stand where you\n"
	.string "stood yesterday and I'll call your next\l"
	.string "opponent forward$"

BattleDojo_Event_Surge_Text_13:
# 133 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: HERALD, YOU MAY ENTER!$"

BattleDojo_Event_Surge_Text_14:
# 137 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Don't think I'm gonna take it\n"
	.string "easy on you because we're colleague's.\p"
	.string "I'm here to win!$"

BattleDojo_Event_Surge_Text_15:
# 150 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Guess my ego got a bit too my\n"
	.string "head after my first win.\p"
	.string "Thank you for keeping me humble\n"
	.string "{PLAYER}.\l"
	.string "Good luck in the rest of the\l"
	.string "tournament, I'll be rooting for you!$"

BattleDojo_Event_Surge_Text_16:
# 159 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: And that makes two: you have\n"
	.string "already made it to the semi-finals.\l"
	.string "Congrats {PLAYER}!\p"
	.string "That does not mean the battles will\n"
	.string "become easier from here, tomorrow is\l"
	.string "another opponent and another battle.\p"
	.string "Go rest so you're ready for the battle\n"
	.string "that comes next!$"

BattleDojo_Event_Surge_Text_17:
# 167 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: No shame in being overprepared.\n"
	.string "come talk to me when you're ready$"

BattleDojo_Event_Surge_Text_18:
# 173 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Good job on making it to the\n"
	.string "finals {PLAYER}!\l"
	.string "now go rest and be preparred for the\l"
	.string "thoughest battle tomorrow!$"

BattleDojo_Event_Surge_Text_19:
# 184 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Now, You're halfway, keep it up!\p"
	.string "Do expect these battle to become\n"
	.string "harder through the tournament though.\l"
	.string "I would hate to see you lose because\l"
	.string "you were holding back!\p"
	.string "Are you ready for your next battle?$"

BattleDojo_Event_Surge_Text_20:
# 190 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Understood! You know what to do.$"

BattleDojo_Event_Surge_Text_21:
# 193 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: BELLA, ITS YOUR TIME TO SHINE!$"

BattleDojo_Event_Surge_Text_22:
# 197 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}BELLA{COLOR DARK_GRAY}: Thanks for playing dear, but\n"
	.string "this will be the end of the road for you.\l"
	.string "It's time for the REAL pokemon trainers\l"
	.string "to come out and play!$"

BattleDojo_Event_Surge_Text_23:
# 210 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR BLUE}BELLA{COLOR DARK_GRAY}: hmp.\p"
	.string "Don't think you're better than me just\n"
	.string "because you won!\p"
	.string "I just went easy on you, next time you\n"
	.string "won't be so lucky, mark my words!$"

BattleDojo_Event_Surge_Text_24:
# 219 "data/maps/BattleDojo/scripts.pory"
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
# 232 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Good job Champion!\n"
	.string "Go rest for now, I'll talk with {COLOR LIGHT_GRAY}The\l"
	.string "Leader{COLOR DARK_GRAY} tomorrow about your reward!$"

BattleDojo_Event_Surge_Text_26:
# 239 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Are you ready for the Finals?$"

BattleDojo_Event_Surge_Text_27:
# 243 "data/maps/BattleDojo/scripts.pory"
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
# 250 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Excellent!\n"
	.string "So please {PLAYER}, for the last time\l"
	.string "this tournament...$"

BattleDojo_Event_Surge_Text_29:
# 253 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: FIONA, IT IS TIME!$"

BattleDojo_Event_Surge_Text_30:
# 257 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: So, you have kept your promise\n"
	.string "and also made it to the finals?\p"
	.string "Good!\p"
	.string "Let's show everyone here, what a real\n"
	.string "pokemon battle means!\l"
	.string "I'm not gonna hold back and I hope\l"
	.string "you'll do the same to me!$"

BattleDojo_Event_Surge_Text_31:
# 261 "data/maps/BattleDojo/scripts.pory"
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
# 264 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Let's do this {PLAYER}!$"

BattleDojo_Event_Surge_Text_33:
# 275 "data/maps/BattleDojo/scripts.pory"
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
# 287 "data/maps/BattleDojo/scripts.pory"
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
# 295 "data/maps/BattleDojo/scripts.pory"
	.string "{COLOR GREEN}Surge{COLOR DARK_GRAY}: Don't keep everyone waiting for\n"
	.string "too long, we all want to see how this\l"
	.string "next battle is gonna go!$"

Fabian_Lost::
# 390 "data/maps/BattleDojo/scripts.pory"
	.string "Hé, I thought we would take it easy!$"

Bella_Lost::
# 394 "data/maps/BattleDojo/scripts.pory"
	.string "Wait... that doesn't count!$"

Herald_Lost::
# 398 "data/maps/BattleDojo/scripts.pory"
	.string "What... just happened?$"

Fiona_Lost::
# 402 "data/maps/BattleDojo/scripts.pory"
	.string "Is this... is this how I lose it all?$"
