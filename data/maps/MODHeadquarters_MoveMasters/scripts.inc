MODHeadquarters_MoveMasters_MapScripts::
# 2 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MoveMasters_OnTranstion
	.byte 0


MoveMasters_OnTranstion::
# 7 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1110
	goto_if_eq MoveMasters_OnTranstion_2
# 8 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 110
	goto_if_eq MoveMasters_OnTranstion_2
# 8 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1010
	goto_if_eq MoveMasters_OnTranstion_2
# 8 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1100
	goto_if_eq MoveMasters_OnTranstion_2
# 9 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 10
	goto_if_eq MoveMasters_OnTranstion_2
# 9 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 100
	goto_if_eq MoveMasters_OnTranstion_2
# 9 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1000
	goto_if_eq MoveMasters_OnTranstion_2
# 10 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq MoveMasters_OnTranstion_2
MoveMasters_OnTranstion_1:
# 14 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq MoveMasters_OnTranstion_18
	return

MoveMasters_OnTranstion_2:
# 12 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 1
	goto MoveMasters_OnTranstion_1

MoveMasters_OnTranstion_18:
# 16 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return


MoveMasters_ObjectScript_NameRater::
# 22 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 23 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 24 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_NameRater_2
MoveMasters_ObjectScript_NameRater_1:
# 33 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_1, MSGBOX_YESNO
# 35 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_5
# 50 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_3
MoveMasters_ObjectScript_NameRater_4:
# 52 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_NameRater_2:
# 26 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_0
	goto MoveMasters_ObjectScript_NameRater_1

MoveMasters_ObjectScript_NameRater_5:
# 37 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 100
# 38 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_8
# 44 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_2
	goto MoveMasters_ObjectScript_NameRater_4

MoveMasters_ObjectScript_NameRater_8:
# 40 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto MoveMasters_ObjectScript_NameRater_4


MoveMasters_ObjectScript_MoveRememberer::
# 57 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 58 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 59 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveRememberer_2
MoveMasters_ObjectScript_MoveRememberer_1:
# 69 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_1, MSGBOX_YESNO
# 71 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_5
# 90 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_3
MoveMasters_ObjectScript_MoveRememberer_4:
# 92 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveRememberer_2:
# 61 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_0
	goto MoveMasters_ObjectScript_MoveRememberer_1

MoveMasters_ObjectScript_MoveRememberer_5:
# 73 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 500
# 74 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_8
# 80 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_2
	goto MoveMasters_ObjectScript_MoveRememberer_4

MoveMasters_ObjectScript_MoveRememberer_8:
# 76 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto MoveMasters_ObjectScript_MoveRememberer_4


MoveMasters_ObjectScript_MoveDeleter::
# 97 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 98 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 99 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveDeleter_2
MoveMasters_ObjectScript_MoveDeleter_1:
# 106 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_1, MSGBOX_YESNO
# 108 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_5
# 124 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_3
MoveMasters_ObjectScript_MoveDeleter_4:
# 126 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveDeleter_2:
# 101 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_0
	goto MoveMasters_ObjectScript_MoveDeleter_1

MoveMasters_ObjectScript_MoveDeleter_5:
# 110 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 100
# 111 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_8
# 117 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_2
	goto MoveMasters_ObjectScript_MoveDeleter_4

MoveMasters_ObjectScript_MoveDeleter_8:
# 113 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	goto MoveMasters_ObjectScript_MoveDeleter_4


MoveMasters_ObjectScript_EggTutor::
# 130 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 131 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 132 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_EggTutor_2
MoveMasters_ObjectScript_EggTutor_1:
# 140 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_1, MSGBOX_YESNO
# 142 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_EggTutor_5
# 157 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_4
MoveMasters_ObjectScript_EggTutor_4:
# 160 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_EggTutor_2:
# 134 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_0
	goto MoveMasters_ObjectScript_EggTutor_1

MoveMasters_ObjectScript_EggTutor_5:
# 144 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 1000
# 145 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_EggTutor_8
# 151 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_3
	goto MoveMasters_ObjectScript_EggTutor_4

MoveMasters_ObjectScript_EggTutor_8:
# 147 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_2
	goto MoveMasters_ObjectScript_EggTutor_4


MoveMasters_ObjectScript_MoveTutor::
# 164 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 165 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 166 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveTutor_2
MoveMasters_ObjectScript_MoveTutor_1:
# 177 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_1, MSGBOX_YESNO
# 179 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_5
# 194 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_3
MoveMasters_ObjectScript_MoveTutor_4:
# 196 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveTutor_2:
# 168 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_0
	goto MoveMasters_ObjectScript_MoveTutor_1

MoveMasters_ObjectScript_MoveTutor_5:
# 181 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 1000
# 182 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_8
# 188 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_2
	goto MoveMasters_ObjectScript_MoveTutor_4

MoveMasters_ObjectScript_MoveTutor_8:
# 184 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_DecideMove
	goto MoveMasters_ObjectScript_MoveTutor_4


MoveTutor_DecideMove::
# 201 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	message MoveTutor_DecideMove_Text_0
# 202 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	multichoicegrid 10, 0, MULTI_MOVE_TUTOR, 2, 0
# 203 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	closemessage
# 204 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 0, MoveTutor_DecideMove_3
# 209 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 1, MoveTutor_DecideMove_4
# 212 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 2, MoveTutor_DecideMove_5
# 215 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 3, MoveTutor_DecideMove_6
# 218 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 4, MoveTutor_DecideMove_7
# 221 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 5, MoveTutor_DecideMove_8
# 224 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 6, MoveTutor_DecideMove_9
# 227 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 7, MoveTutor_DecideMove_10
# 231 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_1
MoveTutor_DecideMove_1:
# 235 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_2
# 236 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 237 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_DecideMove_12
# 245 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_4
# 247 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	removemoney 1000
# 248 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_5
	return

MoveTutor_DecideMove_3:
# 207 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FRENZY_PLANT
# 208 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_FRENZY_PLANT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_4:
# 210 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BLAST_BURN
# 211 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_BLAST_BURN
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_5:
# 213 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_HYDRO_CANNON
# 214 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_HYDRO_CANNON
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_6:
# 216 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_VOLT_TACKLE
# 217 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_VOLT_TACKLE
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_7:
# 219 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRACO_METEOR
# 220 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_DRACO_METEOR
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_8:
# 222 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRAGON_ASCENT
# 223 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_DRAGON_ASCENT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_9:
# 225 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_RELIC_SONG
# 226 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_RELIC_SONG
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_10:
# 228 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_SECRET_SWORD
# 229 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_SECRET_SWORD
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_12:
# 239 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_3
# 241 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_DecideMove
	return


MoveMasters_ObjectScript_MartEmployer::
# 255 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 256 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 257 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MartEmployer_2
MoveMasters_ObjectScript_MartEmployer_1:
# 264 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_1
# 265 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	switch VAR_BADGE_AMOUNT
# 267 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 0, MoveMasters_ObjectScript_MartEmployer_6
# 269 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 1, MoveMasters_ObjectScript_MartEmployer_7
# 271 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 2, MoveMasters_ObjectScript_MartEmployer_8
# 273 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 3, MoveMasters_ObjectScript_MartEmployer_9
# 275 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 4, MoveMasters_ObjectScript_MartEmployer_10
# 277 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 5, MoveMasters_ObjectScript_MartEmployer_11
# 279 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 6, MoveMasters_ObjectScript_MartEmployer_12
# 281 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 7, MoveMasters_ObjectScript_MartEmployer_13
# 283 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 8, MoveMasters_ObjectScript_MartEmployer_14
# 286 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_2
MoveMasters_ObjectScript_MartEmployer_4:
# 288 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_3
# 289 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MartEmployer_2:
# 259 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_0
	goto MoveMasters_ObjectScript_MartEmployer_1

MoveMasters_ObjectScript_MartEmployer_6:
# 268 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMNoBadges
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_7:
# 270 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMOne
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_8:
# 272 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMTwo
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_9:
# 274 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMThree
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_10:
# 276 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFour
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_11:
# 278 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFive
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_12:
# 280 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSix
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_13:
# 282 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSeven
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_14:
# 284 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMEight
	goto MoveMasters_ObjectScript_MartEmployer_4


	.align 2
# 292 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMNoBadges:
# 293 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 294 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 295 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 296 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 297 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 298 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 299 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 300 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 301 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 302 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 305 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMOne:
# 306 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 307 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 308 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 309 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 310 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 311 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 312 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 313 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 314 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 315 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 316 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 317 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 318 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 319 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 320 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 321 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 322 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 323 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 324 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 325 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 328 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMTwo:
# 329 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 330 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 331 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 332 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 333 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 334 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 335 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 336 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 337 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 338 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 339 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 340 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 341 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 342 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 343 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 344 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 345 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 346 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 347 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 348 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 349 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 350 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 351 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 352 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 353 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 354 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 355 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 356 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 359 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMThree:
# 360 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 361 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 362 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 363 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 364 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 365 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 366 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 367 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 368 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 369 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 370 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 371 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 372 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 373 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 374 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 375 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 376 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 377 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 378 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 379 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 380 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 381 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 382 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 383 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 384 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 385 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 386 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 387 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 388 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 389 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 390 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 391 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 392 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 393 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 396 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFour:
# 397 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 398 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 399 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 400 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 401 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 402 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 403 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 404 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 405 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 406 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 407 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 408 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 409 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 410 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 411 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 412 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 413 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 414 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 415 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 416 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 417 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 418 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 419 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 420 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 421 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 422 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 423 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 424 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 425 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 426 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 427 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 428 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 429 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 430 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 433 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFive:
# 434 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 435 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 436 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 437 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 438 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 439 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 440 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 441 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 442 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 443 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 444 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 445 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 446 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 447 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 448 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 449 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 450 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 451 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 452 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 453 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 454 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 455 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 456 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 457 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 458 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 459 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 460 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 461 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 462 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 463 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 464 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 465 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 466 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 467 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 468 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 469 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 470 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 471 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 472 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 473 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 476 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSix:
# 477 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 478 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 479 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 480 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 481 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 482 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 483 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 484 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 485 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 486 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 487 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 488 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 489 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 490 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 491 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 492 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 493 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 494 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 495 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 496 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 497 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 498 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 499 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 500 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 501 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 502 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 503 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 504 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 505 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 506 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 507 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 508 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 509 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 510 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 511 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 512 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 513 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 514 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 515 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 516 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 517 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 518 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 519 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 520 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 521 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 524 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSeven:
# 525 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 526 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 527 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 528 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 529 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 530 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 531 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 532 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 533 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 534 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 535 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 536 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 537 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 538 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 539 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 540 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 541 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 542 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 543 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 544 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 545 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 546 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 547 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 548 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 549 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 550 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 551 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 552 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 553 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 554 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 555 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 556 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 557 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 558 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 559 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 560 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 561 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 562 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 563 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 564 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 565 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 566 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 567 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 568 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 569 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 570 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 571 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 572 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 573 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 574 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 577 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMEight:
# 578 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 579 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 580 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 581 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 582 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 583 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 584 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 585 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 586 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 587 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 588 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 589 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 590 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 591 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 592 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM15
# 593 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 594 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 595 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 596 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 597 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 598 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 599 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 600 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 601 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 602 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 603 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 604 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 605 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 606 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 607 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 608 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 609 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 610 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 611 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 612 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 613 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 614 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 615 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 616 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 617 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 618 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 619 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 620 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 621 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 622 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 623 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 624 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 625 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 626 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 627 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 628 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

MoveMasters_ObjectScript_NameRater_Text_0:
# 26 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Hallo, Initatiative!\n"
	.string "I'm the Name Rater.\p"
	.string "Well, technically I'm the pokemon\n"
	.string "renamers, but people are more familiar\l"
	.string "with the name Name Rater.\l"
	.string "If you ever want your pokemon to be\l"
	.string "called a different name, you can come\l"
	.string "to me!\p"
	.string "That being said, it is not easy to make\n"
	.string "your pokemon understand he has to\l"
	.string "listen to a new name, so I do require\l"
	.string "some compensation for my services\l"
	.string "How does 100 sound?$"

MoveMasters_ObjectScript_NameRater_Text_1:
# 33 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "So, do you want to rename one of your\n"
	.string "pokemon?\l"
	.string "My services will cost you 100.$"

MoveMasters_ObjectScript_NameRater_Text_2:
# 44 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "You know... making a pokemon remember a\n"
	.string "different name is not as easy as you\l"
	.string "might think.\p"
	.string "Please come see me again if you have\n"
	.string "the means to actually pay for my\l"
	.string "services.$"

MoveMasters_ObjectScript_NameRater_Text_3:
# 50 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Understood!\n"
	.string "Come back any time you want to change\l"
	.string "one of your pokemons names!$"

MoveMasters_ObjectScript_MoveRememberer_Text_0:
# 61 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Hallo, Initatiative!\n"
	.string "I'm the Move Reminder!\p"
	.string "Or the Pokemon Move Maniac...\n"
	.string "Or the Move Tutor...\l"
	.string "Or even the Move Relearner!\p"
	.string "I don't care how you call me, as long as\n"
	.string "your pokemon has forgotten a move you\l"
	.string "would like him to relearn again, come\l"
	.string "talk to me.\p"
	.string "It'll cost you 500, but in return you can\n"
	.string "relearn any move your pokemon has once\l"
	.string "forgotten.$"

MoveMasters_ObjectScript_MoveRememberer_Text_1:
# 69 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Do you need one of your pokemons to\n"
	.string "remember something?\l"
	.string "Remember, it will cost you 500, HAHAHA!$"

MoveMasters_ObjectScript_MoveRememberer_Text_2:
# 80 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "seems like you need ot remember to\n"
	.string "bring your money next time!\l"
	.string "HAHAHAHAHAHA!\p"
	.string "Ha...\p"
	.string "ha...\p"
	.string "...\p"
	.string "Bring some money if you want to use my\n"
	.string "services.$"

MoveMasters_ObjectScript_MoveRememberer_Text_3:
# 90 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "As long as you don't forget my services,\n"
	.string "your pokemons can remember any move\l"
	.string "they learned!$"

MoveMasters_ObjectScript_MoveDeleter_Text_0:
# 101 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Hallo, Initatiative!\n"
	.string "I'm the Move Deleter.\p"
	.string "Does one of your pokemon refuse to\n"
	.string "forget one move? do you have some new\l"
	.string "tactic that requires your pokemon to\l"
	.string "forget everything he knows? Than you\l"
	.string "have come to the right guy! pay me 100\l"
	.string "and I can let your pokemon forget any\l"
	.string "move you want.$"

MoveMasters_ObjectScript_MoveDeleter_Text_1:
# 106 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Does one of your pokemon need to\n"
	.string "forget something?\l"
	.string "Doing so will cost you 100$"

MoveMasters_ObjectScript_MoveDeleter_Text_2:
# 117 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "O?\n"
	.string "it seems like you don't have enough\l"
	.string "money for my services.\l"
	.string "If you ever need my services and have\l"
	.string "the money for it, you know where to find\l"
	.string "me!$"

MoveMasters_ObjectScript_MoveDeleter_Text_3:
# 124 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind!$"

MoveMasters_ObjectScript_EggTutor_Text_0:
# 134 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh hello dear, can I help you with\n"
	.string "anything?\p"
	.string "What services do I over? Oh nothing\n"
	.string "special.\p"
	.string "I can help your pokemon remember their\n"
	.string "Egg moves if you're interested.\p"
	.string "It is quite difficult to do this, so I\n"
	.string "would need some compensation for my\l"
	.string "services...\p"
	.string "Does a 1000 sound agreeable with you?$"

MoveMasters_ObjectScript_EggTutor_Text_1:
# 140 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Would you like one of your pokemon\n"
	.string "remember their egg move?\l"
	.string "I hope you don't mind that it will cost\l"
	.string "you 1000 to do this.$"

MoveMasters_ObjectScript_EggTutor_Text_2:
# 147 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm sorry dear, I'm still working on my\n"
	.string "skills, please check again later.$"

MoveMasters_ObjectScript_EggTutor_Text_3:
# 151 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm sorry dear, but I can't just offer my\n"
	.string "services for free or I'll starve.\l"
	.string "When you have the money, please do come\l"
	.string "back dear.$"

MoveMasters_ObjectScript_EggTutor_Text_4:
# 157 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh? Did you just come here to talk with\n"
	.string "me?\l"
	.string "Go ahead, relief your concerns to\l"
	.string "Granny, I'll listen.$"

MoveMasters_ObjectScript_MoveTutor_Text_0:
# 168 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "hmm?\p"
	.string "O? you're talking to me?\p"
	.string "Oh my mistake, I expect you're not quite\n"
	.string "ready for what I have to ffer.\l"
	.string "I'm the Master Tutor. I can teach some\l"
	.string "of your pokemon their strongest move.\l"
	.string "Frenzy Plant, Hydro Cannon, Blast Burn,\l"
	.string "Dragon Ascent, and many others I can\l"
	.string "offer you. It took me years to master\l"
	.string "these moves so I'll require some\l"
	.string "compensation. About a 1000 would work\l"
	.string "for me.$"

MoveMasters_ObjectScript_MoveTutor_Text_1:
# 177 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "So, have a pokemon worthy for my\n"
	.string "services?\l"
	.string "a 1000 to learn such a move seems only\l"
	.string "fair to me.$"

MoveMasters_ObjectScript_MoveTutor_Text_2:
# 188 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "...\p"
	.string "Don't think you can get a discount from\n"
	.string "me.$"

MoveMasters_ObjectScript_MoveTutor_Text_3:
# 194 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I thought so. Do come back when you\n"
	.string "have a pokemon worthy of my time.$"

MoveTutor_DecideMove_Text_0:
# 201 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "What move would you like me to learn\n"
	.string "your pokemon?$"

MoveTutor_DecideMove_Text_1:
# 231 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Just what I though...\p"
	.string "Come back when you have a pokemon\n"
	.string "worthy of my abilities!$"

MoveTutor_DecideMove_Text_2:
# 235 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Which pokemon would you like me to learn\n"
	.string "{STR_VAR_1} to?$"

MoveTutor_DecideMove_Text_3:
# 239 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind?\n"
	.string "Or would you maybe try another move?$"

MoveTutor_DecideMove_Text_4:
# 245 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Done! Your pokemon now knows\n"
	.string "{STR_VAR_1}!\p"
	.string "Now if you don't mind paying me for my\n"
	.string "work...$"

MoveTutor_DecideMove_Text_5:
# 248 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Come again if you need me!$"

MoveMasters_ObjectScript_MartEmployer_Text_0:
# 259 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Hello, I'm the TM seller.\p"
	.string "I have all the different TMs you could\n"
	.string "possibly want your pokemon to learn.\p"
	.string "Sadly I'm not allowed to just let you\n"
	.string "buy these of me. Depending on your\l"
	.string "Initative Level I can offer you better\l"
	.string "TMs. So please, do come back from time\l"
	.string "to time to see if my shop has improved.$"

MoveMasters_ObjectScript_MartEmployer_Text_1:
# 264 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Would you like to buy any TMs I have on\n"
	.string "offer?$"

MoveMasters_ObjectScript_MartEmployer_Text_2:
# 286 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh, it seems like something went wrong,\n"
	.string "please come again later!$"

MoveMasters_ObjectScript_MartEmployer_Text_3:
# 288 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Have a nice day!$"
