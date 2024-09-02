MoveMasters_MapScripts::
# 2 "data/maps/MoveMasters/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MoveMasters_OnTranstion
	.byte 0


MoveMasters_OnTranstion::
# 7 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1110
	goto_if_eq MoveMasters_OnTranstion_2
# 8 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 110
	goto_if_eq MoveMasters_OnTranstion_2
# 8 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1010
	goto_if_eq MoveMasters_OnTranstion_2
# 8 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1100
	goto_if_eq MoveMasters_OnTranstion_2
# 9 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 10
	goto_if_eq MoveMasters_OnTranstion_2
# 9 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 100
	goto_if_eq MoveMasters_OnTranstion_2
# 9 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1000
	goto_if_eq MoveMasters_OnTranstion_2
# 10 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq MoveMasters_OnTranstion_2
MoveMasters_OnTranstion_1:
# 14 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq MoveMasters_OnTranstion_18
	return

MoveMasters_OnTranstion_2:
# 12 "data/maps/MoveMasters/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 1
	goto MoveMasters_OnTranstion_1

MoveMasters_OnTranstion_18:
# 16 "data/maps/MoveMasters/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return


MoveMasters_ObjectScript_NameRater::
# 22 "data/maps/MoveMasters/scripts.pory"
	lockall
# 23 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 24 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_NameRater_2
MoveMasters_ObjectScript_NameRater_1:
# 33 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_1, MSGBOX_YESNO
# 35 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_5
# 50 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_3
MoveMasters_ObjectScript_NameRater_4:
# 52 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_NameRater_2:
# 26 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_0
	goto MoveMasters_ObjectScript_NameRater_1

MoveMasters_ObjectScript_NameRater_5:
# 37 "data/maps/MoveMasters/scripts.pory"
	checkmoney 100
# 38 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_8
# 44 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_2
	goto MoveMasters_ObjectScript_NameRater_4

MoveMasters_ObjectScript_NameRater_8:
# 40 "data/maps/MoveMasters/scripts.pory"
	call SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto MoveMasters_ObjectScript_NameRater_4


MoveMasters_ObjectScript_MoveRememberer::
# 57 "data/maps/MoveMasters/scripts.pory"
	lockall
# 58 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 59 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveRememberer_2
MoveMasters_ObjectScript_MoveRememberer_1:
# 69 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_1, MSGBOX_YESNO
# 71 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_5
# 90 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_3
MoveMasters_ObjectScript_MoveRememberer_4:
# 92 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveRememberer_2:
# 61 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_0
	goto MoveMasters_ObjectScript_MoveRememberer_1

MoveMasters_ObjectScript_MoveRememberer_5:
# 73 "data/maps/MoveMasters/scripts.pory"
	checkmoney 500
# 74 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_8
# 80 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_2
	goto MoveMasters_ObjectScript_MoveRememberer_4

MoveMasters_ObjectScript_MoveRememberer_8:
# 76 "data/maps/MoveMasters/scripts.pory"
	call FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto MoveMasters_ObjectScript_MoveRememberer_4


MoveMasters_ObjectScript_MoveDeleter::
# 97 "data/maps/MoveMasters/scripts.pory"
	lockall
# 98 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 99 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveDeleter_2
MoveMasters_ObjectScript_MoveDeleter_1:
# 106 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_1, MSGBOX_YESNO
# 108 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_5
# 124 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_3
MoveMasters_ObjectScript_MoveDeleter_4:
# 126 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveDeleter_2:
# 101 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_0
	goto MoveMasters_ObjectScript_MoveDeleter_1

MoveMasters_ObjectScript_MoveDeleter_5:
# 110 "data/maps/MoveMasters/scripts.pory"
	checkmoney 100
# 111 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_8
# 117 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_2
	goto MoveMasters_ObjectScript_MoveDeleter_4

MoveMasters_ObjectScript_MoveDeleter_8:
# 113 "data/maps/MoveMasters/scripts.pory"
	call LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	goto MoveMasters_ObjectScript_MoveDeleter_4


MoveMasters_ObjectScript_EggTutor::
# 130 "data/maps/MoveMasters/scripts.pory"
	lockall
# 131 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 132 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_EggTutor_2
MoveMasters_ObjectScript_EggTutor_1:
# 140 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_1, MSGBOX_YESNO
# 142 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_EggTutor_5
# 157 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_4
MoveMasters_ObjectScript_EggTutor_4:
# 160 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_EggTutor_2:
# 134 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_0
	goto MoveMasters_ObjectScript_EggTutor_1

MoveMasters_ObjectScript_EggTutor_5:
# 144 "data/maps/MoveMasters/scripts.pory"
	checkmoney 1000
# 145 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_EggTutor_8
# 151 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_3
	goto MoveMasters_ObjectScript_EggTutor_4

MoveMasters_ObjectScript_EggTutor_8:
# 147 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_EggTutor_Text_2
	goto MoveMasters_ObjectScript_EggTutor_4


MoveMasters_ObjectScript_MoveTutor::
# 164 "data/maps/MoveMasters/scripts.pory"
	lockall
# 165 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 166 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveTutor_2
MoveMasters_ObjectScript_MoveTutor_1:
# 177 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_1, MSGBOX_YESNO
# 179 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_5
# 194 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_4
MoveMasters_ObjectScript_MoveTutor_4:
# 196 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveTutor_2:
# 168 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_0
	goto MoveMasters_ObjectScript_MoveTutor_1

MoveMasters_ObjectScript_MoveTutor_5:
# 181 "data/maps/MoveMasters/scripts.pory"
	checkmoney 1000
# 182 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveTutor_8
# 188 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_3
	goto MoveMasters_ObjectScript_MoveTutor_4

MoveMasters_ObjectScript_MoveTutor_8:
# 184 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveTutor_Text_2
	goto MoveMasters_ObjectScript_MoveTutor_4


MoveMasters_ObjectScript_MartEmployer::
# 201 "data/maps/MoveMasters/scripts.pory"
	lockall
# 202 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 203 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MartEmployer_2
MoveMasters_ObjectScript_MartEmployer_1:
# 210 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_1
# 211 "data/maps/MoveMasters/scripts.pory"
	switch VAR_BADGE_AMOUNT
# 213 "data/maps/MoveMasters/scripts.pory"
	case 0, MoveMasters_ObjectScript_MartEmployer_6
# 215 "data/maps/MoveMasters/scripts.pory"
	case 1, MoveMasters_ObjectScript_MartEmployer_7
# 217 "data/maps/MoveMasters/scripts.pory"
	case 2, MoveMasters_ObjectScript_MartEmployer_8
# 219 "data/maps/MoveMasters/scripts.pory"
	case 3, MoveMasters_ObjectScript_MartEmployer_9
# 221 "data/maps/MoveMasters/scripts.pory"
	case 4, MoveMasters_ObjectScript_MartEmployer_10
# 223 "data/maps/MoveMasters/scripts.pory"
	case 5, MoveMasters_ObjectScript_MartEmployer_11
# 225 "data/maps/MoveMasters/scripts.pory"
	case 6, MoveMasters_ObjectScript_MartEmployer_12
# 227 "data/maps/MoveMasters/scripts.pory"
	case 7, MoveMasters_ObjectScript_MartEmployer_13
# 229 "data/maps/MoveMasters/scripts.pory"
	case 8, MoveMasters_ObjectScript_MartEmployer_14
# 232 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_2
MoveMasters_ObjectScript_MartEmployer_4:
# 234 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_3
# 235 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MartEmployer_2:
# 205 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MartEmployer_Text_0
	goto MoveMasters_ObjectScript_MartEmployer_1

MoveMasters_ObjectScript_MartEmployer_6:
# 214 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMNoBadges
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_7:
# 216 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMOne
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_8:
# 218 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMTwo
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_9:
# 220 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMThree
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_10:
# 222 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFour
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_11:
# 224 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMFive
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_12:
# 226 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSix
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_13:
# 228 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMSeven
	goto MoveMasters_ObjectScript_MartEmployer_4

MoveMasters_ObjectScript_MartEmployer_14:
# 230 "data/maps/MoveMasters/scripts.pory"
	pokemart ModHeadquarters_TMEight
	goto MoveMasters_ObjectScript_MartEmployer_4


	.align 2
# 238 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMNoBadges:
# 239 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 240 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 241 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 242 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 243 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 244 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 245 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 246 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 247 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 248 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 251 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMOne:
# 252 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 253 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 254 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 255 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 256 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 257 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 258 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 259 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 260 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 261 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 262 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 263 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 264 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 265 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 266 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 267 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 268 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 269 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 270 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 271 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 274 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMTwo:
# 275 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 276 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 277 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 278 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 279 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 280 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 281 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 282 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 283 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 284 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 285 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 286 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 287 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 288 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 289 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 290 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 291 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 292 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 293 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 294 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 295 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 296 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 297 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 298 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 299 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 300 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 301 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 302 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 305 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMThree:
# 306 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 307 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 308 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 309 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 310 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 311 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 312 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 313 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 314 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 315 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 316 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 317 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 318 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 319 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 320 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 321 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 322 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 323 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 324 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 325 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 326 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 327 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 328 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 329 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 330 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 331 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 332 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 333 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 334 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 335 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 336 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 337 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 338 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 339 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 342 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMFour:
# 343 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 344 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 345 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 346 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 347 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 348 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 349 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 350 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 351 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 352 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 353 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 354 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 355 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 356 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 357 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 358 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 359 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 360 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 361 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 362 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 363 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 364 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 365 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 366 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 367 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 368 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 369 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 370 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 371 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 372 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 373 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 374 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 375 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 376 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 379 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMFive:
# 380 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 381 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 382 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 383 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 384 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 385 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 386 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 387 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 388 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 389 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 390 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 391 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 392 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 393 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 394 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 395 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 396 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 397 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 398 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 399 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 400 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 401 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 402 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 403 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 404 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 405 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 406 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 407 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 408 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 409 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 410 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 411 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 412 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 413 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 414 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 415 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 416 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 417 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 418 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 419 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 422 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMSix:
# 423 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 424 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 425 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 426 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 427 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 428 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 429 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 430 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 431 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 432 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 433 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 434 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 435 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 436 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 437 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 438 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 439 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 440 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 441 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 442 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 443 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 444 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 445 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 446 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 447 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 448 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 449 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 450 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 451 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 452 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 453 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 454 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 455 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 456 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 457 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 458 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 459 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 460 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 461 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 462 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 463 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 464 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 465 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 466 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 467 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 470 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMSeven:
# 471 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 472 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 473 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 474 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 475 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 476 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 477 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 478 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 479 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 480 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 481 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 482 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 483 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 484 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 485 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 486 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 487 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 488 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 489 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 490 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 491 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 492 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 493 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 494 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 495 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 496 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 497 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 498 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 499 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 500 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 501 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 502 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 503 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 504 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 505 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 506 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 507 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 508 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 509 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 510 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 511 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 512 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 513 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 514 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 515 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 516 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 517 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 518 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 519 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 520 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

	.align 2
# 523 "data/maps/MoveMasters/scripts.pory"
ModHeadquarters_TMEight:
# 524 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM01
# 525 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM02
# 526 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM03
# 527 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM04
# 528 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM05
# 529 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM06
# 530 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM07
# 531 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM08
# 532 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM09
# 533 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM10
# 534 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM11
# 535 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM12
# 536 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM13
# 537 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM14
# 538 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM15
# 539 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM16
# 540 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM17
# 541 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM18
# 542 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM19
# 543 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM20
# 544 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM21
# 545 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM22
# 546 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM23
# 547 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM24
# 548 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM25
# 549 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM26
# 550 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM27
# 551 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM28
# 552 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM29
# 553 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM30
# 554 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM31
# 555 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM32
# 556 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM33
# 557 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM34
# 558 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM35
# 559 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM36
# 560 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM37
# 561 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM38
# 562 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM39
# 563 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM40
# 564 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM41
# 565 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM42
# 566 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM43
# 567 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM44
# 568 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM45
# 569 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM46
# 570 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM47
# 571 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM48
# 572 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM49
# 573 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM50
# 574 "data/maps/MoveMasters/scripts.pory"
	.2byte ITEM_TM51
	.2byte ITEM_NONE

MoveMasters_ObjectScript_NameRater_Text_0:
# 26 "data/maps/MoveMasters/scripts.pory"
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
# 33 "data/maps/MoveMasters/scripts.pory"
	.string "So, do you want to rename one of your\n"
	.string "pokemon?\l"
	.string "My services will cost you 100.$"

MoveMasters_ObjectScript_NameRater_Text_2:
# 44 "data/maps/MoveMasters/scripts.pory"
	.string "You know... making a pokemon remember a\n"
	.string "different name is not as easy as you\l"
	.string "might think.\p"
	.string "Please come see me again if you have\n"
	.string "the means to actually pay for my\l"
	.string "services.$"

MoveMasters_ObjectScript_NameRater_Text_3:
# 50 "data/maps/MoveMasters/scripts.pory"
	.string "Understood!\n"
	.string "Come back any time you want to change\l"
	.string "one of your pokemons names!$"

MoveMasters_ObjectScript_MoveRememberer_Text_0:
# 61 "data/maps/MoveMasters/scripts.pory"
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
# 69 "data/maps/MoveMasters/scripts.pory"
	.string "Do you need one of your pokemons to\n"
	.string "remember something?\l"
	.string "Remember, it will cost you 500, HAHAHA!$"

MoveMasters_ObjectScript_MoveRememberer_Text_2:
# 80 "data/maps/MoveMasters/scripts.pory"
	.string "seems like you need ot remember to\n"
	.string "bring your money next time!\l"
	.string "HAHAHAHAHAHA!\p"
	.string "Ha...\p"
	.string "ha...\p"
	.string "...\p"
	.string "Bring some money if you want to use my\n"
	.string "services.$"

MoveMasters_ObjectScript_MoveRememberer_Text_3:
# 90 "data/maps/MoveMasters/scripts.pory"
	.string "As long as you don't forget my services,\n"
	.string "your pokemons can remember any move\l"
	.string "they learned!$"

MoveMasters_ObjectScript_MoveDeleter_Text_0:
# 101 "data/maps/MoveMasters/scripts.pory"
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
# 106 "data/maps/MoveMasters/scripts.pory"
	.string "Does one of your pokemon need to\n"
	.string "forget something?\l"
	.string "Doing so will cost you 100$"

MoveMasters_ObjectScript_MoveDeleter_Text_2:
# 117 "data/maps/MoveMasters/scripts.pory"
	.string "O?\n"
	.string "it seems like you don't have enough\l"
	.string "money for my services.\l"
	.string "If you ever need my services and have\l"
	.string "the money for it, you know where to find\l"
	.string "me!$"

MoveMasters_ObjectScript_MoveDeleter_Text_3:
# 124 "data/maps/MoveMasters/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind!$"

MoveMasters_ObjectScript_EggTutor_Text_0:
# 134 "data/maps/MoveMasters/scripts.pory"
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
# 140 "data/maps/MoveMasters/scripts.pory"
	.string "Would you like one of your pokemon\n"
	.string "remember their egg move?\l"
	.string "I hope you don't mind that it will cost\l"
	.string "you 1000 to do this.$"

MoveMasters_ObjectScript_EggTutor_Text_2:
# 147 "data/maps/MoveMasters/scripts.pory"
	.string "I'm sorry dear, I'm still working on my\n"
	.string "skills, please check again later.$"

MoveMasters_ObjectScript_EggTutor_Text_3:
# 151 "data/maps/MoveMasters/scripts.pory"
	.string "I'm sorry dear, but I can't just offer my\n"
	.string "services for free or I'll starve.\l"
	.string "When you have the money, please do come\l"
	.string "back dear.$"

MoveMasters_ObjectScript_EggTutor_Text_4:
# 157 "data/maps/MoveMasters/scripts.pory"
	.string "Oh? Did you just come here to talk with\n"
	.string "me?\l"
	.string "Go ahead, relief your concerns to\l"
	.string "Granny, I'll listen.$"

MoveMasters_ObjectScript_MoveTutor_Text_0:
# 168 "data/maps/MoveMasters/scripts.pory"
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
# 177 "data/maps/MoveMasters/scripts.pory"
	.string "So, have a pokemon worthy for my\n"
	.string "services?\l"
	.string "a 1000 to learn such a move seems only\l"
	.string "fair to me.$"

MoveMasters_ObjectScript_MoveTutor_Text_2:
# 184 "data/maps/MoveMasters/scripts.pory"
	.string "O, I'm sorry, it seems like I'm not ready\n"
	.string "yet to let any of your pokemon learn a\l"
	.string "special move.$"

MoveMasters_ObjectScript_MoveTutor_Text_3:
# 188 "data/maps/MoveMasters/scripts.pory"
	.string "...\p"
	.string "Don't think you can get a discount from\n"
	.string "me.$"

MoveMasters_ObjectScript_MoveTutor_Text_4:
# 194 "data/maps/MoveMasters/scripts.pory"
	.string "I thought so. Do come back when you\n"
	.string "have a pokemon worthy of my time.$"

MoveMasters_ObjectScript_MartEmployer_Text_0:
# 205 "data/maps/MoveMasters/scripts.pory"
	.string "Hello, I'm the TM seller.\p"
	.string "I have all the different TMs you could\n"
	.string "possibly want your pokemon to learn.\p"
	.string "Sadly I'm not allowed to just let you\n"
	.string "buy these of me. Depending on your\l"
	.string "Initative Level I can offer you better\l"
	.string "TMs. So please, do come back from time\l"
	.string "to time to see if my shop has improved.$"

MoveMasters_ObjectScript_MartEmployer_Text_1:
# 210 "data/maps/MoveMasters/scripts.pory"
	.string "Would you like to buy any TMs I have on\n"
	.string "offer?$"

MoveMasters_ObjectScript_MartEmployer_Text_2:
# 232 "data/maps/MoveMasters/scripts.pory"
	.string "Oh, it seems like something went wrong,\n"
	.string "please come again later!$"

MoveMasters_ObjectScript_MartEmployer_Text_3:
# 234 "data/maps/MoveMasters/scripts.pory"
	.string "Have a nice day!$"
