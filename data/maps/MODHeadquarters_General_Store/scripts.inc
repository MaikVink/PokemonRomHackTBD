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
	goto_if_unset FLAG_GIFT_GENERALSTORE, GeneratlStore_ObjectScript_MartEmployer_5
GeneratlStore_ObjectScript_MartEmployer_4:
# 42 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_3
# 43 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	switch VAR_BADGE_AMOUNT
# 45 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 0, GeneratlStore_ObjectScript_MartEmployer_9
# 47 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 1, GeneratlStore_ObjectScript_MartEmployer_10
# 49 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 2, GeneratlStore_ObjectScript_MartEmployer_11
# 51 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 3, GeneratlStore_ObjectScript_MartEmployer_12
# 53 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 4, GeneratlStore_ObjectScript_MartEmployer_13
# 55 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 5, GeneratlStore_ObjectScript_MartEmployer_14
# 57 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 6, GeneratlStore_ObjectScript_MartEmployer_15
# 59 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 7, GeneratlStore_ObjectScript_MartEmployer_16
# 61 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	case 8, GeneratlStore_ObjectScript_MartEmployer_17
# 64 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_4
GeneratlStore_ObjectScript_MartEmployer_7:
# 66 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_5
# 67 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return

GeneratlStore_ObjectScript_MartEmployer_2:
# 25 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_0
	goto GeneratlStore_ObjectScript_MartEmployer_1

GeneratlStore_ObjectScript_MartEmployer_5:
# 34 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_1
# 37 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 38 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	giveitem ITEM_POTION, 5
# 39 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	setflag FLAG_GIFT_GENERALSTORE
# 40 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneratlStore_ObjectScript_MartEmployer_Text_2
	goto GeneratlStore_ObjectScript_MartEmployer_4

GeneratlStore_ObjectScript_MartEmployer_9:
# 46 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartNoBadges
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_10:
# 48 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartOne
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_11:
# 50 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartTwo
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_12:
# 52 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartThree
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_13:
# 54 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartFour
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_14:
# 56 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartFive
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_15:
# 58 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartSix
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_16:
# 60 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartSeven
	goto GeneratlStore_ObjectScript_MartEmployer_7

GeneratlStore_ObjectScript_MartEmployer_17:
# 62 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	pokemart ModHeadquarters_MartEight
	goto GeneratlStore_ObjectScript_MartEmployer_7


GeneralStore_ObjectScript_Pokeballs::
# 71 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 72 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Pokeballs_Text_0, MSGBOX_SIGN
# 73 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Medicine::
# 77 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 78 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Medicine_Text_0, MSGBOX_SIGN
# 79 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Vitamins::
# 83 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 84 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Vitamins_Text_0, MSGBOX_SIGN
# 85 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_CaveItems::
# 89 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 90 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_CaveItems_Text_0, MSGBOX_SIGN
# 91 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_HeldItems::
# 95 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 96 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_HeldItems_Text_0, MSGBOX_SIGN
# 98 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Berries::
# 102 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 103 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Berries_Text_0, MSGBOX_SIGN
# 105 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Trinkets::
# 109 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 110 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Trinkets_Text_0, MSGBOX_SIGN
# 111 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


GeneralStore_ObjectScript_Plant::
# 115 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	lockall
# 116 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	msgbox GeneralStore_ObjectScript_Plant_Text_0
# 117 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	releaseall
	return


	.align 2
# 120 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartNoBadges:
# 121 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 122 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 123 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 124 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 125 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 126 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 127 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 128 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 129 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 130 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 131 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 132 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINK_SCARF
# 133 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 134 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
	.2byte ITEM_NONE

	.align 2
# 137 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartOne:
# 138 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 139 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 140 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 141 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 142 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 143 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 144 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 145 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 146 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 147 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 148 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 149 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 150 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 151 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 152 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 153 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 154 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 155 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 156 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINK_SCARF
# 157 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 158 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 159 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
	.2byte ITEM_NONE

	.align 2
# 162 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartTwo:
# 163 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 164 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 165 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 166 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 167 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 168 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 169 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 170 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 171 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 172 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 173 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 174 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 175 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 176 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 177 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 178 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 179 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 180 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 181 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 182 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 183 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 184 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 185 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 186 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 187 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 188 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 189 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 190 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 191 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 192 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 193 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 194 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 195 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 196 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 197 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 198 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 199 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 200 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 201 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 202 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 203 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 204 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 205 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 206 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 207 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 208 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 209 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 210 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
	.2byte ITEM_NONE

	.align 2
# 213 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartThree:
# 214 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 215 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 216 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 217 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 218 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 219 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 220 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 221 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 222 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 223 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 224 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 225 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 226 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 227 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 228 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 229 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 230 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 231 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 232 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 233 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 234 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 235 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 236 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 237 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 238 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 239 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 240 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 241 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 242 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 243 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 244 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 245 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 246 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 247 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 248 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 249 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 250 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 251 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 252 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 253 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 254 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 255 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 256 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 257 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 258 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 259 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 260 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 261 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 262 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 263 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 264 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 265 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 266 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 267 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 268 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 269 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 270 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 271 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 272 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 273 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 274 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 275 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
	.2byte ITEM_NONE

	.align 2
# 278 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartFour:
# 279 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 280 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 281 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 282 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 283 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 284 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 285 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 286 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 287 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 288 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 289 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 290 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 291 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 292 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 293 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 294 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 295 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 296 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 297 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 298 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 299 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 300 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 301 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 302 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 303 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 304 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 305 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 306 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 307 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 308 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 309 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 310 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 311 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 312 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 313 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 314 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 315 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 316 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 317 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 318 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 319 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 320 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 321 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 322 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 323 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 324 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 325 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 326 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 327 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 328 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 329 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 330 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 331 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 332 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 333 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 334 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 335 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 336 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 337 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 338 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 339 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 340 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 341 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOUL_DEW
# 342 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADAMANT_ORB
# 343 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUSTROUS_ORB
# 344 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRISEOUS_ORB
# 345 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 346 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 347 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 348 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 349 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 350 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 351 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 352 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 353 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 354 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 355 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 356 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 357 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 358 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 359 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 360 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 361 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 362 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 363 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 364 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 365 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 366 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 367 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 368 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 369 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 370 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 371 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 372 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 373 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 374 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 375 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 376 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 377 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 378 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 379 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 380 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 381 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 382 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 383 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 384 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 385 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 386 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 387 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 388 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 389 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 390 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 391 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 392 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 393 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 394 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 395 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 396 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 397 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 398 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 399 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 400 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 401 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 402 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 403 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 404 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 405 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 406 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 407 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 408 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 409 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 410 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 411 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 412 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 413 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 414 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 415 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 416 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 417 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 418 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 419 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 420 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 421 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 422 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 423 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 424 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 425 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 426 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 427 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 428 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 429 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 430 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 431 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 432 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 433 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 434 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 435 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 436 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 437 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 438 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 439 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 440 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 441 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 442 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
	.2byte ITEM_NONE

	.align 2
# 445 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartFive:
# 446 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 447 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 448 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 449 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 450 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 451 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 452 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 453 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 454 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 455 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 456 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 457 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 458 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 459 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 460 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 461 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 462 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 463 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 464 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 465 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 466 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 467 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 468 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 469 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 470 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 471 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 472 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 473 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 474 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 475 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 476 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 477 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 478 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 479 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 480 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 481 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 482 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 483 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 484 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 485 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 486 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 487 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 488 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 489 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 490 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 491 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 492 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 493 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 494 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 495 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 496 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 497 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 498 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 499 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 500 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 501 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 502 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 503 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 504 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 505 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 506 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 507 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 508 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 509 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 510 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 511 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 512 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 513 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 514 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 515 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 516 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 517 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 518 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 519 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 520 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 521 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 522 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 523 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 524 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 525 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 526 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 527 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 528 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 529 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 530 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 531 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 532 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 533 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 534 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 535 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 536 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 537 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 538 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 539 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 540 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 541 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 542 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 543 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 544 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 545 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 546 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 547 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 548 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 549 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 550 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 551 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 552 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 553 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 554 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 555 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 556 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 557 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 558 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 559 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 560 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 561 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 562 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 563 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 564 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 565 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 566 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 567 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 568 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 569 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 570 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 571 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 572 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 573 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 574 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 575 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 576 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 577 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 578 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 579 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 580 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 581 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 582 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 583 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 584 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 585 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 586 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 587 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 588 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 589 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 590 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 591 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 592 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 593 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 594 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 595 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 596 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 597 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 598 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 599 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 600 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 601 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 602 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 603 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 604 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 605 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 606 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 607 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 608 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 609 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 610 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 611 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 612 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 613 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 614 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 615 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 616 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 617 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 618 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 619 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 620 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 621 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 622 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 623 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 624 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 625 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 626 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 627 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 628 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 629 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 630 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 631 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 632 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 633 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 634 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 635 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 636 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 637 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 638 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 639 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 640 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 641 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 642 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 643 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 644 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 645 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 646 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 647 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 648 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 649 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 650 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 651 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 652 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 653 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 654 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 655 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 656 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 657 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 658 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 659 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 660 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 661 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 662 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 663 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 664 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 665 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 666 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 667 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 668 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 669 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 670 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 671 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 672 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 673 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 674 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 675 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 676 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 677 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 678 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 679 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 680 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 681 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 682 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 683 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 684 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 685 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 686 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 687 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 688 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 689 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 690 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 691 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 692 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 693 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 694 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 695 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 696 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 697 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 698 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 699 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 700 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 701 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 702 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 703 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 704 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 705 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 706 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 707 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 708 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 709 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 710 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
	.2byte ITEM_NONE

	.align 2
# 713 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartSix:
# 714 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 715 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 716 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 717 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 718 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 719 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 720 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 721 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 722 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 723 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 724 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 725 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 726 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 727 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 728 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 729 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 730 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 731 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 732 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 733 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 734 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 735 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 736 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 737 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 738 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 739 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 740 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 741 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 742 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 743 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 744 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 745 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 746 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 747 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 748 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 749 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 750 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 751 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 752 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 753 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 754 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 755 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 756 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 757 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 758 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 759 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 760 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 761 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 762 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 763 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 764 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 765 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 766 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 767 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 768 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 769 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 770 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 771 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 772 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 773 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 774 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 775 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 776 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 777 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 778 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 779 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 780 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 781 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 782 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 783 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 784 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 785 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 786 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 787 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 788 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 789 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 790 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 791 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 792 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 793 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 794 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 795 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 796 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 797 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 798 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 799 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 800 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 801 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 802 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 803 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 804 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 805 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 806 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 807 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 808 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 809 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 810 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 811 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 812 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 813 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 814 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 815 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 816 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 817 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 818 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 819 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 820 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 821 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 822 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 823 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 824 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 825 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 826 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 827 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 828 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 829 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 830 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 831 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 832 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 833 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 834 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 835 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 836 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 837 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 838 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 839 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 840 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 841 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 842 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 843 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 844 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 845 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 846 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 847 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 848 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 849 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 850 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 851 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 852 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 853 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 854 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 855 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 856 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 857 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 858 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 859 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 860 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 861 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 862 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 863 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 864 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 865 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 866 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 867 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 868 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 869 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 870 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 871 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 872 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 873 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 874 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 875 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 876 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 877 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 878 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 879 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 880 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 881 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 882 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 883 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 884 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 885 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 886 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 887 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 888 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 889 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 890 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 891 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 892 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 893 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 894 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 895 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 896 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 897 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 898 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 899 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 900 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 901 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 902 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 903 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 904 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 905 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 906 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 907 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 908 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 909 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 910 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 911 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 912 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 913 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 914 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 915 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 916 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 917 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 918 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 919 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 920 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 921 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 922 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 923 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 924 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 925 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 926 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 927 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 928 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 929 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 930 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 931 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 932 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 933 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 934 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 935 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 936 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 937 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 938 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 939 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 940 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 941 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 942 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 943 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 944 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 945 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 946 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 947 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 948 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 949 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 950 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 951 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 952 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 953 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 954 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 955 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 956 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 957 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 958 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 959 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 960 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 961 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 962 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 963 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 964 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 965 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 966 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 967 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 968 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 969 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 970 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 971 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 972 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 973 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 974 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 975 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 976 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 977 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 978 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 979 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 980 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 981 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 982 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 983 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 984 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 985 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 986 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 987 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 988 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 989 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 990 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 991 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 992 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 993 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
	.2byte ITEM_NONE

	.align 2
# 996 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartSeven:
# 997 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 998 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 999 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 1000 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 1001 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 1002 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 1003 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 1004 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 1005 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 1006 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 1007 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 1008 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 1009 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 1010 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 1011 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 1012 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 1013 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 1014 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 1015 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 1016 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 1017 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 1018 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 1019 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 1020 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 1021 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 1022 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 1023 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 1024 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 1025 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 1026 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 1027 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 1028 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 1029 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 1030 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 1031 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 1032 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 1033 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 1034 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 1035 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 1036 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 1037 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 1038 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 1039 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 1040 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 1041 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 1042 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 1043 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 1044 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 1045 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 1046 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 1047 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 1048 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 1049 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 1050 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 1051 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 1052 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 1053 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 1054 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 1055 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 1056 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HP_UP
# 1057 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTEIN
# 1058 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON
# 1059 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALCIUM
# 1060 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZINC
# 1061 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CARBOS
# 1062 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_UP
# 1063 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_MAX
# 1064 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1065 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1066 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1067 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1068 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1069 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1070 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1071 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1072 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1073 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1074 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 1075 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 1076 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 1077 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 1078 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ATTACK
# 1079 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 1080 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 1081 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 1082 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SPEED
# 1083 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 1084 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 1085 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 1086 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 1087 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 1088 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 1089 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 1090 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 1091 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 1092 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 1093 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 1094 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 1095 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 1096 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 1097 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 1098 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 1099 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 1100 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 1101 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 1102 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 1103 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 1104 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 1105 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 1106 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 1107 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 1108 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 1109 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 1110 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 1111 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 1112 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1113 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1114 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1115 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1116 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1117 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1118 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1119 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 1120 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1121 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1122 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1123 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 1124 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 1125 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 1126 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 1127 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1128 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1129 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1130 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1131 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1132 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1133 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1134 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1135 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1136 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 1137 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1138 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1139 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1140 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1141 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1142 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1143 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1144 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1145 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1146 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1147 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1148 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1149 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1150 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1151 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1152 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1153 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1154 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1155 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1156 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1157 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1158 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1159 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 1160 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 1161 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 1162 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 1163 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1164 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1165 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1166 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1167 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1168 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1169 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1170 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1171 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1172 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1173 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1174 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1175 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1176 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1177 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 1178 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1179 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1180 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1181 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1182 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1183 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1184 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1185 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1186 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1187 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1188 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1189 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1190 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 1191 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1192 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1193 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1194 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1195 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1196 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1197 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1198 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1199 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1200 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1201 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1202 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1203 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1204 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1205 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 1206 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1207 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1208 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1209 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1210 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1211 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1212 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1213 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 1214 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 1215 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 1216 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 1217 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 1218 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 1219 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 1220 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 1221 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1222 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1223 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1224 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1225 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1226 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1227 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1228 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1229 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1230 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1231 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 1232 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 1233 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 1234 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 1235 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 1236 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 1237 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 1238 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 1239 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 1240 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 1241 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1242 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1243 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1244 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1245 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1246 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 1247 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 1248 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 1249 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 1250 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 1251 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 1252 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 1253 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 1254 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 1255 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 1256 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 1257 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 1258 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 1259 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 1260 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 1261 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 1262 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 1263 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 1264 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 1265 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 1266 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 1267 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 1268 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 1269 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 1270 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 1271 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 1272 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 1273 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 1274 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 1275 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 1276 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 1277 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 1278 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 1279 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 1280 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 1281 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 1282 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 1283 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 1284 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 1285 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 1286 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 1287 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 1288 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 1289 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 1290 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 1291 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 1292 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 1293 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 1294 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 1295 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 1296 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 1297 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 1298 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
	.2byte ITEM_NONE

	.align 2
# 1301 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartEight:
# 1302 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 1303 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 1304 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 1305 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 1306 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 1307 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 1308 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 1309 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 1310 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 1311 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 1312 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 1313 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 1314 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 1315 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 1316 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 1317 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 1318 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 1319 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 1320 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 1321 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 1322 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 1323 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 1324 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 1325 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 1326 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 1327 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 1328 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 1329 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 1330 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 1331 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 1332 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 1333 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 1334 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 1335 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 1336 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 1337 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 1338 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 1339 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 1340 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 1341 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 1342 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 1343 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 1344 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 1345 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 1346 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 1347 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 1348 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 1349 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 1350 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 1351 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 1352 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 1353 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 1354 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 1355 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 1356 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 1357 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 1358 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 1359 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 1360 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 1361 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HP_UP
# 1362 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTEIN
# 1363 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON
# 1364 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALCIUM
# 1365 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZINC
# 1366 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CARBOS
# 1367 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_UP
# 1368 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_MAX
# 1369 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1370 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1371 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1372 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1373 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1374 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1375 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1376 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1377 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1378 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1379 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1380 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1381 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1382 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1383 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1384 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1385 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1386 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1387 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1388 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1389 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1390 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1391 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1392 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1393 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1394 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1395 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1396 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1397 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 1398 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 1399 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1400 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1401 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1402 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1403 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 1404 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 1405 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 1406 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 1407 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 1408 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ATTACK
# 1409 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 1410 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 1411 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 1412 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SPEED
# 1413 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 1414 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 1415 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 1416 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 1417 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 1418 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 1419 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 1420 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 1421 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 1422 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 1423 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 1424 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 1425 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 1426 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 1427 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 1428 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 1429 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 1430 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 1431 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 1432 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 1433 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 1434 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 1435 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 1436 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 1437 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 1438 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATER_GEM
# 1439 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 1440 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 1441 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_GEM
# 1442 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 1443 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_GEM
# 1444 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 1445 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 1446 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 1447 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BUG_GEM
# 1448 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 1449 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 1450 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 1451 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DARK_GEM
# 1452 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 1453 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_GEM
# 1454 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 1455 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 1456 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 1457 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 1458 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 1459 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 1460 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1461 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1462 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1463 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1464 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1465 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1466 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1467 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 1468 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1469 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1470 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1471 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 1472 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 1473 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 1474 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 1475 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1476 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1477 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1478 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1479 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1480 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1481 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1482 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1483 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1484 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 1485 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1486 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1487 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1488 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1489 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1490 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1491 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1492 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1493 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1494 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1495 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1496 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1497 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1498 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1499 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1500 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1501 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1502 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1503 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1504 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1505 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1506 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1507 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 1508 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 1509 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 1510 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 1511 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1512 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1513 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1514 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1515 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1516 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1517 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1518 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1519 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1520 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1521 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1522 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1523 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1524 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1525 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 1526 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1527 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1528 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1529 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1530 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1531 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1532 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1533 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1534 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1535 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1536 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1537 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1538 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 1539 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1540 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1541 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1542 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1543 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1544 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1545 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1546 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1547 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1548 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1549 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1550 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1551 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1552 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1553 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 1554 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1555 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1556 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1557 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1558 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1559 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1560 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1561 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 1562 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 1563 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 1564 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 1565 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 1566 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 1567 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 1568 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 1569 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1570 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1571 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1572 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1573 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1574 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1575 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1576 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1577 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1578 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1579 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 1580 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 1581 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 1582 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 1583 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 1584 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 1585 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 1586 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 1587 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 1588 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 1589 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1590 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1591 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1592 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1593 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1594 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 1595 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 1596 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 1597 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 1598 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 1599 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 1600 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 1601 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 1602 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 1603 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 1604 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 1605 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 1606 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 1607 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 1608 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 1609 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 1610 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 1611 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 1612 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 1613 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 1614 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 1615 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 1616 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 1617 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 1618 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 1619 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 1620 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 1621 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 1622 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 1623 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 1624 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 1625 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 1626 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 1627 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 1628 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 1629 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 1630 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 1631 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 1632 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 1633 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 1634 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 1635 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 1636 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 1637 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 1638 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 1639 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 1640 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 1641 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 1642 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 1643 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 1644 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 1645 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 1646 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
# 1647 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_EVASION
# 1648 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_GUARD
# 1649 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_POWER
	.2byte ITEM_NONE

	.align 2
# 1652 "data/maps/MODHeadquarters_General_Store/scripts.pory"
ModHeadquarters_MartMaster:
# 1653 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_BALL
# 1654 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 1655 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 1656 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 1657 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 1658 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 1659 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NET_BALL
# 1660 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEST_BALL
# 1661 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 1662 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 1663 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 1664 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 1665 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 1666 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 1667 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 1668 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LURE_BALL
# 1669 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOON_BALL
# 1670 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 1671 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 1672 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAST_BALL
# 1673 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 1674 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 1675 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 1676 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 1677 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARK_BALL
# 1678 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 1679 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 1680 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POTION
# 1681 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 1682 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 1683 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_POTION
# 1684 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 1685 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVE
# 1686 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 1687 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 1688 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SODA_POP
# 1689 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEMONADE
# 1690 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 1691 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 1692 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 1693 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 1694 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 1695 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 1696 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 1697 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 1698 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 1699 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AWAKENING
# 1700 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 1701 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ETHER
# 1702 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 1703 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELIXER
# 1704 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_ELIXER
# 1705 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 1706 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SACRED_ASH
# 1707 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 1708 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_HONEY
# 1709 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 1710 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 1711 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 1712 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 1713 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 1714 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 1715 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 1716 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 1717 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HP_UP
# 1718 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTEIN
# 1719 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON
# 1720 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALCIUM
# 1721 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZINC
# 1722 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CARBOS
# 1723 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_UP
# 1724 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PP_MAX
# 1725 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 1726 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 1727 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 1728 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 1729 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 1730 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 1731 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 1732 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 1733 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1734 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1735 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1736 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1737 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1738 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1739 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1740 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1741 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1742 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1743 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1744 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1745 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1746 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1747 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1748 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1749 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1750 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1751 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1752 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1753 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 1754 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 1755 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 1756 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 1757 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 1758 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 1759 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 1760 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REPEL
# 1761 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 1762 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 1763 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 1764 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ATTACK
# 1765 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 1766 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 1767 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 1768 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_SPEED
# 1769 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 1770 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 1771 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 1772 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 1773 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 1774 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POKE_TOY
# 1775 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 1776 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 1777 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 1778 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 1779 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 1780 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 1781 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 1782 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 1783 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 1784 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 1785 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 1786 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 1787 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 1788 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 1789 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 1790 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 1791 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 1792 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 1793 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 1794 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATER_GEM
# 1795 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 1796 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 1797 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICE_GEM
# 1798 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 1799 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_GEM
# 1800 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 1801 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 1802 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 1803 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BUG_GEM
# 1804 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 1805 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 1806 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 1807 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DARK_GEM
# 1808 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 1809 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_GEM
# 1810 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 1811 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEEK
# 1812 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 1813 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 1814 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 1815 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 1816 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 1817 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 1818 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1819 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1820 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1821 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1822 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1823 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 1824 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1825 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1826 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1827 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_SCARF
# 1828 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUE_SCARF
# 1829 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREEN_SCARF
# 1830 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YELLOW_SCARF
# 1831 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 1832 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1833 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1834 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1835 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1836 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1837 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1838 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1839 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1840 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGNET
# 1841 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1842 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 1843 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1844 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1845 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1846 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1847 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 1848 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1849 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1850 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1851 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1852 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1853 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METAL_COAT
# 1854 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 1855 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 1856 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 1857 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 1858 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 1859 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 1860 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 1861 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 1862 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 1863 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 1864 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 1865 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 1866 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 1867 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 1868 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 1869 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 1870 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SNOWBALL
# 1871 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 1872 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 1873 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 1874 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 1875 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 1876 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 1877 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 1878 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 1879 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 1880 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 1881 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 1882 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 1883 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 1884 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 1885 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 1886 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 1887 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 1888 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 1889 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 1890 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 1891 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POWER_HERB
# 1892 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 1893 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 1894 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_METRONOME
# 1895 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IRON_BALL
# 1896 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 1897 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 1898 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 1899 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 1900 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 1901 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 1902 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 1903 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 1904 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 1905 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EVIOLITE
# 1906 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 1907 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 1908 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 1909 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RED_CARD
# 1910 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RING_TARGET
# 1911 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 1912 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 1913 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 1914 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 1915 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 1916 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 1917 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 1918 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 1919 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 1920 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 1921 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 1922 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 1923 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 1924 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 1925 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 1926 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 1927 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 1928 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 1929 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 1930 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 1931 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 1932 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 1933 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 1934 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 1935 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 1936 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 1937 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 1938 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 1939 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 1940 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 1941 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 1942 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 1943 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 1944 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 1945 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1946 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1947 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1948 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1949 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1950 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 1951 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 1952 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 1953 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 1954 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 1955 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 1956 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 1957 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
# 1958 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 1959 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 1960 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 1961 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 1962 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 1963 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 1964 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 1965 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 1966 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 1967 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 1968 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 1969 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 1970 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 1971 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 1972 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 1973 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 1974 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 1975 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 1976 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 1977 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 1978 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 1979 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 1980 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 1981 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 1982 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 1983 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 1984 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 1985 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 1986 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 1987 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 1988 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 1989 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 1990 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 1991 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
# 1992 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 1993 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 1994 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 1995 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 1996 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 1997 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 1998 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 1999 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 2000 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_JUBILIFE_MUFFIN
# 2001 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_REMEDY
# 2002 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 2003 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
# 2004 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_EVASION
# 2005 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.2byte ITEM_AUX_GUARD
# 2006 "data/maps/MODHeadquarters_General_Store/scripts.pory"
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
	.string "That being said... {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} does\n"
	.string "restrict me to sell... 'good' items to low\l"
	.string "level Initiatives.\p"
	.string "The higher your rank will become, the\n"
	.string "more items I'm allowed to sell you, so\l"
	.string "please do consider to come back from\l"
	.string "time to time!\p"
	.string "With that being said...$"

GeneratlStore_ObjectScript_MartEmployer_Text_1:
# 34 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Let me give you some things on the\n"
	.string "house this once, to get you started on\l"
	.string "your journey.\p"
	.string "I would say don't waste it, but if you do\n"
	.string "you're more quickly to come back to me\l"
	.string "so...\l"
	.string "do waste it I guess?$"

GeneratlStore_ObjectScript_MartEmployer_Text_2:
# 40 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Hope you will come back for more!$"

GeneratlStore_ObjectScript_MartEmployer_Text_3:
# 42 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "How can I be of service to you today?$"

GeneratlStore_ObjectScript_MartEmployer_Text_4:
# 64 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Oh, it seems like something went wrong,\n"
	.string "please come again later!$"

GeneratlStore_ObjectScript_MartEmployer_Text_5:
# 66 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "Please come again later!$"

GeneralStore_ObjectScript_Pokeballs_Text_0:
# 72 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "There a many differen capture balls\n"
	.string "here, from the common pokéball and\l"
	.string "ultraball to some unique balls like the\l"
	.string "cherish balls and even master balls$"

GeneralStore_ObjectScript_Medicine_Text_0:
# 78 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "You can see a wide range of different\n"
	.string "medicine and refreshments$"

GeneralStore_ObjectScript_Vitamins_Text_0:
# 84 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "The ile is filled with different pill\n"
	.string "bottles, candies, mints and strange\l"
	.string "feathers$"

GeneralStore_ObjectScript_CaveItems_Text_0:
# 90 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "The ile is filled with usefull cave\n"
	.string "exploration equipment, like escape\l"
	.string "ropes and repels$"

GeneralStore_ObjectScript_HeldItems_Text_0:
# 96 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "The ile is filled with strange trinkets\p"
	.string "A sign is placed near it: 'Improve your\n"
	.string "pokemons perfromance by giving them\l"
	.string "that little extra'$"

GeneralStore_ObjectScript_Berries_Text_0:
# 103 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "This ile is filled with many different\n"
	.string "kinds of berries.\p"
	.string "They probably update the stock daily,\n"
	.string "because all the berries look freshly\l"
	.string "plucked.$"

GeneralStore_ObjectScript_Trinkets_Text_0:
# 110 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "A wide range of items can be found here,\n"
	.string "you can't seem a common theme among\l"
	.string "them to describe it easily what kind of\l"
	.string "items can be found here.$"

GeneralStore_ObjectScript_Plant_Text_0:
# 116 "data/maps/MODHeadquarters_General_Store/scripts.pory"
	.string "It's an ordinary plant$"
