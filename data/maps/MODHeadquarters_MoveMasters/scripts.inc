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
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_4:
# 256 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BLAST_BURN
# 257 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_5:
# 259 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_HYDRO_CANNON
# 260 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_6:
# 262 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_VOLT_TACKLE
# 263 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_VOLT_TACKLE
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_7:
# 265 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRACO_METEOR
# 266 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_8:
# 268 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRAGON_ASCENT
# 269 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_ASCENT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_9:
# 271 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_RELIC_SONG
# 272 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_RELIC_SONG
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_10:
# 274 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_SECRET_SWORD
# 275 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_SWORD
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
# 349 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 352 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMOne:
# 353 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 354 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 355 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 356 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 357 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 358 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 359 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 360 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 361 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 362 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 363 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 364 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 365 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 366 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 367 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 368 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 369 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 370 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 371 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 372 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 373 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 376 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMTwo:
# 377 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 378 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 379 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 380 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 381 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 382 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 383 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 384 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 385 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 386 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 387 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 388 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 389 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 390 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 391 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 392 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 393 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 394 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 395 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 396 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 397 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 398 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 399 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 400 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 401 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 402 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 403 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 404 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 405 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 408 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMThree:
# 409 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 410 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 411 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 412 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 413 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 414 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 415 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 416 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 417 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 418 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 419 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 420 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 421 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 422 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 423 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 424 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 425 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 426 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 427 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 428 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 429 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 430 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 431 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 432 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 433 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 434 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 435 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 436 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 437 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 438 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 439 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 440 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 441 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 442 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 443 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 446 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFour:
# 447 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 448 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 449 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 450 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 451 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 452 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 453 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 454 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 455 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 456 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 457 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 458 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 459 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 460 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 461 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 462 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 463 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 464 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 465 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 466 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 467 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 468 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 469 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 470 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 471 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 472 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 473 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 474 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 475 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 476 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 477 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 478 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 479 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 480 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 481 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 484 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFive:
# 485 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 486 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 487 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 488 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 489 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 490 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 491 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 492 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 493 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 494 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 495 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 496 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 497 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 498 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 499 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 500 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 501 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 502 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 503 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 504 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 505 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 506 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 507 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 508 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 509 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 510 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 511 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 512 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 513 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 514 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 515 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 516 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 517 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 518 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 519 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 520 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 521 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 522 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 523 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 524 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 525 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 528 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSix:
# 529 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 530 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 531 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 532 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 533 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 534 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 535 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 536 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 537 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 538 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 539 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 540 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 541 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 542 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 543 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 544 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 545 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 546 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 547 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 548 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 549 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 550 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 551 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 552 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 553 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 554 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 555 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 556 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 557 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 558 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 559 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 560 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 561 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
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
	.2byte ITEM_TM51
# 574 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 577 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSeven:
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
	.2byte ITEM_TM16
# 593 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 594 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 595 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 596 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 597 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 598 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 599 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 600 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 601 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 602 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 603 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 604 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 605 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 606 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 607 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 608 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 609 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 610 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 611 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 612 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 613 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 614 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 615 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 616 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 617 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 618 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 619 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 620 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 621 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 622 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 623 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 624 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 625 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 626 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 627 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 628 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 631 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMEight:
# 632 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 633 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 634 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 635 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 636 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 637 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 638 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 639 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 640 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 641 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 642 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 643 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 644 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 645 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 646 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM15
# 647 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 648 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 649 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 650 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 651 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 652 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 653 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 654 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 655 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 656 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 657 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 658 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 659 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 660 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 661 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 662 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 663 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 664 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 665 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 666 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 667 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 668 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 669 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 670 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 671 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 672 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 673 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 674 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 675 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 676 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 677 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 678 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 679 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 680 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 681 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 682 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 683 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
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
