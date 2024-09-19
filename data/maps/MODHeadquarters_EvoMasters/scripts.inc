MODHeadquarters_EvoMasters_MapScripts::
# 2 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EvoMasters_OnTransition
	.byte 0


EvoMasters_OnTransition::
# 6 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1011
	goto_if_eq EvoMasters_OnTransition_2
# 7 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1010
	goto_if_eq EvoMasters_OnTransition_2
# 7 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1001
	goto_if_eq EvoMasters_OnTransition_2
# 7 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 11
	goto_if_eq EvoMasters_OnTransition_2
# 8 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1000
	goto_if_eq EvoMasters_OnTransition_2
# 8 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 10
	goto_if_eq EvoMasters_OnTransition_2
# 8 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1
	goto_if_eq EvoMasters_OnTransition_2
# 8 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq EvoMasters_OnTransition_2
EvoMasters_OnTransition_1:
# 12 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq EvoMasters_OnTransition_18
	return

EvoMasters_OnTransition_2:
# 10 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 100
	goto EvoMasters_OnTransition_1

EvoMasters_OnTransition_18:
# 14 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return


EvoMAsters_ObjectScript_Masseuse::
# 19 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 20 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 21 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMAsters_ObjectScript_Masseuse_2
EvoMAsters_ObjectScript_Masseuse_1:
# 25 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMAsters_ObjectScript_Masseuse_6
EvoMAsters_ObjectScript_Masseuse_4:
# 31 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_2, MSGBOX_YESNO
# 32 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMAsters_ObjectScript_Masseuse_10
# 48 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_5
# 49 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
EvoMAsters_ObjectScript_Masseuse_9:
# 51 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMAsters_ObjectScript_Masseuse_2:
# 23 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_0
	goto EvoMAsters_ObjectScript_Masseuse_1

EvoMAsters_ObjectScript_Masseuse_5:
# 27 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_FREE_MASSAGE
# 28 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_1
# 29 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckFreeMassageEevee
	goto EvoMAsters_ObjectScript_Masseuse_4

EvoMAsters_ObjectScript_Masseuse_6:
# 25 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_FREE_MASSAGE, EvoMAsters_ObjectScript_Masseuse_5
	goto EvoMAsters_ObjectScript_Masseuse_4

EvoMAsters_ObjectScript_Masseuse_10:
# 34 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 1000
# 35 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMAsters_ObjectScript_Masseuse_13
# 42 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_4
# 43 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	goto EvoMAsters_ObjectScript_Masseuse_9

EvoMAsters_ObjectScript_Masseuse_13:
# 37 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_3
# 38 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	goto EvoMAsters_ObjectScript_Masseuse_9


EvoMasters_CheckFreeMassageEevee::
# 55 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckFreeMassageEevee_Text_0, MSGBOX_YESNO
# 56 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvoMasters_CheckFreeMassageEevee_1
# 62 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_3
	return

EvoMasters_CheckFreeMassageEevee_1:
# 58 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckDeclineMassage
	return


EvoMasters_CheckDeclineMassage::
# 67 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_0, MSGBOX_YESNO
# 68 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_CheckDeclineMassage_1
# 74 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_2
# 75 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckFreeMassageEevee
	return

EvoMasters_CheckDeclineMassage_1:
# 70 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_1
	return


EvoMasters_ObjectScript_Simulator::
# 81 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 82 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 83 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_Simulator_2
EvoMasters_ObjectScript_Simulator_1:
# 99 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_4, MSGBOX_YESNO
# 100 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_5
# 114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_6
EvoMasters_ObjectScript_Simulator_4:
# 116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_Simulator_2:
# 85 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_0
# 86 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_Simulator_9
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_5:
# 102 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 2500
# 103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_12
# 109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_5
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_8:
# 88 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_1, MSGBOX_YESNO
# 89 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_15
# 95 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_3
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_9:
# 86 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_Simulator_8
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_12:
# 105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_15:
# 91 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
	goto EvoMasters_ObjectScript_Simulator_1


EvoMasters_ObjectScript_EvoChecker::
# 120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 121 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 122 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_EvoChecker_2
EvoMasters_ObjectScript_EvoChecker_1:
# 126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_1, MSGBOX_YESNO
# 127 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_EvoChecker_5
# 133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_3
EvoMasters_ObjectScript_EvoChecker_4:
# 135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_EvoChecker_2:
# 124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_0
	goto EvoMasters_ObjectScript_EvoChecker_1

EvoMasters_ObjectScript_EvoChecker_5:
# 129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_2
	goto EvoMasters_ObjectScript_EvoChecker_4


EvoMasters_ObjectScript_MartEmployer::
# 139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 140 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_MartEmployer_2
EvoMasters_ObjectScript_MartEmployer_1:
# 145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_MartEmployer_6
EvoMasters_ObjectScript_MartEmployer_4:
# 155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_3
# 156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	pokemart MODHeadquarters_EvoShop
# 157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_4
# 158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_MartEmployer_2:
# 143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_0
	goto EvoMasters_ObjectScript_MartEmployer_1

EvoMasters_ObjectScript_MartEmployer_5:
# 147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_1
# 148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_WATER_STONE
# 149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_TM51
# 152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_GIFT_EVOMASTERS
# 153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_2
	goto EvoMasters_ObjectScript_MartEmployer_4

EvoMasters_ObjectScript_MartEmployer_6:
# 145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_MartEmployer_5
	goto EvoMasters_ObjectScript_MartEmployer_4


	.align 2
# 161 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
MODHeadquarters_EvoShop:
# 162 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_STONE
# 164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_STONE
# 167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SUN_STONE
# 168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MOON_STONE
# 169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 172 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TART_APPLE
# 174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UPGRADE
# 180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PROTECTOR
# 181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SACHET
# 188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EVERSTONE
# 197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_ORB
# 242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLUE_ORB
# 243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 246 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 248 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 250 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GENGARITE
# 252 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINSIRITE
# 254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEELIXITE
# 260 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCIZORITE
# 261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HERACRONITE
# 262 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 266 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SABLENITE
# 268 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAWILITE
# 269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AGGRONITE
# 270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MANECTITE
# 272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BANETTITE
# 276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ABSOLITE
# 277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GLALITITE
# 278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIASITE
# 281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIOSITE
# 282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 284 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALLADITE
# 285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUDINITE
# 286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DIANCITE
# 287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEEK
# 288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRACIDEA
# 292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
# 293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DNA_SPLICERS
# 294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZYGARDE_CUBE
# 295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISON_BOTTLE
# 296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_SOLARIZER
# 297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_LUNARIZER
# 298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REINS_OF_UNITY
# 299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GIMMIGHOUL_COIN
# 301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ADAMANT_CRYSTAL
# 306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRISEOUS_CORE
# 307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUSTROUS_GLOBE
# 308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_METAL_ALLOY
	.2byte ITEM_NONE

EvoMAsters_ObjectScript_Masseuse_Text_0:
# 23 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hello, I'm the Soothing Sister!\p"
	.string "I can help your pokemon relax and feel\n"
	.string "very affectioness towards you!\p"
	.string "...\p"
	.string "In a good way...\p"
	.string "Many pokemon require some love to\n"
	.string "evolve. If you use my service I can help\l"
	.string "you speed up the process and allow them\l"
	.string "to evolve almost instantly! Still, I\l"
	.string "would require sovme compensation if\l"
	.string "you don't mind. A 1000 good for you?$"

EvoMAsters_ObjectScript_Masseuse_Text_1:
# 28 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party?\p"
	.string "alright, for this once I allow you to use\n"
	.string "my services for free if you want.$"

EvoMAsters_ObjectScript_Masseuse_Text_2:
# 31 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome!\p"
	.string "Want to give a pokemon a massage for\n"
	.string "1000?$"

EvoMAsters_ObjectScript_Masseuse_Text_3:
# 37 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh, I'm sorry, it seems like my skills are\n"
	.string "not yet ready to perform this task.\l"
	.string "Please come again!$"

EvoMAsters_ObjectScript_Masseuse_Text_4:
# 42 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but it seems like you don't\n"
	.string "have enough money for my services...$"

EvoMAsters_ObjectScript_Masseuse_Text_5:
# 48 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Alright, do come back if you require my\n"
	.string "services!$"

EvoMasters_CheckFreeMassageEevee_Text_0:
# 55 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Should I give your Eevee a massage?$"

EvoMasters_CheckDeclineMassage_Text_0:
# 67 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "No? I'm only giving you this offer once,\n"
	.string "so I would suggest you think about it\l"
	.string "again\p"
	.string "I mean... It's free!\n"
	.string "Why wouldn't you want it?\p"
	.string "So are you absolutely sure you don't\n"
	.string "want the free massage for your Eevee?$"

EvoMasters_CheckDeclineMassage_Text_1:
# 70 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "OK, that is your decision!\p"
	.string "If you change your mind about giving\n"
	.string "your Eevee a massage do come back to\l"
	.string "me.\p"
	.string "Though... I'll require you to pay the fee\n"
	.string "next time.$"

EvoMasters_CheckDeclineMassage_Text_2:
# 74 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "That is what I thought!\n"
	.string "So...$"

EvoMasters_ObjectScript_Simulator_Text_0:
# 85 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Good day, I'm the Simulation Sister!\p"
	.string "Some pokemon require specific\n"
	.string "circumanstance to evolve into their\l"
	.string "new form.\l"
	.string "Thanks to Team MOD state of the art\l"
	.string "technologicial progression, we have\l"
	.string "created this room to simulate these\l"
	.string "environments. Just answer some\l"
	.string "questions and I will simulate the\l"
	.string "environment you need to evolve your\l"
	.string "pokemon. You'll also get one rare candy\l"
	.string "on the house to evolve your pokemon.\l"
	.string "Setting up the simulation is not easy,\l"
	.string "so we will require 2500 to simulate your\l"
	.string "required environment.$"

EvoMasters_ObjectScript_Simulator_Text_1:
# 88 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Well I probably can let you\l"
	.string "experience this simulation just once,\l"
	.string "but I would recommend you talk to my\l"
	.string "other sisters first before you take me\l"
	.string "on that offer.\p"
	.string "Would you like to try out this\n"
	.string "simulation for free?$"

EvoMasters_ObjectScript_Simulator_Text_2:
# 91 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry sir, it seems that our\n"
	.string "simulation is still under construction.$"

EvoMasters_ObjectScript_Simulator_Text_3:
# 95 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please talk to me again before you move\n"
	.string "on if you want to use my services for\l"
	.string "free, otherwise I'll require some\l"
	.string "compensation.$"

EvoMasters_ObjectScript_Simulator_Text_4:
# 99 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Would you require us to simulate a\n"
	.string "specific environment for you?\l"
	.string "We have a processing fee of 2500 to do\l"
	.string "so.$"

EvoMasters_ObjectScript_Simulator_Text_5:
# 109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but if we want to make sure\n"
	.string "that the Simulation keeps working as\l"
	.string "intended, we do require you to pay the\l"
	.string "full fee.$"

EvoMasters_ObjectScript_Simulator_Text_6:
# 114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you need something simulated, you\n"
	.string "know where to find me!$"

EvoMasters_ObjectScript_EvoChecker_Text_0:
# 124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hi, I'm the Strategic Sister!\p"
	.string "I know of every pokemon what\n"
	.string "requirements they need to evolve, so if\l"
	.string "you're ever unsure how you can evolve a\l"
	.string "certain pokemon, please come to me\p"
	.string "Don't worry about pay, I don't require\n"
	.string "anything for my services. You can\l"
	.string "always come to me to check on what you\l"
	.string "need to do to evolve your pokemon.$"

EvoMasters_ObjectScript_EvoChecker_Text_1:
# 126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Do you want to know how you need to\n"
	.string "evolve one of your pokemon?$"

EvoMasters_ObjectScript_EvoChecker_Text_2:
# 129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Sorry, it seems like I still need to\n"
	.string "study some more before I'm ready to\l"
	.string "offer up my services.$"

EvoMasters_ObjectScript_EvoChecker_Text_3:
# 133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you ever want to know, you know\n"
	.string "where to find me!$"

EvoMasters_ObjectScript_MartEmployer_Text_0:
# 143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome, I'm the Sell-Out Sister!\p"
	.string "Maybe a bit of an unfortunate name, but\n"
	.string "you can come to me if you need any\l"
	.string "evolution items.$"

EvoMasters_ObjectScript_MartEmployer_Text_1:
# 147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Because it is your first time\l"
	.string "visiting us, please allow me to give you\l"
	.string "some stuff. For this once, it will be on\l"
	.string "the house!$"

EvoMasters_ObjectScript_MartEmployer_Text_2:
# 153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hope that it will help you in your journey!$"

EvoMasters_ObjectScript_MartEmployer_Text_3:
# 155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is there anything I could help you\n"
	.string "with?$"

EvoMasters_ObjectScript_MartEmployer_Text_4:
# 157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please come again!$"
