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
	showmoneybox 0, 0
# 34 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_1, MSGBOX_YESNO
# 36 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_5
# 51 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_3
MoveMasters_ObjectScript_NameRater_4:
# 53 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	hidemoneybox
# 54 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_NameRater_2:
# 26 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_0
	goto MoveMasters_ObjectScript_NameRater_1

MoveMasters_ObjectScript_NameRater_5:
# 38 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 100
# 39 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_8
# 45 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_2
	goto MoveMasters_ObjectScript_NameRater_4

MoveMasters_ObjectScript_NameRater_8:
# 41 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto MoveMasters_ObjectScript_NameRater_4


MoveMasters_ObjectScript_MoveRememberer::
# 59 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 60 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 61 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveRememberer_2
MoveMasters_ObjectScript_MoveRememberer_1:
# 71 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 72 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_1, MSGBOX_YESNO
# 74 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_5
# 93 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_3
MoveMasters_ObjectScript_MoveRememberer_4:
# 95 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	hidemoneybox
# 96 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveRememberer_2:
# 63 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_0
	goto MoveMasters_ObjectScript_MoveRememberer_1

MoveMasters_ObjectScript_MoveRememberer_5:
# 76 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 500
# 77 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_8
# 83 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_2
	goto MoveMasters_ObjectScript_MoveRememberer_4

MoveMasters_ObjectScript_MoveRememberer_8:
# 79 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto MoveMasters_ObjectScript_MoveRememberer_4


MoveMasters_ObjectScript_MoveDeleter::
# 101 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 102 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 103 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveDeleter_2
MoveMasters_ObjectScript_MoveDeleter_1:
# 110 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 111 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_1, MSGBOX_YESNO
# 113 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_5
# 129 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_3
MoveMasters_ObjectScript_MoveDeleter_4:
# 131 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	hidemoneybox
# 132 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveDeleter_2:
# 105 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_0
	goto MoveMasters_ObjectScript_MoveDeleter_1

MoveMasters_ObjectScript_MoveDeleter_5:
# 115 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 100
# 116 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_8
# 122 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_2
	goto MoveMasters_ObjectScript_MoveDeleter_4

MoveMasters_ObjectScript_MoveDeleter_8:
# 118 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	goto MoveMasters_ObjectScript_MoveDeleter_4


MoveMasters_ObjectScript_EggTutor::
# 136 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 137 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 138 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_EggTutor_2
MoveMasters_ObjectScript_EggTutor_1:
# 146 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 147 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_1, MSGBOX_YESNO
# 149 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_EggTutor_5
# 164 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_3
MoveMasters_ObjectScript_EggTutor_4:
# 167 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	hidemoneybox
# 168 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_EggTutor_2:
# 140 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_0
	goto MoveMasters_ObjectScript_EggTutor_1

MoveMasters_ObjectScript_EggTutor_5:
# 151 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 1000
# 152 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_EggTutor_8
# 158 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_2
	goto MoveMasters_ObjectScript_EggTutor_4

MoveMasters_ObjectScript_EggTutor_8:
# 154 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveMasters_LearnEggMove
	goto MoveMasters_ObjectScript_EggTutor_4


MoveMasters_LearnEggMove::
# 173 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_0
# 174 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	special ChooseMonForEggMoves
# 175 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	waitstate
# 176 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 177 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MoveMasters_LearnEggMove_1
# 185 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	special IsSelectedMonEgg
# 186 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_LearnEggMove_4
# 191 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq MoveMasters_LearnEggMove_5
# 198 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_4
# 199 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	special TeachMoveEggMove
# 200 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	waitstate
# 201 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq MoveMasters_LearnEggMove_9
# 208 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 209 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_6
# 211 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	playse SE_SHOP
# 212 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	removemoney 1000
# 213 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	updatemoneybox
# 214 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_7
	return

MoveMasters_LearnEggMove_1:
# 179 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_1
	return

MoveMasters_LearnEggMove_4:
# 188 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_2
	return

MoveMasters_LearnEggMove_5:
# 193 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_3
	return

MoveMasters_LearnEggMove_9:
# 203 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_LearnEggMove_Text_5
# 204 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveMasters_LearnEggMove
	return


MoveMasters_ObjectScript_MoveTutor::
# 221 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 222 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 223 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveTutor_2
MoveMasters_ObjectScript_MoveTutor_1:
# 234 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 235 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_1, MSGBOX_YESNO
# 237 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_5
# 252 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_3
MoveMasters_ObjectScript_MoveTutor_4:
# 254 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	hidemoneybox
# 255 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveTutor_2:
# 225 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_0
	goto MoveMasters_ObjectScript_MoveTutor_1

MoveMasters_ObjectScript_MoveTutor_5:
# 239 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	checkmoney 1000
# 240 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_8
# 246 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_2
	goto MoveMasters_ObjectScript_MoveTutor_4

MoveMasters_ObjectScript_MoveTutor_8:
# 242 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_DecideMove
	goto MoveMasters_ObjectScript_MoveTutor_4


MoveTutor_DecideMove::
# 260 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	message MoveTutor_DecideMove_Text_0
# 261 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	hidemoneybox
# 262 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	multichoicegrid 10, 0, MULTI_MOVE_TUTOR, 2, 0
# 263 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	closemessage
# 264 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	switch VAR_RESULT
# 266 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 0, MoveTutor_DecideMove_3
# 269 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 1, MoveTutor_DecideMove_4
# 272 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 2, MoveTutor_DecideMove_5
# 275 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 3, MoveTutor_DecideMove_6
# 278 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 4, MoveTutor_DecideMove_7
# 281 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 5, MoveTutor_DecideMove_8
# 284 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 6, MoveTutor_DecideMove_9
# 287 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 7, MoveTutor_DecideMove_10
# 291 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_1
# 293 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	end

MoveTutor_DecideMove_1:
# 297 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_2
# 298 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 299 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MoveTutor_DecideMove_12
# 307 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	showmoneybox 0, 0
# 308 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_4
# 310 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	playse SE_SHOP
# 311 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	removemoney 1000
# 312 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	updatemoneybox
# 313 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_5
	return

MoveTutor_DecideMove_3:
# 267 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FRENZY_PLANT
# 268 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_4:
# 270 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BLAST_BURN
# 271 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_5:
# 273 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_HYDRO_CANNON
# 274 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_6:
# 276 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_VOLT_TACKLE
# 277 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_VOLT_TACKLE
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_7:
# 279 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRACO_METEOR
# 280 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_DRACO_METEOR
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_8:
# 282 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_DRAGON_ASCENT
# 283 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_ASCENT
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_9:
# 285 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_RELIC_SONG
# 286 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_RELIC_SONG
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_10:
# 288 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	buffermovename STR_VAR_1, MOVE_SECRET_SWORD
# 289 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_SWORD
	goto MoveTutor_DecideMove_1

MoveTutor_DecideMove_12:
# 301 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveTutor_DecideMove_Text_3
# 303 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	call MoveTutor_DecideMove
	return


MoveMasters_ObjectScript_MartEmployer::
# 320 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	lockall
# 321 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	faceplayer
# 322 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MartEmployer_2
MoveMasters_ObjectScript_MartEmployer_1:
# 329 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_1
# 330 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	switch VAR_BADGE_AMOUNT
# 332 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 0, MoveMasters_ObjectScript_MartEmployer_6
# 334 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 1, MoveMasters_ObjectScript_MartEmployer_7
# 336 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 2, MoveMasters_ObjectScript_MartEmployer_8
# 338 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 3, MoveMasters_ObjectScript_MartEmployer_9
# 340 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 4, MoveMasters_ObjectScript_MartEmployer_10
# 342 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 5, MoveMasters_ObjectScript_MartEmployer_11
# 344 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 6, MoveMasters_ObjectScript_MartEmployer_12
# 346 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 7, MoveMasters_ObjectScript_MartEmployer_13
# 348 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	case 8, MoveMasters_ObjectScript_MartEmployer_14
# 351 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_2
MoveMasters_ObjectScript_MartEmployer_4:
# 353 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_3
# 354 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MartEmployer_2:
# 324 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_0
	goto MoveMasters_ObjectScript_MartEmployer_1

MoveMasters_ObjectScript_MartEmployer_6:
# 333 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMNoBadges
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_7:
# 335 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMOne
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_8:
# 337 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMTwo
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_9:
# 339 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMThree
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_10:
# 341 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFour
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_11:
# 343 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFive
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_12:
# 345 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSix
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_13:
# 347 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSeven
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_14:
# 349 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMEight
	goto MoveMasters_ObjectScript_MartEmployer_4


	.align 2
# 357 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMNoBadges:
# 358 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 359 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 360 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 361 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 362 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 363 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 364 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 365 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 366 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 367 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 368 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 371 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMOne:
# 372 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 373 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 374 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 375 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 376 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 377 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 378 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 379 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 380 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 381 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 382 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 383 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 384 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 385 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 386 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 387 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 388 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 389 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 390 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 391 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 392 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 395 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMTwo:
# 396 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 397 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 398 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 399 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 400 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 401 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 402 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 403 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 404 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 405 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 406 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 407 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 408 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 409 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 410 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 411 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 412 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 413 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 414 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 415 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 416 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 417 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 418 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 419 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 420 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 421 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 422 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 423 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 424 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 427 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMThree:
# 428 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 429 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 430 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 431 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 432 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 433 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 434 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 435 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 436 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 437 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 438 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 439 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 440 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 441 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 442 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 443 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 444 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 445 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 446 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 447 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 448 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 449 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 450 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 451 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 452 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 453 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 454 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 455 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 456 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 457 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 458 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 459 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 460 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 461 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 462 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 465 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFour:
# 466 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 467 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 468 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 469 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 470 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 471 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 472 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 473 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 474 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 475 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 476 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 477 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 478 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 479 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 480 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 481 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 482 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 483 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 484 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 485 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 486 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 487 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 488 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 489 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 490 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 491 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 492 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 493 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 494 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 495 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 496 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 497 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 498 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 499 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 500 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 503 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMFive:
# 504 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 505 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 506 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 507 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 508 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 509 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 510 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 511 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 512 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 513 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 514 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 515 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 516 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 517 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 518 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 519 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 520 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 521 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 522 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 523 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 524 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 525 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 526 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 527 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 528 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 529 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 530 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 531 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 532 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 533 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 534 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 535 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 536 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 537 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 538 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 539 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 540 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 541 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 542 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 543 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 544 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 547 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSix:
# 548 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 549 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 550 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 551 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 552 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 553 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 554 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 555 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 556 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 557 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 558 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 559 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 560 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 561 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 562 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 563 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 564 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 565 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 566 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 567 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 568 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 569 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 570 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 571 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 572 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 573 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 574 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 575 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 576 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 577 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 578 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 579 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 580 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 581 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 582 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 583 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 584 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 585 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 586 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 587 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 588 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 589 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 590 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 591 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 592 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 593 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 596 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMSeven:
# 597 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 598 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 599 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 600 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 601 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 602 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 603 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 604 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 605 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 606 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 607 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 608 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 609 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 610 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 611 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 612 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 613 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 614 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 615 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 616 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 617 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 618 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 619 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 620 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 621 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 622 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 623 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 624 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 625 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 626 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 627 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 628 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 629 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 630 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 631 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 632 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 633 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 634 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 635 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 636 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 637 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 638 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 639 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 640 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 641 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 642 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 643 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 644 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 645 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 646 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 647 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM52
	.2byte ITEM_NONE

	.align 2
# 650 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
ModHeadquarters_TMEight:
# 651 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 652 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 653 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 654 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 655 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 656 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 657 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 658 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 659 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 660 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 661 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 662 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 663 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 664 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 665 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM15
# 666 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 667 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 668 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 669 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 670 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 671 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 672 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 673 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 674 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 675 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 676 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 677 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 678 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 679 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 680 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 681 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 682 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 683 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 684 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 685 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 686 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 687 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 688 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 689 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 690 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 691 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 692 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 693 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 694 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 695 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 696 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 697 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 698 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 699 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 700 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 701 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.2byte ITEM_TM51
# 702 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 34 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "So, do you want to rename one of your\n"
	.string "pokemon?\l"
	.string "My services will cost you 100.$"

MoveMasters_ObjectScript_NameRater_Text_2:
# 45 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "You know... making a pokemon remember a\n"
	.string "different name is not as easy as you\l"
	.string "might think.\p"
	.string "Please come see me again if you have\n"
	.string "the means to actually pay for my\l"
	.string "services.$"

MoveMasters_ObjectScript_NameRater_Text_3:
# 51 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Understood!\n"
	.string "Come back any time you want to change\l"
	.string "one of your pokemons names!$"

MoveMasters_ObjectScript_MoveRememberer_Text_0:
# 63 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 72 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Do you need one of your pokemons to\n"
	.string "remember something?\l"
	.string "Remember, it will cost you 500, HAHAHA!$"

MoveMasters_ObjectScript_MoveRememberer_Text_2:
# 83 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Seems like you need ot remember to\n"
	.string "bring your money next time!\l"
	.string "HAHAHAHAHAHA!\p"
	.string "Ha...\p"
	.string "ha...\p"
	.string "...\p"
	.string "Bring some money if you want to use my\n"
	.string "services.$"

MoveMasters_ObjectScript_MoveRememberer_Text_3:
# 93 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "As long as you don't forget my services,\n"
	.string "your pokemons can remember any move\l"
	.string "they learned!$"

MoveMasters_ObjectScript_MoveDeleter_Text_0:
# 105 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 111 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Does one of your pokemon need to\n"
	.string "forget something?\l"
	.string "Doing so will cost you 100$"

MoveMasters_ObjectScript_MoveDeleter_Text_2:
# 122 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "O?\n"
	.string "it seems like you don't have enough\l"
	.string "money for my services.\l"
	.string "If you ever need my services and have\l"
	.string "the money for it, you know where to find\l"
	.string "me!$"

MoveMasters_ObjectScript_MoveDeleter_Text_3:
# 129 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind!$"

MoveMasters_ObjectScript_EggTutor_Text_0:
# 140 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 147 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Would you like one of your pokemon\n"
	.string "remember their egg move?\l"
	.string "I hope you don't mind that it will cost\l"
	.string "you 1000 to do this.$"

MoveMasters_ObjectScript_EggTutor_Text_2:
# 158 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm sorry dear, but I can't just offer my\n"
	.string "services for free or I'll starve.\l"
	.string "When you have the money, please do come\l"
	.string "back dear.$"

MoveMasters_ObjectScript_EggTutor_Text_3:
# 164 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh? Did you just come here to talk with\n"
	.string "me?\l"
	.string "Go ahead, relief your concerns to\l"
	.string "Granny, I'll listen.$"

MoveMasters_LearnEggMove_Text_0:
# 173 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Who would you like me to learn one of\n"
	.string "their egg moves?$"

MoveMasters_LearnEggMove_Text_1:
# 179 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind?\n"
	.string "Speak to me again if you want to learn\l"
	.string "an egg move$"

MoveMasters_LearnEggMove_Text_2:
# 188 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm sorry dear, but I can't teach a\n"
	.string "pokemon their egg moves until they are\l"
	.string "hatched\p"
	.string "Please come again if you have a pokemon\n"
	.string "you would like to learn their egg moves$"

MoveMasters_LearnEggMove_Text_3:
# 193 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I'm terribly sorry dear, but it seems\n"
	.string "this pokemon does not learn any egg\l"
	.string "moves.\p"
	.string "Please come again if you have a pokemon\n"
	.string "you would like to learn their egg moves$"

MoveMasters_LearnEggMove_Text_4:
# 198 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "What move would you like them to learn?$"

MoveMasters_LearnEggMove_Text_5:
# 203 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind? Or is there another\n"
	.string "pokemon you would like me to teach\l"
	.string "their egg moves?$"

MoveMasters_LearnEggMove_Text_6:
# 209 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Thank you for using my services dear. I\n"
	.string "hope you don't mind my payment...\l"
	.string "I need to feed my children somehow...$"

MoveMasters_LearnEggMove_Text_7:
# 214 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Please, come back again.$"

MoveMasters_ObjectScript_MoveTutor_Text_0:
# 225 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
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
# 235 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "So, have a pokemon worthy for my\n"
	.string "services?\l"
	.string "a 1000 to learn such a move seems only\l"
	.string "fair to me.$"

MoveMasters_ObjectScript_MoveTutor_Text_2:
# 246 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "...\p"
	.string "Don't think you can get a discount from\n"
	.string "me.$"

MoveMasters_ObjectScript_MoveTutor_Text_3:
# 252 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "I thought so. Do come back when you\n"
	.string "have a pokemon worthy of my time.$"

MoveTutor_DecideMove_Text_0:
# 260 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "What move would you like me to learn\n"
	.string "your pokemon?$"

MoveTutor_DecideMove_Text_1:
# 291 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Just what I though...\p"
	.string "Come back when you have a pokemon\n"
	.string "worthy of my abilities!$"

MoveTutor_DecideMove_Text_2:
# 297 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Which pokemon would you like me to learn\n"
	.string "{STR_VAR_1} to?$"

MoveTutor_DecideMove_Text_3:
# 301 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Changed your mind?\n"
	.string "Or would you maybe try another move?$"

MoveTutor_DecideMove_Text_4:
# 308 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Done! Your pokemon now knows\n"
	.string "{STR_VAR_1}!\p"
	.string "Now if you don't mind paying me for my\n"
	.string "work...$"

MoveTutor_DecideMove_Text_5:
# 313 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Come again if you need me!$"

MoveMasters_ObjectScript_MartEmployer_Text_0:
# 324 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Hello, I'm the TM seller.\p"
	.string "I have all the different TMs you could\n"
	.string "possibly want your pokemon to learn.\p"
	.string "Sadly I'm not allowed to just let you\n"
	.string "buy these of me. Depending on your\l"
	.string "Initative Level I can offer you better\l"
	.string "TMs. So please, do come back from time\l"
	.string "to time to see if my shop has improved.$"

MoveMasters_ObjectScript_MartEmployer_Text_1:
# 329 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Would you like to buy any TMs I have on\n"
	.string "offer?$"

MoveMasters_ObjectScript_MartEmployer_Text_2:
# 351 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Oh, it seems like something went wrong,\n"
	.string "please come again later!$"

MoveMasters_ObjectScript_MartEmployer_Text_3:
# 353 "data/maps/MODHeadquarters_MoveMasters/scripts.pory"
	.string "Have a nice day!$"
