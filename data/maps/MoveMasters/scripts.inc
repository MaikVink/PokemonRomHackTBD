MoveMasters_MapScripts::
# 2 "data/maps/MoveMasters/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MoveMasters_OnTranstion
	.byte 0


MoveMasters_OnTranstion::
# 7 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1110
	goto_if_eq MoveMasters_OnTranstion_1
# 7 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 110
	goto_if_eq MoveMasters_OnTranstion_1
# 7 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 10
	goto_if_eq MoveMasters_OnTranstion_1
# 7 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq MoveMasters_OnTranstion_1
	return

MoveMasters_OnTranstion_1:
# 9 "data/maps/MoveMasters/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 1
	return


MoveMasters_ObjectScript_NameRater::
# 15 "data/maps/MoveMasters/scripts.pory"
	lockall
# 16 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 17 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_NameRater_2
MoveMasters_ObjectScript_NameRater_1:
# 26 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_1, MSGBOX_YESNO
# 27 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_5
# 42 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_3
MoveMasters_ObjectScript_NameRater_4:
# 44 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_NameRater_2:
# 19 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_0
	goto MoveMasters_ObjectScript_NameRater_1

MoveMasters_ObjectScript_NameRater_5:
# 29 "data/maps/MoveMasters/scripts.pory"
	checkmoney 100
# 30 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_NameRater_8
# 36 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_NameRater_Text_2
	goto MoveMasters_ObjectScript_NameRater_4

MoveMasters_ObjectScript_NameRater_8:
# 32 "data/maps/MoveMasters/scripts.pory"
	call SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto MoveMasters_ObjectScript_NameRater_4


MoveMasters_ObjectScript_MoveRememberer::
# 49 "data/maps/MoveMasters/scripts.pory"
	lockall
# 50 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 51 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveRememberer_2
MoveMasters_ObjectScript_MoveRememberer_1:
# 61 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_1, MSGBOX_YESNO
# 62 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_5
# 81 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_3
MoveMasters_ObjectScript_MoveRememberer_4:
# 83 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveRememberer_2:
# 53 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_0
	goto MoveMasters_ObjectScript_MoveRememberer_1

MoveMasters_ObjectScript_MoveRememberer_5:
# 64 "data/maps/MoveMasters/scripts.pory"
	checkmoney 500
# 65 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveRememberer_8
# 71 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveRememberer_Text_2
	goto MoveMasters_ObjectScript_MoveRememberer_4

MoveMasters_ObjectScript_MoveRememberer_8:
# 67 "data/maps/MoveMasters/scripts.pory"
	call FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto MoveMasters_ObjectScript_MoveRememberer_4


MoveMasters_ObjectScript_MoveDeleter::
# 88 "data/maps/MoveMasters/scripts.pory"
	lockall
# 89 "data/maps/MoveMasters/scripts.pory"
	faceplayer
# 90 "data/maps/MoveMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt MoveMasters_ObjectScript_MoveDeleter_2
MoveMasters_ObjectScript_MoveDeleter_1:
# 97 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_1, MSGBOX_YESNO
# 98 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_5
# 114 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_3
MoveMasters_ObjectScript_MoveDeleter_4:
# 116 "data/maps/MoveMasters/scripts.pory"
	releaseall
	return

MoveMasters_ObjectScript_MoveDeleter_2:
# 92 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_0
	goto MoveMasters_ObjectScript_MoveDeleter_1

MoveMasters_ObjectScript_MoveDeleter_5:
# 100 "data/maps/MoveMasters/scripts.pory"
	checkmoney 100
# 101 "data/maps/MoveMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MoveMasters_ObjectScript_MoveDeleter_8
# 107 "data/maps/MoveMasters/scripts.pory"
	msgbox MoveMasters_ObjectScript_MoveDeleter_Text_2
	goto MoveMasters_ObjectScript_MoveDeleter_4

MoveMasters_ObjectScript_MoveDeleter_8:
# 103 "data/maps/MoveMasters/scripts.pory"
	call LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	goto MoveMasters_ObjectScript_MoveDeleter_4


MoveMasters_ObjectScript_NameRater_Text_0:
# 19 "data/maps/MoveMasters/scripts.pory"
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
# 26 "data/maps/MoveMasters/scripts.pory"
	.string "So, do you want to rename one of your\n"
	.string "pokemon?$"

MoveMasters_ObjectScript_NameRater_Text_2:
# 36 "data/maps/MoveMasters/scripts.pory"
	.string "You know... making a pokemon remember a\n"
	.string "different name is not as easy as you\l"
	.string "might think.\p"
	.string "Please come see me again if you have\n"
	.string "the means to actually pay for my\l"
	.string "services.$"

MoveMasters_ObjectScript_NameRater_Text_3:
# 42 "data/maps/MoveMasters/scripts.pory"
	.string "Understood!\n"
	.string "Come back any time you want to change\l"
	.string "one of your pokemons names!$"

MoveMasters_ObjectScript_MoveRememberer_Text_0:
# 53 "data/maps/MoveMasters/scripts.pory"
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
# 61 "data/maps/MoveMasters/scripts.pory"
	.string "Do you need one of your pokemons to\n"
	.string "remember something?$"

MoveMasters_ObjectScript_MoveRememberer_Text_2:
# 71 "data/maps/MoveMasters/scripts.pory"
	.string "seems like you need ot remember to\n"
	.string "bring your money next time!\l"
	.string "HAHAHAHAHAHA!\p"
	.string "Ha...\p"
	.string "ha...\p"
	.string "...\p"
	.string "Bring some money if you want to use my\n"
	.string "services.$"

MoveMasters_ObjectScript_MoveRememberer_Text_3:
# 81 "data/maps/MoveMasters/scripts.pory"
	.string "As long as you don't forget my services,\n"
	.string "your pokemons can remember any move\l"
	.string "they learned!$"

MoveMasters_ObjectScript_MoveDeleter_Text_0:
# 92 "data/maps/MoveMasters/scripts.pory"
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
# 97 "data/maps/MoveMasters/scripts.pory"
	.string "Does one of your pokemon need to\n"
	.string "forget something?$"

MoveMasters_ObjectScript_MoveDeleter_Text_2:
# 107 "data/maps/MoveMasters/scripts.pory"
	.string "O?\n"
	.string "it seems like you don't have enough\l"
	.string "money for my services.\l"
	.string "If you ever need my services and have\l"
	.string "the money for it, you know where to find\l"
	.string "me!$"

MoveMasters_ObjectScript_MoveDeleter_Text_3:
# 114 "data/maps/MoveMasters/scripts.pory"
	.string "You know where to find me if you change\n"
	.string "your mind!$"
