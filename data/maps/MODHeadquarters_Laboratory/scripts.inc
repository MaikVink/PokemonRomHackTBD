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
# 25 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_WarpInto_FirstPokemon_Text_2
# 27 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_Test
# 28 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 4
# 29 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_Test::
# 33 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_0, MSGBOX_YESNO
# 34 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_2
# 64 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_1, MSGBOX_YESNO
# 65 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_12
# 79 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 80 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_34
# 86 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 2
Laboratory_Test_1:
# 90 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_1
# 91 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_3
# 93 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
# 95 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_2, 0
# 96 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_3, 0
# 97 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_4, 0
# 98 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_5, 0
Laboratory_Test_6:
# 100 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_7
# 130 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_5
# 133 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_16:
# 134 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_17
# 163 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_7
# 166 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_38:
# 167 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_39
# 193 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_9
# 196 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_48:
# 197 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_49
# 223 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_11
# 226 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_58:
# 227 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_59
# 256 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_13
# 259 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_68:
# 260 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_69
# 286 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_15
# 289 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_78:
# 290 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_79
# 319 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_17
# 322 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 1
Laboratory_Test_88:
# 323 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq Laboratory_Test_89
# 349 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_19
# 350 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_20
# 351 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 30
	goto_if_gt Laboratory_Test_98
Laboratory_Test_97:
# 355 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 30
	goto_if_gt Laboratory_Test_107
Laboratory_Test_106:
# 359 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 30
	goto_if_gt Laboratory_Test_110
Laboratory_Test_109:
# 363 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 2
# 364 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_21
# 365 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_TEMP_1
# 367 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_Test_114
# 369 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_Test_115
# 371 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 4, Laboratory_Test_116
# 373 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 5, Laboratory_Test_117
# 375 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 6, Laboratory_Test_118
# 377 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 7, Laboratory_Test_119
# 379 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 8, Laboratory_Test_120
# 381 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 9, Laboratory_Test_121
Laboratory_Test_112:
# 384 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	givemon VAR_STARTER_POKEMON, 5, , 4, , VAR_TEMP_E
# 385 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 386 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_22, MSGBOX_YESNO
# 387 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_123
# 394 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_23
Laboratory_Test_122:
# 396 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_24
# 398 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_25
# 399 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 400 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_26
# 401 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitfanfare
# 402 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 403 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	special SetUnlockedPokedexFlags
# 404 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 405 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	special EnableNationalPokedex
# 406 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_27
# 411 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_28
# 413 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	clearflag FLAG_REVERSE_ROLLCALL_FLAG
# 414 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_RECEIVED_FIRST_POKEMON
# 416 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return

Laboratory_Test_2:
# 36 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_1, MSGBOX_YESNO
# 37 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_9
# 51 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 52 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_28
# 58 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 9
	goto Laboratory_Test_1

Laboratory_Test_7:
# 102 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_4
# 106 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 107 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 108 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 109 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_19
# 115 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_20
# 121 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_21
	goto Laboratory_Test_6

Laboratory_Test_9:
# 39 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 40 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_25
# 46 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 6
	goto Laboratory_Test_1

Laboratory_Test_12:
# 67 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_Test_Text_2, MSGBOX_YESNO
# 68 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_Test_31
# 74 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Laboratory_Test_1

Laboratory_Test_17:
# 136 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_6
# 140 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 141 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 142 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 143 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_41
# 149 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_42
# 155 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_43
	goto Laboratory_Test_16

Laboratory_Test_19:
# 111 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 112 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
# 113 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_6

Laboratory_Test_20:
# 117 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 118 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 119 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_6

Laboratory_Test_21:
# 123 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 124 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, -1
# 125 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 1
# 126 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_6

Laboratory_Test_25:
# 42 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto Laboratory_Test_1

Laboratory_Test_28:
# 54 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 8
	goto Laboratory_Test_1

Laboratory_Test_31:
# 70 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 7
	goto Laboratory_Test_1

Laboratory_Test_34:
# 82 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto Laboratory_Test_1

Laboratory_Test_39:
# 169 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_8
# 173 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 174 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 175 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 176 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_51
# 181 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_52
# 186 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_53
	goto Laboratory_Test_38

Laboratory_Test_41:
# 145 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 146 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 1
# 147 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_16

Laboratory_Test_42:
# 151 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 152 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
# 153 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_16

Laboratory_Test_43:
# 157 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 158 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 159 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, -1
	goto Laboratory_Test_16

Laboratory_Test_49:
# 199 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_10
# 203 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 204 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 4, MULTI_TEST_CHOICE, 1
# 205 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 206 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_61
# 211 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_62
# 216 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_63
	goto Laboratory_Test_48

Laboratory_Test_51:
# 178 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 179 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 5
	goto Laboratory_Test_38

Laboratory_Test_52:
# 183 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 184 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 3
	goto Laboratory_Test_38

Laboratory_Test_53:
# 188 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 189 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto Laboratory_Test_38

Laboratory_Test_59:
# 229 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_12
# 233 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 234 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 235 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 236 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_71
# 242 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_72
# 248 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_73
	goto Laboratory_Test_58

Laboratory_Test_61:
# 208 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 209 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
	goto Laboratory_Test_48

Laboratory_Test_62:
# 213 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 214 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
	goto Laboratory_Test_48

Laboratory_Test_63:
# 218 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 219 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_48

Laboratory_Test_69:
# 262 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_14
# 266 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 267 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 268 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 269 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_81
# 274 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_82
# 279 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_83
	goto Laboratory_Test_68

Laboratory_Test_71:
# 238 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 239 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 240 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, -1
	goto Laboratory_Test_58

Laboratory_Test_72:
# 244 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 245 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 1
# 246 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_58

Laboratory_Test_73:
# 250 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 251 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
# 252 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto Laboratory_Test_58

Laboratory_Test_79:
# 292 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_16
# 296 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 297 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 298 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 299 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_91
# 305 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_92
# 311 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_93
	goto Laboratory_Test_78

Laboratory_Test_81:
# 271 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 272 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 3
	goto Laboratory_Test_68

Laboratory_Test_82:
# 276 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 277 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto Laboratory_Test_68

Laboratory_Test_83:
# 281 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 282 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 5
	goto Laboratory_Test_68

Laboratory_Test_89:
# 325 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	message Laboratory_Test_Text_18
# 329 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	waitmessage
# 330 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	multichoice 25, 5, MULTI_TEST_CHOICE, 1
# 331 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	closemessage
# 332 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Laboratory_Test_100
# 337 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Laboratory_Test_101
# 342 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Laboratory_Test_102
	goto Laboratory_Test_88

Laboratory_Test_91:
# 301 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 302 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 3
# 303 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto Laboratory_Test_78

Laboratory_Test_92:
# 307 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 308 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, -1
# 309 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto Laboratory_Test_78

Laboratory_Test_93:
# 313 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 314 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_2, 1
# 315 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_3, 3
	goto Laboratory_Test_78

Laboratory_Test_98:
# 353 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_2, 0
	goto Laboratory_Test_97

Laboratory_Test_100:
# 334 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 335 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 3
	goto Laboratory_Test_88

Laboratory_Test_101:
# 339 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 340 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 1
	goto Laboratory_Test_88

Laboratory_Test_102:
# 344 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_A, 0
# 345 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	addvar VAR_TEMP_5, 5
	goto Laboratory_Test_88

Laboratory_Test_107:
# 357 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_3, 0
	goto Laboratory_Test_106

Laboratory_Test_110:
# 361 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_4, 0
	goto Laboratory_Test_109

Laboratory_Test_114:
# 368 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen1
	goto Laboratory_Test_112

Laboratory_Test_115:
# 370 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen2
	goto Laboratory_Test_112

Laboratory_Test_116:
# 372 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen4
	goto Laboratory_Test_112

Laboratory_Test_117:
# 374 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen5
	goto Laboratory_Test_112

Laboratory_Test_118:
# 376 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen6
	goto Laboratory_Test_112

Laboratory_Test_119:
# 378 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen7
	goto Laboratory_Test_112

Laboratory_Test_120:
# 380 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen8
	goto Laboratory_Test_112

Laboratory_Test_121:
# 382 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Laboratory_PokemonCalculatorGen9
	goto Laboratory_Test_112

Laboratory_Test_123:
# 389 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 390 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Laboratory_Test_122


Laboratory_PokemonCalculatorGen1::
# 421 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen1_1
# 425 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen1_2
# 429 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen1_3
# 435 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 3
# 436 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 438 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen1_9
# 440 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen1_10
# 442 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen1_11
	return

Laboratory_PokemonCalculatorGen1_1:
# 423 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHARMANDER
	return

Laboratory_PokemonCalculatorGen1_2:
# 427 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SQUIRTLE
	return

Laboratory_PokemonCalculatorGen1_3:
# 431 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_BULBASAUR
	return

Laboratory_PokemonCalculatorGen1_9:
# 439 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHARMANDER
	return

Laboratory_PokemonCalculatorGen1_10:
# 441 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SQUIRTLE
	return

Laboratory_PokemonCalculatorGen1_11:
# 443 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_BULBASAUR
	return


Laboratory_PokemonCalculatorGen2::
# 450 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen2_1
# 454 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen2_2
# 458 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen2_3
# 462 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen2_4
# 468 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 469 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 471 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen2_11
# 473 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen2_12
# 475 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen2_13
# 477 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen2_14
	return

Laboratory_PokemonCalculatorGen2_1:
# 452 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TREECKO
	return

Laboratory_PokemonCalculatorGen2_2:
# 456 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CYNDAQUIL
	return

Laboratory_PokemonCalculatorGen2_3:
# 460 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TOTODILE
	return

Laboratory_PokemonCalculatorGen2_4:
# 464 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIKORITA
	return

Laboratory_PokemonCalculatorGen2_11:
# 472 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CYNDAQUIL
	return

Laboratory_PokemonCalculatorGen2_12:
# 474 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TOTODILE
	return

Laboratory_PokemonCalculatorGen2_13:
# 476 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIKORITA
	return

Laboratory_PokemonCalculatorGen2_14:
# 478 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TREECKO
	return


Laboratory_PokemonCalculatorGen4::
# 485 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen4_1
# 489 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen4_2
# 493 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen4_3
# 497 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen4_4
# 503 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 504 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 506 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen4_11
# 508 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen4_12
# 510 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen4_13
# 512 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen4_14
	return

Laboratory_PokemonCalculatorGen4_1:
# 487 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_RIOLU
	return

Laboratory_PokemonCalculatorGen4_2:
# 491 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIMCHAR
	return

Laboratory_PokemonCalculatorGen4_3:
# 495 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIPLUP
	return

Laboratory_PokemonCalculatorGen4_4:
# 499 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TURTWIG
	return

Laboratory_PokemonCalculatorGen4_11:
# 507 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHIMCHAR
	return

Laboratory_PokemonCalculatorGen4_12:
# 509 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIPLUP
	return

Laboratory_PokemonCalculatorGen4_13:
# 511 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TURTWIG
	return

Laboratory_PokemonCalculatorGen4_14:
# 513 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_RIOLU
	return


Laboratory_PokemonCalculatorGen5::
# 520 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen5_1
# 525 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen5_2
# 529 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen5_3
# 533 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen5_4
# 539 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 540 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 542 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen5_11
# 544 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen5_12
# 546 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen5_13
# 548 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen5_14
	return

Laboratory_PokemonCalculatorGen5_1:
# 522 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_AXEW
# 523 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return

Laboratory_PokemonCalculatorGen5_2:
# 527 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TEPIG
	return

Laboratory_PokemonCalculatorGen5_3:
# 531 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_OSHAWOTT
	return

Laboratory_PokemonCalculatorGen5_4:
# 535 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SNIVY
	return

Laboratory_PokemonCalculatorGen5_11:
# 543 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TEPIG
	return

Laboratory_PokemonCalculatorGen5_12:
# 545 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_OSHAWOTT
	return

Laboratory_PokemonCalculatorGen5_13:
# 547 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SNIVY
	return

Laboratory_PokemonCalculatorGen5_14:
# 549 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_AXEW
# 550 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return


Laboratory_PokemonCalculatorGen6::
# 557 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen6_1
# 561 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen6_2
# 565 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen6_3
# 569 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen6_4
# 575 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 576 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 578 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen6_11
# 580 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen6_12
# 582 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen6_13
# 584 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen6_14
	return

Laboratory_PokemonCalculatorGen6_1:
# 559 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_MUDKIP
	return

Laboratory_PokemonCalculatorGen6_2:
# 563 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FENNEKIN
	return

Laboratory_PokemonCalculatorGen6_3:
# 567 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FROAKIE
	return

Laboratory_PokemonCalculatorGen6_4:
# 571 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHESPIN
	return

Laboratory_PokemonCalculatorGen6_11:
# 579 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FENNEKIN
	return

Laboratory_PokemonCalculatorGen6_12:
# 581 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FROAKIE
	return

Laboratory_PokemonCalculatorGen6_13:
# 583 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_CHESPIN
	return

Laboratory_PokemonCalculatorGen6_14:
# 585 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_MUDKIP
	return


Laboratory_PokemonCalculatorGen7::
# 592 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen7_1
# 596 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen7_2
# 600 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen7_3
# 604 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen7_4
# 610 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 611 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 613 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen7_11
# 615 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen7_12
# 617 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen7_13
# 619 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen7_14
	return

Laboratory_PokemonCalculatorGen7_1:
# 594 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIKACHU
	return

Laboratory_PokemonCalculatorGen7_2:
# 598 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_LITTEN
	return

Laboratory_PokemonCalculatorGen7_3:
# 602 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_POPPLIO
	return

Laboratory_PokemonCalculatorGen7_4:
# 606 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_ROWLET
	return

Laboratory_PokemonCalculatorGen7_11:
# 614 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_LITTEN
	return

Laboratory_PokemonCalculatorGen7_12:
# 616 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_POPPLIO
	return

Laboratory_PokemonCalculatorGen7_13:
# 618 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_ROWLET
	return

Laboratory_PokemonCalculatorGen7_14:
# 620 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_PIKACHU
	return


Laboratory_PokemonCalculatorGen8::
# 627 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen8_1
# 632 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen8_2
# 636 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen8_3
# 640 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen8_4
# 646 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 647 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 649 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen8_11
# 651 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen8_12
# 653 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen8_13
# 655 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen8_14
	return

Laboratory_PokemonCalculatorGen8_1:
# 629 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_EEVEE
# 630 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return

Laboratory_PokemonCalculatorGen8_2:
# 634 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SCORBUNNY
	return

Laboratory_PokemonCalculatorGen8_3:
# 638 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SOBBLE
	return

Laboratory_PokemonCalculatorGen8_4:
# 642 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_GROOKEY
	return

Laboratory_PokemonCalculatorGen8_11:
# 650 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SCORBUNNY
	return

Laboratory_PokemonCalculatorGen8_12:
# 652 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SOBBLE
	return

Laboratory_PokemonCalculatorGen8_13:
# 654 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_GROOKEY
	return

Laboratory_PokemonCalculatorGen8_14:
# 656 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_EEVEE
# 657 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_TEMP_E, 1
	return


Laboratory_PokemonCalculatorGen9::
# 664 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_5, 10
	goto_if_gt Laboratory_PokemonCalculatorGen9_1
# 668 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_gt Laboratory_PokemonCalculatorGen9_2
# 672 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_gt Laboratory_PokemonCalculatorGen9_3
# 676 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_TEMP_4, 6
	goto_if_gt Laboratory_PokemonCalculatorGen9_4
# 682 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	random 4
# 683 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_RESULT
# 685 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 0, Laboratory_PokemonCalculatorGen9_11
# 687 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 1, Laboratory_PokemonCalculatorGen9_12
# 689 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 2, Laboratory_PokemonCalculatorGen9_13
# 691 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 3, Laboratory_PokemonCalculatorGen9_14
	return

Laboratory_PokemonCalculatorGen9_1:
# 666 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TORCHIC
	return

Laboratory_PokemonCalculatorGen9_2:
# 670 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FUECOCO
	return

Laboratory_PokemonCalculatorGen9_3:
# 674 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_QUAXLY
	return

Laboratory_PokemonCalculatorGen9_4:
# 678 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SPRIGATITO
	return

Laboratory_PokemonCalculatorGen9_11:
# 686 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_FUECOCO
	return

Laboratory_PokemonCalculatorGen9_12:
# 688 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_QUAXLY
	return

Laboratory_PokemonCalculatorGen9_13:
# 690 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_SPRIGATITO
	return

Laboratory_PokemonCalculatorGen9_14:
# 692 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setvar VAR_STARTER_POKEMON, SPECIES_TORCHIC
	return


Laboratory_SignScript_BoxRandomStuff::
# 701 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 702 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BoxRandomStuff_Text_0
# 703 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BoxTrainingBooks::
# 707 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 708 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BoxTrainingBooks_Text_0
# 709 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BoxGuidebooks::
# 713 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 714 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BoxGuidebooks_Text_0
# 715 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_Plant::
# 719 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 720 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_Plant_Text_0
# 721 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_Machine::
# 725 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 726 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_Machine_Text_0
# 727 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BooksCaseBasic::
# 731 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 732 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BooksCaseBasic_Text_0
# 733 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_SideBookCase::
# 737 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 738 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_SideBookCase_Text_0
# 739 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookAnatomy::
# 743 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 744 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookAnatomy_Text_0
# 745 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_LeaderSchip::
# 749 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 750 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_LeaderSchip_Text_0
# 751 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookBiology::
# 755 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 756 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookBiology_Text_0
# 757 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookComplex::
# 761 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 762 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookComplex_Text_0
# 763 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookStrange::
# 767 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 768 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookStrange_Text_0
# 769 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookGods::
# 773 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 774 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookGods_Text_0
# 775 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookNeatlyStacked::
# 779 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 780 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookNeatlyStacked_Text_0
# 781 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_BookJournal::
# 785 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 786 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_0, MSGBOX_YESNO
# 788 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Laboratory_SignScript_BookJournal_2
# 804 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_3
Laboratory_SignScript_BookJournal_1:
# 806 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return

Laboratory_SignScript_BookJournal_2:
# 790 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	applymovement 1, CommonMovement_FacePlayer
# 791 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	goto_if_set FLAG_TRIED_TO_LOOK, Laboratory_SignScript_BookJournal_6
# 797 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	setflag FLAG_TRIED_TO_LOOK
# 798 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_2
Laboratory_SignScript_BookJournal_5:
# 800 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	applymovement 1, CommonMovement_FaceOriginalDirection
	goto Laboratory_SignScript_BookJournal_1

Laboratory_SignScript_BookJournal_6:
# 793 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_BookJournal_Text_1
	goto Laboratory_SignScript_BookJournal_5


Laboratory_SignScript_Coffee::
# 810 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 811 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_Coffee_Text_0
# 814 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_MainComputer::
# 818 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 819 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_MainComputer_Text_0
# 820 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_SignScript_SideComputer::
# 824 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 825 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_SignScript_SideComputer_Text_0
# 826 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return


Laboratory_EventScript_Professor::
# 830 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	lockall
# 831 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	faceplayer
# 832 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 834 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 4, Laboratory_EventScript_Professor_3
# 837 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 5, Laboratory_EventScript_Professor_4
# 839 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 6, Laboratory_EventScript_Professor_5
# 840 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 7, Laboratory_EventScript_Professor_5
# 841 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 8, Laboratory_EventScript_Professor_5
# 843 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	case 9, Laboratory_EventScript_Professor_6
# 853 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_5
Laboratory_EventScript_Professor_1:
# 857 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	releaseall
	return

Laboratory_EventScript_Professor_3:
# 835 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_0
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_4:
# 838 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_1
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_5:
# 842 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_2
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_6:
# 844 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Laboratory_EventScript_Professor_8
# 850 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_4
	goto Laboratory_EventScript_Professor_1

Laboratory_EventScript_Professor_8:
# 846 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	msgbox Laboratory_EventScript_Professor_Text_3
	goto Laboratory_EventScript_Professor_1


# 860 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
Laboratory_Movement_MoveToProfessor:
# 861 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
# 861 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
# 861 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	walk_up
# 861 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
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
	.string "intrigate pokemon back into our\l"
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
	.string "with it. you can't redo the test to get a\l"
	.string "different pokemon as result.$"

Laboratory_WarpInto_FirstPokemon_Text_2:
# 25 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Unless of course you have some magical\n"
	.string "ability to turn back time that is...\p"
	.string "Anyways, without further ado, let's\n"
	.string "step into it.$"

Laboratory_Test_Text_0:
# 33 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q1: Do you know a lot about Pokemon?$"

Laboratory_Test_Text_1:
# 36 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q2: Has it been a long time since you\n"
	.string "done anything with pokemon?$"

Laboratory_Test_Text_2:
# 39 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q3: Are you willing to try something\n"
	.string "different for a change?$"

Laboratory_Test_Text_3:
# 91 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Hm, very interesting...$"

Laboratory_Test_Text_4:
# 102 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q4: You see a burning building with\n"
	.string "people in it, do you, either:\p"
	.string "A) Try put out the fire.\p"
	.string "B) Try to rescue the people.\p"
	.string "C) See if you can find someone to help\n"
	.string "you out.$"

Laboratory_Test_Text_5:
# 130 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "hm...$"

Laboratory_Test_Text_6:
# 136 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q5: You find a lost wallet on the\n"
	.string "ground, do you:\p"
	.string "A) Try return it to the owner.\p"
	.string "B) Try return it to the owner, after you\n"
	.string "have taking the cash out of the wallet.\p"
	.string "C) Keep it for yourself.$"

Laboratory_Test_Text_7:
# 163 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "really now?$"

Laboratory_Test_Text_8:
# 169 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q6: It's your friends birthday, do you\n"
	.string "give him:\p"
	.string "A) Something orignal.\p"
	.string "B) Something you know he would like.\p"
	.string "C) Something he asked for.$"

Laboratory_Test_Text_9:
# 193 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Of course you do...$"

Laboratory_Test_Text_10:
# 199 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q7: What kind of person should be in\n"
	.string "charge according to you:\p"
	.string "A) The smartest person.\p"
	.string "B) The strongest person, either through\n"
	.string "physical strength or political power.\p"
	.string "C) The kindest person.$"

Laboratory_Test_Text_11:
# 223 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Very interesting choice...$"

Laboratory_Test_Text_12:
# 229 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q8: You encounter a human ghost in an\n"
	.string "abandonde place. Do you:\p"
	.string "A) Try to kill it.\p"
	.string "B) Attempt to let the ghost past to a\n"
	.string "peacefull afterlife.\p"
	.string "C) Follow it from a distance to see what\n"
	.string "it's doing here.$"

Laboratory_Test_Text_13:
# 256 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "...$"

Laboratory_Test_Text_14:
# 262 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q9: You encounter a difficult problem,\n"
	.string "do you:\p"
	.string "A) Try to figure it out on your own.\p"
	.string "B) Ask other people for help.\p"
	.string "C) Find a way to let other people solve\n"
	.string "your problem.$"

Laboratory_Test_Text_15:
# 286 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "If you think that is your best course\n"
	.string "of action...$"

Laboratory_Test_Text_16:
# 292 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Q10: You find out one of your fellow\n"
	.string "colleagues wants to betray team MOD, do\l"
	.string "you:\p"
	.string "A) Confront him.\p"
	.string "B) Tell the autoriets about the issue.\p"
	.string "C) Try to get him red-handed.$"

Laboratory_Test_Text_17:
# 319 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Wonder what you would do if you're\n"
	.string "really in that situation...$"

Laboratory_Test_Text_18:
# 325 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Last question: You are fighting an\n"
	.string "Alakazam one on one, choose your\l"
	.string "champion:\p"
	.string "A) Umbreon.\p"
	.string "B) Gengar.\p"
	.string "C) Machamp.$"

Laboratory_Test_Text_19:
# 349 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Fascinating!$"

Laboratory_Test_Text_20:
# 350 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Let me just gather your results...$"

Laboratory_Test_Text_21:
# 364 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "alright, out of my calculations, this\n"
	.string "pokemon would be the best fit for you$"

Laboratory_Test_Text_22:
# 386 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "I assume you want to give it a\n"
	.string "nickname?$"

Laboratory_Test_Text_23:
# 394 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Oh you don't?\n"
	.string "Well, fine by me$"

Laboratory_Test_Text_24:
# 396 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Well that's it, enjoy your pokemon. Not\n"
	.string "that you have much of a choice, unless\l"
	.string "you can rewind time, you'll be stuck with\l"
	.string "it.$"

Laboratory_Test_Text_25:
# 398 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Oh take this as well while you at it.$"

Laboratory_Test_Text_26:
# 400 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{PLAYER} Received a National pokedex$"

Laboratory_Test_Text_27:
# 406 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
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
# 411 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Now that has been taken care of, go to\n"
	.string "RollCall. I heard {COLOR LIGHT_GRAY}someone special{COLOR DARK_GRAY} wants\l"
	.string "to talk to your there.$"

Laboratory_SignScript_BoxRandomStuff_Text_0:
# 702 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a box filled with different kind of\n"
	.string "stuff, most of it you can't make sense\l"
	.string "of it.$"

Laboratory_SignScript_BoxTrainingBooks_Text_0:
# 708 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a box filled with books, seems to be\n"
	.string "some book about how to train rookies.$"

Laboratory_SignScript_BoxGuidebooks_Text_0:
# 714 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a box filled with books, seems like\n"
	.string "some kind of behavioural guidebook.$"

Laboratory_SignScript_Plant_Text_0:
# 720 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "the plant inside the pot is fake, it\n"
	.string "would have probably died long ago\l"
	.string "otherwise.$"

Laboratory_SignScript_Machine_Text_0:
# 726 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's one of the strange machines inside\n"
	.string "the laboratory. You have no idea what it\l"
	.string "does and you're too scared to touch\l"
	.string "anything, in case you break anything.$"

Laboratory_SignScript_BooksCaseBasic_Text_0:
# 732 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a gigantic bookcase filled with\n"
	.string "hundreds of books. They seem to cover\l"
	.string "most basic knowledge about every kind\l"
	.string "of pokemon.$"

Laboratory_SignScript_SideBookCase_Text_0:
# 738 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "The bookcase is blocked by random\n"
	.string "stuff laying on the messy ground,\l"
	.string "making you unable to see clearly what\l"
	.string "the books are about.$"

Laboratory_SignScript_BookAnatomy_Text_0:
# 744 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to be\n"
	.string "cover some pokemon and human anatomy.$"

Laboratory_SignScript_LeaderSchip_Text_0:
# 750 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to be\n"
	.string "about leadership and the greatest\l"
	.string "leaders of the past generations.$"

Laboratory_SignScript_BookBiology_Text_0:
# 756 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to cover\n"
	.string "the biology of pokemon, from the\l"
	.string "pokemon foodcycle to reproduction\l"
	.string "between different pokemon kinds.$"

Laboratory_SignScript_BookComplex_Text_0:
# 762 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to go\n"
	.string "over theories of timetravel and\l"
	.string "multi-unverse theories.\p"
	.string "...\p"
	.string "You don't seem to understand anything\n"
	.string "from what you quickly scan through.$"

Laboratory_SignScript_BookStrange_Text_0:
# 768 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to go\n"
	.string "about...\p"
	.string "acting?$"

Laboratory_SignScript_BookGods_Text_0:
# 774 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a pile of books, they seem to talk\n"
	.string "about the different gods of our world.$"

Laboratory_SignScript_BookNeatlyStacked_Text_0:
# 780 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's a neatly stack of file, it seems to\n"
	.string "be the files of different members of\l"
	.string "MOD. You can't look through them though\l"
	.string "while the professor is watching you.$"

Laboratory_SignScript_BookJournal_Text_0:
# 786 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It seems to be some journal to keep\n"
	.string "record in, you can see some papers\l"
	.string "sticking out as if they are from recent\l"
	.string "experiments. You can't make much sense\l"
	.string "out of the small part you can see.\p"
	.string "Want to look through the file?$"

Laboratory_SignScript_BookJournal_Text_1:
# 793 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: I told you already, you're\n"
	.string "not allowed to look at it, just leave it\l"
	.string "alone.$"

Laboratory_SignScript_BookJournal_Text_2:
# 798 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: hé, that is personal! Ask\n"
	.string "before you just look through my stuff!$"

Laboratory_SignScript_BookJournal_Text_3:
# 804 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Better not touch the professors stuff\n"
	.string "while the professor is still in the room.$"

Laboratory_SignScript_Coffee_Text_0:
# 811 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "You don't know how long this cup of\n"
	.string "coffee has been standing here, but it\l"
	.string "is long cold.\p"
	.string "...\p"
	.string "scratch that, it has probably been\n"
	.string "standing here for quite some time\l"
	.string "seeing that the cup is stuck to the\l"
	.string "table...$"

Laboratory_SignScript_MainComputer_Text_0:
# 819 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "It's one of the professors computers.\p"
	.string "It is locked and the lock screen is\n"
	.string "bland, so not much you can do on it.$"

Laboratory_SignScript_SideComputer_Text_0:
# 825 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "Why does the professor need two\n"
	.string "computers anyways?$"

Laboratory_EventScript_Professor_Text_0:
# 835 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: There is nothing left here\n"
	.string "for you to do, please go to Roll Call.\p"
	.string "Roll Call is north from the main hallway,\n"
	.string "it's hard to mis. Now hurry up, before\l"
	.string "you make {COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY} mad$"

Laboratory_EventScript_Professor_Text_1:
# 838 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Huh?\p"
	.string "Do you want something?\p"
	.string "I think you better just go sleep so\n"
	.string "your well rested for whats to come\l"
	.string "next.$"

Laboratory_EventScript_Professor_Text_2:
# 842 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Huh?\p"
	.string "Do you want something?\p"
	.string "Should you not focus on the Tournament\n"
	.string "in the room next of here?.$"

Laboratory_EventScript_Professor_Text_3:
# 846 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: You're a fascinating...\n"
	.string "recruit, continue your progress with\l"
	.string "your pokedex, you can become a great\l"
	.string "asset for Team MOD.$"

Laboratory_EventScript_Professor_Text_4:
# 850 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Good job on making it on\n"
	.string "the finals! I'll be watching your battle,\l"
	.string "I know this will be interesting to\l"
	.string "watch!$"

Laboratory_EventScript_Professor_Text_5:
# 853 "data/maps/MODHeadquarters_Laboratory/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Prof. Kector{COLOR DARK_GRAY}: Let me take a look at your\n"
	.string "pokedex.\p"
	.string "hm...\p"
	.string "keep up the good work, this data will\n"
	.string "help us greatly in the future.$"
