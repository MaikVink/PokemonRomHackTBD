MODHeadquarters_EvoMasters_MapScripts::
# 5 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvoMasters_OnTransition
# 6 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_EvoMasters_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_EvoMasters_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	map_script_2 VAR_SIMULATION_STATUS, 1, EvoMasters_ExitSimulation
	.2byte 0


EvoMasters_OnTransition::
# 12 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1011
	goto_if_eq EvoMasters_OnTransition_2
# 13 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1010
	goto_if_eq EvoMasters_OnTransition_2
# 13 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1001
	goto_if_eq EvoMasters_OnTransition_2
# 13 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 11
	goto_if_eq EvoMasters_OnTransition_2
# 14 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1000
	goto_if_eq EvoMasters_OnTransition_2
# 14 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 10
	goto_if_eq EvoMasters_OnTransition_2
# 14 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1
	goto_if_eq EvoMasters_OnTransition_2
# 14 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq EvoMasters_OnTransition_2
EvoMasters_OnTransition_1:
# 18 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq EvoMasters_OnTransition_18
	return

EvoMasters_OnTransition_2:
# 16 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 100
	goto EvoMasters_OnTransition_1

EvoMasters_OnTransition_18:
# 20 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return


EvoMasters_ExitSimulation::
# 25 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 26 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvoMasters_MoveDown
# 27 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 28 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement 5, EvoMasters_MoveBackToSpot
# 29 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 30 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ExitSimulation_Text_0
# 31 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_HIDE_REPLICA_SIMULATION_SISTER
# 32 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	clearflag FLAG_SIMULATION_ENTERED
# 33 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setvar VAR_SIMULATION_STATUS, 0
# 34 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return


EvoMAsters_ObjectScript_Masseuse::
# 38 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 39 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 40 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMAsters_ObjectScript_Masseuse_2
EvoMAsters_ObjectScript_Masseuse_1:
# 44 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMAsters_ObjectScript_Masseuse_6
EvoMAsters_ObjectScript_Masseuse_4:
# 50 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	showmoneybox 0, 0
# 51 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_2, MSGBOX_YESNO
# 52 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMAsters_ObjectScript_Masseuse_10
# 68 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_4
# 69 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
EvoMAsters_ObjectScript_Masseuse_9:
# 71 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMAsters_ObjectScript_Masseuse_2:
# 42 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_0
	goto EvoMAsters_ObjectScript_Masseuse_1

EvoMAsters_ObjectScript_Masseuse_5:
# 46 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_FREE_MASSAGE
# 47 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_1
# 48 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckFreeMassageEevee
	goto EvoMAsters_ObjectScript_Masseuse_4

EvoMAsters_ObjectScript_Masseuse_6:
# 44 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_FREE_MASSAGE, EvoMAsters_ObjectScript_Masseuse_5
	goto EvoMAsters_ObjectScript_Masseuse_4

EvoMAsters_ObjectScript_Masseuse_10:
# 54 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 1000
# 55 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMAsters_ObjectScript_Masseuse_13
# 62 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_3
# 63 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	goto EvoMAsters_ObjectScript_Masseuse_9

EvoMAsters_ObjectScript_Masseuse_13:
# 57 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_GiveMassage
# 58 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	goto EvoMAsters_ObjectScript_Masseuse_9


EvoMasters_CheckFreeMassageEevee::
# 75 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckFreeMassageEevee_Text_0, MSGBOX_YESNO
# 76 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvoMasters_CheckFreeMassageEevee_1
# 82 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_GiveMassageEevee
# 83 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	end

EvoMasters_CheckFreeMassageEevee_1:
# 78 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckDeclineMassage
	return


EvoMasters_CheckDeclineMassage::
# 89 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_0, MSGBOX_YESNO
# 90 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_CheckDeclineMassage_1
# 96 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_2
# 97 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_GiveMassageEevee
	return

EvoMasters_CheckDeclineMassage_1:
# 92 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_1
	return


EvoMasters_GiveMassage::
# 103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_0
# 104 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setfieldeffectargument 1, 0
# 105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special ChooseMonForFriendShip
# 106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitstate
# 107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	showmoneybox 0, 0
# 108 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_0x8004, 0xFF
	goto_if_eq EvoMasters_GiveMassage_2
# 114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_2
# 115 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	playse SE_SHOP
# 116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	removemoney 1000
# 117 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	updatemoneybox
# 118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_3
EvoMasters_GiveMassage_1:
# 120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	hidemoneybox
	return

EvoMasters_GiveMassage_2:
# 110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_1
	goto EvoMasters_GiveMassage_1


EvoMasters_GiveMassageEevee::
# 126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassageEevee_Text_0
# 127 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setfieldeffectargument 1, 523
# 128 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special ChooseMonForFriendShip
# 129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitstate
# 130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_0x8004, 0xFF
	goto_if_eq EvoMasters_GiveMassageEevee_1
# 136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassageEevee_Text_1
	return

EvoMasters_GiveMassageEevee_1:
# 132 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckDeclineMassage
	return


EvoMasters_ObjectScript_Simulator::
# 144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_Simulator_2
EvoMasters_ObjectScript_Simulator_1:
# 164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	showmoneybox 0, 0
# 165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_3, MSGBOX_YESNO
# 166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_5
# 180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_5
EvoMasters_ObjectScript_Simulator_4:
# 182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	hidemoneybox
# 183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_Simulator_2:
# 148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_0
# 149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_Simulator_9
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_5:
# 168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 2500
# 169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_12
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_4
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_8:
# 151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_1, MSGBOX_YESNO
# 152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_16
# 158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
EvoMasters_ObjectScript_Simulator_15:
# 160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	end

EvoMasters_ObjectScript_Simulator_9:
# 149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_FREE_SIMULATION, EvoMasters_ObjectScript_Simulator_8
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_12:
# 171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_StartSimulation
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_16:
# 154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_StartSimulationEevee
	goto EvoMasters_ObjectScript_Simulator_15


EvoMasters_StartSimulation::
# 187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_0
# 188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	message EvoMasters_StartSimulation_Text_1
# 189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmessage
# 190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	multichoice 25, 6, MULTI_TIME_SIMULATION, 0
# 191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	closemessage
# 192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvoMasters_StartSimulation_2
# 196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EvoMasters_StartSimulation_3
# 200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EvoMasters_StartSimulation_4
# 206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_2
	return

EvoMasters_StartSimulation_1:
# 209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_3
# 210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	message EvoMasters_StartSimulation_Text_4
# 211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmessage
# 212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	multichoice 25, 6, MULTI_WEATHER_SIMULATION, 0
# 213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_StartSimulation_12
EvoMasters_StartSimulation_9:
# 218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_5
# 220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	playse SE_SHOP
# 221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	removemoney 2500
# 222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	updatemoneybox
# 223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitse
# 224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	hidemoneybox
# 225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_6
# 226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_7
# 228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement 2, EvoMasters_MoveOutOfTheWay
# 229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement 5, EvoMasters_MoveOutOfTheWay
# 230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvoMasters_MoveUp
# 232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	opendoor 9, 1
# 234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitdooranim
# 235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvoMasters_MoveUp
# 236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq EvoMasters_StartSimulation_17
# 241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EvoMasters_StartSimulation_18
# 245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq EvoMasters_StartSimulation_19
EvoMasters_StartSimulation_16:
# 249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	end

EvoMasters_StartSimulation_2:
# 194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special RtcSetTimeToDay
	goto EvoMasters_StartSimulation_1

EvoMasters_StartSimulation_3:
# 198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special RtcSetTimeToDusk
	goto EvoMasters_StartSimulation_1

EvoMasters_StartSimulation_4:
# 202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special RtcSetTimeToNight
	goto EvoMasters_StartSimulation_1

EvoMasters_StartSimulation_10:
# 215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_2
	return

EvoMasters_StartSimulation_11:
# 213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne EvoMasters_StartSimulation_10
	goto EvoMasters_StartSimulation_9

EvoMasters_StartSimulation_12:
# 213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne EvoMasters_StartSimulation_11
	goto EvoMasters_StartSimulation_9

EvoMasters_StartSimulation_17:
# 239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	warp MAP_MODHEADQUARTERS_EVO_MASTERS_SUNNY, 11, 5
	goto EvoMasters_StartSimulation_16

EvoMasters_StartSimulation_18:
# 243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	warp MAP_MODHEADQUARTERS_EVO_MASTERS_RAINY, 11, 5
	goto EvoMasters_StartSimulation_16

EvoMasters_StartSimulation_19:
# 247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	warp MAP_MODHEADQUARTERS_EVO_MASTERS_FOG, 11, 5
	goto EvoMasters_StartSimulation_16


EvoMasters_StartSimulationEevee::
# 254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_0
# 255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	message EvoMasters_StartSimulation_Text_1
# 256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmessage
# 257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	multichoice 25, 6, MULTI_TIME_SIMULATION, 0
# 258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	closemessage
# 259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvoMasters_StartSimulationEevee_2
# 263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EvoMasters_StartSimulationEevee_3
# 267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EvoMasters_StartSimulationEevee_4
# 273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_2
	return

EvoMasters_StartSimulationEevee_1:
# 276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_3
# 277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	message EvoMasters_StartSimulation_Text_4
# 278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmessage
# 279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	multichoice 25, 6, MULTI_WEATHER_SIMULATION, 0
# 280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_StartSimulationEevee_12
EvoMasters_StartSimulationEevee_9:
# 285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_FREE_SIMULATION
# 287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_6
# 288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_7
# 290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement 2, EvoMasters_MoveOutOfTheWay
# 291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement 5, EvoMasters_MoveOutOfTheWay
# 292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvoMasters_MoveUp
# 294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	opendoor 9, 1
# 296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitdooranim
# 297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EvoMasters_MoveUp
# 298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitmovement 0
# 299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq EvoMasters_StartSimulationEevee_17
# 303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq EvoMasters_StartSimulationEevee_18
# 307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq EvoMasters_StartSimulationEevee_19
EvoMasters_StartSimulationEevee_16:
# 311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	end

EvoMasters_StartSimulationEevee_2:
# 261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special RtcSetTimeToDay
	goto EvoMasters_StartSimulationEevee_1

EvoMasters_StartSimulationEevee_3:
# 265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special RtcSetTimeToDusk
	goto EvoMasters_StartSimulationEevee_1

EvoMasters_StartSimulationEevee_4:
# 269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special RtcSetTimeToNight
	goto EvoMasters_StartSimulationEevee_1

EvoMasters_StartSimulationEevee_10:
# 282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_StartSimulation_Text_2
	return

EvoMasters_StartSimulationEevee_11:
# 280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne EvoMasters_StartSimulationEevee_10
	goto EvoMasters_StartSimulationEevee_9

EvoMasters_StartSimulationEevee_12:
# 280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne EvoMasters_StartSimulationEevee_11
	goto EvoMasters_StartSimulationEevee_9

EvoMasters_StartSimulationEevee_17:
# 301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	warp MAP_MODHEADQUARTERS_EVO_MASTERS_SUNNY, 11, 5
	goto EvoMasters_StartSimulationEevee_16

EvoMasters_StartSimulationEevee_18:
# 305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	warp MAP_MODHEADQUARTERS_EVO_MASTERS_RAINY, 11, 5
	goto EvoMasters_StartSimulationEevee_16

EvoMasters_StartSimulationEevee_19:
# 309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	warp MAP_MODHEADQUARTERS_EVO_MASTERS_FOG, 11, 5
	goto EvoMasters_StartSimulationEevee_16


EvoMasters_ObjectScript_EvoChecker::
# 316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_EvoChecker_2
EvoMasters_ObjectScript_EvoChecker_1:
# 322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_1, MSGBOX_YESNO
# 323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_EvoChecker_5
# 338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_3
EvoMasters_ObjectScript_EvoChecker_4:
# 340 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_EvoChecker_2:
# 320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_0
	goto EvoMasters_ObjectScript_EvoChecker_1

EvoMasters_ObjectScript_EvoChecker_5:
# 325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special ChooseMonForEvoCheck
# 326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitstate
# 327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_0x8004, 0xFF
	goto_if_eq EvoMasters_ObjectScript_EvoChecker_8
# 333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_EvoCheckForMon
	goto EvoMasters_ObjectScript_EvoChecker_4

EvoMasters_ObjectScript_EvoChecker_8:
# 329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_2
	goto EvoMasters_ObjectScript_EvoChecker_4


EvoMasters_ObjectScript_MartEmployer::
# 344 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 345 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 346 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_MartEmployer_2
EvoMasters_ObjectScript_MartEmployer_1:
# 350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_MartEmployer_6
EvoMasters_ObjectScript_MartEmployer_4:
# 360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_3
# 361 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	pokemart MODHeadquarters_EvoShop
# 362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_4
# 363 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_MartEmployer_2:
# 348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_0
	goto EvoMasters_ObjectScript_MartEmployer_1

EvoMasters_ObjectScript_MartEmployer_5:
# 352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_1
# 353 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_WATER_STONE
# 354 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 355 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 356 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_TM51
# 357 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_GIFT_EVOMASTERS
# 358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_2
	goto EvoMasters_ObjectScript_MartEmployer_4

EvoMasters_ObjectScript_MartEmployer_6:
# 350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_MartEmployer_5
	goto EvoMasters_ObjectScript_MartEmployer_4


EvoMasters_EvoCheckForMon::
# 368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_0
# 369 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	switch VAR_0x8005
# 371 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 0, EvoMasters_EvoCheckForMon_2
# 373 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 3, EvoMasters_EvoCheckForMon_3
# 374 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 6, EvoMasters_EvoCheckForMon_3
# 375 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 9, EvoMasters_EvoCheckForMon_3
# 376 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 12, EvoMasters_EvoCheckForMon_3
# 377 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 15, EvoMasters_EvoCheckForMon_3
# 378 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 18, EvoMasters_EvoCheckForMon_3
# 379 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 20, EvoMasters_EvoCheckForMon_3
# 380 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 22, EvoMasters_EvoCheckForMon_3
# 381 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 24, EvoMasters_EvoCheckForMon_3
# 382 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 26, EvoMasters_EvoCheckForMon_3
# 383 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 28, EvoMasters_EvoCheckForMon_3
# 384 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 31, EvoMasters_EvoCheckForMon_3
# 385 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 34, EvoMasters_EvoCheckForMon_3
# 386 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 36, EvoMasters_EvoCheckForMon_3
# 387 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 38, EvoMasters_EvoCheckForMon_3
# 388 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 40, EvoMasters_EvoCheckForMon_3
# 389 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 45, EvoMasters_EvoCheckForMon_3
# 390 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 47, EvoMasters_EvoCheckForMon_3
# 391 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 49, EvoMasters_EvoCheckForMon_3
# 392 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 51, EvoMasters_EvoCheckForMon_3
# 393 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 53, EvoMasters_EvoCheckForMon_3
# 394 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 55, EvoMasters_EvoCheckForMon_3
# 395 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 59, EvoMasters_EvoCheckForMon_3
# 396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 62, EvoMasters_EvoCheckForMon_3
# 397 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 65, EvoMasters_EvoCheckForMon_3
# 398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 68, EvoMasters_EvoCheckForMon_3
# 399 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 71, EvoMasters_EvoCheckForMon_3
# 400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 73, EvoMasters_EvoCheckForMon_3
# 401 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 76, EvoMasters_EvoCheckForMon_3
# 402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 78, EvoMasters_EvoCheckForMon_3
# 403 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 80, EvoMasters_EvoCheckForMon_3
# 404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 85, EvoMasters_EvoCheckForMon_3
# 405 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 87, EvoMasters_EvoCheckForMon_3
# 406 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 89, EvoMasters_EvoCheckForMon_3
# 407 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 91, EvoMasters_EvoCheckForMon_3
# 408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 94, EvoMasters_EvoCheckForMon_3
# 409 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 97, EvoMasters_EvoCheckForMon_3
# 410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 99, EvoMasters_EvoCheckForMon_3
# 411 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 101, EvoMasters_EvoCheckForMon_3
# 412 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 103, EvoMasters_EvoCheckForMon_3
# 413 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 105, EvoMasters_EvoCheckForMon_3
# 414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 106, EvoMasters_EvoCheckForMon_3
# 415 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 107, EvoMasters_EvoCheckForMon_3
# 416 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 110, EvoMasters_EvoCheckForMon_3
# 417 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 119, EvoMasters_EvoCheckForMon_3
# 418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 121, EvoMasters_EvoCheckForMon_3
# 419 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 122, EvoMasters_EvoCheckForMon_3
# 420 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 124, EvoMasters_EvoCheckForMon_3
# 421 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 130, EvoMasters_EvoCheckForMon_3
# 422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 134, EvoMasters_EvoCheckForMon_3
# 423 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 135, EvoMasters_EvoCheckForMon_3
# 424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 136, EvoMasters_EvoCheckForMon_3
# 425 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 139, EvoMasters_EvoCheckForMon_3
# 426 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 141, EvoMasters_EvoCheckForMon_3
# 427 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 143, EvoMasters_EvoCheckForMon_3
# 428 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 149, EvoMasters_EvoCheckForMon_3
# 429 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 154, EvoMasters_EvoCheckForMon_3
# 430 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 157, EvoMasters_EvoCheckForMon_3
# 431 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 160, EvoMasters_EvoCheckForMon_3
# 432 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 162, EvoMasters_EvoCheckForMon_3
# 433 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 164, EvoMasters_EvoCheckForMon_3
# 434 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 166, EvoMasters_EvoCheckForMon_3
# 435 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 168, EvoMasters_EvoCheckForMon_3
# 436 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 169, EvoMasters_EvoCheckForMon_3
# 437 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 171, EvoMasters_EvoCheckForMon_3
# 438 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 178, EvoMasters_EvoCheckForMon_3
# 439 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 181, EvoMasters_EvoCheckForMon_3
# 440 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 182, EvoMasters_EvoCheckForMon_3
# 441 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 184, EvoMasters_EvoCheckForMon_3
# 442 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 185, EvoMasters_EvoCheckForMon_3
# 443 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 186, EvoMasters_EvoCheckForMon_3
# 444 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 189, EvoMasters_EvoCheckForMon_3
# 445 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 192, EvoMasters_EvoCheckForMon_3
# 446 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 195, EvoMasters_EvoCheckForMon_3
# 447 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 196, EvoMasters_EvoCheckForMon_3
# 448 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 197, EvoMasters_EvoCheckForMon_3
# 449 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 199, EvoMasters_EvoCheckForMon_3
# 450 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 202, EvoMasters_EvoCheckForMon_3
# 451 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 205, EvoMasters_EvoCheckForMon_3
# 452 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 208, EvoMasters_EvoCheckForMon_3
# 453 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 210, EvoMasters_EvoCheckForMon_3
# 454 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 212, EvoMasters_EvoCheckForMon_3
# 455 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 219, EvoMasters_EvoCheckForMon_3
# 456 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 224, EvoMasters_EvoCheckForMon_3
# 457 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 226, EvoMasters_EvoCheckForMon_3
# 458 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 229, EvoMasters_EvoCheckForMon_3
# 459 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 230, EvoMasters_EvoCheckForMon_3
# 460 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 232, EvoMasters_EvoCheckForMon_3
# 461 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 237, EvoMasters_EvoCheckForMon_3
# 462 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 242, EvoMasters_EvoCheckForMon_3
# 463 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 248, EvoMasters_EvoCheckForMon_3
# 464 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 254, EvoMasters_EvoCheckForMon_3
# 465 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 257, EvoMasters_EvoCheckForMon_3
# 466 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 260, EvoMasters_EvoCheckForMon_3
# 467 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 262, EvoMasters_EvoCheckForMon_3
# 468 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 264, EvoMasters_EvoCheckForMon_3
# 469 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 267, EvoMasters_EvoCheckForMon_3
# 470 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 269, EvoMasters_EvoCheckForMon_3
# 471 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 272, EvoMasters_EvoCheckForMon_3
# 472 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 275, EvoMasters_EvoCheckForMon_3
# 473 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 277, EvoMasters_EvoCheckForMon_3
# 474 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 279, EvoMasters_EvoCheckForMon_3
# 475 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 282, EvoMasters_EvoCheckForMon_3
# 476 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 284, EvoMasters_EvoCheckForMon_3
# 477 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 286, EvoMasters_EvoCheckForMon_3
# 478 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 289, EvoMasters_EvoCheckForMon_3
# 479 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 291, EvoMasters_EvoCheckForMon_3
# 480 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 292, EvoMasters_EvoCheckForMon_3
# 481 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 295, EvoMasters_EvoCheckForMon_3
# 482 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 297, EvoMasters_EvoCheckForMon_3
# 483 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 301, EvoMasters_EvoCheckForMon_3
# 484 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 306, EvoMasters_EvoCheckForMon_3
# 485 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 308, EvoMasters_EvoCheckForMon_3
# 486 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 310, EvoMasters_EvoCheckForMon_3
# 487 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 317, EvoMasters_EvoCheckForMon_3
# 488 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 319, EvoMasters_EvoCheckForMon_3
# 489 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 321, EvoMasters_EvoCheckForMon_3
# 490 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 323, EvoMasters_EvoCheckForMon_3
# 491 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 326, EvoMasters_EvoCheckForMon_3
# 492 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 330, EvoMasters_EvoCheckForMon_3
# 493 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 332, EvoMasters_EvoCheckForMon_3
# 494 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 334, EvoMasters_EvoCheckForMon_3
# 495 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 340, EvoMasters_EvoCheckForMon_3
# 496 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 342, EvoMasters_EvoCheckForMon_3
# 497 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 344, EvoMasters_EvoCheckForMon_3
# 498 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 346, EvoMasters_EvoCheckForMon_3
# 499 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 348, EvoMasters_EvoCheckForMon_3
# 500 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 350, EvoMasters_EvoCheckForMon_3
# 501 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 354, EvoMasters_EvoCheckForMon_3
# 502 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 358, EvoMasters_EvoCheckForMon_3
# 503 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 362, EvoMasters_EvoCheckForMon_3
# 504 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 365, EvoMasters_EvoCheckForMon_3
# 505 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 367, EvoMasters_EvoCheckForMon_3
# 506 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 368, EvoMasters_EvoCheckForMon_3
# 507 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 373, EvoMasters_EvoCheckForMon_3
# 508 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 376, EvoMasters_EvoCheckForMon_3
# 509 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 389, EvoMasters_EvoCheckForMon_3
# 510 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 392, EvoMasters_EvoCheckForMon_3
# 511 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 395, EvoMasters_EvoCheckForMon_3
# 512 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 398, EvoMasters_EvoCheckForMon_3
# 513 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 400, EvoMasters_EvoCheckForMon_3
# 514 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 402, EvoMasters_EvoCheckForMon_3
# 515 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 405, EvoMasters_EvoCheckForMon_3
# 516 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 407, EvoMasters_EvoCheckForMon_3
# 517 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 409, EvoMasters_EvoCheckForMon_3
# 518 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 411, EvoMasters_EvoCheckForMon_3
# 519 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 413, EvoMasters_EvoCheckForMon_3
# 520 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 414, EvoMasters_EvoCheckForMon_3
# 521 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 416, EvoMasters_EvoCheckForMon_3
# 522 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 419, EvoMasters_EvoCheckForMon_3
# 523 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 421, EvoMasters_EvoCheckForMon_3
# 524 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 423, EvoMasters_EvoCheckForMon_3
# 525 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 424, EvoMasters_EvoCheckForMon_3
# 526 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 426, EvoMasters_EvoCheckForMon_3
# 527 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 428, EvoMasters_EvoCheckForMon_3
# 528 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 429, EvoMasters_EvoCheckForMon_3
# 529 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 430, EvoMasters_EvoCheckForMon_3
# 530 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 432, EvoMasters_EvoCheckForMon_3
# 531 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 435, EvoMasters_EvoCheckForMon_3
# 532 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 437, EvoMasters_EvoCheckForMon_3
# 533 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 445, EvoMasters_EvoCheckForMon_3
# 534 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 448, EvoMasters_EvoCheckForMon_3
# 535 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 450, EvoMasters_EvoCheckForMon_3
# 536 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 452, EvoMasters_EvoCheckForMon_3
# 537 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 454, EvoMasters_EvoCheckForMon_3
# 538 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 457, EvoMasters_EvoCheckForMon_3
# 539 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 460, EvoMasters_EvoCheckForMon_3
# 540 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 461, EvoMasters_EvoCheckForMon_3
# 541 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 462, EvoMasters_EvoCheckForMon_3
# 542 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 463, EvoMasters_EvoCheckForMon_3
# 543 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 464, EvoMasters_EvoCheckForMon_3
# 544 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 465, EvoMasters_EvoCheckForMon_3
# 545 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 466, EvoMasters_EvoCheckForMon_3
# 546 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 467, EvoMasters_EvoCheckForMon_3
# 547 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 468, EvoMasters_EvoCheckForMon_3
# 548 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 469, EvoMasters_EvoCheckForMon_3
# 549 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 470, EvoMasters_EvoCheckForMon_3
# 550 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 471, EvoMasters_EvoCheckForMon_3
# 551 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 472, EvoMasters_EvoCheckForMon_3
# 552 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 473, EvoMasters_EvoCheckForMon_3
# 553 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 474, EvoMasters_EvoCheckForMon_3
# 554 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 475, EvoMasters_EvoCheckForMon_3
# 555 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 476, EvoMasters_EvoCheckForMon_3
# 556 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 477, EvoMasters_EvoCheckForMon_3
# 557 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 478, EvoMasters_EvoCheckForMon_3
# 558 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 497, EvoMasters_EvoCheckForMon_3
# 559 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 500, EvoMasters_EvoCheckForMon_3
# 560 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 503, EvoMasters_EvoCheckForMon_3
# 561 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 505, EvoMasters_EvoCheckForMon_3
# 562 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 508, EvoMasters_EvoCheckForMon_3
# 563 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 510, EvoMasters_EvoCheckForMon_3
# 564 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 512, EvoMasters_EvoCheckForMon_3
# 565 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 514, EvoMasters_EvoCheckForMon_3
# 566 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 516, EvoMasters_EvoCheckForMon_3
# 567 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 518, EvoMasters_EvoCheckForMon_3
# 568 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 521, EvoMasters_EvoCheckForMon_3
# 569 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 523, EvoMasters_EvoCheckForMon_3
# 570 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 526, EvoMasters_EvoCheckForMon_3
# 571 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 528, EvoMasters_EvoCheckForMon_3
# 572 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 530, EvoMasters_EvoCheckForMon_3
# 573 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 534, EvoMasters_EvoCheckForMon_3
# 574 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 537, EvoMasters_EvoCheckForMon_3
# 575 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 542, EvoMasters_EvoCheckForMon_3
# 576 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 545, EvoMasters_EvoCheckForMon_3
# 577 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 547, EvoMasters_EvoCheckForMon_3
# 578 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 549, EvoMasters_EvoCheckForMon_3
# 579 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 553, EvoMasters_EvoCheckForMon_3
# 580 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 555, EvoMasters_EvoCheckForMon_3
# 581 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 558, EvoMasters_EvoCheckForMon_3
# 582 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 560, EvoMasters_EvoCheckForMon_3
# 583 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 563, EvoMasters_EvoCheckForMon_3
# 584 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 565, EvoMasters_EvoCheckForMon_3
# 585 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 567, EvoMasters_EvoCheckForMon_3
# 586 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 569, EvoMasters_EvoCheckForMon_3
# 587 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 571, EvoMasters_EvoCheckForMon_3
# 588 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 573, EvoMasters_EvoCheckForMon_3
# 589 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 576, EvoMasters_EvoCheckForMon_3
# 590 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 579, EvoMasters_EvoCheckForMon_3
# 591 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 581, EvoMasters_EvoCheckForMon_3
# 592 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 584, EvoMasters_EvoCheckForMon_3
# 593 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 586, EvoMasters_EvoCheckForMon_3
# 594 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 589, EvoMasters_EvoCheckForMon_3
# 595 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 591, EvoMasters_EvoCheckForMon_3
# 596 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 593, EvoMasters_EvoCheckForMon_3
# 597 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 596, EvoMasters_EvoCheckForMon_3
# 598 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 598, EvoMasters_EvoCheckForMon_3
# 599 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 601, EvoMasters_EvoCheckForMon_3
# 600 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 604, EvoMasters_EvoCheckForMon_3
# 601 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 606, EvoMasters_EvoCheckForMon_3
# 602 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 609, EvoMasters_EvoCheckForMon_3
# 603 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 612, EvoMasters_EvoCheckForMon_3
# 604 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 614, EvoMasters_EvoCheckForMon_3
# 605 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 617, EvoMasters_EvoCheckForMon_3
# 606 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 620, EvoMasters_EvoCheckForMon_3
# 607 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 623, EvoMasters_EvoCheckForMon_3
# 608 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 628, EvoMasters_EvoCheckForMon_3
# 609 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 630, EvoMasters_EvoCheckForMon_3
# 610 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 635, EvoMasters_EvoCheckForMon_3
# 611 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 637, EvoMasters_EvoCheckForMon_3
# 612 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 652, EvoMasters_EvoCheckForMon_3
# 613 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 655, EvoMasters_EvoCheckForMon_3
# 614 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 658, EvoMasters_EvoCheckForMon_3
# 615 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 660, EvoMasters_EvoCheckForMon_3
# 616 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 663, EvoMasters_EvoCheckForMon_3
# 617 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 666, EvoMasters_EvoCheckForMon_3
# 618 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 668, EvoMasters_EvoCheckForMon_3
# 619 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 671, EvoMasters_EvoCheckForMon_3
# 620 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 673, EvoMasters_EvoCheckForMon_3
# 621 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 675, EvoMasters_EvoCheckForMon_3
# 622 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 678, EvoMasters_EvoCheckForMon_3
# 623 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 681, EvoMasters_EvoCheckForMon_3
# 624 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 683, EvoMasters_EvoCheckForMon_3
# 625 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 685, EvoMasters_EvoCheckForMon_3
# 626 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 687, EvoMasters_EvoCheckForMon_3
# 627 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 689, EvoMasters_EvoCheckForMon_3
# 628 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 691, EvoMasters_EvoCheckForMon_3
# 629 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 693, EvoMasters_EvoCheckForMon_3
# 630 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 695, EvoMasters_EvoCheckForMon_3
# 631 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 697, EvoMasters_EvoCheckForMon_3
# 632 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 699, EvoMasters_EvoCheckForMon_3
# 633 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 700, EvoMasters_EvoCheckForMon_3
# 634 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 706, EvoMasters_EvoCheckForMon_3
# 635 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 709, EvoMasters_EvoCheckForMon_3
# 636 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 711, EvoMasters_EvoCheckForMon_3
# 637 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 713, EvoMasters_EvoCheckForMon_3
# 638 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 715, EvoMasters_EvoCheckForMon_3
# 639 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 724, EvoMasters_EvoCheckForMon_3
# 640 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 727, EvoMasters_EvoCheckForMon_3
# 641 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 730, EvoMasters_EvoCheckForMon_3
# 642 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 733, EvoMasters_EvoCheckForMon_3
# 643 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 735, EvoMasters_EvoCheckForMon_3
# 644 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 738, EvoMasters_EvoCheckForMon_3
# 645 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 740, EvoMasters_EvoCheckForMon_3
# 646 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 743, EvoMasters_EvoCheckForMon_3
# 647 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 745, EvoMasters_EvoCheckForMon_3
# 648 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 748, EvoMasters_EvoCheckForMon_3
# 649 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 750, EvoMasters_EvoCheckForMon_3
# 650 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 752, EvoMasters_EvoCheckForMon_3
# 651 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 754, EvoMasters_EvoCheckForMon_3
# 652 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 756, EvoMasters_EvoCheckForMon_3
# 653 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 758, EvoMasters_EvoCheckForMon_3
# 654 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 760, EvoMasters_EvoCheckForMon_3
# 655 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 763, EvoMasters_EvoCheckForMon_3
# 656 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 768, EvoMasters_EvoCheckForMon_3
# 657 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 770, EvoMasters_EvoCheckForMon_3
# 658 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 773, EvoMasters_EvoCheckForMon_3
# 659 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 784, EvoMasters_EvoCheckForMon_3
# 660 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 804, EvoMasters_EvoCheckForMon_3
# 661 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 809, EvoMasters_EvoCheckForMon_3
# 662 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 812, EvoMasters_EvoCheckForMon_3
# 663 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 815, EvoMasters_EvoCheckForMon_3
# 664 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 818, EvoMasters_EvoCheckForMon_3
# 665 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 820, EvoMasters_EvoCheckForMon_3
# 666 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 823, EvoMasters_EvoCheckForMon_3
# 667 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 826, EvoMasters_EvoCheckForMon_3
# 668 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 828, EvoMasters_EvoCheckForMon_3
# 669 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 830, EvoMasters_EvoCheckForMon_3
# 670 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 832, EvoMasters_EvoCheckForMon_3
# 671 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 834, EvoMasters_EvoCheckForMon_3
# 672 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 836, EvoMasters_EvoCheckForMon_3
# 673 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 839, EvoMasters_EvoCheckForMon_3
# 674 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 841, EvoMasters_EvoCheckForMon_3
# 675 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 842, EvoMasters_EvoCheckForMon_3
# 676 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 844, EvoMasters_EvoCheckForMon_3
# 677 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 847, EvoMasters_EvoCheckForMon_3
# 678 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 849, EvoMasters_EvoCheckForMon_3
# 679 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 851, EvoMasters_EvoCheckForMon_3
# 680 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 853, EvoMasters_EvoCheckForMon_3
# 681 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 855, EvoMasters_EvoCheckForMon_3
# 682 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 858, EvoMasters_EvoCheckForMon_3
# 683 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 861, EvoMasters_EvoCheckForMon_3
# 684 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 862, EvoMasters_EvoCheckForMon_3
# 685 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 863, EvoMasters_EvoCheckForMon_3
# 686 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 864, EvoMasters_EvoCheckForMon_3
# 687 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 865, EvoMasters_EvoCheckForMon_3
# 688 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 866, EvoMasters_EvoCheckForMon_3
# 689 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 867, EvoMasters_EvoCheckForMon_3
# 690 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 869, EvoMasters_EvoCheckForMon_3
# 691 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 873, EvoMasters_EvoCheckForMon_3
# 692 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 879, EvoMasters_EvoCheckForMon_3
# 693 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 887, EvoMasters_EvoCheckForMon_3
# 694 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 899, EvoMasters_EvoCheckForMon_3
# 695 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 900, EvoMasters_EvoCheckForMon_3
# 696 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 901, EvoMasters_EvoCheckForMon_3
# 697 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 902, EvoMasters_EvoCheckForMon_3
# 698 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 903, EvoMasters_EvoCheckForMon_3
# 699 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 904, EvoMasters_EvoCheckForMon_3
# 700 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 957, EvoMasters_EvoCheckForMon_3
# 701 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 958, EvoMasters_EvoCheckForMon_3
# 702 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 960, EvoMasters_EvoCheckForMon_3
# 703 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 962, EvoMasters_EvoCheckForMon_3
# 704 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 964, EvoMasters_EvoCheckForMon_3
# 705 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 966, EvoMasters_EvoCheckForMon_3
# 706 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 969, EvoMasters_EvoCheckForMon_3
# 707 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 971, EvoMasters_EvoCheckForMon_3
# 708 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 972, EvoMasters_EvoCheckForMon_3
# 709 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 973, EvoMasters_EvoCheckForMon_3
# 710 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 976, EvoMasters_EvoCheckForMon_3
# 711 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 978, EvoMasters_EvoCheckForMon_3
# 712 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 979, EvoMasters_EvoCheckForMon_3
# 713 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 980, EvoMasters_EvoCheckForMon_3
# 714 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 985, EvoMasters_EvoCheckForMon_3
# 715 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 990, EvoMasters_EvoCheckForMon_3
# 716 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 992, EvoMasters_EvoCheckForMon_3
# 717 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 994, EvoMasters_EvoCheckForMon_3
# 718 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 996, EvoMasters_EvoCheckForMon_3
# 719 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1000, EvoMasters_EvoCheckForMon_3
# 720 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1001, EvoMasters_EvoCheckForMon_3
# 721 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1003, EvoMasters_EvoCheckForMon_3
# 722 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1004, EvoMasters_EvoCheckForMon_3
# 723 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1006, EvoMasters_EvoCheckForMon_3
# 724 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1007, EvoMasters_EvoCheckForMon_3
# 725 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1008, EvoMasters_EvoCheckForMon_3
# 726 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1059, EvoMasters_EvoCheckForMon_3
# 727 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1060, EvoMasters_EvoCheckForMon_3
# 728 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1063, EvoMasters_EvoCheckForMon_3
# 729 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1097, EvoMasters_EvoCheckForMon_3
# 730 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1098, EvoMasters_EvoCheckForMon_3
# 731 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1099, EvoMasters_EvoCheckForMon_3
# 732 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1114, EvoMasters_EvoCheckForMon_3
# 733 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1115, EvoMasters_EvoCheckForMon_3
# 734 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1116, EvoMasters_EvoCheckForMon_3
# 735 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1117, EvoMasters_EvoCheckForMon_3
# 736 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1118, EvoMasters_EvoCheckForMon_3
# 737 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1119, EvoMasters_EvoCheckForMon_3
# 738 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1120, EvoMasters_EvoCheckForMon_3
# 739 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1121, EvoMasters_EvoCheckForMon_3
# 740 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1122, EvoMasters_EvoCheckForMon_3
# 741 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1123, EvoMasters_EvoCheckForMon_3
# 742 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1124, EvoMasters_EvoCheckForMon_3
# 743 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1125, EvoMasters_EvoCheckForMon_3
# 744 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1126, EvoMasters_EvoCheckForMon_3
# 745 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1127, EvoMasters_EvoCheckForMon_3
# 746 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1128, EvoMasters_EvoCheckForMon_3
# 747 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1129, EvoMasters_EvoCheckForMon_3
# 748 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1130, EvoMasters_EvoCheckForMon_3
# 749 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1131, EvoMasters_EvoCheckForMon_3
# 750 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1132, EvoMasters_EvoCheckForMon_3
# 751 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1142, EvoMasters_EvoCheckForMon_3
# 752 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1143, EvoMasters_EvoCheckForMon_3
# 753 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1144, EvoMasters_EvoCheckForMon_3
# 754 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1145, EvoMasters_EvoCheckForMon_3
# 755 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1155, EvoMasters_EvoCheckForMon_3
# 756 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1160, EvoMasters_EvoCheckForMon_3
# 757 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1161, EvoMasters_EvoCheckForMon_3
# 758 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1162, EvoMasters_EvoCheckForMon_3
# 759 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1173, EvoMasters_EvoCheckForMon_3
# 760 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1174, EvoMasters_EvoCheckForMon_3
# 761 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1176, EvoMasters_EvoCheckForMon_3
# 762 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1177, EvoMasters_EvoCheckForMon_3
# 763 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1178, EvoMasters_EvoCheckForMon_3
# 764 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1179, EvoMasters_EvoCheckForMon_3
# 765 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1180, EvoMasters_EvoCheckForMon_3
# 766 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1181, EvoMasters_EvoCheckForMon_3
# 767 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1182, EvoMasters_EvoCheckForMon_3
# 768 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1183, EvoMasters_EvoCheckForMon_3
# 769 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1184, EvoMasters_EvoCheckForMon_3
# 770 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1185, EvoMasters_EvoCheckForMon_3
# 771 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1186, EvoMasters_EvoCheckForMon_3
# 772 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1187, EvoMasters_EvoCheckForMon_3
# 773 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1188, EvoMasters_EvoCheckForMon_3
# 774 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1189, EvoMasters_EvoCheckForMon_3
# 775 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1190, EvoMasters_EvoCheckForMon_3
# 776 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1191, EvoMasters_EvoCheckForMon_3
# 777 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1192, EvoMasters_EvoCheckForMon_3
# 778 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1213, EvoMasters_EvoCheckForMon_3
# 779 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1215, EvoMasters_EvoCheckForMon_3
# 780 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1216, EvoMasters_EvoCheckForMon_3
# 781 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1217, EvoMasters_EvoCheckForMon_3
# 782 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1218, EvoMasters_EvoCheckForMon_3
# 783 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1219, EvoMasters_EvoCheckForMon_3
# 784 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1220, EvoMasters_EvoCheckForMon_3
# 785 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1221, EvoMasters_EvoCheckForMon_3
# 786 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1222, EvoMasters_EvoCheckForMon_3
# 787 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1223, EvoMasters_EvoCheckForMon_3
# 788 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1225, EvoMasters_EvoCheckForMon_3
# 789 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1234, EvoMasters_EvoCheckForMon_3
# 790 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1235, EvoMasters_EvoCheckForMon_3
# 791 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1236, EvoMasters_EvoCheckForMon_3
# 792 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1237, EvoMasters_EvoCheckForMon_3
# 793 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1238, EvoMasters_EvoCheckForMon_3
# 794 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1239, EvoMasters_EvoCheckForMon_3
# 795 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1240, EvoMasters_EvoCheckForMon_3
# 796 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1241, EvoMasters_EvoCheckForMon_3
# 797 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1242, EvoMasters_EvoCheckForMon_3
# 798 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1243, EvoMasters_EvoCheckForMon_3
# 799 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1244, EvoMasters_EvoCheckForMon_3
# 800 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1245, EvoMasters_EvoCheckForMon_3
# 801 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1246, EvoMasters_EvoCheckForMon_3
# 802 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1247, EvoMasters_EvoCheckForMon_3
# 803 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1248, EvoMasters_EvoCheckForMon_3
# 804 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1249, EvoMasters_EvoCheckForMon_3
# 805 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1250, EvoMasters_EvoCheckForMon_3
# 806 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1251, EvoMasters_EvoCheckForMon_3
# 807 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1252, EvoMasters_EvoCheckForMon_3
# 808 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1253, EvoMasters_EvoCheckForMon_3
# 809 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1254, EvoMasters_EvoCheckForMon_3
# 810 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1255, EvoMasters_EvoCheckForMon_3
# 811 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1256, EvoMasters_EvoCheckForMon_3
# 812 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1257, EvoMasters_EvoCheckForMon_3
# 813 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1258, EvoMasters_EvoCheckForMon_3
# 814 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1259, EvoMasters_EvoCheckForMon_3
# 815 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1260, EvoMasters_EvoCheckForMon_3
# 816 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1261, EvoMasters_EvoCheckForMon_3
# 817 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1262, EvoMasters_EvoCheckForMon_3
# 818 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1263, EvoMasters_EvoCheckForMon_3
# 819 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1264, EvoMasters_EvoCheckForMon_3
# 820 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1265, EvoMasters_EvoCheckForMon_3
# 821 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1266, EvoMasters_EvoCheckForMon_3
# 822 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1267, EvoMasters_EvoCheckForMon_3
# 823 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1268, EvoMasters_EvoCheckForMon_3
# 824 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1269, EvoMasters_EvoCheckForMon_3
# 825 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1270, EvoMasters_EvoCheckForMon_3
# 826 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1271, EvoMasters_EvoCheckForMon_3
# 827 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1272, EvoMasters_EvoCheckForMon_3
# 828 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1273, EvoMasters_EvoCheckForMon_3
# 829 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1274, EvoMasters_EvoCheckForMon_3
# 830 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1275, EvoMasters_EvoCheckForMon_3
# 831 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1276, EvoMasters_EvoCheckForMon_3
# 832 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1277, EvoMasters_EvoCheckForMon_3
# 833 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1278, EvoMasters_EvoCheckForMon_3
# 834 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1279, EvoMasters_EvoCheckForMon_3
# 835 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1280, EvoMasters_EvoCheckForMon_3
# 836 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1281, EvoMasters_EvoCheckForMon_3
# 837 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1282, EvoMasters_EvoCheckForMon_3
# 838 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1283, EvoMasters_EvoCheckForMon_3
# 839 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1284, EvoMasters_EvoCheckForMon_3
# 840 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1285, EvoMasters_EvoCheckForMon_3
# 841 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1286, EvoMasters_EvoCheckForMon_3
# 842 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1287, EvoMasters_EvoCheckForMon_3
# 843 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1288, EvoMasters_EvoCheckForMon_3
# 844 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1291, EvoMasters_EvoCheckForMon_3
# 845 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1294, EvoMasters_EvoCheckForMon_3
# 846 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1297, EvoMasters_EvoCheckForMon_3
# 847 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1299, EvoMasters_EvoCheckForMon_3
# 848 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1300, EvoMasters_EvoCheckForMon_3
# 849 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1302, EvoMasters_EvoCheckForMon_3
# 850 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1304, EvoMasters_EvoCheckForMon_3
# 851 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1307, EvoMasters_EvoCheckForMon_3
# 852 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1309, EvoMasters_EvoCheckForMon_3
# 853 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1310, EvoMasters_EvoCheckForMon_3
# 854 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1312, EvoMasters_EvoCheckForMon_3
# 855 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1315, EvoMasters_EvoCheckForMon_3
# 856 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1322, EvoMasters_EvoCheckForMon_3
# 857 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1324, EvoMasters_EvoCheckForMon_3
# 858 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1325, EvoMasters_EvoCheckForMon_3
# 859 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1327, EvoMasters_EvoCheckForMon_3
# 860 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1329, EvoMasters_EvoCheckForMon_3
# 861 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1331, EvoMasters_EvoCheckForMon_3
# 862 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1333, EvoMasters_EvoCheckForMon_3
# 863 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1335, EvoMasters_EvoCheckForMon_3
# 864 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1337, EvoMasters_EvoCheckForMon_3
# 865 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1340, EvoMasters_EvoCheckForMon_3
# 866 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1342, EvoMasters_EvoCheckForMon_3
# 867 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1344, EvoMasters_EvoCheckForMon_3
# 868 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1347, EvoMasters_EvoCheckForMon_3
# 869 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1349, EvoMasters_EvoCheckForMon_3
# 870 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1352, EvoMasters_EvoCheckForMon_3
# 871 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1355, EvoMasters_EvoCheckForMon_3
# 872 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1359, EvoMasters_EvoCheckForMon_3
# 873 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1361, EvoMasters_EvoCheckForMon_3
# 874 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1364, EvoMasters_EvoCheckForMon_3
# 875 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1370, EvoMasters_EvoCheckForMon_3
# 876 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1371, EvoMasters_EvoCheckForMon_3
# 877 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1372, EvoMasters_EvoCheckForMon_3
# 878 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1373, EvoMasters_EvoCheckForMon_3
# 879 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1374, EvoMasters_EvoCheckForMon_3
# 880 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1375, EvoMasters_EvoCheckForMon_3
# 881 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1390, EvoMasters_EvoCheckForMon_3
# 882 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1393, EvoMasters_EvoCheckForMon_3
# 883 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1409, EvoMasters_EvoCheckForMon_3
# 884 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1410, EvoMasters_EvoCheckForMon_3
# 885 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1424, EvoMasters_EvoCheckForMon_3
# 886 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1425, EvoMasters_EvoCheckForMon_3
# 887 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1436, EvoMasters_EvoCheckForMon_3
# 888 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1437, EvoMasters_EvoCheckForMon_3
# 890 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 115, EvoMasters_EvoCheckForMon_4
# 891 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 127, EvoMasters_EvoCheckForMon_4
# 892 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 128, EvoMasters_EvoCheckForMon_4
# 893 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 131, EvoMasters_EvoCheckForMon_4
# 894 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 132, EvoMasters_EvoCheckForMon_4
# 895 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 142, EvoMasters_EvoCheckForMon_4
# 896 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 201, EvoMasters_EvoCheckForMon_4
# 897 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 211, EvoMasters_EvoCheckForMon_4
# 898 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 213, EvoMasters_EvoCheckForMon_4
# 899 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 214, EvoMasters_EvoCheckForMon_4
# 900 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 222, EvoMasters_EvoCheckForMon_4
# 901 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 225, EvoMasters_EvoCheckForMon_4
# 902 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 227, EvoMasters_EvoCheckForMon_4
# 903 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 235, EvoMasters_EvoCheckForMon_4
# 904 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 241, EvoMasters_EvoCheckForMon_4
# 905 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 302, EvoMasters_EvoCheckForMon_4
# 906 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 303, EvoMasters_EvoCheckForMon_4
# 907 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 311, EvoMasters_EvoCheckForMon_4
# 908 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 312, EvoMasters_EvoCheckForMon_4
# 909 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 313, EvoMasters_EvoCheckForMon_4
# 910 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 314, EvoMasters_EvoCheckForMon_4
# 911 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 324, EvoMasters_EvoCheckForMon_4
# 912 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 327, EvoMasters_EvoCheckForMon_4
# 913 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 335, EvoMasters_EvoCheckForMon_4
# 914 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 336, EvoMasters_EvoCheckForMon_4
# 915 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 337, EvoMasters_EvoCheckForMon_4
# 916 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 338, EvoMasters_EvoCheckForMon_4
# 917 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 351, EvoMasters_EvoCheckForMon_4
# 918 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 352, EvoMasters_EvoCheckForMon_4
# 919 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 357, EvoMasters_EvoCheckForMon_4
# 920 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 359, EvoMasters_EvoCheckForMon_4
# 921 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 369, EvoMasters_EvoCheckForMon_4
# 922 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 370, EvoMasters_EvoCheckForMon_4
# 923 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 417, EvoMasters_EvoCheckForMon_4
# 924 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 441, EvoMasters_EvoCheckForMon_4
# 925 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 442, EvoMasters_EvoCheckForMon_4
# 926 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 455, EvoMasters_EvoCheckForMon_4
# 927 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 531, EvoMasters_EvoCheckForMon_4
# 928 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 538, EvoMasters_EvoCheckForMon_4
# 929 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 539, EvoMasters_EvoCheckForMon_4
# 930 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 550, EvoMasters_EvoCheckForMon_4
# 931 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 556, EvoMasters_EvoCheckForMon_4
# 932 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 561, EvoMasters_EvoCheckForMon_4
# 933 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 587, EvoMasters_EvoCheckForMon_4
# 934 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 594, EvoMasters_EvoCheckForMon_4
# 935 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 615, EvoMasters_EvoCheckForMon_4
# 936 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 618, EvoMasters_EvoCheckForMon_4
# 937 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 621, EvoMasters_EvoCheckForMon_4
# 938 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 626, EvoMasters_EvoCheckForMon_4
# 939 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 631, EvoMasters_EvoCheckForMon_4
# 940 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 632, EvoMasters_EvoCheckForMon_4
# 941 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 676, EvoMasters_EvoCheckForMon_4
# 942 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 701, EvoMasters_EvoCheckForMon_4
# 943 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 702, EvoMasters_EvoCheckForMon_4
# 944 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 703, EvoMasters_EvoCheckForMon_4
# 945 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 707, EvoMasters_EvoCheckForMon_4
# 946 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 741, EvoMasters_EvoCheckForMon_4
# 947 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 746, EvoMasters_EvoCheckForMon_4
# 948 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 764, EvoMasters_EvoCheckForMon_4
# 949 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 765, EvoMasters_EvoCheckForMon_4
# 950 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 766, EvoMasters_EvoCheckForMon_4
# 951 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 771, EvoMasters_EvoCheckForMon_4
# 952 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 774, EvoMasters_EvoCheckForMon_4
# 953 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 775, EvoMasters_EvoCheckForMon_4
# 954 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 776, EvoMasters_EvoCheckForMon_4
# 955 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 777, EvoMasters_EvoCheckForMon_4
# 956 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 778, EvoMasters_EvoCheckForMon_4
# 957 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 779, EvoMasters_EvoCheckForMon_4
# 958 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 780, EvoMasters_EvoCheckForMon_4
# 959 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 781, EvoMasters_EvoCheckForMon_4
# 960 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 845, EvoMasters_EvoCheckForMon_4
# 961 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 870, EvoMasters_EvoCheckForMon_4
# 962 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 871, EvoMasters_EvoCheckForMon_4
# 963 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 874, EvoMasters_EvoCheckForMon_4
# 964 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 875, EvoMasters_EvoCheckForMon_4
# 965 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 876, EvoMasters_EvoCheckForMon_4
# 966 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 877, EvoMasters_EvoCheckForMon_4
# 967 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 880, EvoMasters_EvoCheckForMon_4
# 968 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 881, EvoMasters_EvoCheckForMon_4
# 969 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 882, EvoMasters_EvoCheckForMon_4
# 970 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 883, EvoMasters_EvoCheckForMon_4
# 971 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1024, EvoMasters_EvoCheckForMon_4
# 972 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1025, EvoMasters_EvoCheckForMon_4
# 973 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1026, EvoMasters_EvoCheckForMon_4
# 974 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1027, EvoMasters_EvoCheckForMon_4
# 975 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1028, EvoMasters_EvoCheckForMon_4
# 976 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1029, EvoMasters_EvoCheckForMon_4
# 977 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1030, EvoMasters_EvoCheckForMon_4
# 978 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1031, EvoMasters_EvoCheckForMon_4
# 979 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1032, EvoMasters_EvoCheckForMon_4
# 980 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1033, EvoMasters_EvoCheckForMon_4
# 981 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1034, EvoMasters_EvoCheckForMon_4
# 982 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1035, EvoMasters_EvoCheckForMon_4
# 983 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1036, EvoMasters_EvoCheckForMon_4
# 984 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1037, EvoMasters_EvoCheckForMon_4
# 985 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1038, EvoMasters_EvoCheckForMon_4
# 986 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1039, EvoMasters_EvoCheckForMon_4
# 987 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1040, EvoMasters_EvoCheckForMon_4
# 988 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1041, EvoMasters_EvoCheckForMon_4
# 989 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1042, EvoMasters_EvoCheckForMon_4
# 990 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1043, EvoMasters_EvoCheckForMon_4
# 991 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1044, EvoMasters_EvoCheckForMon_4
# 992 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1045, EvoMasters_EvoCheckForMon_4
# 993 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1046, EvoMasters_EvoCheckForMon_4
# 994 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1047, EvoMasters_EvoCheckForMon_4
# 995 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1048, EvoMasters_EvoCheckForMon_4
# 996 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1049, EvoMasters_EvoCheckForMon_4
# 997 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1050, EvoMasters_EvoCheckForMon_4
# 998 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1064, EvoMasters_EvoCheckForMon_4
# 999 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1065, EvoMasters_EvoCheckForMon_4
# 1000 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1066, EvoMasters_EvoCheckForMon_4
# 1001 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1067, EvoMasters_EvoCheckForMon_4
# 1002 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1068, EvoMasters_EvoCheckForMon_4
# 1003 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1090, EvoMasters_EvoCheckForMon_4
# 1004 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1146, EvoMasters_EvoCheckForMon_4
# 1005 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1147, EvoMasters_EvoCheckForMon_4
# 1006 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1148, EvoMasters_EvoCheckForMon_4
# 1007 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1149, EvoMasters_EvoCheckForMon_4
# 1008 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1150, EvoMasters_EvoCheckForMon_4
# 1009 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1151, EvoMasters_EvoCheckForMon_4
# 1010 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1153, EvoMasters_EvoCheckForMon_4
# 1011 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1154, EvoMasters_EvoCheckForMon_4
# 1012 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1169, EvoMasters_EvoCheckForMon_4
# 1013 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1170, EvoMasters_EvoCheckForMon_4
# 1014 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1171, EvoMasters_EvoCheckForMon_4
# 1015 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1193, EvoMasters_EvoCheckForMon_4
# 1016 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1194, EvoMasters_EvoCheckForMon_4
# 1017 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1195, EvoMasters_EvoCheckForMon_4
# 1018 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1196, EvoMasters_EvoCheckForMon_4
# 1019 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1197, EvoMasters_EvoCheckForMon_4
# 1020 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1198, EvoMasters_EvoCheckForMon_4
# 1021 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1316, EvoMasters_EvoCheckForMon_4
# 1022 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1317, EvoMasters_EvoCheckForMon_4
# 1023 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1318, EvoMasters_EvoCheckForMon_4
# 1024 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1319, EvoMasters_EvoCheckForMon_4
# 1025 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1338, EvoMasters_EvoCheckForMon_4
# 1026 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1350, EvoMasters_EvoCheckForMon_4
# 1027 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1356, EvoMasters_EvoCheckForMon_4
# 1028 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1357, EvoMasters_EvoCheckForMon_4
# 1029 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1362, EvoMasters_EvoCheckForMon_4
# 1030 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1365, EvoMasters_EvoCheckForMon_4
# 1031 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1366, EvoMasters_EvoCheckForMon_4
# 1032 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1367, EvoMasters_EvoCheckForMon_4
# 1033 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1368, EvoMasters_EvoCheckForMon_4
# 1034 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1369, EvoMasters_EvoCheckForMon_4
# 1035 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1402, EvoMasters_EvoCheckForMon_4
# 1036 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1403, EvoMasters_EvoCheckForMon_4
# 1037 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1404, EvoMasters_EvoCheckForMon_4
# 1039 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 793, EvoMasters_EvoCheckForMon_5
# 1040 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 794, EvoMasters_EvoCheckForMon_5
# 1041 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 795, EvoMasters_EvoCheckForMon_5
# 1042 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 796, EvoMasters_EvoCheckForMon_5
# 1043 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 797, EvoMasters_EvoCheckForMon_5
# 1044 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 798, EvoMasters_EvoCheckForMon_5
# 1045 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 799, EvoMasters_EvoCheckForMon_5
# 1046 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 803, EvoMasters_EvoCheckForMon_5
# 1047 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 805, EvoMasters_EvoCheckForMon_5
# 1048 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 806, EvoMasters_EvoCheckForMon_5
# 1050 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 144, EvoMasters_EvoCheckForMon_6
# 1051 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 145, EvoMasters_EvoCheckForMon_6
# 1052 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 146, EvoMasters_EvoCheckForMon_6
# 1053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 150, EvoMasters_EvoCheckForMon_6
# 1054 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 243, EvoMasters_EvoCheckForMon_6
# 1055 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 244, EvoMasters_EvoCheckForMon_6
# 1056 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 245, EvoMasters_EvoCheckForMon_6
# 1057 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 249, EvoMasters_EvoCheckForMon_6
# 1058 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 250, EvoMasters_EvoCheckForMon_6
# 1059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 377, EvoMasters_EvoCheckForMon_6
# 1060 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 378, EvoMasters_EvoCheckForMon_6
# 1061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 379, EvoMasters_EvoCheckForMon_6
# 1062 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 380, EvoMasters_EvoCheckForMon_6
# 1063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 381, EvoMasters_EvoCheckForMon_6
# 1064 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 382, EvoMasters_EvoCheckForMon_6
# 1065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 383, EvoMasters_EvoCheckForMon_6
# 1066 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 384, EvoMasters_EvoCheckForMon_6
# 1067 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 480, EvoMasters_EvoCheckForMon_6
# 1068 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 481, EvoMasters_EvoCheckForMon_6
# 1069 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 482, EvoMasters_EvoCheckForMon_6
# 1070 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 483, EvoMasters_EvoCheckForMon_6
# 1071 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 484, EvoMasters_EvoCheckForMon_6
# 1072 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 485, EvoMasters_EvoCheckForMon_6
# 1073 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 486, EvoMasters_EvoCheckForMon_6
# 1074 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 487, EvoMasters_EvoCheckForMon_6
# 1075 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 488, EvoMasters_EvoCheckForMon_6
# 1076 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 638, EvoMasters_EvoCheckForMon_6
# 1077 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 639, EvoMasters_EvoCheckForMon_6
# 1078 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 640, EvoMasters_EvoCheckForMon_6
# 1079 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 641, EvoMasters_EvoCheckForMon_6
# 1080 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 642, EvoMasters_EvoCheckForMon_6
# 1081 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 643, EvoMasters_EvoCheckForMon_6
# 1082 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 644, EvoMasters_EvoCheckForMon_6
# 1083 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 645, EvoMasters_EvoCheckForMon_6
# 1084 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 646, EvoMasters_EvoCheckForMon_6
# 1085 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 716, EvoMasters_EvoCheckForMon_6
# 1086 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 717, EvoMasters_EvoCheckForMon_6
# 1087 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 718, EvoMasters_EvoCheckForMon_6
# 1088 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 785, EvoMasters_EvoCheckForMon_6
# 1089 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 786, EvoMasters_EvoCheckForMon_6
# 1090 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 787, EvoMasters_EvoCheckForMon_6
# 1091 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 788, EvoMasters_EvoCheckForMon_6
# 1092 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 791, EvoMasters_EvoCheckForMon_6
# 1093 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 792, EvoMasters_EvoCheckForMon_6
# 1094 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 800, EvoMasters_EvoCheckForMon_6
# 1095 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 888, EvoMasters_EvoCheckForMon_6
# 1096 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 889, EvoMasters_EvoCheckForMon_6
# 1097 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 890, EvoMasters_EvoCheckForMon_6
# 1098 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 894, EvoMasters_EvoCheckForMon_6
# 1099 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 895, EvoMasters_EvoCheckForMon_6
# 1100 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 892, EvoMasters_EvoCheckForMon_6
# 1101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 905, EvoMasters_EvoCheckForMon_6
# 1102 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 982, EvoMasters_EvoCheckForMon_6
# 1103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 983, EvoMasters_EvoCheckForMon_6
# 1104 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 984, EvoMasters_EvoCheckForMon_6
# 1105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1054, EvoMasters_EvoCheckForMon_6
# 1106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1055, EvoMasters_EvoCheckForMon_6
# 1107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1056, EvoMasters_EvoCheckForMon_6
# 1108 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1069, EvoMasters_EvoCheckForMon_6
# 1109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1070, EvoMasters_EvoCheckForMon_6
# 1110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1071, EvoMasters_EvoCheckForMon_6
# 1111 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1072, EvoMasters_EvoCheckForMon_6
# 1112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1100, EvoMasters_EvoCheckForMon_6
# 1113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1101, EvoMasters_EvoCheckForMon_6
# 1114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1102, EvoMasters_EvoCheckForMon_6
# 1115 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1103, EvoMasters_EvoCheckForMon_6
# 1116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1104, EvoMasters_EvoCheckForMon_6
# 1117 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1105, EvoMasters_EvoCheckForMon_6
# 1118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1164, EvoMasters_EvoCheckForMon_6
# 1119 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1165, EvoMasters_EvoCheckForMon_6
# 1120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1166, EvoMasters_EvoCheckForMon_6
# 1121 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1167, EvoMasters_EvoCheckForMon_6
# 1122 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1207, EvoMasters_EvoCheckForMon_6
# 1123 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1208, EvoMasters_EvoCheckForMon_6
# 1124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1227, EvoMasters_EvoCheckForMon_6
# 1125 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1228, EvoMasters_EvoCheckForMon_6
# 1126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1232, EvoMasters_EvoCheckForMon_6
# 1127 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1233, EvoMasters_EvoCheckForMon_6
# 1128 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1394, EvoMasters_EvoCheckForMon_6
# 1129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1395, EvoMasters_EvoCheckForMon_6
# 1130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1396, EvoMasters_EvoCheckForMon_6
# 1131 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1397, EvoMasters_EvoCheckForMon_6
# 1132 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1400, EvoMasters_EvoCheckForMon_6
# 1133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1401, EvoMasters_EvoCheckForMon_6
# 1134 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1413, EvoMasters_EvoCheckForMon_6
# 1135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1414, EvoMasters_EvoCheckForMon_6
# 1136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1415, EvoMasters_EvoCheckForMon_6
# 1137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1416, EvoMasters_EvoCheckForMon_6
# 1138 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1417, EvoMasters_EvoCheckForMon_6
# 1139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1418, EvoMasters_EvoCheckForMon_6
# 1140 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1419, EvoMasters_EvoCheckForMon_6
# 1141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1431, EvoMasters_EvoCheckForMon_6
# 1142 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1432, EvoMasters_EvoCheckForMon_6
# 1143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1434, EvoMasters_EvoCheckForMon_6
# 1145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 151, EvoMasters_EvoCheckForMon_7
# 1146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 251, EvoMasters_EvoCheckForMon_7
# 1147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 385, EvoMasters_EvoCheckForMon_7
# 1148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 386, EvoMasters_EvoCheckForMon_7
# 1149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 491, EvoMasters_EvoCheckForMon_7
# 1150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 492, EvoMasters_EvoCheckForMon_7
# 1151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 494, EvoMasters_EvoCheckForMon_7
# 1152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 647, EvoMasters_EvoCheckForMon_7
# 1153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 648, EvoMasters_EvoCheckForMon_7
# 1154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 649, EvoMasters_EvoCheckForMon_7
# 1155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 719, EvoMasters_EvoCheckForMon_7
# 1156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 720, EvoMasters_EvoCheckForMon_7
# 1157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 721, EvoMasters_EvoCheckForMon_7
# 1158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 801, EvoMasters_EvoCheckForMon_7
# 1159 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 802, EvoMasters_EvoCheckForMon_7
# 1160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 807, EvoMasters_EvoCheckForMon_7
# 1161 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 893, EvoMasters_EvoCheckForMon_7
# 1162 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1106, EvoMasters_EvoCheckForMon_7
# 1163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1108, EvoMasters_EvoCheckForMon_7
# 1164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1109, EvoMasters_EvoCheckForMon_7
# 1165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1110, EvoMasters_EvoCheckForMon_7
# 1166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1111, EvoMasters_EvoCheckForMon_7
# 1167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1210, EvoMasters_EvoCheckForMon_7
# 1168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1231, EvoMasters_EvoCheckForMon_7
# 1170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1, EvoMasters_EvoCheckForMon_8
# 1172 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 2, EvoMasters_EvoCheckForMon_9
# 1174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 4, EvoMasters_EvoCheckForMon_10
# 1176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 5, EvoMasters_EvoCheckForMon_11
# 1178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 7, EvoMasters_EvoCheckForMon_12
# 1180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 8, EvoMasters_EvoCheckForMon_13
# 1182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 10, EvoMasters_EvoCheckForMon_14
# 1184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 11, EvoMasters_EvoCheckForMon_15
# 1186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 13, EvoMasters_EvoCheckForMon_16
# 1188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 14, EvoMasters_EvoCheckForMon_17
# 1190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 16, EvoMasters_EvoCheckForMon_18
# 1192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 17, EvoMasters_EvoCheckForMon_19
# 1194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 19, EvoMasters_EvoCheckForMon_20
# 1196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 21, EvoMasters_EvoCheckForMon_21
# 1198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 23, EvoMasters_EvoCheckForMon_22
# 1200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 25, EvoMasters_EvoCheckForMon_23
# 1202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 27, EvoMasters_EvoCheckForMon_24
# 1204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 29, EvoMasters_EvoCheckForMon_25
# 1205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 32, EvoMasters_EvoCheckForMon_25
# 1207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 30, EvoMasters_EvoCheckForMon_26
# 1209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 33, EvoMasters_EvoCheckForMon_27
# 1211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 35, EvoMasters_EvoCheckForMon_28
# 1213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 37, EvoMasters_EvoCheckForMon_29
# 1215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 39, EvoMasters_EvoCheckForMon_30
# 1217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 41, EvoMasters_EvoCheckForMon_31
# 1219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 42, EvoMasters_EvoCheckForMon_32
# 1221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 43, EvoMasters_EvoCheckForMon_33
# 1223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 44, EvoMasters_EvoCheckForMon_34
# 1225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 46, EvoMasters_EvoCheckForMon_35
# 1227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 48, EvoMasters_EvoCheckForMon_36
# 1229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 50, EvoMasters_EvoCheckForMon_37
# 1230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 963, EvoMasters_EvoCheckForMon_37
# 1232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 52, EvoMasters_EvoCheckForMon_38
# 1233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 974, EvoMasters_EvoCheckForMon_38
# 1235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 54, EvoMasters_EvoCheckForMon_39
# 1237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 56, EvoMasters_EvoCheckForMon_40
# 1239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 57, EvoMasters_EvoCheckForMon_41
# 1241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 58, EvoMasters_EvoCheckForMon_42
# 1242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 993, EvoMasters_EvoCheckForMon_42
# 1244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 60, EvoMasters_EvoCheckForMon_43
# 1246 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 61, EvoMasters_EvoCheckForMon_44
# 1248 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 63, EvoMasters_EvoCheckForMon_45
# 1250 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 64, EvoMasters_EvoCheckForMon_46
# 1252 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 66, EvoMasters_EvoCheckForMon_47
# 1254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 67, EvoMasters_EvoCheckForMon_48
# 1256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 69, EvoMasters_EvoCheckForMon_49
# 1258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 70, EvoMasters_EvoCheckForMon_50
# 1260 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 72, EvoMasters_EvoCheckForMon_51
# 1262 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 74, EvoMasters_EvoCheckForMon_52
# 1263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 967, EvoMasters_EvoCheckForMon_52
# 1265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 75, EvoMasters_EvoCheckForMon_53
# 1266 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 968, EvoMasters_EvoCheckForMon_53
# 1268 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 77, EvoMasters_EvoCheckForMon_54
# 1269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 975, EvoMasters_EvoCheckForMon_54
# 1271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 79, EvoMasters_EvoCheckForMon_55
# 1273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 81, EvoMasters_EvoCheckForMon_56
# 1275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 82, EvoMasters_EvoCheckForMon_57
# 1277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 83, EvoMasters_EvoCheckForMon_58
# 1279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 84, EvoMasters_EvoCheckForMon_59
# 1281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 86, EvoMasters_EvoCheckForMon_60
# 1283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 88, EvoMasters_EvoCheckForMon_61
# 1284 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 970, EvoMasters_EvoCheckForMon_61
# 1286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 90, EvoMasters_EvoCheckForMon_62
# 1288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 92, EvoMasters_EvoCheckForMon_63
# 1290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 93, EvoMasters_EvoCheckForMon_64
# 1292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 95, EvoMasters_EvoCheckForMon_65
# 1294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 96, EvoMasters_EvoCheckForMon_66
# 1296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 98, EvoMasters_EvoCheckForMon_67
# 1298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 100, EvoMasters_EvoCheckForMon_68
# 1300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 102, EvoMasters_EvoCheckForMon_69
# 1302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 104, EvoMasters_EvoCheckForMon_70
# 1304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 108, EvoMasters_EvoCheckForMon_71
# 1306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 109, EvoMasters_EvoCheckForMon_72
# 1308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 111, EvoMasters_EvoCheckForMon_73
# 1310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 112, EvoMasters_EvoCheckForMon_74
# 1312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 113, EvoMasters_EvoCheckForMon_75
# 1314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 114, EvoMasters_EvoCheckForMon_76
# 1316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 116, EvoMasters_EvoCheckForMon_77
# 1318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 117, EvoMasters_EvoCheckForMon_78
# 1320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 118, EvoMasters_EvoCheckForMon_79
# 1322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 120, EvoMasters_EvoCheckForMon_80
# 1324 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 123, EvoMasters_EvoCheckForMon_81
# 1326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 125, EvoMasters_EvoCheckForMon_82
# 1328 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 126, EvoMasters_EvoCheckForMon_83
# 1330 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 129, EvoMasters_EvoCheckForMon_84
# 1332 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 133, EvoMasters_EvoCheckForMon_85
# 1334 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 137, EvoMasters_EvoCheckForMon_86
# 1336 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 138, EvoMasters_EvoCheckForMon_87
# 1338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 140, EvoMasters_EvoCheckForMon_88
# 1340 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 147, EvoMasters_EvoCheckForMon_89
# 1342 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 148, EvoMasters_EvoCheckForMon_90
# 1344 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 152, EvoMasters_EvoCheckForMon_91
# 1346 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 153, EvoMasters_EvoCheckForMon_92
# 1348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 155, EvoMasters_EvoCheckForMon_93
# 1350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 156, EvoMasters_EvoCheckForMon_94
# 1352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 158, EvoMasters_EvoCheckForMon_95
# 1354 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 159, EvoMasters_EvoCheckForMon_96
# 1356 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 161, EvoMasters_EvoCheckForMon_97
# 1358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 163, EvoMasters_EvoCheckForMon_98
# 1360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 165, EvoMasters_EvoCheckForMon_99
# 1362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 167, EvoMasters_EvoCheckForMon_100
# 1364 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 170, EvoMasters_EvoCheckForMon_101
# 1366 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 172, EvoMasters_EvoCheckForMon_102
# 1368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 173, EvoMasters_EvoCheckForMon_103
# 1370 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 174, EvoMasters_EvoCheckForMon_104
# 1372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 175, EvoMasters_EvoCheckForMon_105
# 1374 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 176, EvoMasters_EvoCheckForMon_106
# 1376 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 177, EvoMasters_EvoCheckForMon_107
# 1378 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 179, EvoMasters_EvoCheckForMon_108
# 1380 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 180, EvoMasters_EvoCheckForMon_109
# 1382 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 183, EvoMasters_EvoCheckForMon_110
# 1384 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 187, EvoMasters_EvoCheckForMon_111
# 1386 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 188, EvoMasters_EvoCheckForMon_112
# 1388 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 190, EvoMasters_EvoCheckForMon_113
# 1390 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 191, EvoMasters_EvoCheckForMon_114
# 1392 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 193, EvoMasters_EvoCheckForMon_115
# 1394 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 194, EvoMasters_EvoCheckForMon_116
# 1395 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1405, EvoMasters_EvoCheckForMon_116
# 1397 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 198, EvoMasters_EvoCheckForMon_117
# 1399 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 200, EvoMasters_EvoCheckForMon_118
# 1401 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 203, EvoMasters_EvoCheckForMon_119
# 1403 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 204, EvoMasters_EvoCheckForMon_120
# 1405 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 206, EvoMasters_EvoCheckForMon_121
# 1407 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 207, EvoMasters_EvoCheckForMon_122
# 1409 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 209, EvoMasters_EvoCheckForMon_123
# 1411 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 215, EvoMasters_EvoCheckForMon_124
# 1413 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 216, EvoMasters_EvoCheckForMon_125
# 1415 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 217, EvoMasters_EvoCheckForMon_126
# 1417 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 218, EvoMasters_EvoCheckForMon_127
# 1419 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 220, EvoMasters_EvoCheckForMon_128
# 1421 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 221, EvoMasters_EvoCheckForMon_129
# 1423 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 223, EvoMasters_EvoCheckForMon_130
# 1425 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 228, EvoMasters_EvoCheckForMon_131
# 1427 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 231, EvoMasters_EvoCheckForMon_132
# 1429 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 233, EvoMasters_EvoCheckForMon_133
# 1431 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 234, EvoMasters_EvoCheckForMon_134
# 1433 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 236, EvoMasters_EvoCheckForMon_135
# 1435 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 238, EvoMasters_EvoCheckForMon_136
# 1437 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 239, EvoMasters_EvoCheckForMon_137
# 1439 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 240, EvoMasters_EvoCheckForMon_138
# 1441 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 246, EvoMasters_EvoCheckForMon_139
# 1443 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 247, EvoMasters_EvoCheckForMon_140
# 1445 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 252, EvoMasters_EvoCheckForMon_141
# 1447 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 253, EvoMasters_EvoCheckForMon_142
# 1449 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 255, EvoMasters_EvoCheckForMon_143
# 1451 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 256, EvoMasters_EvoCheckForMon_144
# 1453 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 258, EvoMasters_EvoCheckForMon_145
# 1455 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 259, EvoMasters_EvoCheckForMon_146
# 1457 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 261, EvoMasters_EvoCheckForMon_147
# 1459 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 263, EvoMasters_EvoCheckForMon_148
# 1460 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 987, EvoMasters_EvoCheckForMon_148
# 1462 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 265, EvoMasters_EvoCheckForMon_149
# 1464 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 266, EvoMasters_EvoCheckForMon_150
# 1466 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 268, EvoMasters_EvoCheckForMon_151
# 1468 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 270, EvoMasters_EvoCheckForMon_152
# 1470 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 271, EvoMasters_EvoCheckForMon_153
# 1472 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 273, EvoMasters_EvoCheckForMon_154
# 1474 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 274, EvoMasters_EvoCheckForMon_155
# 1476 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 276, EvoMasters_EvoCheckForMon_156
# 1478 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 278, EvoMasters_EvoCheckForMon_157
# 1480 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 280, EvoMasters_EvoCheckForMon_158
# 1482 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 281, EvoMasters_EvoCheckForMon_159
# 1484 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 283, EvoMasters_EvoCheckForMon_160
# 1486 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 285, EvoMasters_EvoCheckForMon_161
# 1488 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 287, EvoMasters_EvoCheckForMon_162
# 1490 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 288, EvoMasters_EvoCheckForMon_163
# 1492 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 290, EvoMasters_EvoCheckForMon_164
# 1494 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 293, EvoMasters_EvoCheckForMon_165
# 1496 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 294, EvoMasters_EvoCheckForMon_166
# 1498 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 296, EvoMasters_EvoCheckForMon_167
# 1500 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 298, EvoMasters_EvoCheckForMon_168
# 1502 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 299, EvoMasters_EvoCheckForMon_169
# 1504 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 300, EvoMasters_EvoCheckForMon_170
# 1506 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 304, EvoMasters_EvoCheckForMon_171
# 1508 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 305, EvoMasters_EvoCheckForMon_172
# 1510 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 307, EvoMasters_EvoCheckForMon_173
# 1512 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 309, EvoMasters_EvoCheckForMon_174
# 1514 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 315, EvoMasters_EvoCheckForMon_175
# 1516 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 316, EvoMasters_EvoCheckForMon_176
# 1518 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 318, EvoMasters_EvoCheckForMon_177
# 1520 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 320, EvoMasters_EvoCheckForMon_178
# 1522 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 322, EvoMasters_EvoCheckForMon_179
# 1524 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 325, EvoMasters_EvoCheckForMon_180
# 1526 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 328, EvoMasters_EvoCheckForMon_181
# 1528 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 329, EvoMasters_EvoCheckForMon_182
# 1530 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 331, EvoMasters_EvoCheckForMon_183
# 1532 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 333, EvoMasters_EvoCheckForMon_184
# 1534 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 339, EvoMasters_EvoCheckForMon_185
# 1536 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 341, EvoMasters_EvoCheckForMon_186
# 1538 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 343, EvoMasters_EvoCheckForMon_187
# 1540 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 345, EvoMasters_EvoCheckForMon_188
# 1542 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 347, EvoMasters_EvoCheckForMon_189
# 1544 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 349, EvoMasters_EvoCheckForMon_190
# 1546 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 353, EvoMasters_EvoCheckForMon_191
# 1548 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 355, EvoMasters_EvoCheckForMon_192
# 1550 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 356, EvoMasters_EvoCheckForMon_193
# 1552 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 360, EvoMasters_EvoCheckForMon_194
# 1554 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 361, EvoMasters_EvoCheckForMon_195
# 1556 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 363, EvoMasters_EvoCheckForMon_196
# 1558 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 364, EvoMasters_EvoCheckForMon_197
# 1560 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 366, EvoMasters_EvoCheckForMon_198
# 1562 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 371, EvoMasters_EvoCheckForMon_199
# 1564 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 372, EvoMasters_EvoCheckForMon_200
# 1566 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 374, EvoMasters_EvoCheckForMon_201
# 1568 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 375, EvoMasters_EvoCheckForMon_202
# 1570 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 387, EvoMasters_EvoCheckForMon_203
# 1572 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 388, EvoMasters_EvoCheckForMon_204
# 1574 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 390, EvoMasters_EvoCheckForMon_205
# 1576 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 391, EvoMasters_EvoCheckForMon_206
# 1578 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 393, EvoMasters_EvoCheckForMon_207
# 1580 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 394, EvoMasters_EvoCheckForMon_208
# 1582 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 396, EvoMasters_EvoCheckForMon_209
# 1584 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 397, EvoMasters_EvoCheckForMon_210
# 1586 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 399, EvoMasters_EvoCheckForMon_211
# 1588 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 401, EvoMasters_EvoCheckForMon_212
# 1590 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 403, EvoMasters_EvoCheckForMon_213
# 1592 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 404, EvoMasters_EvoCheckForMon_214
# 1594 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 406, EvoMasters_EvoCheckForMon_215
# 1596 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 408, EvoMasters_EvoCheckForMon_216
# 1598 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 410, EvoMasters_EvoCheckForMon_217
# 1600 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 412, EvoMasters_EvoCheckForMon_218
# 1601 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1057, EvoMasters_EvoCheckForMon_218
# 1602 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1058, EvoMasters_EvoCheckForMon_218
# 1604 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 415, EvoMasters_EvoCheckForMon_219
# 1606 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 418, EvoMasters_EvoCheckForMon_220
# 1608 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 420, EvoMasters_EvoCheckForMon_221
# 1610 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 422, EvoMasters_EvoCheckForMon_222
# 1611 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1062, EvoMasters_EvoCheckForMon_222
# 1613 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 425, EvoMasters_EvoCheckForMon_223
# 1615 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 427, EvoMasters_EvoCheckForMon_224
# 1617 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 431, EvoMasters_EvoCheckForMon_225
# 1619 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 433, EvoMasters_EvoCheckForMon_226
# 1621 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 434, EvoMasters_EvoCheckForMon_227
# 1623 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 436, EvoMasters_EvoCheckForMon_228
# 1625 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 438, EvoMasters_EvoCheckForMon_229
# 1627 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 439, EvoMasters_EvoCheckForMon_230
# 1629 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 440, EvoMasters_EvoCheckForMon_231
# 1631 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 443, EvoMasters_EvoCheckForMon_232
# 1633 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 444, EvoMasters_EvoCheckForMon_233
# 1635 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 446, EvoMasters_EvoCheckForMon_234
# 1637 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 447, EvoMasters_EvoCheckForMon_235
# 1639 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 449, EvoMasters_EvoCheckForMon_236
# 1641 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 451, EvoMasters_EvoCheckForMon_237
# 1643 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 453, EvoMasters_EvoCheckForMon_238
# 1645 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 456, EvoMasters_EvoCheckForMon_239
# 1647 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 458, EvoMasters_EvoCheckForMon_240
# 1649 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 459, EvoMasters_EvoCheckForMon_241
# 1651 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 479, EvoMasters_EvoCheckForMon_242
# 1653 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 489, EvoMasters_EvoCheckForMon_243
# 1655 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 490, EvoMasters_EvoCheckForMon_244
# 1657 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 493, EvoMasters_EvoCheckForMon_245
# 1658 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1073, EvoMasters_EvoCheckForMon_245
# 1659 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1074, EvoMasters_EvoCheckForMon_245
# 1660 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1075, EvoMasters_EvoCheckForMon_245
# 1661 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1076, EvoMasters_EvoCheckForMon_245
# 1662 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1077, EvoMasters_EvoCheckForMon_245
# 1663 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1078, EvoMasters_EvoCheckForMon_245
# 1664 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1079, EvoMasters_EvoCheckForMon_245
# 1665 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1080, EvoMasters_EvoCheckForMon_245
# 1666 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1081, EvoMasters_EvoCheckForMon_245
# 1667 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1082, EvoMasters_EvoCheckForMon_245
# 1668 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1083, EvoMasters_EvoCheckForMon_245
# 1669 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1084, EvoMasters_EvoCheckForMon_245
# 1670 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1085, EvoMasters_EvoCheckForMon_245
# 1671 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1086, EvoMasters_EvoCheckForMon_245
# 1672 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1087, EvoMasters_EvoCheckForMon_245
# 1673 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1088, EvoMasters_EvoCheckForMon_245
# 1674 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1089, EvoMasters_EvoCheckForMon_245
# 1676 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 495, EvoMasters_EvoCheckForMon_246
# 1678 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 496, EvoMasters_EvoCheckForMon_247
# 1680 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 498, EvoMasters_EvoCheckForMon_248
# 1682 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 499, EvoMasters_EvoCheckForMon_249
# 1684 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 501, EvoMasters_EvoCheckForMon_250
# 1686 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 502, EvoMasters_EvoCheckForMon_251
# 1688 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 504, EvoMasters_EvoCheckForMon_252
# 1690 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 506, EvoMasters_EvoCheckForMon_253
# 1692 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 507, EvoMasters_EvoCheckForMon_254
# 1694 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 509, EvoMasters_EvoCheckForMon_255
# 1696 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 511, EvoMasters_EvoCheckForMon_256
# 1698 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 513, EvoMasters_EvoCheckForMon_257
# 1700 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 515, EvoMasters_EvoCheckForMon_258
# 1702 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 517, EvoMasters_EvoCheckForMon_259
# 1704 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 519, EvoMasters_EvoCheckForMon_260
# 1706 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 520, EvoMasters_EvoCheckForMon_261
# 1708 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 522, EvoMasters_EvoCheckForMon_262
# 1710 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 524, EvoMasters_EvoCheckForMon_263
# 1712 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 525, EvoMasters_EvoCheckForMon_264
# 1714 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 527, EvoMasters_EvoCheckForMon_265
# 1716 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 529, EvoMasters_EvoCheckForMon_266
# 1718 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 532, EvoMasters_EvoCheckForMon_267
# 1720 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 533, EvoMasters_EvoCheckForMon_268
# 1722 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 535, EvoMasters_EvoCheckForMon_269
# 1724 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 536, EvoMasters_EvoCheckForMon_270
# 1726 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 540, EvoMasters_EvoCheckForMon_271
# 1728 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 541, EvoMasters_EvoCheckForMon_272
# 1730 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 543, EvoMasters_EvoCheckForMon_273
# 1732 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 544, EvoMasters_EvoCheckForMon_274
# 1734 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 546, EvoMasters_EvoCheckForMon_275
# 1736 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 548, EvoMasters_EvoCheckForMon_276
# 1738 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 551, EvoMasters_EvoCheckForMon_277
# 1740 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 552, EvoMasters_EvoCheckForMon_278
# 1742 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 554, EvoMasters_EvoCheckForMon_279
# 1744 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 557, EvoMasters_EvoCheckForMon_280
# 1746 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 559, EvoMasters_EvoCheckForMon_281
# 1748 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 562, EvoMasters_EvoCheckForMon_282
# 1750 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 564, EvoMasters_EvoCheckForMon_283
# 1752 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 566, EvoMasters_EvoCheckForMon_284
# 1754 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 568, EvoMasters_EvoCheckForMon_285
# 1756 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 570, EvoMasters_EvoCheckForMon_286
# 1757 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1002, EvoMasters_EvoCheckForMon_286
# 1759 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 572, EvoMasters_EvoCheckForMon_287
# 1761 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 574, EvoMasters_EvoCheckForMon_288
# 1763 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 575, EvoMasters_EvoCheckForMon_289
# 1765 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 577, EvoMasters_EvoCheckForMon_290
# 1767 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 578, EvoMasters_EvoCheckForMon_291
# 1769 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 580, EvoMasters_EvoCheckForMon_292
# 1771 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 582, EvoMasters_EvoCheckForMon_293
# 1773 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 583, EvoMasters_EvoCheckForMon_294
# 1775 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 585, EvoMasters_EvoCheckForMon_295
# 1776 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1094, EvoMasters_EvoCheckForMon_295
# 1777 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1095, EvoMasters_EvoCheckForMon_295
# 1778 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1096, EvoMasters_EvoCheckForMon_295
# 1780 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 588, EvoMasters_EvoCheckForMon_296
# 1782 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 590, EvoMasters_EvoCheckForMon_297
# 1784 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 592, EvoMasters_EvoCheckForMon_298
# 1786 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 595, EvoMasters_EvoCheckForMon_299
# 1788 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 597, EvoMasters_EvoCheckForMon_300
# 1790 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 599, EvoMasters_EvoCheckForMon_301
# 1792 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 600, EvoMasters_EvoCheckForMon_302
# 1794 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 602, EvoMasters_EvoCheckForMon_303
# 1796 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 603, EvoMasters_EvoCheckForMon_304
# 1798 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 605, EvoMasters_EvoCheckForMon_305
# 1800 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 607, EvoMasters_EvoCheckForMon_306
# 1802 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 608, EvoMasters_EvoCheckForMon_307
# 1804 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 610, EvoMasters_EvoCheckForMon_308
# 1806 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 611, EvoMasters_EvoCheckForMon_309
# 1808 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 613, EvoMasters_EvoCheckForMon_310
# 1810 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 616, EvoMasters_EvoCheckForMon_311
# 1812 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 619, EvoMasters_EvoCheckForMon_312
# 1814 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 622, EvoMasters_EvoCheckForMon_313
# 1816 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 624, EvoMasters_EvoCheckForMon_314
# 1818 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 625, EvoMasters_EvoCheckForMon_315
# 1820 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 627, EvoMasters_EvoCheckForMon_316
# 1822 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 629, EvoMasters_EvoCheckForMon_317
# 1824 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 633, EvoMasters_EvoCheckForMon_318
# 1826 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 634, EvoMasters_EvoCheckForMon_319
# 1828 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 636, EvoMasters_EvoCheckForMon_320
# 1830 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 650, EvoMasters_EvoCheckForMon_321
# 1832 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 651, EvoMasters_EvoCheckForMon_322
# 1834 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 653, EvoMasters_EvoCheckForMon_323
# 1836 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 654, EvoMasters_EvoCheckForMon_324
# 1838 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 656, EvoMasters_EvoCheckForMon_325
# 1840 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 657, EvoMasters_EvoCheckForMon_326
# 1842 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 659, EvoMasters_EvoCheckForMon_327
# 1844 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 661, EvoMasters_EvoCheckForMon_328
# 1846 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 662, EvoMasters_EvoCheckForMon_329
# 1848 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 664, EvoMasters_EvoCheckForMon_330
# 1849 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1438, EvoMasters_EvoCheckForMon_330
# 1850 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1439, EvoMasters_EvoCheckForMon_330
# 1851 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1440, EvoMasters_EvoCheckForMon_330
# 1852 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1441, EvoMasters_EvoCheckForMon_330
# 1853 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1442, EvoMasters_EvoCheckForMon_330
# 1854 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1443, EvoMasters_EvoCheckForMon_330
# 1855 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1444, EvoMasters_EvoCheckForMon_330
# 1856 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1445, EvoMasters_EvoCheckForMon_330
# 1857 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1446, EvoMasters_EvoCheckForMon_330
# 1858 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1447, EvoMasters_EvoCheckForMon_330
# 1859 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1448, EvoMasters_EvoCheckForMon_330
# 1860 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1449, EvoMasters_EvoCheckForMon_330
# 1861 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1450, EvoMasters_EvoCheckForMon_330
# 1862 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1451, EvoMasters_EvoCheckForMon_330
# 1863 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1452, EvoMasters_EvoCheckForMon_330
# 1864 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1453, EvoMasters_EvoCheckForMon_330
# 1865 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1454, EvoMasters_EvoCheckForMon_330
# 1866 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1455, EvoMasters_EvoCheckForMon_330
# 1867 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1456, EvoMasters_EvoCheckForMon_330
# 1869 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 665, EvoMasters_EvoCheckForMon_331
# 1870 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1457, EvoMasters_EvoCheckForMon_331
# 1871 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1458, EvoMasters_EvoCheckForMon_331
# 1872 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1459, EvoMasters_EvoCheckForMon_331
# 1873 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1460, EvoMasters_EvoCheckForMon_331
# 1874 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1461, EvoMasters_EvoCheckForMon_331
# 1875 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1462, EvoMasters_EvoCheckForMon_331
# 1876 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1463, EvoMasters_EvoCheckForMon_331
# 1877 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1464, EvoMasters_EvoCheckForMon_331
# 1878 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1465, EvoMasters_EvoCheckForMon_331
# 1879 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1466, EvoMasters_EvoCheckForMon_331
# 1880 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1467, EvoMasters_EvoCheckForMon_331
# 1881 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1468, EvoMasters_EvoCheckForMon_331
# 1882 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1469, EvoMasters_EvoCheckForMon_331
# 1883 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1470, EvoMasters_EvoCheckForMon_331
# 1884 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1471, EvoMasters_EvoCheckForMon_331
# 1885 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1472, EvoMasters_EvoCheckForMon_331
# 1886 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1473, EvoMasters_EvoCheckForMon_331
# 1887 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1474, EvoMasters_EvoCheckForMon_331
# 1888 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1475, EvoMasters_EvoCheckForMon_331
# 1890 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 667, EvoMasters_EvoCheckForMon_332
# 1892 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 669, EvoMasters_EvoCheckForMon_333
# 1893 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1133, EvoMasters_EvoCheckForMon_333
# 1894 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1134, EvoMasters_EvoCheckForMon_333
# 1895 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1135, EvoMasters_EvoCheckForMon_333
# 1896 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1136, EvoMasters_EvoCheckForMon_333
# 1898 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 670, EvoMasters_EvoCheckForMon_334
# 1899 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1137, EvoMasters_EvoCheckForMon_334
# 1900 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1138, EvoMasters_EvoCheckForMon_334
# 1901 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1139, EvoMasters_EvoCheckForMon_334
# 1902 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1140, EvoMasters_EvoCheckForMon_334
# 1904 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 672, EvoMasters_EvoCheckForMon_335
# 1906 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 674, EvoMasters_EvoCheckForMon_336
# 1908 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 677, EvoMasters_EvoCheckForMon_337
# 1910 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 679, EvoMasters_EvoCheckForMon_338
# 1912 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 680, EvoMasters_EvoCheckForMon_339
# 1914 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 682, EvoMasters_EvoCheckForMon_340
# 1916 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 684, EvoMasters_EvoCheckForMon_341
# 1918 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 686, EvoMasters_EvoCheckForMon_342
# 1920 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 688, EvoMasters_EvoCheckForMon_343
# 1922 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 690, EvoMasters_EvoCheckForMon_344
# 1924 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 692, EvoMasters_EvoCheckForMon_345
# 1926 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 694, EvoMasters_EvoCheckForMon_346
# 1928 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 696, EvoMasters_EvoCheckForMon_347
# 1930 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 698, EvoMasters_EvoCheckForMon_348
# 1932 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 704, EvoMasters_EvoCheckForMon_349
# 1934 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 705, EvoMasters_EvoCheckForMon_350
# 1935 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1005, EvoMasters_EvoCheckForMon_350
# 1937 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 708, EvoMasters_EvoCheckForMon_351
# 1939 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 710, EvoMasters_EvoCheckForMon_352
# 1940 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1157, EvoMasters_EvoCheckForMon_352
# 1941 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1158, EvoMasters_EvoCheckForMon_352
# 1942 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1159, EvoMasters_EvoCheckForMon_352
# 1944 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 712, EvoMasters_EvoCheckForMon_353
# 1946 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 714, EvoMasters_EvoCheckForMon_354
# 1948 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 722, EvoMasters_EvoCheckForMon_355
# 1950 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 723, EvoMasters_EvoCheckForMon_356
# 1952 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 725, EvoMasters_EvoCheckForMon_357
# 1954 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 726, EvoMasters_EvoCheckForMon_358
# 1956 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 728, EvoMasters_EvoCheckForMon_359
# 1958 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 729, EvoMasters_EvoCheckForMon_360
# 1960 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 731, EvoMasters_EvoCheckForMon_361
# 1962 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 732, EvoMasters_EvoCheckForMon_362
# 1964 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 734, EvoMasters_EvoCheckForMon_363
# 1966 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 736, EvoMasters_EvoCheckForMon_364
# 1968 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 737, EvoMasters_EvoCheckForMon_365
# 1970 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 739, EvoMasters_EvoCheckForMon_366
# 1972 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 742, EvoMasters_EvoCheckForMon_367
# 1974 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 744, EvoMasters_EvoCheckForMon_368
# 1976 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 747, EvoMasters_EvoCheckForMon_369
# 1978 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 749, EvoMasters_EvoCheckForMon_370
# 1980 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 751, EvoMasters_EvoCheckForMon_371
# 1982 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 753, EvoMasters_EvoCheckForMon_372
# 1984 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 755, EvoMasters_EvoCheckForMon_373
# 1986 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 757, EvoMasters_EvoCheckForMon_374
# 1988 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 759, EvoMasters_EvoCheckForMon_375
# 1990 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 761, EvoMasters_EvoCheckForMon_376
# 1992 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 762, EvoMasters_EvoCheckForMon_377
# 1994 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 767, EvoMasters_EvoCheckForMon_378
# 1996 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 769, EvoMasters_EvoCheckForMon_379
# 1998 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 772, EvoMasters_EvoCheckForMon_380
# 2000 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 782, EvoMasters_EvoCheckForMon_381
# 2002 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 783, EvoMasters_EvoCheckForMon_382
# 2004 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 789, EvoMasters_EvoCheckForMon_383
# 2006 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 790, EvoMasters_EvoCheckForMon_384
# 2008 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 808, EvoMasters_EvoCheckForMon_385
# 2010 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 810, EvoMasters_EvoCheckForMon_386
# 2012 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 811, EvoMasters_EvoCheckForMon_387
# 2014 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 813, EvoMasters_EvoCheckForMon_388
# 2016 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 814, EvoMasters_EvoCheckForMon_389
# 2018 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 816, EvoMasters_EvoCheckForMon_390
# 2020 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 817, EvoMasters_EvoCheckForMon_391
# 2022 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 819, EvoMasters_EvoCheckForMon_392
# 2024 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 821, EvoMasters_EvoCheckForMon_393
# 2026 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 822, EvoMasters_EvoCheckForMon_394
# 2028 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 824, EvoMasters_EvoCheckForMon_395
# 2030 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 825, EvoMasters_EvoCheckForMon_396
# 2032 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 827, EvoMasters_EvoCheckForMon_397
# 2034 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 829, EvoMasters_EvoCheckForMon_398
# 2036 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 831, EvoMasters_EvoCheckForMon_399
# 2038 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 833, EvoMasters_EvoCheckForMon_400
# 2040 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 835, EvoMasters_EvoCheckForMon_401
# 2042 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 837, EvoMasters_EvoCheckForMon_402
# 2044 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 838, EvoMasters_EvoCheckForMon_403
# 2046 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 840, EvoMasters_EvoCheckForMon_404
# 2048 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 843, EvoMasters_EvoCheckForMon_405
# 2050 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 846, EvoMasters_EvoCheckForMon_406
# 2052 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 848, EvoMasters_EvoCheckForMon_407
# 2054 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 850, EvoMasters_EvoCheckForMon_408
# 2056 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 852, EvoMasters_EvoCheckForMon_409
# 2058 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 854, EvoMasters_EvoCheckForMon_410
# 2060 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 856, EvoMasters_EvoCheckForMon_411
# 2062 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 857, EvoMasters_EvoCheckForMon_412
# 2064 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 859, EvoMasters_EvoCheckForMon_413
# 2066 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 860, EvoMasters_EvoCheckForMon_414
# 2068 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 868, EvoMasters_EvoCheckForMon_415
# 2070 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 872, EvoMasters_EvoCheckForMon_416
# 2072 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 878, EvoMasters_EvoCheckForMon_417
# 2074 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 884, EvoMasters_EvoCheckForMon_418
# 2076 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 885, EvoMasters_EvoCheckForMon_419
# 2078 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 886, EvoMasters_EvoCheckForMon_420
# 2080 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 891, EvoMasters_EvoCheckForMon_421
# 2082 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 896, EvoMasters_EvoCheckForMon_422
# 2083 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 897, EvoMasters_EvoCheckForMon_422
# 2084 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 898, EvoMasters_EvoCheckForMon_422
# 2086 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 956, EvoMasters_EvoCheckForMon_423
# 2088 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 959, EvoMasters_EvoCheckForMon_424
# 2090 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 961, EvoMasters_EvoCheckForMon_425
# 2092 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 965, EvoMasters_EvoCheckForMon_426
# 2094 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 977, EvoMasters_EvoCheckForMon_427
# 2096 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 981, EvoMasters_EvoCheckForMon_428
# 2098 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 986, EvoMasters_EvoCheckForMon_429
# 2100 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 988, EvoMasters_EvoCheckForMon_430
# 2102 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 989, EvoMasters_EvoCheckForMon_431
# 2104 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 991, EvoMasters_EvoCheckForMon_432
# 2106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 995, EvoMasters_EvoCheckForMon_433
# 2108 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 997, EvoMasters_EvoCheckForMon_434
# 2110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 998, EvoMasters_EvoCheckForMon_435
# 2112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 999, EvoMasters_EvoCheckForMon_436
# 2114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1009, EvoMasters_EvoCheckForMon_437
# 2115 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1010, EvoMasters_EvoCheckForMon_437
# 2116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1011, EvoMasters_EvoCheckForMon_437
# 2117 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1012, EvoMasters_EvoCheckForMon_437
# 2118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1013, EvoMasters_EvoCheckForMon_437
# 2119 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1014, EvoMasters_EvoCheckForMon_437
# 2120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1015, EvoMasters_EvoCheckForMon_437
# 2121 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1016, EvoMasters_EvoCheckForMon_437
# 2122 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1017, EvoMasters_EvoCheckForMon_437
# 2123 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1018, EvoMasters_EvoCheckForMon_437
# 2124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1019, EvoMasters_EvoCheckForMon_437
# 2125 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1020, EvoMasters_EvoCheckForMon_437
# 2126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1021, EvoMasters_EvoCheckForMon_437
# 2127 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1022, EvoMasters_EvoCheckForMon_437
# 2128 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1023, EvoMasters_EvoCheckForMon_437
# 2130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1091, EvoMasters_EvoCheckForMon_438
# 2132 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1141, EvoMasters_EvoCheckForMon_439
# 2134 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1172, EvoMasters_EvoCheckForMon_440
# 2136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1214, EvoMasters_EvoCheckForMon_441
# 2138 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1289, EvoMasters_EvoCheckForMon_442
# 2140 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1290, EvoMasters_EvoCheckForMon_443
# 2142 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1292, EvoMasters_EvoCheckForMon_444
# 2144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1293, EvoMasters_EvoCheckForMon_445
# 2146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1295, EvoMasters_EvoCheckForMon_446
# 2148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1296, EvoMasters_EvoCheckForMon_447
# 2150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1298, EvoMasters_EvoCheckForMon_448
# 2152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1301, EvoMasters_EvoCheckForMon_449
# 2154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1303, EvoMasters_EvoCheckForMon_450
# 2156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1305, EvoMasters_EvoCheckForMon_451
# 2158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1306, EvoMasters_EvoCheckForMon_452
# 2160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1308, EvoMasters_EvoCheckForMon_453
# 2162 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1311, EvoMasters_EvoCheckForMon_454
# 2164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1313, EvoMasters_EvoCheckForMon_455
# 2166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1314, EvoMasters_EvoCheckForMon_456
# 2168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1320, EvoMasters_EvoCheckForMon_457
# 2170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1321, EvoMasters_EvoCheckForMon_458
# 2172 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1323, EvoMasters_EvoCheckForMon_459
# 2174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1326, EvoMasters_EvoCheckForMon_460
# 2176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1328, EvoMasters_EvoCheckForMon_461
# 2178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1330, EvoMasters_EvoCheckForMon_462
# 2180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1332, EvoMasters_EvoCheckForMon_463
# 2182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1334, EvoMasters_EvoCheckForMon_464
# 2184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1336, EvoMasters_EvoCheckForMon_465
# 2186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1339, EvoMasters_EvoCheckForMon_466
# 2188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1341, EvoMasters_EvoCheckForMon_467
# 2190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1343, EvoMasters_EvoCheckForMon_468
# 2192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1345, EvoMasters_EvoCheckForMon_469
# 2194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1346, EvoMasters_EvoCheckForMon_470
# 2196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1348, EvoMasters_EvoCheckForMon_471
# 2198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1351, EvoMasters_EvoCheckForMon_472
# 2200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1354, EvoMasters_EvoCheckForMon_473
# 2202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1358, EvoMasters_EvoCheckForMon_474
# 2204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1360, EvoMasters_EvoCheckForMon_475
# 2206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1363, EvoMasters_EvoCheckForMon_476
# 2208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1376, EvoMasters_EvoCheckForMon_477
# 2209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1377, EvoMasters_EvoCheckForMon_477
# 2210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1378, EvoMasters_EvoCheckForMon_477
# 2211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1379, EvoMasters_EvoCheckForMon_477
# 2212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1380, EvoMasters_EvoCheckForMon_477
# 2213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1381, EvoMasters_EvoCheckForMon_477
# 2214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1382, EvoMasters_EvoCheckForMon_477
# 2215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1383, EvoMasters_EvoCheckForMon_477
# 2216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1384, EvoMasters_EvoCheckForMon_477
# 2217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1385, EvoMasters_EvoCheckForMon_477
# 2218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1386, EvoMasters_EvoCheckForMon_477
# 2219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1387, EvoMasters_EvoCheckForMon_477
# 2220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1398, EvoMasters_EvoCheckForMon_477
# 2221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1399, EvoMasters_EvoCheckForMon_477
# 2222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1406, EvoMasters_EvoCheckForMon_477
# 2223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1407, EvoMasters_EvoCheckForMon_477
# 2224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1427, EvoMasters_EvoCheckForMon_477
# 2225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1428, EvoMasters_EvoCheckForMon_477
# 2226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1429, EvoMasters_EvoCheckForMon_477
# 2227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1430, EvoMasters_EvoCheckForMon_477
# 2229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1388, EvoMasters_EvoCheckForMon_478
# 2231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1389, EvoMasters_EvoCheckForMon_479
# 2233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1391, EvoMasters_EvoCheckForMon_480
# 2235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1408, EvoMasters_EvoCheckForMon_481
# 2237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1411, EvoMasters_EvoCheckForMon_482
# 2239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1412, EvoMasters_EvoCheckForMon_483
# 2241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1435, EvoMasters_EvoCheckForMon_484
# 2244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_483
	return

EvoMasters_EvoCheckForMon_2:
# 372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_1
	return

EvoMasters_EvoCheckForMon_3:
# 889 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_2
	return

EvoMasters_EvoCheckForMon_4:
# 1038 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_3
	return

EvoMasters_EvoCheckForMon_5:
# 1049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_4
	return

EvoMasters_EvoCheckForMon_6:
# 1144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_5
	return

EvoMasters_EvoCheckForMon_7:
# 1169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_6
	return

EvoMasters_EvoCheckForMon_8:
# 1171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_7
	return

EvoMasters_EvoCheckForMon_9:
# 1173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_8
	return

EvoMasters_EvoCheckForMon_10:
# 1175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_9
	return

EvoMasters_EvoCheckForMon_11:
# 1177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_10
	return

EvoMasters_EvoCheckForMon_12:
# 1179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_11
	return

EvoMasters_EvoCheckForMon_13:
# 1181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_12
	return

EvoMasters_EvoCheckForMon_14:
# 1183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_13
	return

EvoMasters_EvoCheckForMon_15:
# 1185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_14
	return

EvoMasters_EvoCheckForMon_16:
# 1187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_15
	return

EvoMasters_EvoCheckForMon_17:
# 1189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_16
	return

EvoMasters_EvoCheckForMon_18:
# 1191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_17
	return

EvoMasters_EvoCheckForMon_19:
# 1193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_18
	return

EvoMasters_EvoCheckForMon_20:
# 1195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_19
	return

EvoMasters_EvoCheckForMon_21:
# 1197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_20
	return

EvoMasters_EvoCheckForMon_22:
# 1199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_21
	return

EvoMasters_EvoCheckForMon_23:
# 1201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_22
	return

EvoMasters_EvoCheckForMon_24:
# 1203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_23
	return

EvoMasters_EvoCheckForMon_25:
# 1206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_24
	return

EvoMasters_EvoCheckForMon_26:
# 1208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_25
	return

EvoMasters_EvoCheckForMon_27:
# 1210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_26
	return

EvoMasters_EvoCheckForMon_28:
# 1212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_27
	return

EvoMasters_EvoCheckForMon_29:
# 1214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_28
	return

EvoMasters_EvoCheckForMon_30:
# 1216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_29
	return

EvoMasters_EvoCheckForMon_31:
# 1218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_30
	return

EvoMasters_EvoCheckForMon_32:
# 1220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_31
	return

EvoMasters_EvoCheckForMon_33:
# 1222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_32
	return

EvoMasters_EvoCheckForMon_34:
# 1224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_33
	return

EvoMasters_EvoCheckForMon_35:
# 1226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_34
	return

EvoMasters_EvoCheckForMon_36:
# 1228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_35
	return

EvoMasters_EvoCheckForMon_37:
# 1231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_36
	return

EvoMasters_EvoCheckForMon_38:
# 1234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_37
	return

EvoMasters_EvoCheckForMon_39:
# 1236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_38
	return

EvoMasters_EvoCheckForMon_40:
# 1238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_39
	return

EvoMasters_EvoCheckForMon_41:
# 1240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_40
	return

EvoMasters_EvoCheckForMon_42:
# 1243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_41
	return

EvoMasters_EvoCheckForMon_43:
# 1245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_42
	return

EvoMasters_EvoCheckForMon_44:
# 1247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_43
	return

EvoMasters_EvoCheckForMon_45:
# 1249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_44
	return

EvoMasters_EvoCheckForMon_46:
# 1251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_45
	return

EvoMasters_EvoCheckForMon_47:
# 1253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_46
	return

EvoMasters_EvoCheckForMon_48:
# 1255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_47
	return

EvoMasters_EvoCheckForMon_49:
# 1257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_48
	return

EvoMasters_EvoCheckForMon_50:
# 1259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_49
	return

EvoMasters_EvoCheckForMon_51:
# 1261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_50
	return

EvoMasters_EvoCheckForMon_52:
# 1264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_51
	return

EvoMasters_EvoCheckForMon_53:
# 1267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_52
	return

EvoMasters_EvoCheckForMon_54:
# 1270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_53
	return

EvoMasters_EvoCheckForMon_55:
# 1272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_54
	return

EvoMasters_EvoCheckForMon_56:
# 1274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_55
	return

EvoMasters_EvoCheckForMon_57:
# 1276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_56
	return

EvoMasters_EvoCheckForMon_58:
# 1278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_57
	return

EvoMasters_EvoCheckForMon_59:
# 1280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_58
	return

EvoMasters_EvoCheckForMon_60:
# 1282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_59
	return

EvoMasters_EvoCheckForMon_61:
# 1285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_60
	return

EvoMasters_EvoCheckForMon_62:
# 1287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_61
	return

EvoMasters_EvoCheckForMon_63:
# 1289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_62
	return

EvoMasters_EvoCheckForMon_64:
# 1291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_63
	return

EvoMasters_EvoCheckForMon_65:
# 1293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_64
	return

EvoMasters_EvoCheckForMon_66:
# 1295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_65
	return

EvoMasters_EvoCheckForMon_67:
# 1297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_66
	return

EvoMasters_EvoCheckForMon_68:
# 1299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_67
	return

EvoMasters_EvoCheckForMon_69:
# 1301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_68
	return

EvoMasters_EvoCheckForMon_70:
# 1303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_69
	return

EvoMasters_EvoCheckForMon_71:
# 1305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_70
	return

EvoMasters_EvoCheckForMon_72:
# 1307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_71
	return

EvoMasters_EvoCheckForMon_73:
# 1309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_72
	return

EvoMasters_EvoCheckForMon_74:
# 1311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_73
	return

EvoMasters_EvoCheckForMon_75:
# 1313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_74
	return

EvoMasters_EvoCheckForMon_76:
# 1315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_75
	return

EvoMasters_EvoCheckForMon_77:
# 1317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_76
	return

EvoMasters_EvoCheckForMon_78:
# 1319 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_77
	return

EvoMasters_EvoCheckForMon_79:
# 1321 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_78
	return

EvoMasters_EvoCheckForMon_80:
# 1323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_79
	return

EvoMasters_EvoCheckForMon_81:
# 1325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_80
	return

EvoMasters_EvoCheckForMon_82:
# 1327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_81
	return

EvoMasters_EvoCheckForMon_83:
# 1329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_82
	return

EvoMasters_EvoCheckForMon_84:
# 1331 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_83
	return

EvoMasters_EvoCheckForMon_85:
# 1333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_84
	return

EvoMasters_EvoCheckForMon_86:
# 1335 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_85
	return

EvoMasters_EvoCheckForMon_87:
# 1337 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_86
	return

EvoMasters_EvoCheckForMon_88:
# 1339 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_87
	return

EvoMasters_EvoCheckForMon_89:
# 1341 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_88
	return

EvoMasters_EvoCheckForMon_90:
# 1343 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_89
	return

EvoMasters_EvoCheckForMon_91:
# 1345 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_90
	return

EvoMasters_EvoCheckForMon_92:
# 1347 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_91
	return

EvoMasters_EvoCheckForMon_93:
# 1349 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_92
	return

EvoMasters_EvoCheckForMon_94:
# 1351 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_93
	return

EvoMasters_EvoCheckForMon_95:
# 1353 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_94
	return

EvoMasters_EvoCheckForMon_96:
# 1355 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_95
	return

EvoMasters_EvoCheckForMon_97:
# 1357 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_96
	return

EvoMasters_EvoCheckForMon_98:
# 1359 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_97
	return

EvoMasters_EvoCheckForMon_99:
# 1361 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_98
	return

EvoMasters_EvoCheckForMon_100:
# 1363 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_99
	return

EvoMasters_EvoCheckForMon_101:
# 1365 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_100
	return

EvoMasters_EvoCheckForMon_102:
# 1367 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_101
	return

EvoMasters_EvoCheckForMon_103:
# 1369 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_102
	return

EvoMasters_EvoCheckForMon_104:
# 1371 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_103
	return

EvoMasters_EvoCheckForMon_105:
# 1373 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_104
	return

EvoMasters_EvoCheckForMon_106:
# 1375 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_105
	return

EvoMasters_EvoCheckForMon_107:
# 1377 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_106
	return

EvoMasters_EvoCheckForMon_108:
# 1379 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_107
	return

EvoMasters_EvoCheckForMon_109:
# 1381 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_108
	return

EvoMasters_EvoCheckForMon_110:
# 1383 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_109
	return

EvoMasters_EvoCheckForMon_111:
# 1385 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_110
	return

EvoMasters_EvoCheckForMon_112:
# 1387 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_111
	return

EvoMasters_EvoCheckForMon_113:
# 1389 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_112
	return

EvoMasters_EvoCheckForMon_114:
# 1391 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_113
	return

EvoMasters_EvoCheckForMon_115:
# 1393 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_114
	return

EvoMasters_EvoCheckForMon_116:
# 1396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_115
	return

EvoMasters_EvoCheckForMon_117:
# 1398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_116
	return

EvoMasters_EvoCheckForMon_118:
# 1400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_117
	return

EvoMasters_EvoCheckForMon_119:
# 1402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_118
	return

EvoMasters_EvoCheckForMon_120:
# 1404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_119
	return

EvoMasters_EvoCheckForMon_121:
# 1406 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_120
	return

EvoMasters_EvoCheckForMon_122:
# 1408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_121
	return

EvoMasters_EvoCheckForMon_123:
# 1410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_122
	return

EvoMasters_EvoCheckForMon_124:
# 1412 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_123
	return

EvoMasters_EvoCheckForMon_125:
# 1414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_124
	return

EvoMasters_EvoCheckForMon_126:
# 1416 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_125
	return

EvoMasters_EvoCheckForMon_127:
# 1418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_126
	return

EvoMasters_EvoCheckForMon_128:
# 1420 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_127
	return

EvoMasters_EvoCheckForMon_129:
# 1422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_128
	return

EvoMasters_EvoCheckForMon_130:
# 1424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_129
	return

EvoMasters_EvoCheckForMon_131:
# 1426 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_130
	return

EvoMasters_EvoCheckForMon_132:
# 1428 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_131
	return

EvoMasters_EvoCheckForMon_133:
# 1430 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_132
	return

EvoMasters_EvoCheckForMon_134:
# 1432 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_133
	return

EvoMasters_EvoCheckForMon_135:
# 1434 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_134
	return

EvoMasters_EvoCheckForMon_136:
# 1436 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_135
	return

EvoMasters_EvoCheckForMon_137:
# 1438 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_136
	return

EvoMasters_EvoCheckForMon_138:
# 1440 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_137
	return

EvoMasters_EvoCheckForMon_139:
# 1442 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_138
	return

EvoMasters_EvoCheckForMon_140:
# 1444 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_139
	return

EvoMasters_EvoCheckForMon_141:
# 1446 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_140
	return

EvoMasters_EvoCheckForMon_142:
# 1448 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_141
	return

EvoMasters_EvoCheckForMon_143:
# 1450 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_142
	return

EvoMasters_EvoCheckForMon_144:
# 1452 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_143
	return

EvoMasters_EvoCheckForMon_145:
# 1454 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_144
	return

EvoMasters_EvoCheckForMon_146:
# 1456 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_145
	return

EvoMasters_EvoCheckForMon_147:
# 1458 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_146
	return

EvoMasters_EvoCheckForMon_148:
# 1461 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_147
	return

EvoMasters_EvoCheckForMon_149:
# 1463 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_148
	return

EvoMasters_EvoCheckForMon_150:
# 1465 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_149
	return

EvoMasters_EvoCheckForMon_151:
# 1467 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_150
	return

EvoMasters_EvoCheckForMon_152:
# 1469 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_151
	return

EvoMasters_EvoCheckForMon_153:
# 1471 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_152
	return

EvoMasters_EvoCheckForMon_154:
# 1473 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_153
	return

EvoMasters_EvoCheckForMon_155:
# 1475 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_154
	return

EvoMasters_EvoCheckForMon_156:
# 1477 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_155
	return

EvoMasters_EvoCheckForMon_157:
# 1479 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_156
	return

EvoMasters_EvoCheckForMon_158:
# 1481 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_157
	return

EvoMasters_EvoCheckForMon_159:
# 1483 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_158
	return

EvoMasters_EvoCheckForMon_160:
# 1485 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_159
	return

EvoMasters_EvoCheckForMon_161:
# 1487 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_160
	return

EvoMasters_EvoCheckForMon_162:
# 1489 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_161
	return

EvoMasters_EvoCheckForMon_163:
# 1491 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_162
	return

EvoMasters_EvoCheckForMon_164:
# 1493 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_163
	return

EvoMasters_EvoCheckForMon_165:
# 1495 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_164
	return

EvoMasters_EvoCheckForMon_166:
# 1497 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_165
	return

EvoMasters_EvoCheckForMon_167:
# 1499 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_166
	return

EvoMasters_EvoCheckForMon_168:
# 1501 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_167
	return

EvoMasters_EvoCheckForMon_169:
# 1503 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_168
	return

EvoMasters_EvoCheckForMon_170:
# 1505 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_169
	return

EvoMasters_EvoCheckForMon_171:
# 1507 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_170
	return

EvoMasters_EvoCheckForMon_172:
# 1509 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_171
	return

EvoMasters_EvoCheckForMon_173:
# 1511 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_172
	return

EvoMasters_EvoCheckForMon_174:
# 1513 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_173
	return

EvoMasters_EvoCheckForMon_175:
# 1515 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_174
	return

EvoMasters_EvoCheckForMon_176:
# 1517 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_175
	return

EvoMasters_EvoCheckForMon_177:
# 1519 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_176
	return

EvoMasters_EvoCheckForMon_178:
# 1521 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_177
	return

EvoMasters_EvoCheckForMon_179:
# 1523 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_178
	return

EvoMasters_EvoCheckForMon_180:
# 1525 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_179
	return

EvoMasters_EvoCheckForMon_181:
# 1527 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_180
	return

EvoMasters_EvoCheckForMon_182:
# 1529 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_181
	return

EvoMasters_EvoCheckForMon_183:
# 1531 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_182
	return

EvoMasters_EvoCheckForMon_184:
# 1533 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_183
	return

EvoMasters_EvoCheckForMon_185:
# 1535 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_184
	return

EvoMasters_EvoCheckForMon_186:
# 1537 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_185
	return

EvoMasters_EvoCheckForMon_187:
# 1539 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_186
	return

EvoMasters_EvoCheckForMon_188:
# 1541 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_187
	return

EvoMasters_EvoCheckForMon_189:
# 1543 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_188
	return

EvoMasters_EvoCheckForMon_190:
# 1545 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_189
	return

EvoMasters_EvoCheckForMon_191:
# 1547 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_190
	return

EvoMasters_EvoCheckForMon_192:
# 1549 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_191
	return

EvoMasters_EvoCheckForMon_193:
# 1551 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_192
	return

EvoMasters_EvoCheckForMon_194:
# 1553 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_193
	return

EvoMasters_EvoCheckForMon_195:
# 1555 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_194
	return

EvoMasters_EvoCheckForMon_196:
# 1557 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_195
	return

EvoMasters_EvoCheckForMon_197:
# 1559 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_196
	return

EvoMasters_EvoCheckForMon_198:
# 1561 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_197
	return

EvoMasters_EvoCheckForMon_199:
# 1563 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_198
	return

EvoMasters_EvoCheckForMon_200:
# 1565 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_199
	return

EvoMasters_EvoCheckForMon_201:
# 1567 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_200
	return

EvoMasters_EvoCheckForMon_202:
# 1569 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_201
	return

EvoMasters_EvoCheckForMon_203:
# 1571 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_202
	return

EvoMasters_EvoCheckForMon_204:
# 1573 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_203
	return

EvoMasters_EvoCheckForMon_205:
# 1575 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_204
	return

EvoMasters_EvoCheckForMon_206:
# 1577 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_205
	return

EvoMasters_EvoCheckForMon_207:
# 1579 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_206
	return

EvoMasters_EvoCheckForMon_208:
# 1581 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_207
	return

EvoMasters_EvoCheckForMon_209:
# 1583 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_208
	return

EvoMasters_EvoCheckForMon_210:
# 1585 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_209
	return

EvoMasters_EvoCheckForMon_211:
# 1587 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_210
	return

EvoMasters_EvoCheckForMon_212:
# 1589 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_211
	return

EvoMasters_EvoCheckForMon_213:
# 1591 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_212
	return

EvoMasters_EvoCheckForMon_214:
# 1593 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_213
	return

EvoMasters_EvoCheckForMon_215:
# 1595 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_214
	return

EvoMasters_EvoCheckForMon_216:
# 1597 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_215
	return

EvoMasters_EvoCheckForMon_217:
# 1599 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_216
	return

EvoMasters_EvoCheckForMon_218:
# 1603 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_217
	return

EvoMasters_EvoCheckForMon_219:
# 1605 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_218
	return

EvoMasters_EvoCheckForMon_220:
# 1607 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_219
	return

EvoMasters_EvoCheckForMon_221:
# 1609 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_220
	return

EvoMasters_EvoCheckForMon_222:
# 1612 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_221
	return

EvoMasters_EvoCheckForMon_223:
# 1614 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_222
	return

EvoMasters_EvoCheckForMon_224:
# 1616 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_223
	return

EvoMasters_EvoCheckForMon_225:
# 1618 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_224
	return

EvoMasters_EvoCheckForMon_226:
# 1620 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_225
	return

EvoMasters_EvoCheckForMon_227:
# 1622 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_226
	return

EvoMasters_EvoCheckForMon_228:
# 1624 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_227
	return

EvoMasters_EvoCheckForMon_229:
# 1626 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_228
	return

EvoMasters_EvoCheckForMon_230:
# 1628 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_229
	return

EvoMasters_EvoCheckForMon_231:
# 1630 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_230
	return

EvoMasters_EvoCheckForMon_232:
# 1632 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_231
	return

EvoMasters_EvoCheckForMon_233:
# 1634 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_232
	return

EvoMasters_EvoCheckForMon_234:
# 1636 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_233
	return

EvoMasters_EvoCheckForMon_235:
# 1638 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_234
	return

EvoMasters_EvoCheckForMon_236:
# 1640 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_235
	return

EvoMasters_EvoCheckForMon_237:
# 1642 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_236
	return

EvoMasters_EvoCheckForMon_238:
# 1644 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_237
	return

EvoMasters_EvoCheckForMon_239:
# 1646 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_238
	return

EvoMasters_EvoCheckForMon_240:
# 1648 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_239
	return

EvoMasters_EvoCheckForMon_241:
# 1650 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_240
	return

EvoMasters_EvoCheckForMon_242:
# 1652 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_241
	return

EvoMasters_EvoCheckForMon_243:
# 1654 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_242
	return

EvoMasters_EvoCheckForMon_244:
# 1656 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_243
	return

EvoMasters_EvoCheckForMon_245:
# 1675 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_244
	return

EvoMasters_EvoCheckForMon_246:
# 1677 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_245
	return

EvoMasters_EvoCheckForMon_247:
# 1679 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_246
	return

EvoMasters_EvoCheckForMon_248:
# 1681 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_247
	return

EvoMasters_EvoCheckForMon_249:
# 1683 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_248
	return

EvoMasters_EvoCheckForMon_250:
# 1685 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_249
	return

EvoMasters_EvoCheckForMon_251:
# 1687 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_250
	return

EvoMasters_EvoCheckForMon_252:
# 1689 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_251
	return

EvoMasters_EvoCheckForMon_253:
# 1691 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_252
	return

EvoMasters_EvoCheckForMon_254:
# 1693 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_253
	return

EvoMasters_EvoCheckForMon_255:
# 1695 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_254
	return

EvoMasters_EvoCheckForMon_256:
# 1697 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_255
	return

EvoMasters_EvoCheckForMon_257:
# 1699 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_256
	return

EvoMasters_EvoCheckForMon_258:
# 1701 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_257
	return

EvoMasters_EvoCheckForMon_259:
# 1703 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_258
	return

EvoMasters_EvoCheckForMon_260:
# 1705 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_259
	return

EvoMasters_EvoCheckForMon_261:
# 1707 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_260
	return

EvoMasters_EvoCheckForMon_262:
# 1709 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_261
	return

EvoMasters_EvoCheckForMon_263:
# 1711 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_262
	return

EvoMasters_EvoCheckForMon_264:
# 1713 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_263
	return

EvoMasters_EvoCheckForMon_265:
# 1715 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_264
	return

EvoMasters_EvoCheckForMon_266:
# 1717 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_265
	return

EvoMasters_EvoCheckForMon_267:
# 1719 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_266
	return

EvoMasters_EvoCheckForMon_268:
# 1721 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_267
	return

EvoMasters_EvoCheckForMon_269:
# 1723 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_268
	return

EvoMasters_EvoCheckForMon_270:
# 1725 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_269
	return

EvoMasters_EvoCheckForMon_271:
# 1727 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_270
	return

EvoMasters_EvoCheckForMon_272:
# 1729 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_271
	return

EvoMasters_EvoCheckForMon_273:
# 1731 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_272
	return

EvoMasters_EvoCheckForMon_274:
# 1733 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_273
	return

EvoMasters_EvoCheckForMon_275:
# 1735 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_274
	return

EvoMasters_EvoCheckForMon_276:
# 1737 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_275
	return

EvoMasters_EvoCheckForMon_277:
# 1739 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_276
	return

EvoMasters_EvoCheckForMon_278:
# 1741 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_277
	return

EvoMasters_EvoCheckForMon_279:
# 1743 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_278
	return

EvoMasters_EvoCheckForMon_280:
# 1745 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_279
	return

EvoMasters_EvoCheckForMon_281:
# 1747 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_280
	return

EvoMasters_EvoCheckForMon_282:
# 1749 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_281
	return

EvoMasters_EvoCheckForMon_283:
# 1751 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_282
	return

EvoMasters_EvoCheckForMon_284:
# 1753 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_283
	return

EvoMasters_EvoCheckForMon_285:
# 1755 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_284
	return

EvoMasters_EvoCheckForMon_286:
# 1758 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_285
	return

EvoMasters_EvoCheckForMon_287:
# 1760 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_286
	return

EvoMasters_EvoCheckForMon_288:
# 1762 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_287
	return

EvoMasters_EvoCheckForMon_289:
# 1764 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_288
	return

EvoMasters_EvoCheckForMon_290:
# 1766 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_289
	return

EvoMasters_EvoCheckForMon_291:
# 1768 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_290
	return

EvoMasters_EvoCheckForMon_292:
# 1770 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_291
	return

EvoMasters_EvoCheckForMon_293:
# 1772 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_292
	return

EvoMasters_EvoCheckForMon_294:
# 1774 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_293
	return

EvoMasters_EvoCheckForMon_295:
# 1779 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_294
	return

EvoMasters_EvoCheckForMon_296:
# 1781 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_295
	return

EvoMasters_EvoCheckForMon_297:
# 1783 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_296
	return

EvoMasters_EvoCheckForMon_298:
# 1785 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_297
	return

EvoMasters_EvoCheckForMon_299:
# 1787 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_298
	return

EvoMasters_EvoCheckForMon_300:
# 1789 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_299
	return

EvoMasters_EvoCheckForMon_301:
# 1791 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_300
	return

EvoMasters_EvoCheckForMon_302:
# 1793 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_301
	return

EvoMasters_EvoCheckForMon_303:
# 1795 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_302
	return

EvoMasters_EvoCheckForMon_304:
# 1797 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_303
	return

EvoMasters_EvoCheckForMon_305:
# 1799 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_304
	return

EvoMasters_EvoCheckForMon_306:
# 1801 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_305
	return

EvoMasters_EvoCheckForMon_307:
# 1803 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_306
	return

EvoMasters_EvoCheckForMon_308:
# 1805 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_307
	return

EvoMasters_EvoCheckForMon_309:
# 1807 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_308
	return

EvoMasters_EvoCheckForMon_310:
# 1809 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_309
	return

EvoMasters_EvoCheckForMon_311:
# 1811 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_310
	return

EvoMasters_EvoCheckForMon_312:
# 1813 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_311
	return

EvoMasters_EvoCheckForMon_313:
# 1815 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_312
	return

EvoMasters_EvoCheckForMon_314:
# 1817 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_313
	return

EvoMasters_EvoCheckForMon_315:
# 1819 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_314
	return

EvoMasters_EvoCheckForMon_316:
# 1821 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_315
	return

EvoMasters_EvoCheckForMon_317:
# 1823 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_316
	return

EvoMasters_EvoCheckForMon_318:
# 1825 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_317
	return

EvoMasters_EvoCheckForMon_319:
# 1827 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_318
	return

EvoMasters_EvoCheckForMon_320:
# 1829 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_319
	return

EvoMasters_EvoCheckForMon_321:
# 1831 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_320
	return

EvoMasters_EvoCheckForMon_322:
# 1833 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_321
	return

EvoMasters_EvoCheckForMon_323:
# 1835 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_322
	return

EvoMasters_EvoCheckForMon_324:
# 1837 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_323
	return

EvoMasters_EvoCheckForMon_325:
# 1839 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_324
	return

EvoMasters_EvoCheckForMon_326:
# 1841 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_325
	return

EvoMasters_EvoCheckForMon_327:
# 1843 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_326
	return

EvoMasters_EvoCheckForMon_328:
# 1845 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_327
	return

EvoMasters_EvoCheckForMon_329:
# 1847 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_328
	return

EvoMasters_EvoCheckForMon_330:
# 1868 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_329
	return

EvoMasters_EvoCheckForMon_331:
# 1889 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_330
	return

EvoMasters_EvoCheckForMon_332:
# 1891 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_331
	return

EvoMasters_EvoCheckForMon_333:
# 1897 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_332
	return

EvoMasters_EvoCheckForMon_334:
# 1903 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_333
	return

EvoMasters_EvoCheckForMon_335:
# 1905 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_334
	return

EvoMasters_EvoCheckForMon_336:
# 1907 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_335
	return

EvoMasters_EvoCheckForMon_337:
# 1909 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_336
	return

EvoMasters_EvoCheckForMon_338:
# 1911 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_337
	return

EvoMasters_EvoCheckForMon_339:
# 1913 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_338
	return

EvoMasters_EvoCheckForMon_340:
# 1915 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_339
	return

EvoMasters_EvoCheckForMon_341:
# 1917 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_340
	return

EvoMasters_EvoCheckForMon_342:
# 1919 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_341
	return

EvoMasters_EvoCheckForMon_343:
# 1921 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_342
	return

EvoMasters_EvoCheckForMon_344:
# 1923 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_343
	return

EvoMasters_EvoCheckForMon_345:
# 1925 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_344
	return

EvoMasters_EvoCheckForMon_346:
# 1927 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_345
	return

EvoMasters_EvoCheckForMon_347:
# 1929 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_346
	return

EvoMasters_EvoCheckForMon_348:
# 1931 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_347
	return

EvoMasters_EvoCheckForMon_349:
# 1933 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_348
	return

EvoMasters_EvoCheckForMon_350:
# 1936 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_349
	return

EvoMasters_EvoCheckForMon_351:
# 1938 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_350
	return

EvoMasters_EvoCheckForMon_352:
# 1943 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_351
	return

EvoMasters_EvoCheckForMon_353:
# 1945 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_352
	return

EvoMasters_EvoCheckForMon_354:
# 1947 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_353
	return

EvoMasters_EvoCheckForMon_355:
# 1949 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_354
	return

EvoMasters_EvoCheckForMon_356:
# 1951 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_355
	return

EvoMasters_EvoCheckForMon_357:
# 1953 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_356
	return

EvoMasters_EvoCheckForMon_358:
# 1955 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_357
	return

EvoMasters_EvoCheckForMon_359:
# 1957 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_358
	return

EvoMasters_EvoCheckForMon_360:
# 1959 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_359
	return

EvoMasters_EvoCheckForMon_361:
# 1961 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_360
	return

EvoMasters_EvoCheckForMon_362:
# 1963 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_361
	return

EvoMasters_EvoCheckForMon_363:
# 1965 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_362
	return

EvoMasters_EvoCheckForMon_364:
# 1967 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_363
	return

EvoMasters_EvoCheckForMon_365:
# 1969 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_364
	return

EvoMasters_EvoCheckForMon_366:
# 1971 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_365
	return

EvoMasters_EvoCheckForMon_367:
# 1973 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_366
	return

EvoMasters_EvoCheckForMon_368:
# 1975 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_367
	return

EvoMasters_EvoCheckForMon_369:
# 1977 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_368
	return

EvoMasters_EvoCheckForMon_370:
# 1979 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_369
	return

EvoMasters_EvoCheckForMon_371:
# 1981 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_370
	return

EvoMasters_EvoCheckForMon_372:
# 1983 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_371
	return

EvoMasters_EvoCheckForMon_373:
# 1985 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_372
	return

EvoMasters_EvoCheckForMon_374:
# 1987 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_373
	return

EvoMasters_EvoCheckForMon_375:
# 1989 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_374
	return

EvoMasters_EvoCheckForMon_376:
# 1991 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_375
	return

EvoMasters_EvoCheckForMon_377:
# 1993 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_376
	return

EvoMasters_EvoCheckForMon_378:
# 1995 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_377
	return

EvoMasters_EvoCheckForMon_379:
# 1997 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_378
	return

EvoMasters_EvoCheckForMon_380:
# 1999 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_379
	return

EvoMasters_EvoCheckForMon_381:
# 2001 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_380
	return

EvoMasters_EvoCheckForMon_382:
# 2003 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_381
	return

EvoMasters_EvoCheckForMon_383:
# 2005 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_382
	return

EvoMasters_EvoCheckForMon_384:
# 2007 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_383
	return

EvoMasters_EvoCheckForMon_385:
# 2009 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_384
	return

EvoMasters_EvoCheckForMon_386:
# 2011 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_385
	return

EvoMasters_EvoCheckForMon_387:
# 2013 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_386
	return

EvoMasters_EvoCheckForMon_388:
# 2015 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_387
	return

EvoMasters_EvoCheckForMon_389:
# 2017 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_388
	return

EvoMasters_EvoCheckForMon_390:
# 2019 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_389
	return

EvoMasters_EvoCheckForMon_391:
# 2021 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_390
	return

EvoMasters_EvoCheckForMon_392:
# 2023 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_391
	return

EvoMasters_EvoCheckForMon_393:
# 2025 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_392
	return

EvoMasters_EvoCheckForMon_394:
# 2027 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_393
	return

EvoMasters_EvoCheckForMon_395:
# 2029 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_394
	return

EvoMasters_EvoCheckForMon_396:
# 2031 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_395
	return

EvoMasters_EvoCheckForMon_397:
# 2033 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_396
	return

EvoMasters_EvoCheckForMon_398:
# 2035 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_397
	return

EvoMasters_EvoCheckForMon_399:
# 2037 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_398
	return

EvoMasters_EvoCheckForMon_400:
# 2039 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_399
	return

EvoMasters_EvoCheckForMon_401:
# 2041 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_400
	return

EvoMasters_EvoCheckForMon_402:
# 2043 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_401
	return

EvoMasters_EvoCheckForMon_403:
# 2045 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_402
	return

EvoMasters_EvoCheckForMon_404:
# 2047 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_403
	return

EvoMasters_EvoCheckForMon_405:
# 2049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_404
	return

EvoMasters_EvoCheckForMon_406:
# 2051 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_405
	return

EvoMasters_EvoCheckForMon_407:
# 2053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_406
	return

EvoMasters_EvoCheckForMon_408:
# 2055 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_407
	return

EvoMasters_EvoCheckForMon_409:
# 2057 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_408
	return

EvoMasters_EvoCheckForMon_410:
# 2059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_409
	return

EvoMasters_EvoCheckForMon_411:
# 2061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_410
	return

EvoMasters_EvoCheckForMon_412:
# 2063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_411
	return

EvoMasters_EvoCheckForMon_413:
# 2065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_412
	return

EvoMasters_EvoCheckForMon_414:
# 2067 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_413
	return

EvoMasters_EvoCheckForMon_415:
# 2069 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_414
	return

EvoMasters_EvoCheckForMon_416:
# 2071 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_415
	return

EvoMasters_EvoCheckForMon_417:
# 2073 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_416
	return

EvoMasters_EvoCheckForMon_418:
# 2075 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_417
	return

EvoMasters_EvoCheckForMon_419:
# 2077 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_418
	return

EvoMasters_EvoCheckForMon_420:
# 2079 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_419
	return

EvoMasters_EvoCheckForMon_421:
# 2081 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_420
	return

EvoMasters_EvoCheckForMon_422:
# 2085 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_421
	return

EvoMasters_EvoCheckForMon_423:
# 2087 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_422
	return

EvoMasters_EvoCheckForMon_424:
# 2089 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_423
	return

EvoMasters_EvoCheckForMon_425:
# 2091 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_424
	return

EvoMasters_EvoCheckForMon_426:
# 2093 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_425
	return

EvoMasters_EvoCheckForMon_427:
# 2095 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_426
	return

EvoMasters_EvoCheckForMon_428:
# 2097 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_427
	return

EvoMasters_EvoCheckForMon_429:
# 2099 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_428
	return

EvoMasters_EvoCheckForMon_430:
# 2101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_429
	return

EvoMasters_EvoCheckForMon_431:
# 2103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_430
	return

EvoMasters_EvoCheckForMon_432:
# 2105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_431
	return

EvoMasters_EvoCheckForMon_433:
# 2107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_432
	return

EvoMasters_EvoCheckForMon_434:
# 2109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_427
	return

EvoMasters_EvoCheckForMon_435:
# 2111 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_433
	return

EvoMasters_EvoCheckForMon_436:
# 2113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_434
	return

EvoMasters_EvoCheckForMon_437:
# 2129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_435
	return

EvoMasters_EvoCheckForMon_438:
# 2131 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_436
	return

EvoMasters_EvoCheckForMon_439:
# 2133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_437
	return

EvoMasters_EvoCheckForMon_440:
# 2135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_438
	return

EvoMasters_EvoCheckForMon_441:
# 2137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_439
	return

EvoMasters_EvoCheckForMon_442:
# 2139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_440
	return

EvoMasters_EvoCheckForMon_443:
# 2141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_441
	return

EvoMasters_EvoCheckForMon_444:
# 2143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_442
	return

EvoMasters_EvoCheckForMon_445:
# 2145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_443
	return

EvoMasters_EvoCheckForMon_446:
# 2147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_444
	return

EvoMasters_EvoCheckForMon_447:
# 2149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_445
	return

EvoMasters_EvoCheckForMon_448:
# 2151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_446
	return

EvoMasters_EvoCheckForMon_449:
# 2153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_447
	return

EvoMasters_EvoCheckForMon_450:
# 2155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_448
	return

EvoMasters_EvoCheckForMon_451:
# 2157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_449
	return

EvoMasters_EvoCheckForMon_452:
# 2159 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_450
	return

EvoMasters_EvoCheckForMon_453:
# 2161 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_451
	return

EvoMasters_EvoCheckForMon_454:
# 2163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_452
	return

EvoMasters_EvoCheckForMon_455:
# 2165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_453
	return

EvoMasters_EvoCheckForMon_456:
# 2167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_454
	return

EvoMasters_EvoCheckForMon_457:
# 2169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_455
	return

EvoMasters_EvoCheckForMon_458:
# 2171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_456
	return

EvoMasters_EvoCheckForMon_459:
# 2173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_457
	return

EvoMasters_EvoCheckForMon_460:
# 2175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_458
	return

EvoMasters_EvoCheckForMon_461:
# 2177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_459
	return

EvoMasters_EvoCheckForMon_462:
# 2179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_460
	return

EvoMasters_EvoCheckForMon_463:
# 2181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_461
	return

EvoMasters_EvoCheckForMon_464:
# 2183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_462
	return

EvoMasters_EvoCheckForMon_465:
# 2185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_463
	return

EvoMasters_EvoCheckForMon_466:
# 2187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_464
	return

EvoMasters_EvoCheckForMon_467:
# 2189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_465
	return

EvoMasters_EvoCheckForMon_468:
# 2191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_466
	return

EvoMasters_EvoCheckForMon_469:
# 2193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_467
	return

EvoMasters_EvoCheckForMon_470:
# 2195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_468
	return

EvoMasters_EvoCheckForMon_471:
# 2197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_469
	return

EvoMasters_EvoCheckForMon_472:
# 2199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_470
	return

EvoMasters_EvoCheckForMon_473:
# 2201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_471
	return

EvoMasters_EvoCheckForMon_474:
# 2203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_472
	return

EvoMasters_EvoCheckForMon_475:
# 2205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_473
	return

EvoMasters_EvoCheckForMon_476:
# 2207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_474
	return

EvoMasters_EvoCheckForMon_477:
# 2228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_475
	return

EvoMasters_EvoCheckForMon_478:
# 2230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_476
	return

EvoMasters_EvoCheckForMon_479:
# 2232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_477
	return

EvoMasters_EvoCheckForMon_480:
# 2234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_478
	return

EvoMasters_EvoCheckForMon_481:
# 2236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_479
	return

EvoMasters_EvoCheckForMon_482:
# 2238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_480
	return

EvoMasters_EvoCheckForMon_483:
# 2240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_481
	return

EvoMasters_EvoCheckForMon_484:
# 2242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_482
	return


	.align 2
# 2248 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
MODHeadquarters_EvoShop:
# 2249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 2250 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_STONE
# 2251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 2252 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 2253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_STONE
# 2254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SUN_STONE
# 2255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MOON_STONE
# 2256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 2257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 2258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 2259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 2260 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TART_APPLE
# 2261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 2262 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 2263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 2264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 2265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 2266 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UPGRADE
# 2267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PROTECTOR
# 2268 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 2269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 2270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 2271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 2272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 2273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 2274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SACHET
# 2275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 2276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 2277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 2278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 2279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 2280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 2281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 2282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 2283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EVERSTONE
# 2284 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 2285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 2286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 2287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 2288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 2289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 2290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 2291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 2292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 2293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 2294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 2295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 2296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 2297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 2298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 2299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 2300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 2301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 2302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 2303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 2304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 2305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 2306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 2307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 2308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 2309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 2310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 2311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 2312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 2313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 2314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 2315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 2316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 2317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 2318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 2319 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 2320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 2321 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 2322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 2323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 2324 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 2325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 2326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 2327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 2328 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_ORB
# 2329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLUE_ORB
# 2330 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 2331 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 2332 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 2333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 2334 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 2335 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 2336 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 2337 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 2338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GENGARITE
# 2339 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 2340 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINSIRITE
# 2341 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 2342 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 2343 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 2344 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 2345 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 2346 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEELIXITE
# 2347 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCIZORITE
# 2348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HERACRONITE
# 2349 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 2350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 2351 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 2352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 2353 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 2354 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SABLENITE
# 2355 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAWILITE
# 2356 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AGGRONITE
# 2357 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 2358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MANECTITE
# 2359 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 2360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 2361 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 2362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BANETTITE
# 2363 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ABSOLITE
# 2364 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GLALITITE
# 2365 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 2366 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 2367 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIASITE
# 2368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIOSITE
# 2369 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 2370 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 2371 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALLADITE
# 2372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUDINITE
# 2373 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DIANCITE
# 2374 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEEK
# 2375 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 2376 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 2377 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 2378 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRACIDEA
# 2379 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
# 2380 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DNA_SPLICERS
# 2381 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZYGARDE_CUBE
# 2382 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISON_BOTTLE
# 2383 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_SOLARIZER
# 2384 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_LUNARIZER
# 2385 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REINS_OF_UNITY
# 2386 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 2387 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GIMMIGHOUL_COIN
# 2388 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 2389 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 2390 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 2391 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 2392 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ADAMANT_CRYSTAL
# 2393 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRISEOUS_CORE
# 2394 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUSTROUS_GLOBE
# 2395 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 2396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 2397 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 2398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 2399 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 2400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 2401 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 2402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 2403 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 2404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 2405 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

# 2408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
EvoMasters_MoveOutOfTheWay:
# 2409 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	walk_left
# 2410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	face_right
	step_end

# 2413 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
EvoMasters_MoveBackToSpot:
# 2414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	walk_right
# 2415 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	face_down
	step_end

# 2418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
EvoMasters_MoveUp:
# 2419 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	walk_up
	step_end

# 2422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
EvoMasters_MoveDown:
# 2423 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	walk_down
# 2424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	face_up
	step_end

EvoMasters_ExitSimulation_Text_0:
# 30 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hope the simulation was usefull for\n"
	.string "you! Please come again if you ever need\l"
	.string "something else simulated!$"

EvoMAsters_ObjectScript_Masseuse_Text_0:
# 42 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hello, I'm the Soothing Sister!\p"
	.string "I can help your pokemon relax and feel\n"
	.string "very affectioness towards you!\p"
	.string "...\p"
	.string "In a good way...\p"
	.string "Many pokemon require some love to\n"
	.string "evolve them. If you use my service I can\l"
	.string "help you speed up the process and allow\l"
	.string "them to evolve almost instantly! Still,\l"
	.string "I would require sovme compensation if\l"
	.string "you don't mind. A 1000 good for you?$"

EvoMAsters_ObjectScript_Masseuse_Text_1:
# 47 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party?\p"
	.string "alright, for this once I allow you to use\n"
	.string "my services for free if you want.$"

EvoMAsters_ObjectScript_Masseuse_Text_2:
# 51 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome!\p"
	.string "Want to give a pokemon a massage for\n"
	.string "1000?$"

EvoMAsters_ObjectScript_Masseuse_Text_3:
# 62 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but it seems like you don't\n"
	.string "have enough money for my services...$"

EvoMAsters_ObjectScript_Masseuse_Text_4:
# 68 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Alright, do come back if you require my\n"
	.string "services!$"

EvoMasters_CheckFreeMassageEevee_Text_0:
# 75 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Should I give your Eevee a massage?$"

EvoMasters_CheckDeclineMassage_Text_0:
# 89 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "No? I'm only giving you this offer once,\n"
	.string "so I would suggest you think about it\l"
	.string "again\p"
	.string "I mean... It's free!\n"
	.string "Why wouldn't you want it?\p"
	.string "So are you absolutely sure you don't\n"
	.string "want the free massage for your Eevee?$"

EvoMasters_CheckDeclineMassage_Text_1:
# 92 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "OK, that is your decision!\p"
	.string "If you change your mind about giving\n"
	.string "your Eevee a massage do come back to\l"
	.string "me.\p"
	.string "Though... I'll require you to pay the fee\n"
	.string "next time.$"

EvoMasters_CheckDeclineMassage_Text_2:
# 96 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "That is what I thought!\n"
	.string "So...$"

EvoMasters_GiveMassage_Text_0:
# 103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Which Pokemon would you like me to give\n"
	.string "a massage?$"

EvoMasters_GiveMassage_Text_1:
# 110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "please come again if you want me to give\n"
	.string "one of your pokemon a massage$"

EvoMasters_GiveMassage_Text_2:
# 114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "My work is done, they should now\n"
	.string "consider you a close friend.\p"
	.string "Now for my payment$"

EvoMasters_GiveMassage_Text_3:
# 118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Thank you for your patronage, may your\n"
	.string "friendship grow ever more!$"

EvoMasters_GiveMassageEevee_Text_0:
# 126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please present me your Eevee$"

EvoMasters_GiveMassageEevee_Text_1:
# 136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "My work is done, they should now\n"
	.string "consider you a close friend.\p"
	.string "This was a one time offer though, so I\n"
	.string "do expect some payment in return next\l"
	.string "time!\p"
	.string "Hope to see you again!$"

EvoMasters_ObjectScript_Simulator_Text_0:
# 148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Good day, I'm the Simulation Sister!\p"
	.string "Some pokemon require specific\n"
	.string "circumanstance to evolve them into\l"
	.string "their new form.\l"
	.string "Thanks to Team MOD state of the art\l"
	.string "technologicial progression, we have\l"
	.string "created this room to simulate these\l"
	.string "environments. Just answer some\l"
	.string "questions and I will simulate the\l"
	.string "environment you need to evolve your\l"
	.string "pokemon. You'll also get one rare candy\l"
	.string "on the house to evolve your pokemon.\l"
	.string "Setting up the simulation is not easy,\l"
	.string "so we will require 2500 to simulate your\l"
	.string "required environment.$"

EvoMasters_ObjectScript_Simulator_Text_1:
# 151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Well I probably can let you\l"
	.string "experience this simulation just once,\l"
	.string "but I would recommend you talk to my\l"
	.string "other sisters first before you take me\l"
	.string "on that offer.\p"
	.string "Would you like to try out this\n"
	.string "simulation for free?$"

EvoMasters_ObjectScript_Simulator_Text_2:
# 158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please talk to me again before you move\n"
	.string "on if you want to use my services for\l"
	.string "free, otherwise I'll require some\l"
	.string "compensation.$"

EvoMasters_ObjectScript_Simulator_Text_3:
# 165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Would you require us to simulate a\n"
	.string "specific environment for you?\l"
	.string "We have a processing fee of 2500 to do\l"
	.string "so.$"

EvoMasters_ObjectScript_Simulator_Text_4:
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but if we want to make sure\n"
	.string "that the Simulation keeps working as\l"
	.string "intended, we do require you to pay the\l"
	.string "full fee.$"

EvoMasters_ObjectScript_Simulator_Text_5:
# 180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you need something simulated, you\n"
	.string "know where to find me!$"

EvoMasters_StartSimulation_Text_0:
# 187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Alright, before I can start up the\n"
	.string "simulation, I first need to know a\l"
	.string "couple of things from you:$"

EvoMasters_StartSimulation_Text_1:
# 188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "What time of day would you like the\n"
	.string "simulation to have?$"

EvoMasters_StartSimulation_Text_2:
# 206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Changed your mind? If you need\n"
	.string "something simulated, you know where to\l"
	.string "find me!$"

EvoMasters_StartSimulation_Text_3:
# 209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Understood!\p"
	.string "Do note that the time might not be\n"
	.string "clear while you're inside the simulation,\l"
	.string "but I can garuantee you that the\l"
	.string "pokemon will notice the time of day!\p"
	.string "Alright next question.$"

EvoMasters_StartSimulation_Text_4:
# 210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "What kind of weather do you require in\n"
	.string "the simulation?$"

EvoMasters_StartSimulation_Text_5:
# 219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Alright, we're all set!\p"
	.string "Now first, my fee.$"

EvoMasters_StartSimulation_Text_6:
# 225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Now, as promised, one free Rare Candy as\n"
	.string "thanks for using our services:$"

EvoMasters_StartSimulation_Text_7:
# 227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "And lastly, you're free to enter the\n"
	.string "simulation. You can walk out any time\l"
	.string "you're done what you came to do.$"

EvoMasters_ObjectScript_EvoChecker_Text_0:
# 320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hi, I'm the Strategic Sister!\p"
	.string "I know of every pokemon what\n"
	.string "requirements they need to evolve, so if\l"
	.string "you're ever unsure how you can evolve a\l"
	.string "certain pokemon, please come to me\p"
	.string "Even if you think you know how they\n"
	.string "evolve, you might be surprised to learn\l"
	.string "that some will have different or\l"
	.string "multiple ways to evolve!\p"
	.string "Don't worry about pay, I don't require\n"
	.string "anything for my services. You can\l"
	.string "always come to me to check on what you\l"
	.string "need to do to evolve your pokemon.$"

EvoMasters_ObjectScript_EvoChecker_Text_1:
# 322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Do you want to know how you need to\n"
	.string "evolve one of your pokemon?$"

EvoMasters_ObjectScript_EvoChecker_Text_2:
# 329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You don't need my knowledge?\n"
	.string "that is fine!\l"
	.string "Come back and find me if you ever need\l"
	.string "to know how to evolve a pokemon!$"

EvoMasters_ObjectScript_EvoChecker_Text_3:
# 338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you ever want to know, you know\n"
	.string "where to find me!$"

EvoMasters_ObjectScript_MartEmployer_Text_0:
# 348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome, I'm the Sell-Out Sister!\p"
	.string "Maybe a bit of an unfortunate name, but\n"
	.string "you can come to me if you need any\l"
	.string "evolution items.$"

EvoMasters_ObjectScript_MartEmployer_Text_1:
# 352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Because it is your first time\l"
	.string "visiting us, please allow me to give you\l"
	.string "some stuff. For this once, it will be on\l"
	.string "the house!$"

EvoMasters_ObjectScript_MartEmployer_Text_2:
# 358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hope that it will help you in your journey!$"

EvoMasters_ObjectScript_MartEmployer_Text_3:
# 360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is there anything I could help you\n"
	.string "with?$"

EvoMasters_ObjectScript_MartEmployer_Text_4:
# 362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please come again!$"

EvoMasters_EvoCheckForMon_Text_0:
# 368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Now let's see...$"

EvoMasters_EvoCheckForMon_Text_1:
# 372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "hm... this should not have happened...$"

EvoMasters_EvoCheckForMon_Text_2:
# 889 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hm... This pokemon seems to be in peak\n"
	.string "condition!$"

EvoMasters_EvoCheckForMon_Text_3:
# 1038 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? It seems like this pokemon doesn't\n"
	.string "evolve at all!$"

EvoMasters_EvoCheckForMon_Text_4:
# 1049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that an Ultra beast? I'm sorry but\n"
	.string "I'm not that familiar with their\l"
	.string "evolutions. Though, I have never seen\l"
	.string "them evovle though!$"

EvoMasters_EvoCheckForMon_Text_5:
# 1144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "WOW, a legendary pokemon!\n"
	.string "I'm pretty sure these ones don't evolve\l"
	.string "at all!$"

EvoMasters_EvoCheckForMon_Text_6:
# 1169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "How did you manage to get your hands on\n"
	.string "a mythical pokemon?!\l"
	.string "Don't look at me, as far as I know these\l"
	.string "definetly don't evolve!$"

EvoMasters_EvoCheckForMon_Text_7:
# 1171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bulbasaur to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_8:
# 1173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ivasaur to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_9:
# 1175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Charmander to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_10:
# 1177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Charmeleon to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_11:
# 1179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Squirtle to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_12:
# 1181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wartortle to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_13:
# 1183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Caterpie to level\n"
	.string "7 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_14:
# 1185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Metapod to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_15:
# 1187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Weedle to level 7\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_16:
# 1189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Kakuna to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_17:
# 1191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pidgey to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_18:
# 1193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pidgeotto to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_19:
# 1195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rattata to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_20:
# 1197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spearow to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_21:
# 1199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ekans to level 22\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_22:
# 1201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pickachu can evolve into two\n"
	.string "different forms.\p"
	.string "You can give them a Thunder Stone to\n"
	.string "evolve them normally or you can give\l"
	.string "them an Electrizer if you want to\l"
	.string "evolve them in a special form.$"

EvoMasters_EvoCheckForMon_Text_23:
# 1203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sandshrew to\n"
	.string "level 22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_24:
# 1206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nidoran to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_25:
# 1208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nidorina needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_26:
# 1210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nidorino needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_27:
# 1212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Clefairy needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_28:
# 1214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Vulpix needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_29:
# 1216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Jigglypuff needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_30:
# 1218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zubat to level 22\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_31:
# 1220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Golbat will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_32:
# 1222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Oddish to level\n"
	.string "21 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_33:
# 1224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Gloom can evolve into two\n"
	.string "different forms.\p"
	.string "You can either give them a Leaf Stone\n"
	.string "or a Sun Stone to evolve.$"

EvoMasters_EvoCheckForMon_Text_34:
# 1226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Paras to level 24\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_35:
# 1228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Venonat to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_36:
# 1231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Diglett to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_37:
# 1234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Meowth to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_38:
# 1236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Psyduck to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_39:
# 1238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mankey to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_40:
# 1240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Primeape needs to use the move\n"
	.string "Rage fist 20 times in order to evolve\l"
	.string "them\p"
	.string "...\p"
	.string "What?\n"
	.string "I'm serious!$"

EvoMasters_EvoCheckForMon_Text_41:
# 1243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Growlithe needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_42:
# 1245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Poliwag to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_43:
# 1247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Poliwirl can evolve into two\n"
	.string "different forms.\p"
	.string "You can either give them a Water Stone\n"
	.string "or a Kings Rock to evolve them.$"

EvoMasters_EvoCheckForMon_Text_44:
# 1249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Abra to level 16\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_45:
# 1251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Kadabra needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_46:
# 1253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Machop to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_47:
# 1255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Machoke needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_48:
# 1257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bellsprout to\n"
	.string "level 21 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_49:
# 1259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Weepingbell needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_50:
# 1261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tentacool to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_51:
# 1264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Geodude to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_52:
# 1267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Graveler needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_53:
# 1270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Ponyta needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_54:
# 1272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Slowpoke to\n"
	.string "level 37 to evolve them.\p"
	.string "Alternatively you can also give them a\n"
	.string "Kings Rock to evolve them.$"

EvoMasters_EvoCheckForMon_Text_55:
# 1274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Magnemite to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_56:
# 1276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Magneton needs a Thunder Stonder\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_57:
# 1278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Farfetched need to hit 3 critical\n"
	.string "hits in the same fight to evolve them.\p"
	.string "JUST KIDDING!\p"
	.string "He will evolve after hitting one critical\n"
	.string "hit!$"

EvoMasters_EvoCheckForMon_Text_58:
# 1280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Doduo to level 31\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_59:
# 1282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Seel to level 34\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_60:
# 1285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grimer to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_61:
# 1287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Shellder needs a Water Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_62:
# 1289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gastly to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_63:
# 1291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Haunter needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_64:
# 1293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Onix needs a Metal Coat to evolve.$"

EvoMasters_EvoCheckForMon_Text_65:
# 1295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drowzee to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_66:
# 1297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Krabby to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_67:
# 1299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Voltorb to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_68:
# 1301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Execute can evolve into two\n"
	.string "different forms.\p"
	.string "You can give them a Leaf Stone to\n"
	.string "evolve them normally or you can give\l"
	.string "them a Dragon Fang if you want to\l"
	.string "evolve them into their special form.$"

EvoMasters_EvoCheckForMon_Text_69:
# 1303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your cubone to level\n"
	.string "28 to evolve them.\p"
	.string "Alternatively, you can give them a\n"
	.string "Magmarizer to evolve them as well.$"

EvoMasters_EvoCheckForMon_Text_70:
# 1305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Lickitung needs to learn Rollout in\n"
	.string "order to evolve them.\p"
	.string "I believe he learns this around level 6.$"

EvoMasters_EvoCheckForMon_Text_71:
# 1307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Koffing to level\n"
	.string "35 to evolve them.\p"
	.string "Alternatively, you can give them a\n"
	.string "Reaper Cloth to evolve them.$"

EvoMasters_EvoCheckForMon_Text_72:
# 1309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rhyhorn to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_73:
# 1311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Rhydon needs a Protector to\n"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_74:
# 1313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Chansey will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_75:
# 1315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Tangela needs to learn Ancient\n"
	.string "Power in order to evolve them.\p"
	.string "I believe he learns this around level 24$"

EvoMasters_EvoCheckForMon_Text_76:
# 1317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Horsea to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_77:
# 1319 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Seadra needs a Dragon Scale to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_78:
# 1321 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Goldeen to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_79:
# 1323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Staryu needs a Water Stone to\n"
	.string "evolve$"

EvoMasters_EvoCheckForMon_Text_80:
# 1325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Scyther can evolve into two different\n"
	.string "forms. You can either give them either a\l"
	.string "Metal Coat or a Black Augurite to\l"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_81:
# 1327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Electabuzz needs an Electirizer to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_82:
# 1329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Magmag needs a Magmarizer to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_83:
# 1331 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Magikarp to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_84:
# 1333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Now this...\p"
	.string "This one is interesting!\p"
	.string "Do you want them to become a Water\n"
	.string "type? Give them a Water stone!\l"
	.string "An Electric type? Thunder Stone!\l"
	.string "A Fire type? Fire Stone!\l"
	.string "A Grass type? Leaf Stone!\l"
	.string "An Ice Type? Ice Stone!\p"
	.string "But that is not all!\p"
	.string "talk to my sister or create a natural\n"
	.string "bond with them naturally. If they\l"
	.string "consider you a close friend they will\l"
	.string "either evolve into a Dark type during\l"
	.string "the night or Psychic type during the\l"
	.string "day.\l"
	.string "Or, if they already know a Fairy Type\l"
	.string "move, they will turn into a Fairy Type!\p"
	.string "You have endless choices with this one,\n"
	.string "so choose wisely!$"

EvoMasters_EvoCheckForMon_Text_85:
# 1335 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Porygon needs an Upgrade to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_86:
# 1337 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Omanyte to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_87:
# 1339 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Kabuto to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_88:
# 1341 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dratini to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_89:
# 1343 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dragonair to\n"
	.string "level 55 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_90:
# 1345 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chikorita to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_91:
# 1347 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bayleef to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_92:
# 1349 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cyndaquil to\n"
	.string "level 14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_93:
# 1351 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Quilava can evolve into two\n"
	.string "different forms.\p"
	.string "You can train them to level 36 to evolve\n"
	.string "them normally, or you can give them a\l"
	.string "Reaper Cloth to evolve them in their\l"
	.string "special form.$"

EvoMasters_EvoCheckForMon_Text_94:
# 1353 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Totodile to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_95:
# 1355 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Croconaw to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_96:
# 1357 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sentret to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_97:
# 1359 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hoothoot to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_98:
# 1361 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ledyba to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_99:
# 1363 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spinarak to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_100:
# 1365 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chinchou to\n"
	.string "level 27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_101:
# 1367 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pichu will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_102:
# 1369 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Cleffa will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_103:
# 1371 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Igglybuff will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_104:
# 1373 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Togepi will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_105:
# 1375 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Togetic needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_106:
# 1377 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Natu to level 25\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_107:
# 1379 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mareep to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_108:
# 1381 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Flaaffy to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_109:
# 1383 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Marill to level 18\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_110:
# 1385 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hoppip to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_111:
# 1387 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skiploom to level\n"
	.string "27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_112:
# 1389 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Aipom needs to learn Double Hit in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 32.$"

EvoMasters_EvoCheckForMon_Text_113:
# 1391 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sunkern needs a Sun Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_114:
# 1393 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Yanma needs to learn Ancient\n"
	.string "Power in order to evolve them.\p"
	.string "I believe they learn this at level 33.$"

EvoMasters_EvoCheckForMon_Text_115:
# 1396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wooper to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_116:
# 1398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Murkow needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_117:
# 1400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Misdreavus needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_118:
# 1402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Girafarig needs to learn Twin Beam\n"
	.string "in order to evolve them.\p"
	.string "I believe they learn this at level 32.$"

EvoMasters_EvoCheckForMon_Text_119:
# 1404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pineco to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_120:
# 1406 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dunsparce needs to learn Hyper\n"
	.string "Drill in order to evolve them.\p"
	.string "I believe they learn this at level 32.$"

EvoMasters_EvoCheckForMon_Text_121:
# 1408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Gligar needs a Razor Fang at night\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_122:
# 1410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Snubbull to level\n"
	.string "23 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_123:
# 1412 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sneasel needs a Razor Claw at\n"
	.string "night to evolve.$"

EvoMasters_EvoCheckForMon_Text_124:
# 1414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Teddiursa to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_125:
# 1416 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Ursaring can evolve into two\n"
	.string "different forms. You can give them\l"
	.string "either a Peat Block or Reaper Cloth at\l"
	.string "night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_126:
# 1418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Slugma to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_127:
# 1420 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Swinub to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_128:
# 1422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Piloswine needs to learn Ancient\n"
	.string "Power in order to evolve them.\p"
	.string "Hm... I believe it should have already\n"
	.string "learned that by now...$"

EvoMasters_EvoCheckForMon_Text_129:
# 1424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Remoraid to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_130:
# 1426 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Houndour to\n"
	.string "level 24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_131:
# 1428 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Phanpy to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_132:
# 1430 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Porygon2 needs a Dubious Disc to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_133:
# 1432 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Stantler needs to use the move\n"
	.string "Psyshiled Bash 20 times in order to\l"
	.string "evolve them\p"
	.string "...\p"
	.string "What?\n"
	.string "I'm serious.$"

EvoMasters_EvoCheckForMon_Text_134:
# 1434 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tyrogue to level\n"
	.string "20 to evolve them.\p"
	.string "They actually can evolve into three\n"
	.string "different forms based on their stats.\p"
	.string "They have one form if their Attack is\n"
	.string "higher as their Defense, one form if\l"
	.string "their Defense is higher than their\l"
	.string "Defense and one form if their Defense\l"
	.string "and Attack are equal.\p"
	.string "Maybe the general store next door has\n"
	.string "some items if you want your Tyrogue to\l"
	.string "evolve into a specific one!$"

EvoMasters_EvoCheckForMon_Text_135:
# 1436 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Smoochum to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_136:
# 1438 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Elekid to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_137:
# 1440 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Magby to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_138:
# 1442 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Larvitar to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_139:
# 1444 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pupitar to level\n"
	.string "55 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_140:
# 1446 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Treecko to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_141:
# 1448 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grovyle to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_142:
# 1450 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Torchic to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_143:
# 1452 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Combusken to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_144:
# 1454 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mudkip to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_145:
# 1456 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your MarshTomp to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_146:
# 1458 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Poochyena to\n"
	.string "level 18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_147:
# 1461 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zigzagoon to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_148:
# 1463 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wurmple to level\n"
	.string "7 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_149:
# 1465 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Silcoon to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_150:
# 1467 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cascoon to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_151:
# 1469 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lotad to level 14\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_152:
# 1471 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Lombre needs a Water Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_153:
# 1473 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Seedot to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_154:
# 1475 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nuzleaf needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_155:
# 1477 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Taillow to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_156:
# 1479 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wingull to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_157:
# 1481 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ralts to level 20\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_158:
# 1483 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Kirlia can evolve into two\n"
	.string "different forms. You can either train it\l"
	.string "to level 30 or, if it is a male, you can\l"
	.string "give it a Dawn Stone to evolve them.$"

EvoMasters_EvoCheckForMon_Text_159:
# 1485 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Surskit to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_160:
# 1487 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shroomish to\n"
	.string "level 23 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_161:
# 1489 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Slakoth to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_162:
# 1491 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vigoroth to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_163:
# 1493 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nincada to level\n"
	.string "20 to evolve them.\p"
	.string "I also heard a rumor that if you have an\n"
	.string "empty spot left in your party a second\l"
	.string "pokemon will appear after they have\l"
	.string "evolved!$"

EvoMasters_EvoCheckForMon_Text_164:
# 1495 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Whismur to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_165:
# 1497 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Loudred to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_166:
# 1499 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Makhuita to\n"
	.string "level 24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_167:
# 1501 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Azurill will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_168:
# 1503 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nosepass needs a Thunder Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_169:
# 1505 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Skitty needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_170:
# 1507 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Aron to level 32\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_171:
# 1509 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lairon to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_172:
# 1511 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Meditite to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_173:
# 1513 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Electrike to\n"
	.string "level 26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_174:
# 1515 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Roselia needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_175:
# 1517 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gulpin to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_176:
# 1519 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Carvanha to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_177:
# 1521 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wailmer to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_178:
# 1523 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Numel to level 33\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_179:
# 1525 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spoink to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_180:
# 1527 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Trapinch to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_181:
# 1529 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vibrava to level\n"
	.string "45 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_182:
# 1531 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cacnea to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_183:
# 1533 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Swablu to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_184:
# 1535 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Barboach to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_185:
# 1537 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Corphish to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_186:
# 1539 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Baltoy to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_187:
# 1541 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lileep to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_188:
# 1543 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Anorith to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_189:
# 1545 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to make your Feedbas feel\n"
	.string "beautifull by feeding it poke blocks,\l"
	.string "then it'll evolve on its own.\p"
	.string "Just joking, you just need to give it a\n"
	.string "Prism Scale to evolve it.$"

EvoMasters_EvoCheckForMon_Text_190:
# 1547 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shuppet to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_191:
# 1549 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Duskull to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_192:
# 1551 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dusclops needs a Reaper Cloth to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_193:
# 1553 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wynaut to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_194:
# 1555 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Snorunt can evolve into two\n"
	.string "different forms.\p"
	.string "You can either train them to level 42 or,\n"
	.string "if they are female, give them a Dawn\l"
	.string "Stone to evolve.$"

EvoMasters_EvoCheckForMon_Text_195:
# 1557 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spheal to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_196:
# 1559 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sealeo to level\n"
	.string "44 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_197:
# 1561 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Clamperl can evolve into two\n"
	.string "different forms.\p"
	.string "You can give it either a Deep Sea Tooth\n"
	.string "or a Deep Sea Scale to evolve.$"

EvoMasters_EvoCheckForMon_Text_198:
# 1563 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bagon to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_199:
# 1565 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shelgon to level\n"
	.string "50 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_200:
# 1567 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Beldum to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_201:
# 1569 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Metang to level\n"
	.string "45 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_202:
# 1571 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Turtwig to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_203:
# 1573 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grotle to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_204:
# 1575 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chimcar to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_205:
# 1577 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Monferno to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_206:
# 1579 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Piplup to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_207:
# 1581 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Prinplup to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_208:
# 1583 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Starley to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_209:
# 1585 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Staravia to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_210:
# 1587 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bidoof to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_211:
# 1589 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Kricketot to\n"
	.string "level 10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_212:
# 1591 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shinx to level 15\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_213:
# 1593 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Luxio to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_214:
# 1595 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Budew will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_215:
# 1597 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cranidos to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_216:
# 1599 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shieldon to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_217:
# 1603 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Burmy to level 20\n"
	.string "to evolve them.\p"
	.string "I heard btw that the male and female\n"
	.string "species evolve into different pokemon!$"

EvoMasters_EvoCheckForMon_Text_218:
# 1605 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Combee, if it is a\n"
	.string "female, to level 21 to evolve them.\p"
	.string "If you have a male Combee than I'm\n"
	.string "sorry to dissapoint you, but that one\l"
	.string "does not evolve...$"

EvoMasters_EvoCheckForMon_Text_219:
# 1607 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Buizel to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_220:
# 1609 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cherubi to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_221:
# 1612 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shellos to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_222:
# 1614 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drifloon to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_223:
# 1616 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Buneary will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_224:
# 1618 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Glameow to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_225:
# 1620 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Chingling will evolve naturally\n"
	.string "after you create a bond with them at\l"
	.string "night.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_226:
# 1622 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Stunky to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_227:
# 1624 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bronzor to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_228:
# 1626 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Bonsly needs to learn Mimic in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 16.$"

EvoMasters_EvoCheckForMon_Text_229:
# 1628 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Mime Jr will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_230:
# 1630 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Happiny will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_231:
# 1632 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gible to level 24\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_232:
# 1634 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gabite to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_233:
# 1636 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Munchlax will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_234:
# 1638 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Riolu will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_235:
# 1640 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hippopotas to\n"
	.string "level 34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_236:
# 1642 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skorupi to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_237:
# 1644 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Croagunk to\n"
	.string "level 37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_238:
# 1646 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Finneon to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_239:
# 1648 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Mantyke will evolve if you have a\n"
	.string "Remoraid in your party.\p"
	.string "...\p"
	.string "What? I'm serious!$"

EvoMasters_EvoCheckForMon_Text_240:
# 1650 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Snover to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_241:
# 1652 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? It seems like this pokemon doesn't\n"
	.string "evolve at all!\p"
	.string "hm... I do believe one of my sisters has\n"
	.string "something that could change his form\l"
	.string "though...$"

EvoMasters_EvoCheckForMon_Text_242:
# 1654 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "How did you manage to get your hands on\n"
	.string "a mythical pokemon?!\l"
	.string "Don't look at me, as far as I know these\l"
	.string "definetly don't evolve!\p"
	.string "...\p"
	.string "What do you mean you got it from\n"
	.string "breeding a Manaphy?\p"
	.string "Don't look at me I have no idea how it\n"
	.string "would evolve into another Manaphy!$"

EvoMasters_EvoCheckForMon_Text_243:
# 1656 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "How did you manage to get your hands on\n"
	.string "a mythical pokemon?!\l"
	.string "Don't look at me, as far as I know these\l"
	.string "definetly don't evolve!\p"
	.string "Though, I did hear it is the only\n"
	.string "breedable mythical pokemon...$"

EvoMasters_EvoCheckForMon_Text_244:
# 1675 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Isn't God perfect as he is? I don't\n"
	.string "think we need to concern us about an\l"
	.string "evolution of God.$"

EvoMasters_EvoCheckForMon_Text_245:
# 1677 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Snivy to level 17\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_246:
# 1679 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Servine to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_247:
# 1681 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tepig to level 17\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_248:
# 1683 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pignite to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_249:
# 1685 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Oshawott to\n"
	.string "level 17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_250:
# 1687 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dewott can evolve into two\n"
	.string "different forms. You can train them to\l"
	.string "level 36 to evolve them normally, or you\l"
	.string "can give them a Dubious Disc to evolve\l"
	.string "them into their special form.$"

EvoMasters_EvoCheckForMon_Text_251:
# 1689 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Patrat to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_252:
# 1691 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lillipup to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_253:
# 1693 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Herdier to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_254:
# 1695 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Purrloin to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_255:
# 1697 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pansage needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_256:
# 1699 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pansear needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_257:
# 1701 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Panpour needs a Water Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_258:
# 1703 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Munna needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_259:
# 1705 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pidove to level\n"
	.string "21 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_260:
# 1707 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tranquill to\n"
	.string "level 32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_261:
# 1709 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Blitzle to level\n"
	.string "27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_262:
# 1711 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Roggenrola to\n"
	.string "level 25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_263:
# 1713 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Boldore needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_264:
# 1715 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Woobat will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_265:
# 1717 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dilbur to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_266:
# 1719 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Timburr to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_267:
# 1721 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Gurdurr needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_268:
# 1723 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tympole to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_269:
# 1725 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Palpitoad to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_270:
# 1727 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sewaddle to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_271:
# 1729 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Swadloon will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_272:
# 1731 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Venipede to\n"
	.string "level 22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_273:
# 1733 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Whirlipede to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_274:
# 1735 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Cottonee needs a Sun Stone to\n"
	.string "evolve$"

EvoMasters_EvoCheckForMon_Text_275:
# 1737 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Petilil can transform into two\n"
	.string "different forms.\p"
	.string "You can give it either a Sun Stone or a\n"
	.string "Shiny Stone to evolve them.$"

EvoMasters_EvoCheckForMon_Text_276:
# 1739 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sandile to level\n"
	.string "29 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_277:
# 1741 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Krokorok to\n"
	.string "level 40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_278:
# 1743 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Darumaka to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_279:
# 1745 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dwebble to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_280:
# 1747 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Scraggy to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_281:
# 1749 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Yamask to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_282:
# 1751 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tirtouga to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_283:
# 1753 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Archen to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_284:
# 1755 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Trubbish to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_285:
# 1758 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zorua to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_286:
# 1760 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Minccino needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_287:
# 1762 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gothita to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_288:
# 1764 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gothorita to\n"
	.string "level 41 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_289:
# 1766 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Solosis to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_290:
# 1768 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Duosion to level\n"
	.string "41 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_291:
# 1770 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ducklett to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_292:
# 1772 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vanillite to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_293:
# 1774 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vanillish to\n"
	.string "level 47 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_294:
# 1779 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Deerling to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_295:
# 1781 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Karrablast will evolve if you have\n"
	.string "either a Shelmet or Accelgor in your\l"
	.string "party.$"

EvoMasters_EvoCheckForMon_Text_296:
# 1783 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Foongus to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_297:
# 1785 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Frillish to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_298:
# 1787 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Joltik to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_299:
# 1789 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ferroseed to\n"
	.string "level 40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_300:
# 1791 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Klink to level 38\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_301:
# 1793 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Klang to level 49\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_302:
# 1795 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tynamo to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_303:
# 1797 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Eelektrik needs a Thunder Stone\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_304:
# 1799 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Elgyem to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_305:
# 1801 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Litwick to level\n"
	.string "41 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_306:
# 1803 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Lampent needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_307:
# 1805 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Axew to level 38\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_308:
# 1807 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fraxure to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_309:
# 1809 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cubchoo to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_310:
# 1811 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Shelmet will evolve if you have\n"
	.string "either a Karrablast or an Escavalier in\l"
	.string "your party.$"

EvoMasters_EvoCheckForMon_Text_311:
# 1813 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mienfoo to level\n"
	.string "50 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_312:
# 1815 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Golett to level\n"
	.string "43 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_313:
# 1817 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pawniard to level\n"
	.string "52 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_314:
# 1819 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Bisharp needs a Leader Crest to\n"
	.string "evolve it.$"

EvoMasters_EvoCheckForMon_Text_315:
# 1821 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Rufflet can evolve into two\n"
	.string "different forms.\p"
	.string "You can either train them to level 54 to\n"
	.string "evolve them normally, or you can give\l"
	.string "them a Prism Scale to evolve them into\l"
	.string "their special form$"

EvoMasters_EvoCheckForMon_Text_316:
# 1823 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vullaby to level\n"
	.string "54 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_317:
# 1825 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Deino to level 50\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_318:
# 1827 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zweilous to level\n"
	.string "64 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_319:
# 1829 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Larvesta to\n"
	.string "level 59 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_320:
# 1831 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chespin to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_321:
# 1833 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Quilladin to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_322:
# 1835 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fennekin to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_323:
# 1837 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Braixen to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_324:
# 1839 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Froakie to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_325:
# 1841 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Frogadier to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_326:
# 1843 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bunnelby to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_327:
# 1845 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fletchling to\n"
	.string "level 17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_328:
# 1847 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fletchinder to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_329:
# 1868 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Scatterbug to\n"
	.string "level 9 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_330:
# 1889 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spewpa to level\n"
	.string "12 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_331:
# 1891 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Litleo to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_332:
# 1897 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Flabebe to level\n"
	.string "19 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_333:
# 1903 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Floette needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_334:
# 1905 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skiddo to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_335:
# 1907 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pancham to level\n"
	.string "32, while having a dark type on your\l"
	.string "team to evolve them.\p"
	.string "...\p"
	.string "What? I'm serious!$"

EvoMasters_EvoCheckForMon_Text_336:
# 1909 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Espurr to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_337:
# 1911 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Honedge to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_338:
# 1913 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Doublade needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_339:
# 1915 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Spritzee needs a Sachet to evolve.$"

EvoMasters_EvoCheckForMon_Text_340:
# 1917 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Swirlix needs a Whipped Dream to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_341:
# 1919 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Inkay to level 30\n"
	.string "and hold your console upside down to\l"
	.string "evolve them.\p"
	.string "Just kidding, you only need to train it\n"
	.string "to level 30.$"

EvoMasters_EvoCheckForMon_Text_342:
# 1921 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Binacle to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_343:
# 1923 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skrelp to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_344:
# 1925 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Clauncher to\n"
	.string "level 37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_345:
# 1927 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Helioptile needs a Sun Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_346:
# 1929 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tyrunt to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_347:
# 1931 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Amaura to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_348:
# 1933 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Goomy can evolve into two\n"
	.string "different forms. You can either train\l"
	.string "them to level 40 to evolve them normally\l"
	.string "or you can give them a Metal Alloy to\l"
	.string "evolve them in their special form.$"

EvoMasters_EvoCheckForMon_Text_349:
# 1936 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sliggoo to level\n"
	.string "50 while them is raining or it's foggy to\l"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_350:
# 1938 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Phantump needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_351:
# 1943 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pumpkaboo needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_352:
# 1945 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Bergmite can evolve into two\n"
	.string "different forms. You can train them to\l"
	.string "level 37 to evolve them normally or you\l"
	.string "can give them a Razor Claw to evolve\l"
	.string "them into their special form.$"

EvoMasters_EvoCheckForMon_Text_353:
# 1947 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Noibat to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_354:
# 1949 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rowlet to level\n"
	.string "17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_355:
# 1951 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dartrix can evolve into two\n"
	.string "different forms. You can train them to\l"
	.string "level 34 to evolve them normally or you\l"
	.string "can give them a Protector to evolve\l"
	.string "them into their special form.$"

EvoMasters_EvoCheckForMon_Text_356:
# 1953 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Litten to level\n"
	.string "17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_357:
# 1955 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Torracat to\n"
	.string "level 34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_358:
# 1957 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Popplio to level\n"
	.string "17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_359:
# 1959 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Brionne to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_360:
# 1961 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pikipek to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_361:
# 1963 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Trumbeak to\n"
	.string "level 28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_362:
# 1965 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Yungoos to level\n"
	.string "20 during the day to evolve them.$"

EvoMasters_EvoCheckForMon_Text_363:
# 1967 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grubbin to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_364:
# 1969 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Charjabug needs a Thunder Stone\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_365:
# 1971 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Crabrawler needs a Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_366:
# 1973 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cutiefly to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_367:
# 1975 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rockruff to\n"
	.string "level 25 to evolve them.\p"
	.string "Depending on the time --morning, dusk\n"
	.string "or night-- it will evolve into a\l"
	.string "different form.$"

EvoMasters_EvoCheckForMon_Text_368:
# 1977 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mareanie to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_369:
# 1979 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mudbray to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_370:
# 1981 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dewpider to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_371:
# 1983 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fomantis to\n"
	.string "level 34 during the day to evolve them.$"

EvoMasters_EvoCheckForMon_Text_372:
# 1985 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Morelull to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_373:
# 1987 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Salandit, if it is\n"
	.string "a female, to level 21 to evolve them.\p"
	.string "If you have a male Combee than I'm\n"
	.string "sorry to dissapoint you, but that one\l"
	.string "does not evolve...$"

EvoMasters_EvoCheckForMon_Text_374:
# 1989 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Stufful to level\n"
	.string "27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_375:
# 1991 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bounsweet to\n"
	.string "level 18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_376:
# 1993 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Steenee needs to learn Stomp in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 28.$"

EvoMasters_EvoCheckForMon_Text_377:
# 1995 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wimpod to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_378:
# 1997 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sandygast to\n"
	.string "level 42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_379:
# 1999 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Type_Null will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_380:
# 2001 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Jango-o to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_381:
# 2003 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hakamo-o to\n"
	.string "level 45 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_382:
# 2005 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that a Legendary pokemon? I\n"
	.string "thought they never evolved, but I would\l"
	.string "swear this little one does at level 43!$"

EvoMasters_EvoCheckForMon_Text_383:
# 2007 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that a Legendary pokemon? I\n"
	.string "thought they never evolved, but I would\l"
	.string "swear this little one does!\p"
	.string "What's more, I believe it can even\n"
	.string "evolve into two different forms.\l"
	.string "One form during the day and another\l"
	.string "during the night.\p"
	.string "For both versions they need to be\n"
	.string "trained to level 53.$"

EvoMasters_EvoCheckForMon_Text_384:
# 2009 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Well if that is not a strange fellow.\p"
	.string "Many people that he can only evolve if\n"
	.string "you have like catch over a 100 versions\l"
	.string "of him, but as far as I can tell you just\l"
	.string "need to level them up to level 40!$"

EvoMasters_EvoCheckForMon_Text_385:
# 2011 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grookey to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_386:
# 2013 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rillaboom to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_387:
# 2015 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Scorbunny to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_388:
# 2017 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Raboot to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_389:
# 2019 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sobble to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_390:
# 2021 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drizzile to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_391:
# 2023 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skwovet to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_392:
# 2025 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rookidee to\n"
	.string "level 18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_393:
# 2027 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Corvisquire to\n"
	.string "level 38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_394:
# 2029 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Blipbug to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_395:
# 2031 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dottler to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_396:
# 2033 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nickit to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_397:
# 2035 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gossifleur to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_398:
# 2037 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wooloo to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_399:
# 2039 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chewtle to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_400:
# 2041 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Yamper to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_401:
# 2043 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rolycoly to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_402:
# 2045 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Carkol to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_403:
# 2047 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Applin can evolve into three\n"
	.string "different forms. You can evolve them\l"
	.string "either with a Tart Apple, Sweet Apple or\l"
	.string "a Syrupy apple.$"

EvoMasters_EvoCheckForMon_Text_404:
# 2049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Silicobra to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_405:
# 2051 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Arrokuda to\n"
	.string "level 26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_406:
# 2053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Toxel to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_407:
# 2055 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sizzilipede to\n"
	.string "level 28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_408:
# 2057 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Clobbopus needs to learn Taunt in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 35.$"

EvoMasters_EvoCheckForMon_Text_409:
# 2059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sinistea needs a Cracked Pot to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_410:
# 2061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hatenna to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_411:
# 2063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hattrem to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_412:
# 2065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Impidimp to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_413:
# 2067 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Morgrem to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_414:
# 2069 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Milcery has.... many forms. I'm still\n"
	.string "working on figuring out how to exactly\l"
	.string "all their evolutions work$"

EvoMasters_EvoCheckForMon_Text_415:
# 2071 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Snom will evolve naturally after\n"
	.string "you create a bond with them at night..\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_416:
# 2073 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cufant to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_417:
# 2075 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Duraludon needs a Metal Alloy to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_418:
# 2077 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dreepy to level\n"
	.string "50 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_419:
# 2079 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drakloak to level\n"
	.string "60 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_420:
# 2081 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that a legendary pokemon? I thought\n"
	.string "they never evolved, but I would swear\l"
	.string "this little one does!\p"
	.string "What's more, I believe it can even\n"
	.string "evolve into two different forms.\l"
	.string "One form during the day and another\l"
	.string "during the night.\p"
	.string "You'll need to give it the Scroll Of\n"
	.string "Darkness or the Scroll Of Waters to\l"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_421:
# 2085 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "WOW, a legendary pokemon!\n"
	.string "I'm pretty sure these ones don't evolve\l"
	.string "at all!\p"
	.string "Though I do believe you can make it\n"
	.string "change form somehow...$"

EvoMasters_EvoCheckForMon_Text_422:
# 2087 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rattata to level\n"
	.string "20 at night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_423:
# 2089 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sanshrew needs a Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_424:
# 2091 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Vulpix needs a Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_425:
# 2093 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Meowth will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_426:
# 2095 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Slowpoke can evolve into two\n"
	.string "different forms.\p"
	.string "You can either give it a Glarica Cuff or\n"
	.string "a Glarica Wreath to evolve them.$"

EvoMasters_EvoCheckForMon_Text_427:
# 2097 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "$"

EvoMasters_EvoCheckForMon_Text_428:
# 2099 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Corsola to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_429:
# 2101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Linoone to level\n"
	.string "35 at night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_430:
# 2103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Darumaka needs an Ice Stone to\n"
	.string "evolve$"

EvoMasters_EvoCheckForMon_Text_431:
# 2105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Yamask needs to take 49 damage\n"
	.string "and then walk under a very specific\l"
	.string "point.\p"
	.string "Just kidding!\p"
	.string "You just need to train the to level 34$"

EvoMasters_EvoCheckForMon_Text_432:
# 2107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Voltorb needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_433:
# 2111 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Qwilfish needs to learn Barb\n"
	.string "Barrage in order to evolve them.\p"
	.string "I believe they learn this at level 16.$"

EvoMasters_EvoCheckForMon_Text_434:
# 2113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sneasel needs a Razor Claw during\n"
	.string "the day to evolve.$"

EvoMasters_EvoCheckForMon_Text_435:
# 2129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pikachu is quite special, it seems\n"
	.string "like your Pikachu can't evolve at all!$"

EvoMasters_EvoCheckForMon_Text_436:
# 2131 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Basculin needs to take 294 recoil\n"
	.string "damage to evolve.\p"
	.string "...\p"
	.string "What? I'm serious!$"

EvoMasters_EvoCheckForMon_Text_437:
# 2133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Floette is quite special, it seems\n"
	.string "like your Floette can't evolve at all!$"

EvoMasters_EvoCheckForMon_Text_438:
# 2135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hm... I'm not sure about this one I'm\n"
	.string "afraid...$"

EvoMasters_EvoCheckForMon_Text_439:
# 2137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sinistea needs a Cracked...\p"
	.string "No wait, this design, is marvelous!\p"
	.string "You'll need a Chipped Pot to evolve this\n"
	.string "one!$"

EvoMasters_EvoCheckForMon_Text_440:
# 2139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sprigatito to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_441:
# 2141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Floragato to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_442:
# 2143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fuecoco to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_443:
# 2145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Crocalor to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_444:
# 2147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Quaxly to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_445:
# 2149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Quaxwell to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_446:
# 2151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lechonk to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_447:
# 2153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tarountula to\n"
	.string "level 15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_448:
# 2155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nymble to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_449:
# 2157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pawmi to level 18\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_450:
# 2159 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pawmo needs a Thunder Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_451:
# 2161 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tandemaus to\n"
	.string "level 25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_452:
# 2163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fidough to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_453:
# 2165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Smoliv to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_454:
# 2167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dolliv to level 35\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_455:
# 2169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nacli to level 24\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_456:
# 2171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Naclstack to\n"
	.string "level 38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_457:
# 2173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Charcadet can evolve into two\n"
	.string "different forms. You can either give\l"
	.string "them an Auspicious Armour or a\l"
	.string "Malicious Armour to evolve them.$"

EvoMasters_EvoCheckForMon_Text_458:
# 2175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Tadbulb needs a Thunder Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_459:
# 2177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wattrel to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_460:
# 2179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Maschiff to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_461:
# 2181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shroodle to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_462:
# 2183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Brablin needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_463:
# 2185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Toadscool to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_464:
# 2187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Capsakid needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_465:
# 2189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Rellor needs a Peat Block to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_466:
# 2191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Flittle to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_467:
# 2193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tinkatink to\n"
	.string "level 24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_468:
# 2195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tinkatuff to\n"
	.string "level 38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_469:
# 2197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wiglett to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_470:
# 2199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Finizen to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_471:
# 2201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Varoom to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_472:
# 2203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Glimmet to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_473:
# 2205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Greavard to\n"
	.string "level 35 at night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_474:
# 2207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Cetoddle needs an Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_475:
# 2228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "What a strange pokemon? I have never\n"
	.string "seen this pokemon before. I don't\l"
	.string "believe it evolves though...$"

EvoMasters_EvoCheckForMon_Text_476:
# 2230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Frigibax to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_477:
# 2232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Articbax to level\n"
	.string "54 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_478:
# 2234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to to collete 999 Gimmighoul\n"
	.string "Coins to evolve your Gimmighoul.\p"
	.string "Just kidding! You can just give it a\n"
	.string "Kings Rock to evolve them.$"

EvoMasters_EvoCheckForMon_Text_479:
# 2236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dipplin needs to learn Dragon\n"
	.string "Cheer in order to evolve them.\p"
	.string "hm... I believe it doesn't learn that by\n"
	.string "himself, but the TM Store further down\l"
	.string "the hall should be able to sell you that\l"
	.string "move.$"

EvoMasters_EvoCheckForMon_Text_480:
# 2238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Poltchageist needs an\n"
	.string "Unremarkable Teacup to evolve.$"

EvoMasters_EvoCheckForMon_Text_481:
# 2240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Polterchageist needs an\n"
	.string "Unremarkable...\p"
	.string "Wait, this design is real! you'll need an\n"
	.string "Masterpiece Teacup to evolve them!$"

EvoMasters_EvoCheckForMon_Text_482:
# 2242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "WOW, a legendary pokemon!\n"
	.string "I'm pretty sure these ones don't evolve\l"
	.string "at all!\p"
	.string "Wait... why does it look like that?$"

EvoMasters_EvoCheckForMon_Text_483:
# 2244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "This pokemon does not evolve$"
