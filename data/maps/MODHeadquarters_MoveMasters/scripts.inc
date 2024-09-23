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
# 158 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_3
MoveMasters_ObjectScript_EggTutor_4:
# 161 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 152 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_2
	goto MoveMasters_ObjectScript_EggTutor_4

MoveMasters_ObjectScript_EggTutor_8:
# 147 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveMasters_LearnEggMove
	goto MoveMasters_ObjectScript_EggTutor_4


MoveMasters_LearnEggMove::
# 166 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_0
# 167 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	special ChooseMonForEggMoves
# 168 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	waitstate
# 169 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveMasters_LearnEggMove_1
# 177 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	special IsSelectedMonEgg
# 178 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_LearnEggMove_4
# 183 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq MoveMasters_LearnEggMove_5
# 190 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_4
# 191 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	special TeachMoveEggMove
# 192 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	waitstate
# 193 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq MoveMasters_LearnEggMove_9
# 200 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_6
# 202 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	removemoney 1000
# 203 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_7
	return

MoveMasters_LearnEggMove_1:
# 171 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_1
	return

MoveMasters_LearnEggMove_4:
# 180 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_2
	return

MoveMasters_LearnEggMove_5:
# 185 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_3
	return

MoveMasters_LearnEggMove_9:
# 195 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_5
# 196 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveMasters_LearnEggMove
	return


MoveMasters_ObjectScript_MoveTutor::
# 210 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 211 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 212 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveTutor_2
MoveMasters_ObjectScript_MoveTutor_1:
# 223 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_1, MSGBOX_YESNO
# 225 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_5
# 240 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_3
MoveMasters_ObjectScript_MoveTutor_4:
# 242 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveTutor_2:
# 214 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_0
	goto MoveMasters_ObjectScript_MoveTutor_1

MoveMasters_ObjectScript_MoveTutor_5:
# 227 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 1000
# 228 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_8
# 234 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_2
	goto MoveMasters_ObjectScript_MoveTutor_4

MoveMasters_ObjectScript_MoveTutor_8:
# 230 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_DecideMove
	goto MoveMasters_ObjectScript_MoveTutor_4


MoveTutor_DecideMove::
# 247 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	message MoveTutor_DecideMove_Text_0
# 248 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	multichoicegrid 10, 0, MULTI_MOVE_TUTOR, 2, 0
# 249 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	closemessage
# 250 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	switch VAR_RESULT
# 252 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 0, MoveTutor_DecideMove_3
# 255 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 1, MoveTutor_DecideMove_4
# 258 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 2, MoveTutor_DecideMove_5
# 261 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 3, MoveTutor_DecideMove_6
# 264 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 4, MoveTutor_DecideMove_7
# 267 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 5, MoveTutor_DecideMove_8
# 270 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 6, MoveTutor_DecideMove_9
# 273 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 7, MoveTutor_DecideMove_10
# 277 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_1
MoveTutor_DecideMove_1:
# 281 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_2
# 282 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 283 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_DecideMove_12
# 291 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_4
# 293 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	removemoney 1000
# 294 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_5
	return

MoveTutor_DecideMove_3:
# 253 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FRENZY_PLANT
# 254 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_FRENZY_PLANT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_4:
# 256 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BLAST_BURN
# 257 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_BLAST_BURN
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_5:
# 259 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_HYDRO_CANNON
# 260 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_HYDRO_CANNON
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_6:
# 262 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_VOLT_TACKLE
# 263 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_VOLT_TACKLE
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_7:
# 265 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRACO_METEOR
# 266 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_DRACO_METEOR
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_8:
# 268 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRAGON_ASCENT
# 269 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_DRAGON_ASCENT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_9:
# 271 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_RELIC_SONG
# 272 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_RELIC_SONG
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_10:
# 274 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_SECRET_SWORD
# 275 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005 MOVE_SECRET_SWORD
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_12:
# 285 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_3
# 287 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_DecideMove
	return


MoveMasters_ObjectScript_MartEmployer::
# 301 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 302 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 303 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MartEmployer_2
MoveMasters_ObjectScript_MartEmployer_1:
# 310 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_1
# 311 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	switch VAR_BADGE_AMOUNT
# 313 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 0, MoveMasters_ObjectScript_MartEmployer_6
# 315 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 1, MoveMasters_ObjectScript_MartEmployer_7
# 317 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 2, MoveMasters_ObjectScript_MartEmployer_8
# 319 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 3, MoveMasters_ObjectScript_MartEmployer_9
# 321 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 4, MoveMasters_ObjectScript_MartEmployer_10
# 323 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 5, MoveMasters_ObjectScript_MartEmployer_11
# 325 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 6, MoveMasters_ObjectScript_MartEmployer_12
# 327 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 7, MoveMasters_ObjectScript_MartEmployer_13
# 329 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 8, MoveMasters_ObjectScript_MartEmployer_14
# 332 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_2
MoveMasters_ObjectScript_MartEmployer_4:
# 334 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_3
# 335 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MartEmployer_2:
# 305 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_0
	goto MoveMasters_ObjectScript_MartEmployer_1

MoveMasters_ObjectScript_MartEmployer_6:
# 314 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMNoBadges
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_7:
# 316 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMOne
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_8:
# 318 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMTwo
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_9:
# 320 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMThree
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_10:
# 322 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFour
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_11:
# 324 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFive
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_12:
# 326 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSix
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_13:
# 328 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSeven
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_14:
# 330 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMEight
	goto MoveMasters_ObjectScript_MartEmployer_4


	.align 2
# 338 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMNoBadges:
# 339 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 340 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 341 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 342 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 343 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 344 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 345 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 346 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 347 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 348 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 351 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMOne:
# 352 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 353 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 354 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 355 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 356 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 357 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 358 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 359 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 360 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 361 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 362 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 363 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 364 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 365 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 366 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 367 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 368 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 369 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 370 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 371 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 374 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMTwo:
# 375 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 376 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 377 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 378 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 379 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 380 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 381 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 382 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 383 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 384 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 385 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 386 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 387 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 388 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 389 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 390 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 391 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 392 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 393 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 394 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 395 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 396 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 397 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 398 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 399 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 400 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 401 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 402 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 405 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMThree:
# 406 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 407 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 408 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 409 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 410 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 411 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 412 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 413 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 414 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 415 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 416 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 417 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 418 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 419 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 420 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 421 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 422 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 423 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 424 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 425 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 426 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 427 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 428 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 429 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 430 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 431 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 432 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 433 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 434 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 435 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 436 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 437 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 438 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 439 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 442 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFour:
# 443 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 444 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 445 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 446 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 447 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 448 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 449 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 450 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 451 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 452 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 453 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 454 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 455 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 456 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 457 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 458 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 459 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 460 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 461 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 462 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 463 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 464 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 465 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 466 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 467 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 468 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 469 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 470 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 471 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 472 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 473 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 474 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 475 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 476 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 479 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFive:
# 480 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 481 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 482 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 483 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 484 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 485 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 486 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 487 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 488 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 489 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 490 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 491 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 492 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 493 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 494 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 495 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 496 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 497 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 498 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 499 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 500 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 501 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 502 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 503 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 504 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 505 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 506 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 507 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 508 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 509 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 510 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 511 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 512 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 513 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 514 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 515 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 516 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 517 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 518 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 519 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 522 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSix:
# 523 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 524 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 525 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 526 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 527 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 528 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 529 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 530 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 531 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 532 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 533 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 534 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 535 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 536 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 537 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 538 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 539 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 540 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 541 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 542 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 543 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 544 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 545 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 546 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 547 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 548 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 549 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 550 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 551 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 552 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 553 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 554 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 555 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 556 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 557 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 558 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 559 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 560 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 561 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 562 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 563 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 564 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 565 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 566 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 567 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 570 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSeven:
# 571 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 572 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 573 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 574 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 575 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 576 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 577 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 578 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 579 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 580 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 581 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 582 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 583 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 584 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 585 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 586 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 587 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 588 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 589 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 590 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 591 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 592 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 593 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 594 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 595 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 596 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 597 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 598 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 599 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 600 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 601 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 602 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 603 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 604 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 605 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 606 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 607 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 608 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 609 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 610 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 611 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 612 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 613 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 614 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 615 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 616 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 617 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 618 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 619 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 620 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 623 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMEight:
# 624 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 625 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 626 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 627 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 628 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 629 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 630 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 631 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 632 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 633 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 634 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 635 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 636 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 637 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 638 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM15
# 639 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 640 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 641 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 642 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 643 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 644 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 645 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 646 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 647 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 648 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 649 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 650 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 651 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 652 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 653 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 654 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 655 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 656 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 657 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 658 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 659 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 660 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 661 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 662 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 663 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 664 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 665 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 666 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 667 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 668 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 669 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 670 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 671 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 672 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 673 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 674 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 152 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm sorry dear, but I can't just offer my\n"
	.string "services for free or I'll starve.\l"
	.string "When you have the money, please do come\l"
	.string "back dear.$"

MoveMasters_ObjectScript_EggTutor_Text_3:
# 158 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh? Did you just come here to talk with\n"
	.string "me?\l"
	.string "Go ahead, relief your concerns to\l"
	.string "Granny, I'll listen.$"

MoveMasters_LearnEggMove_Text_0:
# 166 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Who would you like me to learn one of\n"
	.string "their egg moves?$"

MoveMasters_LearnEggMove_Text_1:
# 171 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind?\n"
	.string "Speak to me again if you want to learn\l"
	.string "an egg move$"

MoveMasters_LearnEggMove_Text_2:
# 180 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm sorry dear, but I can't teach a\n"
	.string "pokemon their egg moves until they are\l"
	.string "hatched\p"
	.string "Please come again if you have a pokemon\n"
	.string "you would like to learn their egg moves$"

MoveMasters_LearnEggMove_Text_3:
# 185 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm terribly sorry dear, but it seems\n"
	.string "this pokemon does not learn any egg\l"
	.string "moves.\p"
	.string "Please come again if you have a pokemon\n"
	.string "you would like to learn their egg moves$"

MoveMasters_LearnEggMove_Text_4:
# 190 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "What move would you like them to learn?$"

MoveMasters_LearnEggMove_Text_5:
# 195 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind? Or is there another\n"
	.string "pokemon you would like me to teach\l"
	.string "their egg moves?$"

MoveMasters_LearnEggMove_Text_6:
# 200 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Thank you for using my services dear. I\n"
	.string "hope you don't mind my payment...\l"
	.string "I need to feed my children somehow...$"

MoveMasters_LearnEggMove_Text_7:
# 203 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Please, come back again.$"

MoveMasters_ObjectScript_MoveTutor_Text_0:
# 214 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 223 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "So, have a pokemon worthy for my\n"
	.string "services?\l"
	.string "a 1000 to learn such a move seems only\l"
	.string "fair to me.$"

MoveMasters_ObjectScript_MoveTutor_Text_2:
# 234 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "...\p"
	.string "Don't think you can get a discount from\n"
	.string "me.$"

MoveMasters_ObjectScript_MoveTutor_Text_3:
# 240 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I thought so. Do come back when you\n"
	.string "have a pokemon worthy of my time.$"

MoveTutor_DecideMove_Text_0:
# 247 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "What move would you like me to learn\n"
	.string "your pokemon?$"

MoveTutor_DecideMove_Text_1:
# 277 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Just what I though...\p"
	.string "Come back when you have a pokemon\n"
	.string "worthy of my abilities!$"

MoveTutor_DecideMove_Text_2:
# 281 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Which pokemon would you like me to learn\n"
	.string "{STR_VAR_1} to?$"

MoveTutor_DecideMove_Text_3:
# 285 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind?\n"
	.string "Or would you maybe try another move?$"

MoveTutor_DecideMove_Text_4:
# 291 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Done! Your pokemon now knows\n"
	.string "{STR_VAR_1}!\p"
	.string "Now if you don't mind paying me for my\n"
	.string "work...$"

MoveTutor_DecideMove_Text_5:
# 294 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Come again if you need me!$"

MoveMasters_ObjectScript_MartEmployer_Text_0:
# 305 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Hello, I'm the TM seller.\p"
	.string "I have all the different TMs you could\n"
	.string "possibly want your pokemon to learn.\p"
	.string "Sadly I'm not allowed to just let you\n"
	.string "buy these of me. Depending on your\l"
	.string "Initative Level I can offer you better\l"
	.string "TMs. So please, do come back from time\l"
	.string "to time to see if my shop has improved.$"

MoveMasters_ObjectScript_MartEmployer_Text_1:
# 310 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Would you like to buy any TMs I have on\n"
	.string "offer?$"

MoveMasters_ObjectScript_MartEmployer_Text_2:
# 332 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh, it seems like something went wrong,\n"
	.string "please come again later!$"

MoveMasters_ObjectScript_MartEmployer_Text_3:
# 334 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Have a nice day!$"
