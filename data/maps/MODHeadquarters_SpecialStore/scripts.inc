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
	checkitem ITEM_AXE, 1
# 32 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_6
SpecialStore_ObjectScript_MartEmployer_4:
# 43 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_LANTERN, 1
# 44 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_11
SpecialStore_ObjectScript_MartEmployer_9:
# 55 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_DRILL, 1
# 56 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_16
SpecialStore_ObjectScript_MartEmployer_14:
# 67 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_MECHANICAL_ARM, 1
# 68 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_21
SpecialStore_ObjectScript_MartEmployer_19:
# 79 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_SURFBOARD, 1
# 80 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_26
SpecialStore_ObjectScript_MartEmployer_24:
# 91 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_BIRD_FLUTE, 1
# 92 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_31
SpecialStore_ObjectScript_MartEmployer_29:
# 103 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_DIVING_EQUIPMENT, 1
# 104 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_36
SpecialStore_ObjectScript_MartEmployer_34:
# 115 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	checkitem ITEM_AQUA_JETPACK, 1
# 116 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SpecialStore_ObjectScript_MartEmployer_41
SpecialStore_ObjectScript_MartEmployer_39:
# 127 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_11
# 128 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	releaseall
	return

SpecialStore_ObjectScript_MartEmployer_2:
# 21 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_0
	goto SpecialStore_ObjectScript_MartEmployer_1

SpecialStore_ObjectScript_MartEmployer_5:
# 34 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_2
# 37 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM01
# 38 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 41 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE01_GET
	goto SpecialStore_ObjectScript_MartEmployer_4

SpecialStore_ObjectScript_MartEmployer_6:
# 32 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, SpecialStore_ObjectScript_MartEmployer_5
	goto SpecialStore_ObjectScript_MartEmployer_4

SpecialStore_ObjectScript_MartEmployer_10:
# 46 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_4
# 49 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM05
# 50 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 53 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE02_GET
	goto SpecialStore_ObjectScript_MartEmployer_9

SpecialStore_ObjectScript_MartEmployer_11:
# 44 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, SpecialStore_ObjectScript_MartEmployer_10
	goto SpecialStore_ObjectScript_MartEmployer_9

SpecialStore_ObjectScript_MartEmployer_15:
# 58 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_5
# 61 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM06
# 62 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 65 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE03_GET
	goto SpecialStore_ObjectScript_MartEmployer_14

SpecialStore_ObjectScript_MartEmployer_16:
# 56 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, SpecialStore_ObjectScript_MartEmployer_15
	goto SpecialStore_ObjectScript_MartEmployer_14

SpecialStore_ObjectScript_MartEmployer_20:
# 70 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_6
# 73 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM04
# 74 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 77 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE04_GET
	goto SpecialStore_ObjectScript_MartEmployer_19

SpecialStore_ObjectScript_MartEmployer_21:
# 68 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, SpecialStore_ObjectScript_MartEmployer_20
	goto SpecialStore_ObjectScript_MartEmployer_19

SpecialStore_ObjectScript_MartEmployer_25:
# 82 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_7
# 85 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM03
# 86 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 89 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE05_GET
	goto SpecialStore_ObjectScript_MartEmployer_24

SpecialStore_ObjectScript_MartEmployer_26:
# 80 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, SpecialStore_ObjectScript_MartEmployer_25
	goto SpecialStore_ObjectScript_MartEmployer_24

SpecialStore_ObjectScript_MartEmployer_30:
# 94 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_8
# 97 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM02
# 98 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 101 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE06_GET
	goto SpecialStore_ObjectScript_MartEmployer_29

SpecialStore_ObjectScript_MartEmployer_31:
# 92 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SpecialStore_ObjectScript_MartEmployer_30
	goto SpecialStore_ObjectScript_MartEmployer_29

SpecialStore_ObjectScript_MartEmployer_35:
# 106 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_9
# 109 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM08
# 110 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 113 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE07_GET
	goto SpecialStore_ObjectScript_MartEmployer_34

SpecialStore_ObjectScript_MartEmployer_36:
# 104 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, SpecialStore_ObjectScript_MartEmployer_35
	goto SpecialStore_ObjectScript_MartEmployer_34

SpecialStore_ObjectScript_MartEmployer_40:
# 118 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_10
# 121 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM07
# 122 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_ObjectScript_MartEmployer_Text_3
# 125 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE08_GET
	goto SpecialStore_ObjectScript_MartEmployer_39

SpecialStore_ObjectScript_MartEmployer_41:
# 116 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, SpecialStore_ObjectScript_MartEmployer_40
	goto SpecialStore_ObjectScript_MartEmployer_39


	.align 2
# 131 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
MODHeadquarters_SpecialShopShop:
# 132 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 133 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 134 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 135 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BLACK_FLUTE
# 136 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_WHITE_FLUTE
# 137 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_OVAL_CHARM
# 138 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SHINY_CHARM
# 139 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_CATCHING_CHARM
# 140 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_EXP_CHARM
# 141 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MEGA_RING
# 142 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_Z_POWER_RING
# 143 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MACH_BIKE
# 144 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ACRO_BIKE
# 145 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_OLD_ROD
# 146 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GOOD_ROD
# 147 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SUPER_ROD
# 148 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DOWSING_MACHINE
# 149 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_POKEMON_BOX_LINK
# 150 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_POKE_RADAR
# 151 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_AXE
# 152 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_LANTERN
# 153 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DRILL
# 154 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MECHANICAL_ARM
# 155 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SURFBOARD
# 156 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BIRD_FLUTE
# 157 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DIVING_EQUIPMENT
# 158 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_AQUA_JETPACK
# 159 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_CAMPING_EQUIPMENT
# 160 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_HELIX_FOSSIL
# 161 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DOME_FOSSIL
# 162 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_OLD_AMBER
# 163 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ROOT_FOSSIL
# 164 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_CLAW_FOSSIL
# 165 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ARMOR_FOSSIL
# 166 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SKULL_FOSSIL
# 167 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_COVER_FOSSIL
# 168 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PLUME_FOSSIL
# 169 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_JAW_FOSSIL
# 170 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SAIL_FOSSIL
# 171 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_BIRD
# 172 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_FISH
# 173 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_DRAKE
# 174 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FOSSILIZED_DINO
# 175 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_NORMALIUM_Z
# 176 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FIRIUM_Z
# 177 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_WATERIUM_Z
# 178 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ELECTRIUM_Z
# 179 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GRASSIUM_Z
# 180 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ICIUM_Z
# 181 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FIGHTINIUM_Z
# 182 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_POISONIUM_Z
# 183 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GROUNDIUM_Z
# 184 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FLYINIUM_Z
# 185 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PSYCHIUM_Z
# 186 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_BUGINIUM_Z
# 187 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ROCKIUM_Z
# 188 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_GHOSTIUM_Z
# 189 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DRAGONIUM_Z
# 190 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DARKINIUM_Z
# 191 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_STEELIUM_Z
# 192 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_FAIRIUM_Z
# 193 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PIKANIUM_Z
# 194 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_EEVIUM_Z
# 195 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SNORLIUM_Z
# 196 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_DECIDIUM_Z
# 197 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_INCINIUM_Z
# 198 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PRIMARIUM_Z
# 199 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_LYCANIUM_Z
# 200 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MIMIKIUM_Z
# 201 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_KOMMONIUM_Z
# 202 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_TAPUNIUM_Z
# 203 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_SOLGANIUM_Z
# 204 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_LUNALIUM_Z
# 205 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_MARSHADIUM_Z
# 206 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ALORAICHIUM_Z
# 207 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_PIKASHUNIUM_Z
# 208 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.2byte ITEM_ULTRANECROZIUM_Z
	.2byte ITEM_NONE

SpecialStore_ObjectScript_MartEmployer_Text_0:
# 21 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Is a smal tree blocking your path?\n"
	.string "Do you need to push a bolder out of\l"
	.string "your way?\l"
	.string "Do you want to improve your way of\l"
	.string "travel?\p"
	.string "Then you have come to right place! Here\n"
	.string "at National Useful Tools or\l"
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
# 34 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought an Axe!\n"
	.string "A great tool for if you need to get rid\l"
	.string "of some pesky trees!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_3:
# 38 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "I the older days we used to need\n"
	.string "pokemon with HMs to travel around and\l"
	.string "clear stuff up.\l"
	.string "Nowadays we just use tools that can do\l"
	.string "the job for us, so these HMs have\l"
	.string "become quite useless.\p"
	.string "Hope they still provide usefull to you!$"

SpecialStore_ObjectScript_MartEmployer_Text_4:
# 46 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought a Lantern!\n"
	.string "A great tool for exploring those dark\l"
	.string "places!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_5:
# 58 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought the Rock Smasher!\n"
	.string "A great tool for if you need to get rid\l"
	.string "of those annoying rocks!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_6:
# 70 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought the Bolder Pusher!\n"
	.string "A great tool for when big boulders are\l"
	.string "blocking your way!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_7:
# 82 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought a surfboard!\n"
	.string "A great item if you want to travel over\l"
	.string "water! Here, allow me to give you a gift\l"
	.string "as well with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_8:
# 94 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought a bird flute!\n"
	.string "This simple flute will allow you to lure a\l"
	.string "friendly bird pokemon to you and bring\l"
	.string "you to any place you have visited\l"
	.string "before!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_9:
# 106 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought some Diving\n"
	.string "Equipment!\l"
	.string "Very usefull if you want to explore the\l"
	.string "deeper waters in {COLOR BLUE}Ludumundi{COLOR DARK_GRAY}!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_10:
# 118 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Oh, I see you bought the Reverse\n"
	.string "Waterfall!\l"
	.string "A small, but fantastic gadget that will\l"
	.string "allow you to travel up a waterfall\l"
	.string "without any trouble!\l"
	.string "Here, allow me to give you a gift as well\l"
	.string "with it:$"

SpecialStore_ObjectScript_MartEmployer_Text_11:
# 127 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Please come again!$"
