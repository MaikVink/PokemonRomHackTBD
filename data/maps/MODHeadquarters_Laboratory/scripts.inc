MODHeadquarters_Laboratory_MapScripts::
# 4 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MODHeadquarters_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MODHeadquarters_Laboratory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 3, Laboratory_WarpInto_FirstPokemon
	.2byte 0


Laboratory_WarpInto_FirstPokemon::
# 10 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 11 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_WarpInto_FirstPokemon_Text_0
# 15 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Laboratory_Movement_MoveToProfessor
# 16 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmovement 0
# 17 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_WarpInto_FirstPokemon_Text_1
# 26 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_WarpInto_FirstPokemon_Text_2
# 28 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_Test
# 29 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 4
# 30 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_Test::
# 34 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_0, MSGBOX_YESNO
# 35 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_2
# 65 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_1, MSGBOX_YESNO
# 66 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_12
# 80 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 81 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_34
# 87 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 2
Laboratory_Test_1:
# 91 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_1
# 92 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_3
# 94 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
# 96 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_2, 0
# 97 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_3, 0
# 98 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_4, 0
# 99 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_5, 0
Laboratory_Test_6:
# 101 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_7
# 131 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_5
# 134 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_16:
# 135 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_17
# 164 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_7
# 167 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_38:
# 168 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_39
# 194 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_9
# 197 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_48:
# 198 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_49
# 224 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_11
# 227 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_58:
# 228 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_59
# 257 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_13
# 260 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_68:
# 261 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_69
# 287 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_15
# 290 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_78:
# 291 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_79
# 320 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_17
# 323 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_88:
# 324 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_89
# 350 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_19
# 351 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_20
# 352 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 30
	goto_if_gt Laboratory_Test_98
Laboratory_Test_97:
# 356 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 30
	goto_if_gt Laboratory_Test_107
Laboratory_Test_106:
# 360 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 30
	goto_if_gt Laboratory_Test_110
Laboratory_Test_109:
# 364 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 2
# 365 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_21
# 366 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_TEMP_1
# 368 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_Test_114
# 370 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_Test_115
# 372 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 4, Laboratory_Test_116
# 374 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 5, Laboratory_Test_117
# 376 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 6, Laboratory_Test_118
# 378 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 7, Laboratory_Test_119
# 380 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 8, Laboratory_Test_120
# 382 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 9, Laboratory_Test_121
Laboratory_Test_112:
# 385 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	givemon VAR_STARTER_POKEMON, 5, , 4, , VAR_TEMP_E
# 386 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 387 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_22, MSGBOX_YESNO
# 388 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_123
# 395 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_23
Laboratory_Test_122:
# 397 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_24
# 399 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_25
# 400 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 401 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_26
# 402 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitfanfare
# 403 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 404 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	special SetUnlockedPokedexFlags
# 405 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 406 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	special EnableNationalPokedex
# 407 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_27
# 412 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_28
# 414 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	clearflag FLAG_REVERSE_ROLLCALL_FLAG
# 415 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_RECEIVED_FIRST_POKEMON
# 417 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return

Laboratory_Test_2:
# 37 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_1, MSGBOX_YESNO
# 38 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_9
# 52 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 53 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_28
# 59 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 9
	goto Laboratory_Test_1

Laboratory_Test_7:
# 103 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_4
# 107 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 108 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 109 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 110 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_19
# 116 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_20
# 122 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_21
	goto Laboratory_Test_6

Laboratory_Test_9:
# 40 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 41 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_25
# 47 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto Laboratory_Test_1

Laboratory_Test_12:
# 68 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 69 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_31
# 75 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Laboratory_Test_1

Laboratory_Test_17:
# 137 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_6
# 141 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 142 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 143 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 144 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_41
# 150 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_42
# 156 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_43
	goto Laboratory_Test_16

Laboratory_Test_19:
# 112 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 113 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
# 114 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_6

Laboratory_Test_20:
# 118 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 119 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 120 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_6

Laboratory_Test_21:
# 124 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 125 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, -1
# 126 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 1
# 127 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_6

Laboratory_Test_25:
# 43 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto Laboratory_Test_1

Laboratory_Test_28:
# 55 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto Laboratory_Test_1

Laboratory_Test_31:
# 71 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto Laboratory_Test_1

Laboratory_Test_34:
# 83 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto Laboratory_Test_1

Laboratory_Test_39:
# 170 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_8
# 174 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 175 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 176 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 177 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_51
# 182 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_52
# 187 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_53
	goto Laboratory_Test_38

Laboratory_Test_41:
# 146 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 147 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 1
# 148 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_16

Laboratory_Test_42:
# 152 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 153 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
# 154 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_16

Laboratory_Test_43:
# 158 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 159 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 160 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, -1
	goto Laboratory_Test_16

Laboratory_Test_49:
# 200 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_10
# 204 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 205 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 206 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 207 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_61
# 212 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_62
# 217 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_63
	goto Laboratory_Test_48

Laboratory_Test_51:
# 179 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 180 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 5
	goto Laboratory_Test_38

Laboratory_Test_52:
# 184 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 185 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 3
	goto Laboratory_Test_38

Laboratory_Test_53:
# 189 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 190 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto Laboratory_Test_38

Laboratory_Test_59:
# 230 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_12
# 234 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 235 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 236 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 237 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_71
# 243 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_72
# 249 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_73
	goto Laboratory_Test_58

Laboratory_Test_61:
# 209 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 210 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
	goto Laboratory_Test_48

Laboratory_Test_62:
# 214 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 215 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
	goto Laboratory_Test_48

Laboratory_Test_63:
# 219 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 220 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_48

Laboratory_Test_69:
# 263 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_14
# 267 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 268 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 269 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 270 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_81
# 275 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_82
# 280 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_83
	goto Laboratory_Test_68

Laboratory_Test_71:
# 239 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 240 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 241 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, -1
	goto Laboratory_Test_58

Laboratory_Test_72:
# 245 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 246 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 1
# 247 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_58

Laboratory_Test_73:
# 251 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 252 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
# 253 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_58

Laboratory_Test_79:
# 293 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_16
# 297 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 298 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 299 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 300 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_91
# 306 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_92
# 312 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_93
	goto Laboratory_Test_78

Laboratory_Test_81:
# 272 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 273 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 3
	goto Laboratory_Test_68

Laboratory_Test_82:
# 277 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 278 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto Laboratory_Test_68

Laboratory_Test_83:
# 282 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 283 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 5
	goto Laboratory_Test_68

Laboratory_Test_89:
# 326 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_18
# 330 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 331 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 332 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 333 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_100
# 338 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_101
# 343 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_102
	goto Laboratory_Test_88

Laboratory_Test_91:
# 302 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 303 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 304 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Laboratory_Test_78

Laboratory_Test_92:
# 308 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 309 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, -1
# 310 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_78

Laboratory_Test_93:
# 314 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 315 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 1
# 316 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
	goto Laboratory_Test_78

Laboratory_Test_98:
# 354 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Laboratory_Test_97

Laboratory_Test_100:
# 335 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 336 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 3
	goto Laboratory_Test_88

Laboratory_Test_101:
# 340 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 341 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto Laboratory_Test_88

Laboratory_Test_102:
# 345 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 346 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 5
	goto Laboratory_Test_88

Laboratory_Test_107:
# 358 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Laboratory_Test_106

Laboratory_Test_110:
# 362 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_4, 0
	goto Laboratory_Test_109

Laboratory_Test_114:
# 369 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen1
	goto Laboratory_Test_112

Laboratory_Test_115:
# 371 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen2
	goto Laboratory_Test_112

Laboratory_Test_116:
# 373 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen4
	goto Laboratory_Test_112

Laboratory_Test_117:
# 375 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen5
	goto Laboratory_Test_112

Laboratory_Test_118:
# 377 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen6
	goto Laboratory_Test_112

Laboratory_Test_119:
# 379 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen7
	goto Laboratory_Test_112

Laboratory_Test_120:
# 381 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen8
	goto Laboratory_Test_112

Laboratory_Test_121:
# 383 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen9
	goto Laboratory_Test_112

Laboratory_Test_123:
# 390 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 391 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Laboratory_Test_122


Laboratory_PokemonCalculatorGen1::
# 422 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen1_1
# 426 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen1_2
# 430 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen1_3
# 436 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 3
# 437 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 439 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen1_9
# 441 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen1_10
# 443 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen1_11
	return

Laboratory_PokemonCalculatorGen1_1:
# 424 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHARMANDER
	return

Laboratory_PokemonCalculatorGen1_2:
# 428 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SQUIRTLE
	return

Laboratory_PokemonCalculatorGen1_3:
# 432 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_BULBASAUR
	return

Laboratory_PokemonCalculatorGen1_9:
# 440 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHARMANDER
	return

Laboratory_PokemonCalculatorGen1_10:
# 442 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SQUIRTLE
	return

Laboratory_PokemonCalculatorGen1_11:
# 444 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_BULBASAUR
	return


Laboratory_PokemonCalculatorGen2::
# 451 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen2_1
# 455 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen2_2
# 459 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen2_3
# 463 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen2_4
# 469 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 470 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 472 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen2_11
# 474 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen2_12
# 476 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen2_13
# 478 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen2_14
	return

Laboratory_PokemonCalculatorGen2_1:
# 453 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TREECKO
	return

Laboratory_PokemonCalculatorGen2_2:
# 457 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CYNDAQUIL
	return

Laboratory_PokemonCalculatorGen2_3:
# 461 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TOTODILE
	return

Laboratory_PokemonCalculatorGen2_4:
# 465 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIKORITA
	return

Laboratory_PokemonCalculatorGen2_11:
# 473 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CYNDAQUIL
	return

Laboratory_PokemonCalculatorGen2_12:
# 475 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TOTODILE
	return

Laboratory_PokemonCalculatorGen2_13:
# 477 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIKORITA
	return

Laboratory_PokemonCalculatorGen2_14:
# 479 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TREECKO
	return


Laboratory_PokemonCalculatorGen4::
# 486 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen4_1
# 490 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen4_2
# 494 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen4_3
# 498 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen4_4
# 504 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 505 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 507 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen4_11
# 509 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen4_12
# 511 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen4_13
# 513 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen4_14
	return

Laboratory_PokemonCalculatorGen4_1:
# 488 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_RIOLU
	return

Laboratory_PokemonCalculatorGen4_2:
# 492 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIMCHAR
	return

Laboratory_PokemonCalculatorGen4_3:
# 496 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIPLUP
	return

Laboratory_PokemonCalculatorGen4_4:
# 500 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TURTWIG
	return

Laboratory_PokemonCalculatorGen4_11:
# 508 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIMCHAR
	return

Laboratory_PokemonCalculatorGen4_12:
# 510 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIPLUP
	return

Laboratory_PokemonCalculatorGen4_13:
# 512 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TURTWIG
	return

Laboratory_PokemonCalculatorGen4_14:
# 514 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_RIOLU
	return


Laboratory_PokemonCalculatorGen5::
# 521 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen5_1
# 526 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen5_2
# 530 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen5_3
# 534 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen5_4
# 540 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 541 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 543 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen5_11
# 545 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen5_12
# 547 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen5_13
# 549 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen5_14
	return

Laboratory_PokemonCalculatorGen5_1:
# 523 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_AXEW
# 524 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return

Laboratory_PokemonCalculatorGen5_2:
# 528 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TEPIG
	return

Laboratory_PokemonCalculatorGen5_3:
# 532 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_OSHAWOTT
	return

Laboratory_PokemonCalculatorGen5_4:
# 536 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SNIVY
	return

Laboratory_PokemonCalculatorGen5_11:
# 544 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TEPIG
	return

Laboratory_PokemonCalculatorGen5_12:
# 546 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_OSHAWOTT
	return

Laboratory_PokemonCalculatorGen5_13:
# 548 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SNIVY
	return

Laboratory_PokemonCalculatorGen5_14:
# 550 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_AXEW
# 551 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return


Laboratory_PokemonCalculatorGen6::
# 558 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen6_1
# 562 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen6_2
# 566 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen6_3
# 570 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen6_4
# 576 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 577 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 579 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen6_11
# 581 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen6_12
# 583 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen6_13
# 585 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen6_14
	return

Laboratory_PokemonCalculatorGen6_1:
# 560 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_MUDKIP
	return

Laboratory_PokemonCalculatorGen6_2:
# 564 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FENNEKIN
	return

Laboratory_PokemonCalculatorGen6_3:
# 568 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FROAKIE
	return

Laboratory_PokemonCalculatorGen6_4:
# 572 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHESPIN
	return

Laboratory_PokemonCalculatorGen6_11:
# 580 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FENNEKIN
	return

Laboratory_PokemonCalculatorGen6_12:
# 582 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FROAKIE
	return

Laboratory_PokemonCalculatorGen6_13:
# 584 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHESPIN
	return

Laboratory_PokemonCalculatorGen6_14:
# 586 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_MUDKIP
	return


Laboratory_PokemonCalculatorGen7::
# 593 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen7_1
# 597 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen7_2
# 601 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen7_3
# 605 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen7_4
# 611 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 612 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 614 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen7_11
# 616 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen7_12
# 618 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen7_13
# 620 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen7_14
	return

Laboratory_PokemonCalculatorGen7_1:
# 595 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIKACHU
	return

Laboratory_PokemonCalculatorGen7_2:
# 599 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_LITTEN
	return

Laboratory_PokemonCalculatorGen7_3:
# 603 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_POPPLIO
	return

Laboratory_PokemonCalculatorGen7_4:
# 607 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_ROWLET
	return

Laboratory_PokemonCalculatorGen7_11:
# 615 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_LITTEN
	return

Laboratory_PokemonCalculatorGen7_12:
# 617 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_POPPLIO
	return

Laboratory_PokemonCalculatorGen7_13:
# 619 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_ROWLET
	return

Laboratory_PokemonCalculatorGen7_14:
# 621 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIKACHU
	return


Laboratory_PokemonCalculatorGen8::
# 628 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen8_1
# 633 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen8_2
# 637 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen8_3
# 641 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen8_4
# 647 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 648 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 650 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen8_11
# 652 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen8_12
# 654 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen8_13
# 656 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen8_14
	return

Laboratory_PokemonCalculatorGen8_1:
# 630 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_EEVEE
# 631 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return

Laboratory_PokemonCalculatorGen8_2:
# 635 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SCORBUNNY
	return

Laboratory_PokemonCalculatorGen8_3:
# 639 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SOBBLE
	return

Laboratory_PokemonCalculatorGen8_4:
# 643 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_GROOKEY
	return

Laboratory_PokemonCalculatorGen8_11:
# 651 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SCORBUNNY
	return

Laboratory_PokemonCalculatorGen8_12:
# 653 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SOBBLE
	return

Laboratory_PokemonCalculatorGen8_13:
# 655 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_GROOKEY
	return

Laboratory_PokemonCalculatorGen8_14:
# 657 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_EEVEE
# 658 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return


Laboratory_PokemonCalculatorGen9::
# 665 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen9_1
# 669 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen9_2
# 673 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen9_3
# 677 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen9_4
# 683 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 684 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 686 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen9_11
# 688 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen9_12
# 690 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen9_13
# 692 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen9_14
	return

Laboratory_PokemonCalculatorGen9_1:
# 667 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TORCHIC
	return

Laboratory_PokemonCalculatorGen9_2:
# 671 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FUECOCO
	return

Laboratory_PokemonCalculatorGen9_3:
# 675 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_QUAXLY
	return

Laboratory_PokemonCalculatorGen9_4:
# 679 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SPRIGATITO
	return

Laboratory_PokemonCalculatorGen9_11:
# 687 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FUECOCO
	return

Laboratory_PokemonCalculatorGen9_12:
# 689 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_QUAXLY
	return

Laboratory_PokemonCalculatorGen9_13:
# 691 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SPRIGATITO
	return

Laboratory_PokemonCalculatorGen9_14:
# 693 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TORCHIC
	return


Laboratory_SignScript_BoxRandomStuff::
# 702 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 703 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BoxRandomStuff_Text_0
# 704 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BoxTrainingBooks::
# 708 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 709 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BoxTrainingBooks_Text_0
# 710 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BoxGuidebooks::
# 714 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 715 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BoxGuidebooks_Text_0
# 716 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_Plant::
# 720 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 721 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_Plant_Text_0
# 722 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_Machine::
# 726 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 727 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_Machine_Text_0
# 728 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BooksCaseBasic::
# 732 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 733 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BooksCaseBasic_Text_0
# 734 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_SideBookCase::
# 738 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 739 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_SideBookCase_Text_0
# 740 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookAnatomy::
# 744 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 745 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookAnatomy_Text_0
# 746 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_LeaderSchip::
# 750 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 751 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_LeaderSchip_Text_0
# 752 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookBiology::
# 756 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 757 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookBiology_Text_0
# 758 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookComplex::
# 762 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 763 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookComplex_Text_0
# 764 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookStrange::
# 768 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 769 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookStrange_Text_0
# 770 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookGods::
# 774 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 775 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookGods_Text_0
# 776 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookNeatlyStacked::
# 780 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 781 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookNeatlyStacked_Text_0
# 782 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookJournal::
# 786 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 787 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_0, MSGBOX_YESNO
# 789 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_SignScript_BookJournal_2
# 805 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_3
Laboratory_SignScript_BookJournal_1:
# 807 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return

Laboratory_SignScript_BookJournal_2:
# 791 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	applymovement 1, CommonMovement_FacePlayer
# 792 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	goto_if_set FLAG_TRIED_TO_LOOK, Laboratory_SignScript_BookJournal_6
# 798 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_TRIED_TO_LOOK
# 799 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_2
Laboratory_SignScript_BookJournal_5:
# 801 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	applymovement 1, CommonMovement_FaceOriginalDirection
	goto Laboratory_SignScript_BookJournal_1

Laboratory_SignScript_BookJournal_6:
# 794 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_1
	goto Laboratory_SignScript_BookJournal_5


Laboratory_SignScript_Coffee::
# 811 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 812 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_Coffee_Text_0
# 815 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_MainComputer::
# 819 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 820 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_MainComputer_Text_0
# 821 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_SideComputer::
# 825 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 826 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_SideComputer_Text_0
# 827 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_EventScript_Professor::
# 831 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 832 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	faceplayer
# 833 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 835 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 4, Laboratory_EventScript_Professor_3
# 838 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 5, Laboratory_EventScript_Professor_4
# 840 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 6, Laboratory_EventScript_Professor_5
# 841 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 7, Laboratory_EventScript_Professor_5
# 842 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 8, Laboratory_EventScript_Professor_5
# 844 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 9, Laboratory_EventScript_Professor_6
# 854 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_5
Laboratory_EventScript_Professor_1:
# 858 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return

Laboratory_EventScript_Professor_3:
# 836 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_0
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_4:
# 839 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_1
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_5:
# 843 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_2
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_6:
# 845 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Laboratory_EventScript_Professor_8
# 851 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_4
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_8:
# 847 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_3
	goto Laboratory_EventScript_Professor_1


# 861 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
Laboratory_Movement_MoveToProfessor:
# 862 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
# 862 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
# 862 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
# 862 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
	step_end

Laboratory_WarpInto_FirstPokemon_Text_0:
# 12 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}???{COLOR DARK_GRAY}: ah {PLAYER}, I have been\n"
	.string "expecting you!\p"
	.string "please, step forward.$"

Laboratory_WarpInto_FirstPokemon_Text_1:
# 17 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}???{COLOR DARK_GRAY}: While you probably already know\n"
	.string "who I am, I would like to re-introduce\l"
	.string "myself to all initiatives that made it\l"
	.string "this far:\p"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: My name is Professor\n"
	.string "Kector, I'm the lead scientist of team\l"
	.string "MOD and I'm the person in charge of\l"
	.string "giving you your pokemon.\p"
	.string "I'm also researching how we can\n"
	.string "integrate pokemon back into our\l"
	.string "society after... {COLOR RED}'The Incident'{COLOR DARK_GRAY}.\p"
	.string "Anyways, let's focus on why you're here:\n"
	.string "your pokemon.\p"
	.string "I know you're very excited to come and\n"
	.string "choose your pokemon. That whole\l"
	.string "process of getting to choose out of\l"
	.string "three or more pokemon, etc. etc.\p"
	.string "That is however not how it works here.\p"
	.string "We have a broad selection of pokemon we\n"
	.string "can give you and we have a short\l"
	.string "questoinnaire to make sure we give you\l"
	.string "a pokemon that fits with your\l"
	.string "personality and experience.\p"
	.string "There are no right or wrong answers, but\n"
	.string "there are also no takebacks. Once I\l"
	.string "gave you your pokemon, you're stuck\l"
	.string "with it.\p"
	.string "You can't redo the test to get a\n"
	.string "different pokemon as result.$"

Laboratory_WarpInto_FirstPokemon_Text_2:
# 26 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Unless of course you have some magical\n"
	.string "ability to turn back time that is...\p"
	.string "Anyways, without further ado, let's\n"
	.string "step into it.$"

Laboratory_Test_Text_0:
# 34 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q1: Do you know a lot about Pokemon?$"

Laboratory_Test_Text_1:
# 37 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q2: Has it been a long time since you\n"
	.string "done anything with pokemon?$"

Laboratory_Test_Text_2:
# 40 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q3: Are you willing to try something\n"
	.string "different for a change?$"

Laboratory_Test_Text_3:
# 92 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Hm, very interesting...$"

Laboratory_Test_Text_4:
# 103 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q4: You see a burning building with\n"
	.string "people in it, do you, either:\p"
	.string "A) Try put out the fire.\p"
	.string "B) Try to rescue the people.\p"
	.string "C) See if you can find someone to help\n"
	.string "you out.$"

Laboratory_Test_Text_5:
# 131 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "hm...$"

Laboratory_Test_Text_6:
# 137 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q5: You find a lost wallet on the\n"
	.string "ground, do you:\p"
	.string "A) Try return it to the owner.\p"
	.string "B) Try return it to the owner, after you\n"
	.string "have taking the cash out of the wallet.\p"
	.string "C) Keep it for yourself.$"

Laboratory_Test_Text_7:
# 164 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "really now?$"

Laboratory_Test_Text_8:
# 170 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q6: It's your friends birthday, do you\n"
	.string "give him:\p"
	.string "A) Something orignal.\p"
	.string "B) Something you know he would like.\p"
	.string "C) Something he asked for.$"

Laboratory_Test_Text_9:
# 194 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Of course you do...$"

Laboratory_Test_Text_10:
# 200 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q7: What kind of person should be in\n"
	.string "charge according to you:\p"
	.string "A) The smartest person.\p"
	.string "B) The strongest person, either through\n"
	.string "physical strength or political power.\p"
	.string "C) The kindest person.$"

Laboratory_Test_Text_11:
# 224 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Very interesting choice...$"

Laboratory_Test_Text_12:
# 230 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q8: You encounter a human ghost in an\n"
	.string "abandonde place. Do you:\p"
	.string "A) Try to kill it.\p"
	.string "B) Attempt to let the ghost past to a\n"
	.string "peacefull afterlife.\p"
	.string "C) Follow it from a distance to see what\n"
	.string "it's doing here.$"

Laboratory_Test_Text_13:
# 257 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "...$"

Laboratory_Test_Text_14:
# 263 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q9: You encounter a difficult problem,\n"
	.string "do you:\p"
	.string "A) Try to figure it out on your own.\p"
	.string "B) Ask other people for help.\p"
	.string "C) Find a way to let other people solve\n"
	.string "your problem.$"

Laboratory_Test_Text_15:
# 287 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "If you think that is your best course\n"
	.string "of action...$"

Laboratory_Test_Text_16:
# 293 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q10: You find out one of your fellow\n"
	.string "colleagues wants to betray team MOD, do\l"
	.string "you:\p"
	.string "A) Confront him.\p"
	.string "B) Tell the autoriets about the issue.\p"
	.string "C) Try to get him red-handed.$"

Laboratory_Test_Text_17:
# 320 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Wonder what you would do if you're\n"
	.string "really in that situation...$"

Laboratory_Test_Text_18:
# 326 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Last question: You are fighting an\n"
	.string "Alakazam one on one, choose your\l"
	.string "champion:\p"
	.string "A) Umbreon.\p"
	.string "B) Gengar.\p"
	.string "C) Machamp.$"

Laboratory_Test_Text_19:
# 350 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Fascinating!$"

Laboratory_Test_Text_20:
# 351 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Let me just gather your results...$"

Laboratory_Test_Text_21:
# 365 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "alright, out of my calculations, this\n"
	.string "pokemon would be the best fit for you$"

Laboratory_Test_Text_22:
# 387 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "I assume you want to give it a\n"
	.string "nickname?$"

Laboratory_Test_Text_23:
# 395 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Oh you don't?\n"
	.string "Well, fine by me$"

Laboratory_Test_Text_24:
# 397 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Well that's it, enjoy your pokemon. Not\n"
	.string "that you have much of a choice, unless\l"
	.string "you can rewind time, you'll be stuck with\l"
	.string "it.$"

Laboratory_Test_Text_25:
# 399 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Oh take this as well while you at it.$"

Laboratory_Test_Text_26:
# 401 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{PLAYER} Received a National pokedex$"

Laboratory_Test_Text_27:
# 407 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: This is a pokedex. It was\n"
	.string "used long ago by many researches to\l"
	.string "track data of different pokemon.\p"
	.string "Sadly most of this digital data has\n"
	.string "been lost through time.\p"
	.string "While it will not be your main objective\n"
	.string "probably, I would appraciate it if you\l"
	.string "could keep a record of all pokemon you\l"
	.string "encounter.\p"
	.string "It will help us learn from the\n"
	.string "professors before me what they have\l"
	.string "learned about pokemon.$"

Laboratory_Test_Text_28:
# 412 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Now that has been taken care of, go to\n"
	.string "RollCall. I heard {COLOR LIGHT_GRAY}someone special{COLOR DARK_GRAY} wants\l"
	.string "to talk to your there.$"

Laboratory_SignScript_BoxRandomStuff_Text_0:
# 703 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a box filled with different kind of\n"
	.string "stuff, most of it you can't make sense\l"
	.string "of it.$"

Laboratory_SignScript_BoxTrainingBooks_Text_0:
# 709 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a box filled with books, seems to be\n"
	.string "some book about how to train rookies.$"

Laboratory_SignScript_BoxGuidebooks_Text_0:
# 715 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a box filled with books, seems like\n"
	.string "some kind of behavioural guidebook.$"

Laboratory_SignScript_Plant_Text_0:
# 721 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "the plant inside the pot is fake, it\n"
	.string "would have probably died long ago\l"
	.string "otherwise.$"

Laboratory_SignScript_Machine_Text_0:
# 727 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's one of the strange machines inside\n"
	.string "the laboratory. You have no idea what it\l"
	.string "does and you're too scared to touch\l"
	.string "anything in case you break anything.$"

Laboratory_SignScript_BooksCaseBasic_Text_0:
# 733 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a gigantic bookcase filled with\n"
	.string "hundreds of books. They seem to cover\l"
	.string "most basic knowledge about every kind\l"
	.string "of pokemon.$"

Laboratory_SignScript_SideBookCase_Text_0:
# 739 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "The bookcase is blocked by random\n"
	.string "stuff laying on the messy ground,\l"
	.string "making you unable to see clearly what\l"
	.string "the books are about.$"

Laboratory_SignScript_BookAnatomy_Text_0:
# 745 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to be\n"
	.string "cover some pokemon and human anatomy.$"

Laboratory_SignScript_LeaderSchip_Text_0:
# 751 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to be\n"
	.string "about leadership and the greatest\l"
	.string "leaders of the past generations.$"

Laboratory_SignScript_BookBiology_Text_0:
# 757 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to cover\n"
	.string "the biology of pokemon, from the\l"
	.string "pokemon foodcycle to reproduction\l"
	.string "between different pokemon kinds.$"

Laboratory_SignScript_BookComplex_Text_0:
# 763 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to go\n"
	.string "over theories of timetravel and\l"
	.string "multi-unverse theories.\p"
	.string "...\p"
	.string "You don't seem to understand anything\n"
	.string "from what you quickly scan through.$"

Laboratory_SignScript_BookStrange_Text_0:
# 769 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to go\n"
	.string "about...\p"
	.string "acting?$"

Laboratory_SignScript_BookGods_Text_0:
# 775 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to talk\n"
	.string "about the different gods of our world.$"

Laboratory_SignScript_BookNeatlyStacked_Text_0:
# 781 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a neatly stack of file, it seems to\n"
	.string "be the files of different members of\l"
	.string "MOD. You can't look through them though\l"
	.string "while the professor is watching you.$"

Laboratory_SignScript_BookJournal_Text_0:
# 787 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It seems to be some journal to keep\n"
	.string "record in, you can see some papers\l"
	.string "sticking out as if they are from recent\l"
	.string "experiments. You can't make much sense\l"
	.string "out of the small part you can see.\p"
	.string "Want to look through the file?$"

Laboratory_SignScript_BookJournal_Text_1:
# 794 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: I told you already, you're\n"
	.string "not allowed to look at it, just leave it\l"
	.string "alone!$"

Laboratory_SignScript_BookJournal_Text_2:
# 799 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: hé, that is personal! Ask\n"
	.string "before you just look through my stuff!$"

Laboratory_SignScript_BookJournal_Text_3:
# 805 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Better not touch the professors stuff\n"
	.string "while the professor is still in the room.$"

Laboratory_SignScript_Coffee_Text_0:
# 812 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "You don't know how long this cup of\n"
	.string "coffee has been standing here, but it\l"
	.string "is long cold.\p"
	.string "...\p"
	.string "scratch that, it has probably been\n"
	.string "standing here for quite some time\l"
	.string "seeing that the cup is stuck to the\l"
	.string "table...$"

Laboratory_SignScript_MainComputer_Text_0:
# 820 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's one of the professors computers.\p"
	.string "It is locked and the lock screen is\n"
	.string "bland, so not much you can do on it.$"

Laboratory_SignScript_SideComputer_Text_0:
# 826 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Why does the professor need two\n"
	.string "computers anyways?$"

Laboratory_EventScript_Professor_Text_0:
# 836 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: There is nothing left here\n"
	.string "for you to do, please go to Roll Call.\p"
	.string "Roll Call is north from the main hallway,\n"
	.string "it's hard to mis. Now hurry up, before\l"
	.string "you make {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} mad!$"

Laboratory_EventScript_Professor_Text_1:
# 839 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Huh?\p"
	.string "Do you want something?\p"
	.string "I think you better just go sleep so\n"
	.string "your well rested for whats to come\l"
	.string "next.$"

Laboratory_EventScript_Professor_Text_2:
# 843 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Huh?\p"
	.string "Do you want something?\p"
	.string "Should you not focus on the Tournament\n"
	.string "in the room next of here?.$"

Laboratory_EventScript_Professor_Text_3:
# 847 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: You're a fascinating...\n"
	.string "recruit.\l"
	.string "Continue your progress with your\l"
	.string "pokedex, you can become a great asset\l"
	.string "for Team MOD.$"

Laboratory_EventScript_Professor_Text_4:
# 851 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Good job on making it on\n"
	.string "the finals! I'll be watching your battle,\l"
	.string "I know this will be interesting to\l"
	.string "watch!$"

Laboratory_EventScript_Professor_Text_5:
# 854 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Let me take a look at your\n"
	.string "pokedex.\p"
	.string "hm...\p"
	.string "keep up the good work, this data will\n"
	.string "help us greatly in the future.$"
