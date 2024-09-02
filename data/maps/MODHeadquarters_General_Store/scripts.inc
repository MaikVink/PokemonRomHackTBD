MODHeadquarters_General_Store_MapScripts::
# 2 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GeneralStore_OnTransition
	.byte 0


GeneralStore_OnTransition::
# 6 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1101
	goto_if_eq GeneralStore_OnTransition_2
# 7 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 101
	goto_if_eq GeneralStore_OnTransition_2
# 7 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1001
	goto_if_eq GeneralStore_OnTransition_2
# 7 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1100
	goto_if_eq GeneralStore_OnTransition_2
# 8 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1
	goto_if_eq GeneralStore_OnTransition_2
# 8 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 100
	goto_if_eq GeneralStore_OnTransition_2
# 8 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 1000
	goto_if_eq GeneralStore_OnTransition_2
# 9 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq GeneralStore_OnTransition_2
GeneralStore_OnTransition_1:
# 13 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 0
	goto_if_eq GeneralStore_OnTransition_18
	return

GeneralStore_OnTransition_2:
# 11 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	addvar VAR_MOD_SHOPS_STATE, 10
	goto GeneralStore_OnTransition_1

GeneralStore_OnTransition_18:
# 15 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	clearflag FLAG_HIDE_DENEITH
	return


GeneratlStore_ObjectScript_MartEmployer::
# 21 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 22 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	faceplayer
# 23 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt GeneratlStore_ObjectScript_MartEmployer_2
GeneratlStore_ObjectScript_MartEmployer_1:
# 32 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_1
# 33 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	switch VAR_BADGE_AMOUNT
# 35 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 0, GeneratlStore_ObjectScript_MartEmployer_6
# 37 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 1, GeneratlStore_ObjectScript_MartEmployer_7
# 39 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 2, GeneratlStore_ObjectScript_MartEmployer_8
# 41 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 3, GeneratlStore_ObjectScript_MartEmployer_9
# 43 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 4, GeneratlStore_ObjectScript_MartEmployer_10
# 45 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 5, GeneratlStore_ObjectScript_MartEmployer_11
# 47 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 6, GeneratlStore_ObjectScript_MartEmployer_12
# 49 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 7, GeneratlStore_ObjectScript_MartEmployer_13
# 51 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 8, GeneratlStore_ObjectScript_MartEmployer_14
# 54 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_2
GeneratlStore_ObjectScript_MartEmployer_4:
# 56 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_3
# 57 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return

GeneratlStore_ObjectScript_MartEmployer_2:
# 25 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_0
	goto GeneratlStore_ObjectScript_MartEmployer_1

GeneratlStore_ObjectScript_MartEmployer_6:
# 36 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartNoBadges
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_7:
# 38 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartOne
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_8:
# 40 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartTwo
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_9:
# 42 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartThree
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_10:
# 44 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartFour
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_11:
# 46 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartFive
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_12:
# 48 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartSix
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_13:
# 50 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartSeven
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_14:
# 52 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartEight
	goto GeneratlStore_ObjectScript_MartEmployer_4


GeneralStore_ObjectScript_Pokeballs::
# 61 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 62 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Pokeballs_Text_0, MSGBOX_SIGN
# 63 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Medicine::
# 67 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 68 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Medicine_Text_0, MSGBOX_SIGN
# 69 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Vitamins::
# 73 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 74 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Vitamins_Text_0, MSGBOX_SIGN
# 75 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_CaveItems::
# 79 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 80 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_CaveItems_Text_0, MSGBOX_SIGN
# 81 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_HeldItems::
# 85 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 86 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_HeldItems_Text_0, MSGBOX_SIGN
# 88 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Berries::
# 92 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 93 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Berries_Text_0, MSGBOX_SIGN
# 95 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Trinkets::
# 99 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 100 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Trinkets_Text_0, MSGBOX_SIGN
# 101 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Plant::
# 105 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 106 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Plant_Text_0
# 107 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


	.align 2
# 110 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartNoBadges:
# 111 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 112 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 113 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 114 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 115 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 116 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 117 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 118 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 119 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 120 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 121 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 122 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINK_SCARF
# 123 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 124 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
	.2byte ITEM_NONE

	.align 2
# 127 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartOne:
# 128 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 129 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 130 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 131 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 132 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 133 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 134 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 135 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 136 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 137 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 138 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 139 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 140 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 141 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 142 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 143 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 144 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 145 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 146 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINK_SCARF
# 147 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 148 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 149 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
	.2byte ITEM_NONE

	.align 2
# 152 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartTwo:
# 153 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 154 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 155 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 156 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 157 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 158 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 159 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 160 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 161 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 162 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 163 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 164 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 165 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 166 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 167 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 168 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 169 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 170 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 171 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 172 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 173 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 174 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 175 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 176 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 177 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 178 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 179 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 180 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 181 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 182 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 183 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 184 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 185 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 186 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 187 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 188 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 189 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 190 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 191 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 192 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 193 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 194 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 195 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 196 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 197 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 198 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 199 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 200 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
	.2byte ITEM_NONE

	.align 2
# 203 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartThree:
# 204 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 205 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 206 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 207 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 208 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 209 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 210 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 211 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 212 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 213 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 214 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 215 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 216 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 217 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 218 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 219 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 220 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 221 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 222 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 223 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 224 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 225 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 226 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 227 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 228 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 229 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 230 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 231 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 232 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 233 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 234 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 235 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 236 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 237 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 238 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 239 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 240 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 241 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 242 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 243 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 244 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 245 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 246 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 247 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 248 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 249 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 250 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 251 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 252 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 253 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 254 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 255 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 256 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 257 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 258 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 259 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 260 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 261 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 262 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 263 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 264 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 265 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
	.2byte ITEM_NONE

	.align 2
# 268 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartFour:
# 269 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 270 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 271 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 272 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 273 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 274 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 275 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 276 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 277 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 278 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 279 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 280 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 281 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 282 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 283 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 284 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 285 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 286 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 287 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 288 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 289 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 290 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 291 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 292 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 293 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 294 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 295 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 296 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 297 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 298 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 299 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 300 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 301 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 302 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 303 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 304 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 305 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 306 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 307 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 308 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 309 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 310 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 311 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 312 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 313 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 314 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 315 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 316 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 317 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 318 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 319 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 320 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 321 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 322 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 323 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 324 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 325 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 326 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 327 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 328 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 329 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 330 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 331 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOUL_DEW
# 332 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADAMANT_ORB
# 333 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUSTROUS_ORB
# 334 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRISEOUS_ORB
# 335 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 336 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 337 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 338 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 339 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 340 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 341 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 342 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 343 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 344 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 345 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 346 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 347 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 348 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 349 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 350 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 351 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 352 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 353 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 354 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 355 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 356 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 357 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 358 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 359 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 360 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 361 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 362 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 363 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 364 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 365 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 366 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 367 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 368 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 369 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 370 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 371 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 372 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 373 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 374 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 375 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 376 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 377 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 378 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 379 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 380 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 381 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 382 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 383 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 384 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 385 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 386 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 387 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 388 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 389 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 390 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 391 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 392 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 393 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 394 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 395 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 396 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 397 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 398 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 399 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 400 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 401 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 402 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 403 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 404 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 405 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 406 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 407 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 408 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 409 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 410 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 411 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 412 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 413 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 414 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 415 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 416 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 417 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 418 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 419 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 420 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 421 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 422 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 423 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 424 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 425 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 426 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 427 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 428 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 429 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 430 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 431 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 432 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
	.2byte ITEM_NONE

	.align 2
# 435 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartFive:
# 436 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 437 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 438 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 439 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 440 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 441 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 442 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 443 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 444 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 445 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 446 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 447 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 448 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 449 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 450 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 451 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 452 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 453 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 454 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 455 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 456 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 457 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 458 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 459 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 460 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 461 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 462 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 463 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 464 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 465 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 466 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 467 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 468 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 469 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 470 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 471 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 472 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 473 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 474 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 475 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 476 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 477 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 478 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 479 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 480 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 481 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 482 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 483 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 484 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 485 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 486 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 487 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 488 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 489 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 490 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 491 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 492 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 493 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 494 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 495 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 496 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 497 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 498 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 499 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 500 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 501 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 502 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 503 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 504 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 505 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 506 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 507 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 508 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 509 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 510 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 511 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 512 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 513 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 514 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 515 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 516 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 517 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 518 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 519 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 520 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 521 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 522 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 523 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 524 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 525 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 526 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 527 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 528 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 529 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 530 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 531 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 532 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 533 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 534 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 535 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 536 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 537 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 538 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 539 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 540 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 541 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 542 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 543 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 544 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 545 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 546 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 547 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 548 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 549 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 550 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 551 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 552 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 553 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 554 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 555 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 556 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 557 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 558 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 559 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 560 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 561 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 562 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 563 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 564 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 565 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 566 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 567 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 568 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 569 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 570 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 571 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 572 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 573 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 574 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 575 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 576 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 577 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 578 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 579 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 580 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 581 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 582 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 583 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 584 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 585 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 586 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 587 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 588 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 589 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 590 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 591 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 592 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 593 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 594 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 595 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 596 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 597 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 598 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 599 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 600 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 601 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 602 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 603 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 604 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 605 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 606 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 607 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 608 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 609 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 610 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 611 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 612 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 613 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 614 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 615 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 616 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 617 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 618 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 619 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 620 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 621 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 622 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 623 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 624 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 625 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 626 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 627 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 628 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 629 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 630 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 631 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 632 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 633 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 634 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 635 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 636 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 637 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 638 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 639 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 640 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 641 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 642 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 643 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 644 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 645 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 646 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 647 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 648 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 649 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 650 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 651 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 652 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 653 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 654 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 655 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 656 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 657 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 658 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 659 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 660 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 661 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 662 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 663 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 664 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 665 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 666 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 667 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 668 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 669 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 670 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 671 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 672 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 673 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 674 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 675 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 676 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 677 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 678 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 679 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 680 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 681 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 682 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 683 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 684 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 685 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 686 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 687 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 688 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 689 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 690 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 691 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 692 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 693 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 694 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 695 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 696 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 697 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 698 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 699 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 700 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
	.2byte ITEM_NONE

	.align 2
# 703 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartSix:
# 704 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 705 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 706 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 707 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 708 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 709 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 710 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 711 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 712 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 713 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 714 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 715 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 716 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 717 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 718 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 719 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 720 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 721 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 722 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 723 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 724 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 725 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 726 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 727 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 728 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 729 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 730 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 731 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 732 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 733 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 734 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 735 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 736 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 737 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 738 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 739 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 740 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 741 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 742 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 743 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 744 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 745 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 746 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 747 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 748 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 749 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 750 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 751 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 752 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 753 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 754 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 755 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 756 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 757 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 758 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 759 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 760 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 761 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 762 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 763 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 764 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 765 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 766 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 767 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 768 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 769 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 770 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 771 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 772 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 773 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 774 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 775 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 776 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 777 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 778 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 779 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 780 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 781 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 782 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 783 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 784 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 785 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 786 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 787 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 788 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 789 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 790 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 791 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 792 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 793 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 794 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 795 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 796 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 797 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 798 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 799 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 800 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 801 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 802 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 803 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 804 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 805 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 806 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 807 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 808 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 809 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 810 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 811 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 812 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 813 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 814 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 815 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 816 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 817 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 818 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 819 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 820 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 821 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 822 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 823 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 824 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 825 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 826 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 827 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 828 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 829 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 830 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 831 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 832 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 833 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 834 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 835 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 836 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 837 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 838 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 839 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 840 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 841 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 842 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 843 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 844 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 845 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 846 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 847 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 848 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 849 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 850 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 851 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 852 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 853 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 854 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 855 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 856 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 857 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 858 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 859 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 860 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 861 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 862 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 863 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 864 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 865 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 866 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 867 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 868 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 869 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 870 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 871 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 872 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 873 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 874 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 875 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 876 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 877 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 878 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 879 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 880 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 881 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 882 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 883 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 884 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 885 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 886 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 887 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 888 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 889 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 890 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 891 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 892 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 893 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 894 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 895 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 896 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 897 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 898 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 899 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 900 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 901 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 902 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 903 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 904 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 905 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 906 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 907 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 908 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 909 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 910 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 911 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 912 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 913 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 914 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 915 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 916 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 917 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 918 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 919 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 920 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 921 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 922 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 923 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 924 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 925 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 926 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 927 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 928 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 929 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 930 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 931 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 932 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 933 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 934 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 935 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 936 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 937 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 938 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 939 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 940 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 941 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 942 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 943 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 944 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 945 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 946 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 947 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 948 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 949 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 950 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 951 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 952 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 953 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 954 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 955 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 956 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 957 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 958 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 959 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 960 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 961 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 962 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 963 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 964 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 965 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 966 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 967 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 968 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 969 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 970 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 971 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 972 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 973 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 974 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 975 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 976 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 977 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 978 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 979 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 980 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 981 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 982 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 983 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
	.2byte ITEM_NONE

	.align 2
# 986 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartSeven:
# 987 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 988 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 989 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 990 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 991 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 992 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 993 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 994 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 995 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 996 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 997 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 998 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 999 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 1000 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 1001 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 1002 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 1003 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 1004 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 1005 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 1006 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 1007 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 1008 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 1009 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 1010 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 1011 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 1012 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 1013 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 1014 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 1015 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 1016 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 1017 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 1018 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 1019 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 1020 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 1021 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 1022 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 1023 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 1024 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 1025 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 1026 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 1027 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 1028 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 1029 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 1030 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 1031 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 1032 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 1033 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 1034 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 1035 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 1036 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 1037 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 1038 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 1039 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 1040 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 1041 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 1042 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 1043 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 1044 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 1045 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 1046 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HP_UP
# 1047 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTEIN
# 1048 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON
# 1049 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALCIUM
# 1050 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZINC
# 1051 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CARBOS
# 1052 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_UP
# 1053 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_MAX
# 1054 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1055 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1056 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1057 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1058 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1059 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1060 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1061 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1062 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1063 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1064 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 1065 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 1066 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 1067 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 1068 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ATTACK
# 1069 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 1070 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 1071 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 1072 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SPEED
# 1073 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 1074 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 1075 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 1076 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 1077 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 1078 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 1079 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 1080 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 1081 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 1082 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 1083 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 1084 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 1085 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 1086 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 1087 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 1088 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 1089 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 1090 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 1091 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 1092 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 1093 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 1094 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 1095 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 1096 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 1097 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 1098 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 1099 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 1100 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 1101 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 1102 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1103 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1104 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1105 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1106 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1107 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1108 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1109 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 1110 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1111 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1112 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1113 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 1114 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 1115 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 1116 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 1117 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1118 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1119 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1120 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1121 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1122 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1123 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1124 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1125 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1126 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 1127 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1128 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1129 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1130 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1131 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1132 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1133 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1134 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1135 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1136 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1137 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1138 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1139 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1140 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1141 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1142 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1143 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1144 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1145 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1146 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1147 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1148 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1149 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 1150 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 1151 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 1152 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 1153 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1154 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1155 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1156 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1157 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1158 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1159 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1160 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1161 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1162 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1163 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1164 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1165 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1166 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1167 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 1168 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1169 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1170 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1171 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1172 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1173 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1174 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1175 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1176 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1177 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1178 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1179 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1180 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 1181 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1182 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1183 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1184 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1185 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1186 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1187 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1188 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1189 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1190 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1191 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1192 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1193 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1194 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1195 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 1196 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1197 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1198 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1199 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1200 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1201 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1202 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1203 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 1204 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 1205 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 1206 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 1207 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 1208 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 1209 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 1210 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 1211 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1212 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1213 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1214 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1215 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1216 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1217 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1218 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1219 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1220 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1221 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 1222 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 1223 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 1224 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 1225 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 1226 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 1227 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 1228 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 1229 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 1230 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 1231 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1232 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1233 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1234 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1235 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1236 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 1237 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 1238 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 1239 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 1240 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 1241 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 1242 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 1243 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 1244 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 1245 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 1246 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 1247 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 1248 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 1249 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 1250 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 1251 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 1252 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 1253 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 1254 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 1255 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 1256 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 1257 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 1258 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 1259 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 1260 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 1261 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 1262 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 1263 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 1264 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 1265 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 1266 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 1267 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 1268 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 1269 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 1270 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 1271 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 1272 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 1273 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 1274 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 1275 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 1276 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 1277 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 1278 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 1279 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 1280 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 1281 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 1282 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 1283 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 1284 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 1285 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 1286 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 1287 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 1288 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
	.2byte ITEM_NONE

	.align 2
# 1291 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartEight:
# 1292 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 1293 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 1294 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 1295 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 1296 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 1297 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 1298 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 1299 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 1300 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 1301 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 1302 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 1303 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 1304 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 1305 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 1306 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 1307 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 1308 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 1309 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 1310 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 1311 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 1312 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 1313 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 1314 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 1315 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 1316 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 1317 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 1318 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 1319 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 1320 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 1321 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 1322 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 1323 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 1324 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 1325 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 1326 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 1327 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 1328 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 1329 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 1330 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 1331 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 1332 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 1333 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 1334 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 1335 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 1336 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 1337 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 1338 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 1339 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 1340 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 1341 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 1342 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 1343 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 1344 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 1345 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 1346 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 1347 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 1348 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 1349 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 1350 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 1351 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HP_UP
# 1352 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTEIN
# 1353 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON
# 1354 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALCIUM
# 1355 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZINC
# 1356 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CARBOS
# 1357 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_UP
# 1358 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_MAX
# 1359 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1360 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1361 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1362 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1363 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1364 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1365 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1366 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1367 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1368 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1369 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1370 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1371 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1372 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1373 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1374 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1375 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1376 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1377 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1378 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1379 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1380 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1381 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1382 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1383 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1384 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1385 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1386 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1387 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 1388 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 1389 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1390 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1391 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1392 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1393 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 1394 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 1395 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 1396 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 1397 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 1398 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ATTACK
# 1399 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 1400 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 1401 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 1402 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SPEED
# 1403 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 1404 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 1405 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 1406 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 1407 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 1408 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 1409 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 1410 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 1411 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 1412 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 1413 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 1414 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 1415 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 1416 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 1417 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 1418 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 1419 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 1420 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 1421 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 1422 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 1423 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 1424 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 1425 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 1426 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 1427 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 1428 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATER_GEM
# 1429 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 1430 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 1431 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_GEM
# 1432 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 1433 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_GEM
# 1434 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 1435 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 1436 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 1437 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BUG_GEM
# 1438 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 1439 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 1440 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 1441 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DARK_GEM
# 1442 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 1443 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_GEM
# 1444 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 1445 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 1446 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 1447 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 1448 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 1449 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 1450 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1451 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1452 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1453 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1454 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1455 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1456 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1457 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 1458 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1459 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1460 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1461 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 1462 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 1463 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 1464 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 1465 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1466 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1467 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1468 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1469 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1470 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1471 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1472 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1473 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1474 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 1475 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1476 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1477 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1478 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1479 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1480 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1481 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1482 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1483 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1484 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1485 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1486 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1487 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1488 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1489 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1490 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1491 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1492 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1493 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1494 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1495 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1496 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1497 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 1498 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 1499 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 1500 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 1501 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1502 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1503 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1504 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1505 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1506 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1507 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1508 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1509 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1510 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1511 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1512 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1513 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1514 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1515 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 1516 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1517 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1518 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1519 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1520 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1521 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1522 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1523 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1524 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1525 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1526 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1527 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1528 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 1529 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1530 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1531 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1532 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1533 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1534 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1535 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1536 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1537 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1538 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1539 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1540 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1541 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1542 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1543 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 1544 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1545 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1546 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1547 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1548 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1549 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1550 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1551 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 1552 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 1553 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 1554 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 1555 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 1556 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 1557 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 1558 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 1559 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1560 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1561 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1562 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1563 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1564 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1565 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1566 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1567 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1568 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1569 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 1570 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 1571 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 1572 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 1573 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 1574 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 1575 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 1576 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 1577 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 1578 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 1579 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1580 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1581 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1582 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1583 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1584 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 1585 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 1586 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 1587 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 1588 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 1589 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 1590 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 1591 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 1592 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 1593 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 1594 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 1595 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 1596 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 1597 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 1598 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 1599 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 1600 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 1601 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 1602 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 1603 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 1604 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 1605 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 1606 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 1607 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 1608 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 1609 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 1610 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 1611 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 1612 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 1613 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 1614 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 1615 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 1616 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 1617 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 1618 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 1619 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 1620 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 1621 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 1622 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 1623 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 1624 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 1625 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 1626 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 1627 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 1628 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 1629 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 1630 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 1631 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 1632 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 1633 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 1634 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 1635 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 1636 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
# 1637 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_EVASION
# 1638 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_GUARD
# 1639 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_POWER
	.2byte ITEM_NONE

	.align 2
# 1642 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartMaster:
# 1643 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 1644 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 1645 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 1646 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 1647 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 1648 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 1649 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 1650 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 1651 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 1652 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 1653 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 1654 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 1655 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 1656 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 1657 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 1658 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 1659 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 1660 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 1661 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 1662 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 1663 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 1664 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 1665 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 1666 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 1667 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 1668 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 1669 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 1670 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 1671 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 1672 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 1673 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 1674 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 1675 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 1676 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 1677 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 1678 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 1679 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 1680 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 1681 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 1682 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 1683 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 1684 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 1685 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 1686 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 1687 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 1688 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 1689 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 1690 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 1691 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 1692 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 1693 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 1694 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 1695 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 1696 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SACRED_ASH
# 1697 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 1698 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_HONEY
# 1699 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 1700 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 1701 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 1702 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 1703 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 1704 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 1705 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 1706 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 1707 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HP_UP
# 1708 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTEIN
# 1709 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON
# 1710 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALCIUM
# 1711 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZINC
# 1712 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CARBOS
# 1713 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_UP
# 1714 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_MAX
# 1715 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1716 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1717 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1718 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1719 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1720 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1721 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1722 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1723 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1724 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1725 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1726 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1727 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1728 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1729 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1730 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1731 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1732 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1733 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1734 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1735 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1736 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1737 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1738 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1739 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1740 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1741 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1742 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1743 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 1744 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 1745 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1746 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1747 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1748 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1749 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 1750 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 1751 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 1752 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 1753 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 1754 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ATTACK
# 1755 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 1756 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 1757 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 1758 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SPEED
# 1759 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 1760 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 1761 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 1762 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 1763 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 1764 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 1765 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 1766 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 1767 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 1768 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 1769 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 1770 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 1771 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 1772 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 1773 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 1774 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 1775 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 1776 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 1777 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 1778 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 1779 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 1780 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 1781 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 1782 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 1783 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 1784 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATER_GEM
# 1785 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 1786 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 1787 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_GEM
# 1788 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 1789 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_GEM
# 1790 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 1791 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 1792 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 1793 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BUG_GEM
# 1794 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 1795 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 1796 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 1797 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DARK_GEM
# 1798 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 1799 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_GEM
# 1800 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 1801 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 1802 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 1803 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 1804 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 1805 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 1806 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1807 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1808 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1809 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1810 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1811 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1812 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1813 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 1814 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1815 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1816 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1817 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 1818 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 1819 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 1820 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 1821 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1822 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1823 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1824 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1825 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1826 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1827 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1828 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1829 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1830 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 1831 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1832 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1833 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1834 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1835 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1836 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1837 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1838 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1839 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1840 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1841 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1842 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1843 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1844 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1845 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1846 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1847 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1848 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1849 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1850 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1851 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1852 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1853 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 1854 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 1855 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 1856 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 1857 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1858 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1859 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1860 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1861 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1862 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1863 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1864 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1865 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1866 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1867 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1868 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1869 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1870 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1871 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 1872 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1873 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1874 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1875 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1876 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1877 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1878 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1879 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1880 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1881 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1882 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1883 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1884 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 1885 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1886 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1887 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1888 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1889 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1890 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1891 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1892 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1893 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1894 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1895 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1896 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1897 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1898 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1899 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 1900 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1901 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1902 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1903 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1904 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1905 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1906 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1907 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 1908 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 1909 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 1910 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 1911 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 1912 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 1913 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 1914 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 1915 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1916 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1917 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1918 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1919 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1920 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1921 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1922 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1923 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1924 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1925 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 1926 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 1927 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 1928 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 1929 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 1930 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 1931 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 1932 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 1933 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 1934 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 1935 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1936 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1937 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1938 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1939 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1940 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 1941 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 1942 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 1943 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 1944 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 1945 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 1946 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 1947 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 1948 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 1949 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 1950 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 1951 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 1952 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 1953 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 1954 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 1955 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 1956 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 1957 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 1958 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 1959 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 1960 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 1961 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 1962 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 1963 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 1964 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 1965 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 1966 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 1967 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 1968 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 1969 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 1970 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 1971 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 1972 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 1973 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 1974 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 1975 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 1976 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 1977 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 1978 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 1979 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 1980 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 1981 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 1982 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 1983 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 1984 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 1985 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 1986 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 1987 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 1988 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 1989 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 1990 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 1991 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 1992 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 1993 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
# 1994 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_EVASION
# 1995 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_GUARD
# 1996 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_POWER
	.2byte ITEM_NONE

GeneratlStore_ObjectScript_MartEmployer_Text_0:
# 25 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Welcome to my humble shop!\p"
	.string "Pokeballs, potions, held items, repels\n"
	.string "and more!\p"
	.string "If your looking for anything come check\n"
	.string "with me, because I will most likely have\l"
	.string "it somewhere around!\p"
	.string "That being said... The leader does\n"
	.string "restrict me to sell... 'good' items to low\l"
	.string "level Initiatives.\p"
	.string "The higher your rank will become, the\n"
	.string "more items I'm allowed to sell you, so\l"
	.string "please do consider to come back from\l"
	.string "time to time!\p"
	.string "With that being said...$"

GeneratlStore_ObjectScript_MartEmployer_Text_1:
# 32 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "How can I be of service to you today?$"

GeneratlStore_ObjectScript_MartEmployer_Text_2:
# 54 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Oh, it seems like something went wrong,\n"
	.string "please come again later!$"

GeneratlStore_ObjectScript_MartEmployer_Text_3:
# 56 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Please come again later!$"

GeneralStore_ObjectScript_Pokeballs_Text_0:
# 62 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "There a many differen capture balls\n"
	.string "here, from the common pokéball and\l"
	.string "ultraball to some unique balls like the\l"
	.string "cherish balls and even master balls$"

GeneralStore_ObjectScript_Medicine_Text_0:
# 68 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "You can see a wide range of different\n"
	.string "medicine and refreshments$"

GeneralStore_ObjectScript_Vitamins_Text_0:
# 74 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "The ile is filled with different pill\n"
	.string "bottles, candies, mints and strange\l"
	.string "feathers$"

GeneralStore_ObjectScript_CaveItems_Text_0:
# 80 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "The ile is filled with usefull cave\n"
	.string "exploration equipment, like escape\l"
	.string "ropes and repels$"

GeneralStore_ObjectScript_HeldItems_Text_0:
# 86 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "The ile is filled with strange trinkets\p"
	.string "A sign is placed near it: 'Improve your\n"
	.string "pokemons perfromance by giving them\l"
	.string "that little extra'$"

GeneralStore_ObjectScript_Berries_Text_0:
# 93 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "This ile is filled with many different\n"
	.string "kinds of berries.\p"
	.string "They probably update the stock daily,\n"
	.string "because all the berries look freshly\l"
	.string "plucked.$"

GeneralStore_ObjectScript_Trinkets_Text_0:
# 100 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "A wide range of items can be found here,\n"
	.string "you can't seem a common theme among\l"
	.string "them to describe it easily what kind of\l"
	.string "items can be found here.$"

GeneralStore_ObjectScript_Plant_Text_0:
# 106 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "It's an ordinary plant$"
