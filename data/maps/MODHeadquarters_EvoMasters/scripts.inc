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
# 30 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMAsters_ObjectScript_Masseuse_6
EvoMAsters_ObjectScript_Masseuse_4:
# 37 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_2, MSGBOX_YESNO
# 39 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMAsters_ObjectScript_Masseuse_9
# 53 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_5
	return

EvoMAsters_ObjectScript_Masseuse_2:
# 23 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_0
	goto EvoMAsters_ObjectScript_Masseuse_1

EvoMAsters_ObjectScript_Masseuse_5:
# 32 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_FREE_MASSAGE
# 33 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_1
# 35 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckFreeMassageEevee
	goto EvoMAsters_ObjectScript_Masseuse_4

EvoMAsters_ObjectScript_Masseuse_6:
# 30 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_FREE_MASSAGE, EvoMAsters_ObjectScript_Masseuse_5
	goto EvoMAsters_ObjectScript_Masseuse_4

EvoMAsters_ObjectScript_Masseuse_9:
# 41 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 1000
# 42 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMAsters_ObjectScript_Masseuse_12
# 48 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_4
	return

EvoMAsters_ObjectScript_Masseuse_12:
# 44 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_3
	return


EvoMasters_CheckFreeMassageEevee::
# 58 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckFreeMassageEevee_Text_0, MSGBOX_YESNO
# 59 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvoMasters_CheckFreeMassageEevee_1
# 65 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_3
	return

EvoMasters_CheckFreeMassageEevee_1:
# 61 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckDeclineMassage
	return


EvoMasters_CheckDeclineMassage::
# 70 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_0, MSGBOX_YESNO
# 74 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_CheckDeclineMassage_1
# 82 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_2
# 84 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckFreeMassageEevee
	return

EvoMasters_CheckDeclineMassage_1:
# 76 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_1
	return


EvoMasters_ObjectScript_Simulator::
# 90 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 91 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 92 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_Simulator_2
EvoMasters_ObjectScript_Simulator_1:
# 113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_4, MSGBOX_YESNO
# 115 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_5
# 129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_6
EvoMasters_ObjectScript_Simulator_4:
# 131 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_Simulator_2:
# 94 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_0
# 99 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_Simulator_9
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_5:
# 117 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 2500
# 118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_12
# 124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_5
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_8:
# 101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_1, MSGBOX_YESNO
# 103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_15
# 109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_3
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_9:
# 99 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_Simulator_8
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_12:
# 120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_15:
# 105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
	goto EvoMasters_ObjectScript_Simulator_1


EvoMasters_ObjectScript_EvoChecker::
# 135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_EvoChecker_2
EvoMasters_ObjectScript_EvoChecker_1:
# 143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_1, MSGBOX_YESNO
# 144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_EvoChecker_5
# 150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_3
EvoMasters_ObjectScript_EvoChecker_4:
# 152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_EvoChecker_2:
# 139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_0
	goto EvoMasters_ObjectScript_EvoChecker_1

EvoMasters_ObjectScript_EvoChecker_5:
# 146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_2
	goto EvoMasters_ObjectScript_EvoChecker_4


EvoMasters_ObjectScript_MartEmployer::
# 156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_MartEmployer_2
EvoMasters_ObjectScript_MartEmployer_1:
# 163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_MartEmployer_6
EvoMasters_ObjectScript_MartEmployer_4:
# 173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_3
# 174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	pokemart MODHeadquarters_EvoShop
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_4
# 176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_MartEmployer_2:
# 160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_0
	goto EvoMasters_ObjectScript_MartEmployer_1

EvoMasters_ObjectScript_MartEmployer_5:
# 165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_1
# 166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_WATER_STONE
# 167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_TM51
# 170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_GIFT_EVOMASTERS
# 171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_2
	goto EvoMasters_ObjectScript_MartEmployer_4

EvoMasters_ObjectScript_MartEmployer_6:
# 163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_MartEmployer_5
	goto EvoMasters_ObjectScript_MartEmployer_4


	.align 2
# 179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
MODHeadquarters_EvoShop:
# 180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_STONE
# 182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_STONE
# 185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SUN_STONE
# 186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MOON_STONE
# 187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TART_APPLE
# 192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UPGRADE
# 198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PROTECTOR
# 199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SACHET
# 206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EVERSTONE
# 215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 246 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 248 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 250 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 252 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_ORB
# 260 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLUE_ORB
# 261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 262 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 266 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 268 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GENGARITE
# 270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINSIRITE
# 272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEELIXITE
# 278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCIZORITE
# 279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HERACRONITE
# 280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 284 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SABLENITE
# 286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAWILITE
# 287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AGGRONITE
# 288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MANECTITE
# 290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BANETTITE
# 294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ABSOLITE
# 295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GLALITITE
# 296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIASITE
# 299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIOSITE
# 300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALLADITE
# 303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUDINITE
# 304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DIANCITE
# 305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEEK
# 306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRACIDEA
# 310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
# 311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DNA_SPLICERS
# 312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZYGARDE_CUBE
# 313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISON_BOTTLE
# 314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_SOLARIZER
# 315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_LUNARIZER
# 316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REINS_OF_UNITY
# 317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GIMMIGHOUL_COIN
# 319 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 321 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ADAMANT_CRYSTAL
# 324 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRISEOUS_CORE
# 325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUSTROUS_GLOBE
# 326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 328 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 330 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 331 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 332 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 334 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 335 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 336 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
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
	.string "would require some compensation if you\l"
	.string "don't mind. A 1000 good for you?$"

EvoMAsters_ObjectScript_Masseuse_Text_1:
# 33 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party?\p"
	.string "alright, for this once I allow you to use\n"
	.string "my services for free if you want.$"

EvoMAsters_ObjectScript_Masseuse_Text_2:
# 37 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome!\p"
	.string "Want to give a pokemon a massage for\n"
	.string "1000?$"

EvoMAsters_ObjectScript_Masseuse_Text_3:
# 44 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh, I'm sorry, it seems like my skills are\n"
	.string "not yet ready to perform this task.\l"
	.string "Please come again!$"

EvoMAsters_ObjectScript_Masseuse_Text_4:
# 48 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but it seems like you don't\n"
	.string "have enough money for my services...$"

EvoMAsters_ObjectScript_Masseuse_Text_5:
# 53 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Alright, do come back if you require my\n"
	.string "services!$"

EvoMasters_CheckFreeMassageEevee_Text_0:
# 58 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Should I give your Eevee a massage?$"

EvoMasters_CheckDeclineMassage_Text_0:
# 70 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "No? I'm only giving you this offer once,\n"
	.string "so I would suggest you think about it\l"
	.string "again\p"
	.string "I mean... It's free!\n"
	.string "Why wouldn't you want it?\p"
	.string "So are you absolutely sure you don't\n"
	.string "want the free massage for your Eevee?$"

EvoMasters_CheckDeclineMassage_Text_1:
# 76 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "OK, that is your decision!\p"
	.string "If you change your mind about giving\n"
	.string "your Eevee a massage do come back to\l"
	.string "me.\p"
	.string "Though... I'll require you to pay the fee\n"
	.string "next time.$"

EvoMasters_CheckDeclineMassage_Text_2:
# 82 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "That is what I thought!\n"
	.string "So...$"

EvoMasters_ObjectScript_Simulator_Text_0:
# 94 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
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
# 101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Well I probably can let you\l"
	.string "experience this simulation just once,\l"
	.string "but I would recommend you talk to my\l"
	.string "other sisters first before you take me\l"
	.string "on that offer.\p"
	.string "Would you like to try out this\n"
	.string "simulation for free?$"

EvoMasters_ObjectScript_Simulator_Text_2:
# 105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry sir, it seems that our\n"
	.string "simulation is still under construction.$"

EvoMasters_ObjectScript_Simulator_Text_3:
# 109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please talk to me again before you move\n"
	.string "on if you want to use my services for\l"
	.string "free, otherwise I'll require some\l"
	.string "compensation.$"

EvoMasters_ObjectScript_Simulator_Text_4:
# 113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Would you require us to simulate a\n"
	.string "specific environment for you?\l"
	.string "We have a processing fee of 2500 to do\l"
	.string "so.$"

EvoMasters_ObjectScript_Simulator_Text_5:
# 124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but if we want to make sure\n"
	.string "that the Simulation keeps working as\l"
	.string "intended, we do require you to pay the\l"
	.string "full fee.$"

EvoMasters_ObjectScript_Simulator_Text_6:
# 129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you need something simulated, you\n"
	.string "know where to find me!$"

EvoMasters_ObjectScript_EvoChecker_Text_0:
# 139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
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
# 143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Do you want to know how you need to\n"
	.string "evolve one of your pokemon?$"

EvoMasters_ObjectScript_EvoChecker_Text_2:
# 146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Sorry, it seems like I still need to\n"
	.string "study some more before I'm ready to\l"
	.string "offer up my services.$"

EvoMasters_ObjectScript_EvoChecker_Text_3:
# 150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you ever want to know, you know\n"
	.string "where to find me!$"

EvoMasters_ObjectScript_MartEmployer_Text_0:
# 160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome, I'm the Sell-Out Sister!\p"
	.string "Maybe a bit of an unfortunate name, but\n"
	.string "you can come to me if you need any\l"
	.string "evolution items.$"

EvoMasters_ObjectScript_MartEmployer_Text_1:
# 165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Because it is your first time\l"
	.string "visiting us, please allow me to give you\l"
	.string "some stuff. For this once, it will be on\l"
	.string "the house!$"

EvoMasters_ObjectScript_MartEmployer_Text_2:
# 171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hope that it will help you in your journey!$"

EvoMasters_ObjectScript_MartEmployer_Text_3:
# 173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is there anything I could help you\n"
	.string "with?$"

EvoMasters_ObjectScript_MartEmployer_Text_4:
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please come again!$"
