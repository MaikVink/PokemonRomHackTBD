MODHeadquarters_SpecialStore_MapScripts::
# 2 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpecialStore_OnTransition
	.byte 0


SpecialStore_OnTransition::
# 6 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_MOD_SHOPS_STATE < 1000, 0
	goto_if_ne SpecialStore_OnTransition_2
SpecialStore_OnTransition_1:
# 10 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq SpecialStore_OnTransition_4
	return

SpecialStore_OnTransition_2:
# 8 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 1000
	goto SpecialStore_OnTransition_1

SpecialStore_OnTransition_4:
# 12 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return


SpecialStore_ObjectScript_MartEmployer::
# 17 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	lockall
# 18 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	faceplayer
# 19 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt SpecialStore_ObjectScript_MartEmployer_2
SpecialStore_ObjectScript_MartEmployer_1:
# 29 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_1
# 30 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	pokemart MODHeadquarters_SpecialShopShop
# 31 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_2
# 32 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	releaseall
	return

SpecialStore_ObjectScript_MartEmployer_2:
# 21 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_0
	goto SpecialStore_ObjectScript_MartEmployer_1


	.align 2
# 35 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
MODHeadquarters_SpecialShopShop:
# 36 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 37 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 38 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 39 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BLACK_FLUTE
# 40 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_WHITE_FLUTE
# 41 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_HELIX_FOSSIL
# 42 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DOME_FOSSIL
# 43 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_OLD_AMBER
# 44 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ROOT_FOSSIL
# 45 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_CLAW_FOSSIL
# 46 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ARMOR_FOSSIL
# 47 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SKULL_FOSSIL
# 48 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_COVER_FOSSIL
# 49 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PLUME_FOSSIL
# 50 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_JAW_FOSSIL
# 51 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SAIL_FOSSIL
# 52 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_BIRD
# 53 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_FISH
# 54 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_DRAKE
# 55 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_DINO
# 56 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_NORMALIUM_Z
# 57 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FIRIUM_Z
# 58 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_WATERIUM_Z
# 59 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ELECTRIUM_Z
# 60 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GRASSIUM_Z
# 61 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ICIUM_Z
# 62 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FIGHTINIUM_Z
# 63 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_POISONIUM_Z
# 64 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GROUNDIUM_Z
# 65 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FLYINIUM_Z
# 66 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PSYCHIUM_Z
# 67 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BUGINIUM_Z
# 68 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ROCKIUM_Z
# 69 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GHOSTIUM_Z
# 70 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DRAGONIUM_Z
# 71 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DARKINIUM_Z
# 72 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_STEELIUM_Z
# 73 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FAIRIUM_Z
# 74 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PIKANIUM_Z
# 75 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_EEVIUM_Z
# 76 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SNORLIUM_Z
# 77 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DECIDIUM_Z
# 78 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_INCINIUM_Z
# 79 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PRIMARIUM_Z
# 80 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_LYCANIUM_Z
# 81 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MIMIKIUM_Z
# 82 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_KOMMONIUM_Z
# 83 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_TAPUNIUM_Z
# 84 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SOLGANIUM_Z
# 85 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_LUNALIUM_Z
# 86 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MARSHADIUM_Z
# 87 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ALORAICHIUM_Z
# 88 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PIKASHUNIUM_Z
# 89 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ULTRANECROZIUM_Z
# 90 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 91 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SHINY_CHARM
# 92 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_CATCHING_CHARM
# 93 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_EXP_CHARM
# 94 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MEGA_RING
# 95 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_Z_POWER_RING
# 96 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MACH_BIKE
# 97 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ACRO_BIKE
# 98 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_OLD_ROD
# 99 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GOOD_ROD
# 100 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SUPER_ROD
# 101 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DOWSING_MACHINE
# 102 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_POKEMON_BOX_LINK
# 103 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_POKE_RADAR
	.2byte ITEM_NONE

SpecialStore_ObjectScript_MartEmployer_Text_0:
# 21 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Is a smal tree blocking your path?\n"
	.string "Do you need to push a bolder out of\l"
	.string "your way?\l"
	.string "Do you want to improve your way of\l"
	.string "travel?\p"
	.string "Then you have come to right place! Here\n"
	.string "at National Usefull Tools or\l"
	.string "N.U.T. we make sure you will have the\l"
	.string "tools you need most desperate out in\l"
	.string "the field. 100% customer satisfaction\l"
	.string "guaranteed or you'll get your money\l"
	.string "back! Feel free to check our catalogue\l"
	.string "anytime!$"

SpecialStore_ObjectScript_MartEmployer_Text_1:
# 29 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Where can N.U.T. help you with today?$"

SpecialStore_ObjectScript_MartEmployer_Text_2:
# 31 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Please come again!$"
