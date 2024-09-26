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
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_4
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
	msgbox EvoMAsters_ObjectScript_Masseuse_Text_3
# 43 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	goto EvoMAsters_ObjectScript_Masseuse_9

EvoMAsters_ObjectScript_Masseuse_13:
# 37 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_GiveMassage
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
	call EvoMasters_GiveMassage
# 63 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	end

EvoMasters_CheckFreeMassageEevee_1:
# 58 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckDeclineMassage
	return


EvoMasters_CheckDeclineMassage::
# 70 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_0, MSGBOX_YESNO
# 71 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_CheckDeclineMassage_1
# 77 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_2
# 78 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_CheckFreeMassageEevee
	return

EvoMasters_CheckDeclineMassage_1:
# 73 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_CheckDeclineMassage_Text_1
	return


EvoMasters_GiveMassage::
# 84 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_0
# 85 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special ChooseMonForFriendShip
# 86 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitstate
# 87 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_0x8004, 0xFF
	goto_if_eq EvoMasters_GiveMassage_2
# 93 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_2
# 94 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	removemoney 1000
# 95 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_3
EvoMasters_GiveMassage_1:
	return

EvoMasters_GiveMassage_2:
# 89 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_GiveMassage_Text_1
	goto EvoMasters_GiveMassage_1


EvoMasters_ObjectScript_Simulator::
# 102 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 104 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_Simulator_2
EvoMasters_ObjectScript_Simulator_1:
# 120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_4, MSGBOX_YESNO
# 121 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_5
# 135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_6
EvoMasters_ObjectScript_Simulator_4:
# 137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_Simulator_2:
# 106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_0
# 107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_Simulator_9
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_5:
# 123 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	checkmoney 2500
# 124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_12
# 130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_5
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_8:
# 109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_1, MSGBOX_YESNO
# 110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_Simulator_15
# 116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_3
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_9:
# 107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_Simulator_8
	goto EvoMasters_ObjectScript_Simulator_1

EvoMasters_ObjectScript_Simulator_12:
# 126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
	goto EvoMasters_ObjectScript_Simulator_4

EvoMasters_ObjectScript_Simulator_15:
# 112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_Simulator_Text_2
	goto EvoMasters_ObjectScript_Simulator_1


EvoMasters_ObjectScript_EvoChecker::
# 141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 142 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_EvoChecker_2
EvoMasters_ObjectScript_EvoChecker_1:
# 147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_1, MSGBOX_YESNO
# 148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EvoMasters_ObjectScript_EvoChecker_5
# 163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_3
EvoMasters_ObjectScript_EvoChecker_4:
# 165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_EvoChecker_2:
# 145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_0
	goto EvoMasters_ObjectScript_EvoChecker_1

EvoMasters_ObjectScript_EvoChecker_5:
# 150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	special ChooseMonForEvoCheck
# 151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	waitstate
# 152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_0x8004, 0xFF
	goto_if_eq EvoMasters_ObjectScript_EvoChecker_8
# 158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	call EvoMasters_EvoCheckForMon
	goto EvoMasters_ObjectScript_EvoChecker_4

EvoMasters_ObjectScript_EvoChecker_8:
# 154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_EvoChecker_Text_2
	goto EvoMasters_ObjectScript_EvoChecker_4


EvoMasters_ObjectScript_MartEmployer::
# 169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	lockall
# 170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	faceplayer
# 171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	compare VAR_MOD_SHOPS_STATE, 2000
	goto_if_lt EvoMasters_ObjectScript_MartEmployer_2
EvoMasters_ObjectScript_MartEmployer_1:
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_TOURNAMENT_LOST, EvoMasters_ObjectScript_MartEmployer_6
EvoMasters_ObjectScript_MartEmployer_4:
# 185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_3
# 186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	pokemart MODHeadquarters_EvoShop
# 187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_4
# 188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	releaseall
	return

EvoMasters_ObjectScript_MartEmployer_2:
# 173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_0
	goto EvoMasters_ObjectScript_MartEmployer_1

EvoMasters_ObjectScript_MartEmployer_5:
# 177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_1
# 178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_WATER_STONE
# 179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	giveitem ITEM_TM51
# 182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	setflag FLAG_GIFT_EVOMASTERS
# 183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_ObjectScript_MartEmployer_Text_2
	goto EvoMasters_ObjectScript_MartEmployer_4

EvoMasters_ObjectScript_MartEmployer_6:
# 175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	goto_if_unset FLAG_GIFT_EVOMASTERS, EvoMasters_ObjectScript_MartEmployer_5
	goto EvoMasters_ObjectScript_MartEmployer_4


EvoMasters_EvoCheckForMon::
# 193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_0
# 194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	switch VAR_0x8005
# 196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 0, EvoMasters_EvoCheckForMon_2
# 198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 3, EvoMasters_EvoCheckForMon_3
# 199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 6, EvoMasters_EvoCheckForMon_3
# 200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 9, EvoMasters_EvoCheckForMon_3
# 201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 12, EvoMasters_EvoCheckForMon_3
# 202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 15, EvoMasters_EvoCheckForMon_3
# 203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 18, EvoMasters_EvoCheckForMon_3
# 204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 20, EvoMasters_EvoCheckForMon_3
# 205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 22, EvoMasters_EvoCheckForMon_3
# 206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 24, EvoMasters_EvoCheckForMon_3
# 207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 26, EvoMasters_EvoCheckForMon_3
# 208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 28, EvoMasters_EvoCheckForMon_3
# 209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 31, EvoMasters_EvoCheckForMon_3
# 210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 34, EvoMasters_EvoCheckForMon_3
# 211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 36, EvoMasters_EvoCheckForMon_3
# 212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 38, EvoMasters_EvoCheckForMon_3
# 213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 40, EvoMasters_EvoCheckForMon_3
# 214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 45, EvoMasters_EvoCheckForMon_3
# 215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 47, EvoMasters_EvoCheckForMon_3
# 216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 49, EvoMasters_EvoCheckForMon_3
# 217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 51, EvoMasters_EvoCheckForMon_3
# 218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 53, EvoMasters_EvoCheckForMon_3
# 219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 55, EvoMasters_EvoCheckForMon_3
# 220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 59, EvoMasters_EvoCheckForMon_3
# 221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 62, EvoMasters_EvoCheckForMon_3
# 222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 65, EvoMasters_EvoCheckForMon_3
# 223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 68, EvoMasters_EvoCheckForMon_3
# 224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 71, EvoMasters_EvoCheckForMon_3
# 225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 73, EvoMasters_EvoCheckForMon_3
# 226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 76, EvoMasters_EvoCheckForMon_3
# 227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 78, EvoMasters_EvoCheckForMon_3
# 228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 80, EvoMasters_EvoCheckForMon_3
# 229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 85, EvoMasters_EvoCheckForMon_3
# 230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 87, EvoMasters_EvoCheckForMon_3
# 231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 89, EvoMasters_EvoCheckForMon_3
# 232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 91, EvoMasters_EvoCheckForMon_3
# 233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 94, EvoMasters_EvoCheckForMon_3
# 234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 97, EvoMasters_EvoCheckForMon_3
# 235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 99, EvoMasters_EvoCheckForMon_3
# 236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 101, EvoMasters_EvoCheckForMon_3
# 237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 103, EvoMasters_EvoCheckForMon_3
# 238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 105, EvoMasters_EvoCheckForMon_3
# 239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 106, EvoMasters_EvoCheckForMon_3
# 240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 107, EvoMasters_EvoCheckForMon_3
# 241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 110, EvoMasters_EvoCheckForMon_3
# 242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 119, EvoMasters_EvoCheckForMon_3
# 243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 121, EvoMasters_EvoCheckForMon_3
# 244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 122, EvoMasters_EvoCheckForMon_3
# 245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 124, EvoMasters_EvoCheckForMon_3
# 246 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 130, EvoMasters_EvoCheckForMon_3
# 247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 134, EvoMasters_EvoCheckForMon_3
# 248 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 135, EvoMasters_EvoCheckForMon_3
# 249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 136, EvoMasters_EvoCheckForMon_3
# 250 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 139, EvoMasters_EvoCheckForMon_3
# 251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 141, EvoMasters_EvoCheckForMon_3
# 252 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 143, EvoMasters_EvoCheckForMon_3
# 253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 149, EvoMasters_EvoCheckForMon_3
# 254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 154, EvoMasters_EvoCheckForMon_3
# 255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 157, EvoMasters_EvoCheckForMon_3
# 256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 160, EvoMasters_EvoCheckForMon_3
# 257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 162, EvoMasters_EvoCheckForMon_3
# 258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 164, EvoMasters_EvoCheckForMon_3
# 259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 166, EvoMasters_EvoCheckForMon_3
# 260 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 168, EvoMasters_EvoCheckForMon_3
# 261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 169, EvoMasters_EvoCheckForMon_3
# 262 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 171, EvoMasters_EvoCheckForMon_3
# 263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 178, EvoMasters_EvoCheckForMon_3
# 264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 181, EvoMasters_EvoCheckForMon_3
# 265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 182, EvoMasters_EvoCheckForMon_3
# 266 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 184, EvoMasters_EvoCheckForMon_3
# 267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 185, EvoMasters_EvoCheckForMon_3
# 268 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 186, EvoMasters_EvoCheckForMon_3
# 269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 189, EvoMasters_EvoCheckForMon_3
# 270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 192, EvoMasters_EvoCheckForMon_3
# 271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 195, EvoMasters_EvoCheckForMon_3
# 272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 196, EvoMasters_EvoCheckForMon_3
# 273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 197, EvoMasters_EvoCheckForMon_3
# 274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 199, EvoMasters_EvoCheckForMon_3
# 275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 202, EvoMasters_EvoCheckForMon_3
# 276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 205, EvoMasters_EvoCheckForMon_3
# 277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 208, EvoMasters_EvoCheckForMon_3
# 278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 210, EvoMasters_EvoCheckForMon_3
# 279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 212, EvoMasters_EvoCheckForMon_3
# 280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 219, EvoMasters_EvoCheckForMon_3
# 281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 224, EvoMasters_EvoCheckForMon_3
# 282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 226, EvoMasters_EvoCheckForMon_3
# 283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 229, EvoMasters_EvoCheckForMon_3
# 284 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 230, EvoMasters_EvoCheckForMon_3
# 285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 232, EvoMasters_EvoCheckForMon_3
# 286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 237, EvoMasters_EvoCheckForMon_3
# 287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 242, EvoMasters_EvoCheckForMon_3
# 288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 248, EvoMasters_EvoCheckForMon_3
# 289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 254, EvoMasters_EvoCheckForMon_3
# 290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 257, EvoMasters_EvoCheckForMon_3
# 291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 260, EvoMasters_EvoCheckForMon_3
# 292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 262, EvoMasters_EvoCheckForMon_3
# 293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 264, EvoMasters_EvoCheckForMon_3
# 294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 267, EvoMasters_EvoCheckForMon_3
# 295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 269, EvoMasters_EvoCheckForMon_3
# 296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 272, EvoMasters_EvoCheckForMon_3
# 297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 275, EvoMasters_EvoCheckForMon_3
# 298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 277, EvoMasters_EvoCheckForMon_3
# 299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 279, EvoMasters_EvoCheckForMon_3
# 300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 282, EvoMasters_EvoCheckForMon_3
# 301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 284, EvoMasters_EvoCheckForMon_3
# 302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 286, EvoMasters_EvoCheckForMon_3
# 303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 289, EvoMasters_EvoCheckForMon_3
# 304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 291, EvoMasters_EvoCheckForMon_3
# 305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 292, EvoMasters_EvoCheckForMon_3
# 306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 295, EvoMasters_EvoCheckForMon_3
# 307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 297, EvoMasters_EvoCheckForMon_3
# 308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 301, EvoMasters_EvoCheckForMon_3
# 309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 306, EvoMasters_EvoCheckForMon_3
# 310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 308, EvoMasters_EvoCheckForMon_3
# 311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 310, EvoMasters_EvoCheckForMon_3
# 312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 317, EvoMasters_EvoCheckForMon_3
# 313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 319, EvoMasters_EvoCheckForMon_3
# 314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 321, EvoMasters_EvoCheckForMon_3
# 315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 323, EvoMasters_EvoCheckForMon_3
# 316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 326, EvoMasters_EvoCheckForMon_3
# 317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 330, EvoMasters_EvoCheckForMon_3
# 318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 332, EvoMasters_EvoCheckForMon_3
# 319 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 334, EvoMasters_EvoCheckForMon_3
# 320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 340, EvoMasters_EvoCheckForMon_3
# 321 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 342, EvoMasters_EvoCheckForMon_3
# 322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 344, EvoMasters_EvoCheckForMon_3
# 323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 346, EvoMasters_EvoCheckForMon_3
# 324 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 348, EvoMasters_EvoCheckForMon_3
# 325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 350, EvoMasters_EvoCheckForMon_3
# 326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 354, EvoMasters_EvoCheckForMon_3
# 327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 358, EvoMasters_EvoCheckForMon_3
# 328 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 362, EvoMasters_EvoCheckForMon_3
# 329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 365, EvoMasters_EvoCheckForMon_3
# 330 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 367, EvoMasters_EvoCheckForMon_3
# 331 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 368, EvoMasters_EvoCheckForMon_3
# 332 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 373, EvoMasters_EvoCheckForMon_3
# 333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 376, EvoMasters_EvoCheckForMon_3
# 334 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 389, EvoMasters_EvoCheckForMon_3
# 335 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 392, EvoMasters_EvoCheckForMon_3
# 336 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 395, EvoMasters_EvoCheckForMon_3
# 337 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 398, EvoMasters_EvoCheckForMon_3
# 338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 400, EvoMasters_EvoCheckForMon_3
# 339 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 402, EvoMasters_EvoCheckForMon_3
# 340 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 405, EvoMasters_EvoCheckForMon_3
# 341 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 407, EvoMasters_EvoCheckForMon_3
# 342 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 409, EvoMasters_EvoCheckForMon_3
# 343 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 411, EvoMasters_EvoCheckForMon_3
# 344 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 413, EvoMasters_EvoCheckForMon_3
# 345 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 414, EvoMasters_EvoCheckForMon_3
# 346 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 416, EvoMasters_EvoCheckForMon_3
# 347 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 419, EvoMasters_EvoCheckForMon_3
# 348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 421, EvoMasters_EvoCheckForMon_3
# 349 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 423, EvoMasters_EvoCheckForMon_3
# 350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 424, EvoMasters_EvoCheckForMon_3
# 351 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 426, EvoMasters_EvoCheckForMon_3
# 352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 428, EvoMasters_EvoCheckForMon_3
# 353 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 429, EvoMasters_EvoCheckForMon_3
# 354 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 430, EvoMasters_EvoCheckForMon_3
# 355 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 432, EvoMasters_EvoCheckForMon_3
# 356 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 435, EvoMasters_EvoCheckForMon_3
# 357 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 437, EvoMasters_EvoCheckForMon_3
# 358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 445, EvoMasters_EvoCheckForMon_3
# 359 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 448, EvoMasters_EvoCheckForMon_3
# 360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 450, EvoMasters_EvoCheckForMon_3
# 361 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 452, EvoMasters_EvoCheckForMon_3
# 362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 454, EvoMasters_EvoCheckForMon_3
# 363 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 457, EvoMasters_EvoCheckForMon_3
# 364 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 460, EvoMasters_EvoCheckForMon_3
# 365 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 461, EvoMasters_EvoCheckForMon_3
# 366 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 462, EvoMasters_EvoCheckForMon_3
# 367 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 463, EvoMasters_EvoCheckForMon_3
# 368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 464, EvoMasters_EvoCheckForMon_3
# 369 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 465, EvoMasters_EvoCheckForMon_3
# 370 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 466, EvoMasters_EvoCheckForMon_3
# 371 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 467, EvoMasters_EvoCheckForMon_3
# 372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 468, EvoMasters_EvoCheckForMon_3
# 373 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 469, EvoMasters_EvoCheckForMon_3
# 374 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 470, EvoMasters_EvoCheckForMon_3
# 375 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 471, EvoMasters_EvoCheckForMon_3
# 376 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 472, EvoMasters_EvoCheckForMon_3
# 377 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 473, EvoMasters_EvoCheckForMon_3
# 378 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 474, EvoMasters_EvoCheckForMon_3
# 379 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 475, EvoMasters_EvoCheckForMon_3
# 380 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 476, EvoMasters_EvoCheckForMon_3
# 381 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 477, EvoMasters_EvoCheckForMon_3
# 382 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 478, EvoMasters_EvoCheckForMon_3
# 383 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 497, EvoMasters_EvoCheckForMon_3
# 384 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 500, EvoMasters_EvoCheckForMon_3
# 385 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 503, EvoMasters_EvoCheckForMon_3
# 386 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 505, EvoMasters_EvoCheckForMon_3
# 387 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 508, EvoMasters_EvoCheckForMon_3
# 388 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 510, EvoMasters_EvoCheckForMon_3
# 389 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 512, EvoMasters_EvoCheckForMon_3
# 390 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 514, EvoMasters_EvoCheckForMon_3
# 391 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 516, EvoMasters_EvoCheckForMon_3
# 392 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 518, EvoMasters_EvoCheckForMon_3
# 393 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 521, EvoMasters_EvoCheckForMon_3
# 394 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 523, EvoMasters_EvoCheckForMon_3
# 395 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 526, EvoMasters_EvoCheckForMon_3
# 396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 528, EvoMasters_EvoCheckForMon_3
# 397 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 530, EvoMasters_EvoCheckForMon_3
# 398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 534, EvoMasters_EvoCheckForMon_3
# 399 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 537, EvoMasters_EvoCheckForMon_3
# 400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 542, EvoMasters_EvoCheckForMon_3
# 401 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 545, EvoMasters_EvoCheckForMon_3
# 402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 547, EvoMasters_EvoCheckForMon_3
# 403 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 549, EvoMasters_EvoCheckForMon_3
# 404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 553, EvoMasters_EvoCheckForMon_3
# 405 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 555, EvoMasters_EvoCheckForMon_3
# 406 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 558, EvoMasters_EvoCheckForMon_3
# 407 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 560, EvoMasters_EvoCheckForMon_3
# 408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 563, EvoMasters_EvoCheckForMon_3
# 409 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 565, EvoMasters_EvoCheckForMon_3
# 410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 567, EvoMasters_EvoCheckForMon_3
# 411 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 569, EvoMasters_EvoCheckForMon_3
# 412 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 571, EvoMasters_EvoCheckForMon_3
# 413 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 573, EvoMasters_EvoCheckForMon_3
# 414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 576, EvoMasters_EvoCheckForMon_3
# 415 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 579, EvoMasters_EvoCheckForMon_3
# 416 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 581, EvoMasters_EvoCheckForMon_3
# 417 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 584, EvoMasters_EvoCheckForMon_3
# 418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 586, EvoMasters_EvoCheckForMon_3
# 419 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 589, EvoMasters_EvoCheckForMon_3
# 420 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 591, EvoMasters_EvoCheckForMon_3
# 421 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 593, EvoMasters_EvoCheckForMon_3
# 422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 596, EvoMasters_EvoCheckForMon_3
# 423 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 598, EvoMasters_EvoCheckForMon_3
# 424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 601, EvoMasters_EvoCheckForMon_3
# 425 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 604, EvoMasters_EvoCheckForMon_3
# 426 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 606, EvoMasters_EvoCheckForMon_3
# 427 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 609, EvoMasters_EvoCheckForMon_3
# 428 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 612, EvoMasters_EvoCheckForMon_3
# 429 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 614, EvoMasters_EvoCheckForMon_3
# 430 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 617, EvoMasters_EvoCheckForMon_3
# 431 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 620, EvoMasters_EvoCheckForMon_3
# 432 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 623, EvoMasters_EvoCheckForMon_3
# 433 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 628, EvoMasters_EvoCheckForMon_3
# 434 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 630, EvoMasters_EvoCheckForMon_3
# 435 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 635, EvoMasters_EvoCheckForMon_3
# 436 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 637, EvoMasters_EvoCheckForMon_3
# 437 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 652, EvoMasters_EvoCheckForMon_3
# 438 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 655, EvoMasters_EvoCheckForMon_3
# 439 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 658, EvoMasters_EvoCheckForMon_3
# 440 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 660, EvoMasters_EvoCheckForMon_3
# 441 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 663, EvoMasters_EvoCheckForMon_3
# 442 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 666, EvoMasters_EvoCheckForMon_3
# 443 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 668, EvoMasters_EvoCheckForMon_3
# 444 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 671, EvoMasters_EvoCheckForMon_3
# 445 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 673, EvoMasters_EvoCheckForMon_3
# 446 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 675, EvoMasters_EvoCheckForMon_3
# 447 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 678, EvoMasters_EvoCheckForMon_3
# 448 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 681, EvoMasters_EvoCheckForMon_3
# 449 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 683, EvoMasters_EvoCheckForMon_3
# 450 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 685, EvoMasters_EvoCheckForMon_3
# 451 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 687, EvoMasters_EvoCheckForMon_3
# 452 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 689, EvoMasters_EvoCheckForMon_3
# 453 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 691, EvoMasters_EvoCheckForMon_3
# 454 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 693, EvoMasters_EvoCheckForMon_3
# 455 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 695, EvoMasters_EvoCheckForMon_3
# 456 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 697, EvoMasters_EvoCheckForMon_3
# 457 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 699, EvoMasters_EvoCheckForMon_3
# 458 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 700, EvoMasters_EvoCheckForMon_3
# 459 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 706, EvoMasters_EvoCheckForMon_3
# 460 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 709, EvoMasters_EvoCheckForMon_3
# 461 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 711, EvoMasters_EvoCheckForMon_3
# 462 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 713, EvoMasters_EvoCheckForMon_3
# 463 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 715, EvoMasters_EvoCheckForMon_3
# 464 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 724, EvoMasters_EvoCheckForMon_3
# 465 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 727, EvoMasters_EvoCheckForMon_3
# 466 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 730, EvoMasters_EvoCheckForMon_3
# 467 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 733, EvoMasters_EvoCheckForMon_3
# 468 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 735, EvoMasters_EvoCheckForMon_3
# 469 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 738, EvoMasters_EvoCheckForMon_3
# 470 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 740, EvoMasters_EvoCheckForMon_3
# 471 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 743, EvoMasters_EvoCheckForMon_3
# 472 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 745, EvoMasters_EvoCheckForMon_3
# 473 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 748, EvoMasters_EvoCheckForMon_3
# 474 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 750, EvoMasters_EvoCheckForMon_3
# 475 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 752, EvoMasters_EvoCheckForMon_3
# 476 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 754, EvoMasters_EvoCheckForMon_3
# 477 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 756, EvoMasters_EvoCheckForMon_3
# 478 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 758, EvoMasters_EvoCheckForMon_3
# 479 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 760, EvoMasters_EvoCheckForMon_3
# 480 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 763, EvoMasters_EvoCheckForMon_3
# 481 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 768, EvoMasters_EvoCheckForMon_3
# 482 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 770, EvoMasters_EvoCheckForMon_3
# 483 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 773, EvoMasters_EvoCheckForMon_3
# 484 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 784, EvoMasters_EvoCheckForMon_3
# 485 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 804, EvoMasters_EvoCheckForMon_3
# 486 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 809, EvoMasters_EvoCheckForMon_3
# 487 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 812, EvoMasters_EvoCheckForMon_3
# 488 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 815, EvoMasters_EvoCheckForMon_3
# 489 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 818, EvoMasters_EvoCheckForMon_3
# 490 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 820, EvoMasters_EvoCheckForMon_3
# 491 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 823, EvoMasters_EvoCheckForMon_3
# 492 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 826, EvoMasters_EvoCheckForMon_3
# 493 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 828, EvoMasters_EvoCheckForMon_3
# 494 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 830, EvoMasters_EvoCheckForMon_3
# 495 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 832, EvoMasters_EvoCheckForMon_3
# 496 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 834, EvoMasters_EvoCheckForMon_3
# 497 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 836, EvoMasters_EvoCheckForMon_3
# 498 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 839, EvoMasters_EvoCheckForMon_3
# 499 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 841, EvoMasters_EvoCheckForMon_3
# 500 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 842, EvoMasters_EvoCheckForMon_3
# 501 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 844, EvoMasters_EvoCheckForMon_3
# 502 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 847, EvoMasters_EvoCheckForMon_3
# 503 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 849, EvoMasters_EvoCheckForMon_3
# 504 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 851, EvoMasters_EvoCheckForMon_3
# 505 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 853, EvoMasters_EvoCheckForMon_3
# 506 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 855, EvoMasters_EvoCheckForMon_3
# 507 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 858, EvoMasters_EvoCheckForMon_3
# 508 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 861, EvoMasters_EvoCheckForMon_3
# 509 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 862, EvoMasters_EvoCheckForMon_3
# 510 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 863, EvoMasters_EvoCheckForMon_3
# 511 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 864, EvoMasters_EvoCheckForMon_3
# 512 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 865, EvoMasters_EvoCheckForMon_3
# 513 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 866, EvoMasters_EvoCheckForMon_3
# 514 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 867, EvoMasters_EvoCheckForMon_3
# 515 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 869, EvoMasters_EvoCheckForMon_3
# 516 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 873, EvoMasters_EvoCheckForMon_3
# 517 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 879, EvoMasters_EvoCheckForMon_3
# 518 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 887, EvoMasters_EvoCheckForMon_3
# 519 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 899, EvoMasters_EvoCheckForMon_3
# 520 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 900, EvoMasters_EvoCheckForMon_3
# 521 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 901, EvoMasters_EvoCheckForMon_3
# 522 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 902, EvoMasters_EvoCheckForMon_3
# 523 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 903, EvoMasters_EvoCheckForMon_3
# 524 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 904, EvoMasters_EvoCheckForMon_3
# 525 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 957, EvoMasters_EvoCheckForMon_3
# 526 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 958, EvoMasters_EvoCheckForMon_3
# 527 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 960, EvoMasters_EvoCheckForMon_3
# 528 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 962, EvoMasters_EvoCheckForMon_3
# 529 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 964, EvoMasters_EvoCheckForMon_3
# 530 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 966, EvoMasters_EvoCheckForMon_3
# 531 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 969, EvoMasters_EvoCheckForMon_3
# 532 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 971, EvoMasters_EvoCheckForMon_3
# 533 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 972, EvoMasters_EvoCheckForMon_3
# 534 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 973, EvoMasters_EvoCheckForMon_3
# 535 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 976, EvoMasters_EvoCheckForMon_3
# 536 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 978, EvoMasters_EvoCheckForMon_3
# 537 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 979, EvoMasters_EvoCheckForMon_3
# 538 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 980, EvoMasters_EvoCheckForMon_3
# 539 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 985, EvoMasters_EvoCheckForMon_3
# 540 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 990, EvoMasters_EvoCheckForMon_3
# 541 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 992, EvoMasters_EvoCheckForMon_3
# 542 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 994, EvoMasters_EvoCheckForMon_3
# 543 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 996, EvoMasters_EvoCheckForMon_3
# 544 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1000, EvoMasters_EvoCheckForMon_3
# 545 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1001, EvoMasters_EvoCheckForMon_3
# 546 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1003, EvoMasters_EvoCheckForMon_3
# 547 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1004, EvoMasters_EvoCheckForMon_3
# 548 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1006, EvoMasters_EvoCheckForMon_3
# 549 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1007, EvoMasters_EvoCheckForMon_3
# 550 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1008, EvoMasters_EvoCheckForMon_3
# 551 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1059, EvoMasters_EvoCheckForMon_3
# 552 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1060, EvoMasters_EvoCheckForMon_3
# 553 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1063, EvoMasters_EvoCheckForMon_3
# 554 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1097, EvoMasters_EvoCheckForMon_3
# 555 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1098, EvoMasters_EvoCheckForMon_3
# 556 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1099, EvoMasters_EvoCheckForMon_3
# 557 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1114, EvoMasters_EvoCheckForMon_3
# 558 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1115, EvoMasters_EvoCheckForMon_3
# 559 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1116, EvoMasters_EvoCheckForMon_3
# 560 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1117, EvoMasters_EvoCheckForMon_3
# 561 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1118, EvoMasters_EvoCheckForMon_3
# 562 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1119, EvoMasters_EvoCheckForMon_3
# 563 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1120, EvoMasters_EvoCheckForMon_3
# 564 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1121, EvoMasters_EvoCheckForMon_3
# 565 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1122, EvoMasters_EvoCheckForMon_3
# 566 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1123, EvoMasters_EvoCheckForMon_3
# 567 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1124, EvoMasters_EvoCheckForMon_3
# 568 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1125, EvoMasters_EvoCheckForMon_3
# 569 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1126, EvoMasters_EvoCheckForMon_3
# 570 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1127, EvoMasters_EvoCheckForMon_3
# 571 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1128, EvoMasters_EvoCheckForMon_3
# 572 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1129, EvoMasters_EvoCheckForMon_3
# 573 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1130, EvoMasters_EvoCheckForMon_3
# 574 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1131, EvoMasters_EvoCheckForMon_3
# 575 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1132, EvoMasters_EvoCheckForMon_3
# 576 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1142, EvoMasters_EvoCheckForMon_3
# 577 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1143, EvoMasters_EvoCheckForMon_3
# 578 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1144, EvoMasters_EvoCheckForMon_3
# 579 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1145, EvoMasters_EvoCheckForMon_3
# 580 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1155, EvoMasters_EvoCheckForMon_3
# 581 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1160, EvoMasters_EvoCheckForMon_3
# 582 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1161, EvoMasters_EvoCheckForMon_3
# 583 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1162, EvoMasters_EvoCheckForMon_3
# 584 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1173, EvoMasters_EvoCheckForMon_3
# 585 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1174, EvoMasters_EvoCheckForMon_3
# 586 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1176, EvoMasters_EvoCheckForMon_3
# 587 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1177, EvoMasters_EvoCheckForMon_3
# 588 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1178, EvoMasters_EvoCheckForMon_3
# 589 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1179, EvoMasters_EvoCheckForMon_3
# 590 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1180, EvoMasters_EvoCheckForMon_3
# 591 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1181, EvoMasters_EvoCheckForMon_3
# 592 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1182, EvoMasters_EvoCheckForMon_3
# 593 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1183, EvoMasters_EvoCheckForMon_3
# 594 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1184, EvoMasters_EvoCheckForMon_3
# 595 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1185, EvoMasters_EvoCheckForMon_3
# 596 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1186, EvoMasters_EvoCheckForMon_3
# 597 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1187, EvoMasters_EvoCheckForMon_3
# 598 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1188, EvoMasters_EvoCheckForMon_3
# 599 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1189, EvoMasters_EvoCheckForMon_3
# 600 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1190, EvoMasters_EvoCheckForMon_3
# 601 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1191, EvoMasters_EvoCheckForMon_3
# 602 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1192, EvoMasters_EvoCheckForMon_3
# 603 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1213, EvoMasters_EvoCheckForMon_3
# 604 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1215, EvoMasters_EvoCheckForMon_3
# 605 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1216, EvoMasters_EvoCheckForMon_3
# 606 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1217, EvoMasters_EvoCheckForMon_3
# 607 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1218, EvoMasters_EvoCheckForMon_3
# 608 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1219, EvoMasters_EvoCheckForMon_3
# 609 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1220, EvoMasters_EvoCheckForMon_3
# 610 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1221, EvoMasters_EvoCheckForMon_3
# 611 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1222, EvoMasters_EvoCheckForMon_3
# 612 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1223, EvoMasters_EvoCheckForMon_3
# 613 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1225, EvoMasters_EvoCheckForMon_3
# 614 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1234, EvoMasters_EvoCheckForMon_3
# 615 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1235, EvoMasters_EvoCheckForMon_3
# 616 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1236, EvoMasters_EvoCheckForMon_3
# 617 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1237, EvoMasters_EvoCheckForMon_3
# 618 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1238, EvoMasters_EvoCheckForMon_3
# 619 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1239, EvoMasters_EvoCheckForMon_3
# 620 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1240, EvoMasters_EvoCheckForMon_3
# 621 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1241, EvoMasters_EvoCheckForMon_3
# 622 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1242, EvoMasters_EvoCheckForMon_3
# 623 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1243, EvoMasters_EvoCheckForMon_3
# 624 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1244, EvoMasters_EvoCheckForMon_3
# 625 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1245, EvoMasters_EvoCheckForMon_3
# 626 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1246, EvoMasters_EvoCheckForMon_3
# 627 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1247, EvoMasters_EvoCheckForMon_3
# 628 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1248, EvoMasters_EvoCheckForMon_3
# 629 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1249, EvoMasters_EvoCheckForMon_3
# 630 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1250, EvoMasters_EvoCheckForMon_3
# 631 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1251, EvoMasters_EvoCheckForMon_3
# 632 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1252, EvoMasters_EvoCheckForMon_3
# 633 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1253, EvoMasters_EvoCheckForMon_3
# 634 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1254, EvoMasters_EvoCheckForMon_3
# 635 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1255, EvoMasters_EvoCheckForMon_3
# 636 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1256, EvoMasters_EvoCheckForMon_3
# 637 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1257, EvoMasters_EvoCheckForMon_3
# 638 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1258, EvoMasters_EvoCheckForMon_3
# 639 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1259, EvoMasters_EvoCheckForMon_3
# 640 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1260, EvoMasters_EvoCheckForMon_3
# 641 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1261, EvoMasters_EvoCheckForMon_3
# 642 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1262, EvoMasters_EvoCheckForMon_3
# 643 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1263, EvoMasters_EvoCheckForMon_3
# 644 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1264, EvoMasters_EvoCheckForMon_3
# 645 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1265, EvoMasters_EvoCheckForMon_3
# 646 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1266, EvoMasters_EvoCheckForMon_3
# 647 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1267, EvoMasters_EvoCheckForMon_3
# 648 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1268, EvoMasters_EvoCheckForMon_3
# 649 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1269, EvoMasters_EvoCheckForMon_3
# 650 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1270, EvoMasters_EvoCheckForMon_3
# 651 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1271, EvoMasters_EvoCheckForMon_3
# 652 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1272, EvoMasters_EvoCheckForMon_3
# 653 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1273, EvoMasters_EvoCheckForMon_3
# 654 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1274, EvoMasters_EvoCheckForMon_3
# 655 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1275, EvoMasters_EvoCheckForMon_3
# 656 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1276, EvoMasters_EvoCheckForMon_3
# 657 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1277, EvoMasters_EvoCheckForMon_3
# 658 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1278, EvoMasters_EvoCheckForMon_3
# 659 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1279, EvoMasters_EvoCheckForMon_3
# 660 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1280, EvoMasters_EvoCheckForMon_3
# 661 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1281, EvoMasters_EvoCheckForMon_3
# 662 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1282, EvoMasters_EvoCheckForMon_3
# 663 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1283, EvoMasters_EvoCheckForMon_3
# 664 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1284, EvoMasters_EvoCheckForMon_3
# 665 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1285, EvoMasters_EvoCheckForMon_3
# 666 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1286, EvoMasters_EvoCheckForMon_3
# 667 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1287, EvoMasters_EvoCheckForMon_3
# 668 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1288, EvoMasters_EvoCheckForMon_3
# 669 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1291, EvoMasters_EvoCheckForMon_3
# 670 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1294, EvoMasters_EvoCheckForMon_3
# 671 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1297, EvoMasters_EvoCheckForMon_3
# 672 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1299, EvoMasters_EvoCheckForMon_3
# 673 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1300, EvoMasters_EvoCheckForMon_3
# 674 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1302, EvoMasters_EvoCheckForMon_3
# 675 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1304, EvoMasters_EvoCheckForMon_3
# 676 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1307, EvoMasters_EvoCheckForMon_3
# 677 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1309, EvoMasters_EvoCheckForMon_3
# 678 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1310, EvoMasters_EvoCheckForMon_3
# 679 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1312, EvoMasters_EvoCheckForMon_3
# 680 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1315, EvoMasters_EvoCheckForMon_3
# 681 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1322, EvoMasters_EvoCheckForMon_3
# 682 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1324, EvoMasters_EvoCheckForMon_3
# 683 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1325, EvoMasters_EvoCheckForMon_3
# 684 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1327, EvoMasters_EvoCheckForMon_3
# 685 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1329, EvoMasters_EvoCheckForMon_3
# 686 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1331, EvoMasters_EvoCheckForMon_3
# 687 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1333, EvoMasters_EvoCheckForMon_3
# 688 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1335, EvoMasters_EvoCheckForMon_3
# 689 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1337, EvoMasters_EvoCheckForMon_3
# 690 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1340, EvoMasters_EvoCheckForMon_3
# 691 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1342, EvoMasters_EvoCheckForMon_3
# 692 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1344, EvoMasters_EvoCheckForMon_3
# 693 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1347, EvoMasters_EvoCheckForMon_3
# 694 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1349, EvoMasters_EvoCheckForMon_3
# 695 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1352, EvoMasters_EvoCheckForMon_3
# 696 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1355, EvoMasters_EvoCheckForMon_3
# 697 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1359, EvoMasters_EvoCheckForMon_3
# 698 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1361, EvoMasters_EvoCheckForMon_3
# 699 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1364, EvoMasters_EvoCheckForMon_3
# 700 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1370, EvoMasters_EvoCheckForMon_3
# 701 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1371, EvoMasters_EvoCheckForMon_3
# 702 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1372, EvoMasters_EvoCheckForMon_3
# 703 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1373, EvoMasters_EvoCheckForMon_3
# 704 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1374, EvoMasters_EvoCheckForMon_3
# 705 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1375, EvoMasters_EvoCheckForMon_3
# 706 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1390, EvoMasters_EvoCheckForMon_3
# 707 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1393, EvoMasters_EvoCheckForMon_3
# 708 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1409, EvoMasters_EvoCheckForMon_3
# 709 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1410, EvoMasters_EvoCheckForMon_3
# 710 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1424, EvoMasters_EvoCheckForMon_3
# 711 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1425, EvoMasters_EvoCheckForMon_3
# 712 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1436, EvoMasters_EvoCheckForMon_3
# 713 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1437, EvoMasters_EvoCheckForMon_3
# 715 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 115, EvoMasters_EvoCheckForMon_4
# 716 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 127, EvoMasters_EvoCheckForMon_4
# 717 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 128, EvoMasters_EvoCheckForMon_4
# 718 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 131, EvoMasters_EvoCheckForMon_4
# 719 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 132, EvoMasters_EvoCheckForMon_4
# 720 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 142, EvoMasters_EvoCheckForMon_4
# 721 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 201, EvoMasters_EvoCheckForMon_4
# 722 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 211, EvoMasters_EvoCheckForMon_4
# 723 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 213, EvoMasters_EvoCheckForMon_4
# 724 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 214, EvoMasters_EvoCheckForMon_4
# 725 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 222, EvoMasters_EvoCheckForMon_4
# 726 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 225, EvoMasters_EvoCheckForMon_4
# 727 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 227, EvoMasters_EvoCheckForMon_4
# 728 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 235, EvoMasters_EvoCheckForMon_4
# 729 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 241, EvoMasters_EvoCheckForMon_4
# 730 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 302, EvoMasters_EvoCheckForMon_4
# 731 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 303, EvoMasters_EvoCheckForMon_4
# 732 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 311, EvoMasters_EvoCheckForMon_4
# 733 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 312, EvoMasters_EvoCheckForMon_4
# 734 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 313, EvoMasters_EvoCheckForMon_4
# 735 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 314, EvoMasters_EvoCheckForMon_4
# 736 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 324, EvoMasters_EvoCheckForMon_4
# 737 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 327, EvoMasters_EvoCheckForMon_4
# 738 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 335, EvoMasters_EvoCheckForMon_4
# 739 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 336, EvoMasters_EvoCheckForMon_4
# 740 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 337, EvoMasters_EvoCheckForMon_4
# 741 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 338, EvoMasters_EvoCheckForMon_4
# 742 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 351, EvoMasters_EvoCheckForMon_4
# 743 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 352, EvoMasters_EvoCheckForMon_4
# 744 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 357, EvoMasters_EvoCheckForMon_4
# 745 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 359, EvoMasters_EvoCheckForMon_4
# 746 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 369, EvoMasters_EvoCheckForMon_4
# 747 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 370, EvoMasters_EvoCheckForMon_4
# 748 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 417, EvoMasters_EvoCheckForMon_4
# 749 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 441, EvoMasters_EvoCheckForMon_4
# 750 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 442, EvoMasters_EvoCheckForMon_4
# 751 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 455, EvoMasters_EvoCheckForMon_4
# 752 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 531, EvoMasters_EvoCheckForMon_4
# 753 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 538, EvoMasters_EvoCheckForMon_4
# 754 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 539, EvoMasters_EvoCheckForMon_4
# 755 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 550, EvoMasters_EvoCheckForMon_4
# 756 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 556, EvoMasters_EvoCheckForMon_4
# 757 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 561, EvoMasters_EvoCheckForMon_4
# 758 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 587, EvoMasters_EvoCheckForMon_4
# 759 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 594, EvoMasters_EvoCheckForMon_4
# 760 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 615, EvoMasters_EvoCheckForMon_4
# 761 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 618, EvoMasters_EvoCheckForMon_4
# 762 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 621, EvoMasters_EvoCheckForMon_4
# 763 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 626, EvoMasters_EvoCheckForMon_4
# 764 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 631, EvoMasters_EvoCheckForMon_4
# 765 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 632, EvoMasters_EvoCheckForMon_4
# 766 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 676, EvoMasters_EvoCheckForMon_4
# 767 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 701, EvoMasters_EvoCheckForMon_4
# 768 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 702, EvoMasters_EvoCheckForMon_4
# 769 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 703, EvoMasters_EvoCheckForMon_4
# 770 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 707, EvoMasters_EvoCheckForMon_4
# 771 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 741, EvoMasters_EvoCheckForMon_4
# 772 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 746, EvoMasters_EvoCheckForMon_4
# 773 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 764, EvoMasters_EvoCheckForMon_4
# 774 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 765, EvoMasters_EvoCheckForMon_4
# 775 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 766, EvoMasters_EvoCheckForMon_4
# 776 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 771, EvoMasters_EvoCheckForMon_4
# 777 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 774, EvoMasters_EvoCheckForMon_4
# 778 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 775, EvoMasters_EvoCheckForMon_4
# 779 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 776, EvoMasters_EvoCheckForMon_4
# 780 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 777, EvoMasters_EvoCheckForMon_4
# 781 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 778, EvoMasters_EvoCheckForMon_4
# 782 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 779, EvoMasters_EvoCheckForMon_4
# 783 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 780, EvoMasters_EvoCheckForMon_4
# 784 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 781, EvoMasters_EvoCheckForMon_4
# 785 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 845, EvoMasters_EvoCheckForMon_4
# 786 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 870, EvoMasters_EvoCheckForMon_4
# 787 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 871, EvoMasters_EvoCheckForMon_4
# 788 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 874, EvoMasters_EvoCheckForMon_4
# 789 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 875, EvoMasters_EvoCheckForMon_4
# 790 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 876, EvoMasters_EvoCheckForMon_4
# 791 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 877, EvoMasters_EvoCheckForMon_4
# 792 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 880, EvoMasters_EvoCheckForMon_4
# 793 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 881, EvoMasters_EvoCheckForMon_4
# 794 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 882, EvoMasters_EvoCheckForMon_4
# 795 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 883, EvoMasters_EvoCheckForMon_4
# 796 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1024, EvoMasters_EvoCheckForMon_4
# 797 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1025, EvoMasters_EvoCheckForMon_4
# 798 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1026, EvoMasters_EvoCheckForMon_4
# 799 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1027, EvoMasters_EvoCheckForMon_4
# 800 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1028, EvoMasters_EvoCheckForMon_4
# 801 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1029, EvoMasters_EvoCheckForMon_4
# 802 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1030, EvoMasters_EvoCheckForMon_4
# 803 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1031, EvoMasters_EvoCheckForMon_4
# 804 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1032, EvoMasters_EvoCheckForMon_4
# 805 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1033, EvoMasters_EvoCheckForMon_4
# 806 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1034, EvoMasters_EvoCheckForMon_4
# 807 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1035, EvoMasters_EvoCheckForMon_4
# 808 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1036, EvoMasters_EvoCheckForMon_4
# 809 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1037, EvoMasters_EvoCheckForMon_4
# 810 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1038, EvoMasters_EvoCheckForMon_4
# 811 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1039, EvoMasters_EvoCheckForMon_4
# 812 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1040, EvoMasters_EvoCheckForMon_4
# 813 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1041, EvoMasters_EvoCheckForMon_4
# 814 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1042, EvoMasters_EvoCheckForMon_4
# 815 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1043, EvoMasters_EvoCheckForMon_4
# 816 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1044, EvoMasters_EvoCheckForMon_4
# 817 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1045, EvoMasters_EvoCheckForMon_4
# 818 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1046, EvoMasters_EvoCheckForMon_4
# 819 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1047, EvoMasters_EvoCheckForMon_4
# 820 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1048, EvoMasters_EvoCheckForMon_4
# 821 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1049, EvoMasters_EvoCheckForMon_4
# 822 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1050, EvoMasters_EvoCheckForMon_4
# 823 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1064, EvoMasters_EvoCheckForMon_4
# 824 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1065, EvoMasters_EvoCheckForMon_4
# 825 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1066, EvoMasters_EvoCheckForMon_4
# 826 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1067, EvoMasters_EvoCheckForMon_4
# 827 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1068, EvoMasters_EvoCheckForMon_4
# 828 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1090, EvoMasters_EvoCheckForMon_4
# 829 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1146, EvoMasters_EvoCheckForMon_4
# 830 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1147, EvoMasters_EvoCheckForMon_4
# 831 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1148, EvoMasters_EvoCheckForMon_4
# 832 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1149, EvoMasters_EvoCheckForMon_4
# 833 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1150, EvoMasters_EvoCheckForMon_4
# 834 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1151, EvoMasters_EvoCheckForMon_4
# 835 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1153, EvoMasters_EvoCheckForMon_4
# 836 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1154, EvoMasters_EvoCheckForMon_4
# 837 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1169, EvoMasters_EvoCheckForMon_4
# 838 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1170, EvoMasters_EvoCheckForMon_4
# 839 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1171, EvoMasters_EvoCheckForMon_4
# 840 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1193, EvoMasters_EvoCheckForMon_4
# 841 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1194, EvoMasters_EvoCheckForMon_4
# 842 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1195, EvoMasters_EvoCheckForMon_4
# 843 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1196, EvoMasters_EvoCheckForMon_4
# 844 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1197, EvoMasters_EvoCheckForMon_4
# 845 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1198, EvoMasters_EvoCheckForMon_4
# 846 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1316, EvoMasters_EvoCheckForMon_4
# 847 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1317, EvoMasters_EvoCheckForMon_4
# 848 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1318, EvoMasters_EvoCheckForMon_4
# 849 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1319, EvoMasters_EvoCheckForMon_4
# 850 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1338, EvoMasters_EvoCheckForMon_4
# 851 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1350, EvoMasters_EvoCheckForMon_4
# 852 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1356, EvoMasters_EvoCheckForMon_4
# 853 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1357, EvoMasters_EvoCheckForMon_4
# 854 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1362, EvoMasters_EvoCheckForMon_4
# 855 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1365, EvoMasters_EvoCheckForMon_4
# 856 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1366, EvoMasters_EvoCheckForMon_4
# 857 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1367, EvoMasters_EvoCheckForMon_4
# 858 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1368, EvoMasters_EvoCheckForMon_4
# 859 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1369, EvoMasters_EvoCheckForMon_4
# 860 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1402, EvoMasters_EvoCheckForMon_4
# 861 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1403, EvoMasters_EvoCheckForMon_4
# 862 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1404, EvoMasters_EvoCheckForMon_4
# 864 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 793, EvoMasters_EvoCheckForMon_5
# 865 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 794, EvoMasters_EvoCheckForMon_5
# 866 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 795, EvoMasters_EvoCheckForMon_5
# 867 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 796, EvoMasters_EvoCheckForMon_5
# 868 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 797, EvoMasters_EvoCheckForMon_5
# 869 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 798, EvoMasters_EvoCheckForMon_5
# 870 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 799, EvoMasters_EvoCheckForMon_5
# 871 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 803, EvoMasters_EvoCheckForMon_5
# 872 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 805, EvoMasters_EvoCheckForMon_5
# 873 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 806, EvoMasters_EvoCheckForMon_5
# 875 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 144, EvoMasters_EvoCheckForMon_6
# 876 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 145, EvoMasters_EvoCheckForMon_6
# 877 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 146, EvoMasters_EvoCheckForMon_6
# 878 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 150, EvoMasters_EvoCheckForMon_6
# 879 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 243, EvoMasters_EvoCheckForMon_6
# 880 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 244, EvoMasters_EvoCheckForMon_6
# 881 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 245, EvoMasters_EvoCheckForMon_6
# 882 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 249, EvoMasters_EvoCheckForMon_6
# 883 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 250, EvoMasters_EvoCheckForMon_6
# 884 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 377, EvoMasters_EvoCheckForMon_6
# 885 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 378, EvoMasters_EvoCheckForMon_6
# 886 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 379, EvoMasters_EvoCheckForMon_6
# 887 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 380, EvoMasters_EvoCheckForMon_6
# 888 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 381, EvoMasters_EvoCheckForMon_6
# 889 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 382, EvoMasters_EvoCheckForMon_6
# 890 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 383, EvoMasters_EvoCheckForMon_6
# 891 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 384, EvoMasters_EvoCheckForMon_6
# 892 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 480, EvoMasters_EvoCheckForMon_6
# 893 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 481, EvoMasters_EvoCheckForMon_6
# 894 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 482, EvoMasters_EvoCheckForMon_6
# 895 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 483, EvoMasters_EvoCheckForMon_6
# 896 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 484, EvoMasters_EvoCheckForMon_6
# 897 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 485, EvoMasters_EvoCheckForMon_6
# 898 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 486, EvoMasters_EvoCheckForMon_6
# 899 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 487, EvoMasters_EvoCheckForMon_6
# 900 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 488, EvoMasters_EvoCheckForMon_6
# 901 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 638, EvoMasters_EvoCheckForMon_6
# 902 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 639, EvoMasters_EvoCheckForMon_6
# 903 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 640, EvoMasters_EvoCheckForMon_6
# 904 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 641, EvoMasters_EvoCheckForMon_6
# 905 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 642, EvoMasters_EvoCheckForMon_6
# 906 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 643, EvoMasters_EvoCheckForMon_6
# 907 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 644, EvoMasters_EvoCheckForMon_6
# 908 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 645, EvoMasters_EvoCheckForMon_6
# 909 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 646, EvoMasters_EvoCheckForMon_6
# 910 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 716, EvoMasters_EvoCheckForMon_6
# 911 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 717, EvoMasters_EvoCheckForMon_6
# 912 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 718, EvoMasters_EvoCheckForMon_6
# 913 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 785, EvoMasters_EvoCheckForMon_6
# 914 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 786, EvoMasters_EvoCheckForMon_6
# 915 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 787, EvoMasters_EvoCheckForMon_6
# 916 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 788, EvoMasters_EvoCheckForMon_6
# 917 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 791, EvoMasters_EvoCheckForMon_6
# 918 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 792, EvoMasters_EvoCheckForMon_6
# 919 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 800, EvoMasters_EvoCheckForMon_6
# 920 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 888, EvoMasters_EvoCheckForMon_6
# 921 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 889, EvoMasters_EvoCheckForMon_6
# 922 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 890, EvoMasters_EvoCheckForMon_6
# 923 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 894, EvoMasters_EvoCheckForMon_6
# 924 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 895, EvoMasters_EvoCheckForMon_6
# 925 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 892, EvoMasters_EvoCheckForMon_6
# 926 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 905, EvoMasters_EvoCheckForMon_6
# 927 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 982, EvoMasters_EvoCheckForMon_6
# 928 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 983, EvoMasters_EvoCheckForMon_6
# 929 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 984, EvoMasters_EvoCheckForMon_6
# 930 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1054, EvoMasters_EvoCheckForMon_6
# 931 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1055, EvoMasters_EvoCheckForMon_6
# 932 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1056, EvoMasters_EvoCheckForMon_6
# 933 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1069, EvoMasters_EvoCheckForMon_6
# 934 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1070, EvoMasters_EvoCheckForMon_6
# 935 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1071, EvoMasters_EvoCheckForMon_6
# 936 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1072, EvoMasters_EvoCheckForMon_6
# 937 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1100, EvoMasters_EvoCheckForMon_6
# 938 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1101, EvoMasters_EvoCheckForMon_6
# 939 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1102, EvoMasters_EvoCheckForMon_6
# 940 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1103, EvoMasters_EvoCheckForMon_6
# 941 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1104, EvoMasters_EvoCheckForMon_6
# 942 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1105, EvoMasters_EvoCheckForMon_6
# 943 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1164, EvoMasters_EvoCheckForMon_6
# 944 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1165, EvoMasters_EvoCheckForMon_6
# 945 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1166, EvoMasters_EvoCheckForMon_6
# 946 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1167, EvoMasters_EvoCheckForMon_6
# 947 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1207, EvoMasters_EvoCheckForMon_6
# 948 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1208, EvoMasters_EvoCheckForMon_6
# 949 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1227, EvoMasters_EvoCheckForMon_6
# 950 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1228, EvoMasters_EvoCheckForMon_6
# 951 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1232, EvoMasters_EvoCheckForMon_6
# 952 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1233, EvoMasters_EvoCheckForMon_6
# 953 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1394, EvoMasters_EvoCheckForMon_6
# 954 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1395, EvoMasters_EvoCheckForMon_6
# 955 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1396, EvoMasters_EvoCheckForMon_6
# 956 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1397, EvoMasters_EvoCheckForMon_6
# 957 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1400, EvoMasters_EvoCheckForMon_6
# 958 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1401, EvoMasters_EvoCheckForMon_6
# 959 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1413, EvoMasters_EvoCheckForMon_6
# 960 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1414, EvoMasters_EvoCheckForMon_6
# 961 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1415, EvoMasters_EvoCheckForMon_6
# 962 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1416, EvoMasters_EvoCheckForMon_6
# 963 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1417, EvoMasters_EvoCheckForMon_6
# 964 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1418, EvoMasters_EvoCheckForMon_6
# 965 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1419, EvoMasters_EvoCheckForMon_6
# 966 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1431, EvoMasters_EvoCheckForMon_6
# 967 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1432, EvoMasters_EvoCheckForMon_6
# 968 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1434, EvoMasters_EvoCheckForMon_6
# 970 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 151, EvoMasters_EvoCheckForMon_7
# 971 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 251, EvoMasters_EvoCheckForMon_7
# 972 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 385, EvoMasters_EvoCheckForMon_7
# 973 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 386, EvoMasters_EvoCheckForMon_7
# 974 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 491, EvoMasters_EvoCheckForMon_7
# 975 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 492, EvoMasters_EvoCheckForMon_7
# 976 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 494, EvoMasters_EvoCheckForMon_7
# 977 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 647, EvoMasters_EvoCheckForMon_7
# 978 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 648, EvoMasters_EvoCheckForMon_7
# 979 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 649, EvoMasters_EvoCheckForMon_7
# 980 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 719, EvoMasters_EvoCheckForMon_7
# 981 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 720, EvoMasters_EvoCheckForMon_7
# 982 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 721, EvoMasters_EvoCheckForMon_7
# 983 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 801, EvoMasters_EvoCheckForMon_7
# 984 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 802, EvoMasters_EvoCheckForMon_7
# 985 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 807, EvoMasters_EvoCheckForMon_7
# 986 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 893, EvoMasters_EvoCheckForMon_7
# 987 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1106, EvoMasters_EvoCheckForMon_7
# 988 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1108, EvoMasters_EvoCheckForMon_7
# 989 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1109, EvoMasters_EvoCheckForMon_7
# 990 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1110, EvoMasters_EvoCheckForMon_7
# 991 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1111, EvoMasters_EvoCheckForMon_7
# 992 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1210, EvoMasters_EvoCheckForMon_7
# 993 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1231, EvoMasters_EvoCheckForMon_7
# 995 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1, EvoMasters_EvoCheckForMon_8
# 997 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 2, EvoMasters_EvoCheckForMon_9
# 999 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 4, EvoMasters_EvoCheckForMon_10
# 1001 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 5, EvoMasters_EvoCheckForMon_11
# 1003 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 7, EvoMasters_EvoCheckForMon_12
# 1005 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 8, EvoMasters_EvoCheckForMon_13
# 1007 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 10, EvoMasters_EvoCheckForMon_14
# 1009 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 11, EvoMasters_EvoCheckForMon_15
# 1011 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 13, EvoMasters_EvoCheckForMon_16
# 1013 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 14, EvoMasters_EvoCheckForMon_17
# 1015 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 16, EvoMasters_EvoCheckForMon_18
# 1017 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 17, EvoMasters_EvoCheckForMon_19
# 1019 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 19, EvoMasters_EvoCheckForMon_20
# 1021 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 21, EvoMasters_EvoCheckForMon_21
# 1023 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 23, EvoMasters_EvoCheckForMon_22
# 1025 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 25, EvoMasters_EvoCheckForMon_23
# 1027 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 27, EvoMasters_EvoCheckForMon_24
# 1029 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 29, EvoMasters_EvoCheckForMon_25
# 1030 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 32, EvoMasters_EvoCheckForMon_25
# 1032 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 30, EvoMasters_EvoCheckForMon_26
# 1034 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 33, EvoMasters_EvoCheckForMon_27
# 1036 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 35, EvoMasters_EvoCheckForMon_28
# 1038 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 37, EvoMasters_EvoCheckForMon_29
# 1040 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 39, EvoMasters_EvoCheckForMon_30
# 1042 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 41, EvoMasters_EvoCheckForMon_31
# 1044 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 42, EvoMasters_EvoCheckForMon_32
# 1046 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 43, EvoMasters_EvoCheckForMon_33
# 1048 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 44, EvoMasters_EvoCheckForMon_34
# 1050 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 46, EvoMasters_EvoCheckForMon_35
# 1052 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 48, EvoMasters_EvoCheckForMon_36
# 1054 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 50, EvoMasters_EvoCheckForMon_37
# 1055 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 963, EvoMasters_EvoCheckForMon_37
# 1057 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 52, EvoMasters_EvoCheckForMon_38
# 1058 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 974, EvoMasters_EvoCheckForMon_38
# 1060 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 54, EvoMasters_EvoCheckForMon_39
# 1062 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 56, EvoMasters_EvoCheckForMon_40
# 1064 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 57, EvoMasters_EvoCheckForMon_41
# 1066 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 58, EvoMasters_EvoCheckForMon_42
# 1067 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 993, EvoMasters_EvoCheckForMon_42
# 1069 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 60, EvoMasters_EvoCheckForMon_43
# 1071 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 61, EvoMasters_EvoCheckForMon_44
# 1073 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 63, EvoMasters_EvoCheckForMon_45
# 1075 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 64, EvoMasters_EvoCheckForMon_46
# 1077 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 66, EvoMasters_EvoCheckForMon_47
# 1079 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 67, EvoMasters_EvoCheckForMon_48
# 1081 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 69, EvoMasters_EvoCheckForMon_49
# 1083 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 70, EvoMasters_EvoCheckForMon_50
# 1085 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 72, EvoMasters_EvoCheckForMon_51
# 1087 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 74, EvoMasters_EvoCheckForMon_52
# 1088 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 967, EvoMasters_EvoCheckForMon_52
# 1090 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 75, EvoMasters_EvoCheckForMon_53
# 1091 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 968, EvoMasters_EvoCheckForMon_53
# 1093 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 77, EvoMasters_EvoCheckForMon_54
# 1094 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 975, EvoMasters_EvoCheckForMon_54
# 1096 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 79, EvoMasters_EvoCheckForMon_55
# 1098 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 81, EvoMasters_EvoCheckForMon_56
# 1100 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 82, EvoMasters_EvoCheckForMon_57
# 1102 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 83, EvoMasters_EvoCheckForMon_58
# 1104 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 84, EvoMasters_EvoCheckForMon_59
# 1106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 86, EvoMasters_EvoCheckForMon_60
# 1108 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 88, EvoMasters_EvoCheckForMon_61
# 1109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 970, EvoMasters_EvoCheckForMon_61
# 1111 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 90, EvoMasters_EvoCheckForMon_62
# 1113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 92, EvoMasters_EvoCheckForMon_63
# 1115 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 93, EvoMasters_EvoCheckForMon_64
# 1117 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 95, EvoMasters_EvoCheckForMon_65
# 1119 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 96, EvoMasters_EvoCheckForMon_66
# 1121 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 98, EvoMasters_EvoCheckForMon_67
# 1123 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 100, EvoMasters_EvoCheckForMon_68
# 1125 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 102, EvoMasters_EvoCheckForMon_69
# 1127 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 104, EvoMasters_EvoCheckForMon_70
# 1129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 108, EvoMasters_EvoCheckForMon_71
# 1131 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 109, EvoMasters_EvoCheckForMon_72
# 1133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 111, EvoMasters_EvoCheckForMon_73
# 1135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 112, EvoMasters_EvoCheckForMon_74
# 1137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 113, EvoMasters_EvoCheckForMon_75
# 1139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 114, EvoMasters_EvoCheckForMon_76
# 1141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 116, EvoMasters_EvoCheckForMon_77
# 1143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 117, EvoMasters_EvoCheckForMon_78
# 1145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 118, EvoMasters_EvoCheckForMon_79
# 1147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 120, EvoMasters_EvoCheckForMon_80
# 1149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 123, EvoMasters_EvoCheckForMon_81
# 1151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 125, EvoMasters_EvoCheckForMon_82
# 1153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 126, EvoMasters_EvoCheckForMon_83
# 1155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 129, EvoMasters_EvoCheckForMon_84
# 1157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 133, EvoMasters_EvoCheckForMon_85
# 1159 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 137, EvoMasters_EvoCheckForMon_86
# 1161 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 138, EvoMasters_EvoCheckForMon_87
# 1163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 140, EvoMasters_EvoCheckForMon_88
# 1165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 147, EvoMasters_EvoCheckForMon_89
# 1167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 148, EvoMasters_EvoCheckForMon_90
# 1169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 152, EvoMasters_EvoCheckForMon_91
# 1171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 153, EvoMasters_EvoCheckForMon_92
# 1173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 155, EvoMasters_EvoCheckForMon_93
# 1175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 156, EvoMasters_EvoCheckForMon_94
# 1177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 158, EvoMasters_EvoCheckForMon_95
# 1179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 159, EvoMasters_EvoCheckForMon_96
# 1181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 161, EvoMasters_EvoCheckForMon_97
# 1183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 163, EvoMasters_EvoCheckForMon_98
# 1185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 165, EvoMasters_EvoCheckForMon_99
# 1187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 167, EvoMasters_EvoCheckForMon_100
# 1189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 170, EvoMasters_EvoCheckForMon_101
# 1191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 172, EvoMasters_EvoCheckForMon_102
# 1193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 173, EvoMasters_EvoCheckForMon_103
# 1195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 174, EvoMasters_EvoCheckForMon_104
# 1197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 175, EvoMasters_EvoCheckForMon_105
# 1199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 176, EvoMasters_EvoCheckForMon_106
# 1201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 177, EvoMasters_EvoCheckForMon_107
# 1203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 179, EvoMasters_EvoCheckForMon_108
# 1205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 180, EvoMasters_EvoCheckForMon_109
# 1207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 183, EvoMasters_EvoCheckForMon_110
# 1209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 187, EvoMasters_EvoCheckForMon_111
# 1211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 188, EvoMasters_EvoCheckForMon_112
# 1213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 190, EvoMasters_EvoCheckForMon_113
# 1215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 191, EvoMasters_EvoCheckForMon_114
# 1217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 193, EvoMasters_EvoCheckForMon_115
# 1219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 194, EvoMasters_EvoCheckForMon_116
# 1220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1405, EvoMasters_EvoCheckForMon_116
# 1222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 198, EvoMasters_EvoCheckForMon_117
# 1224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 200, EvoMasters_EvoCheckForMon_118
# 1226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 203, EvoMasters_EvoCheckForMon_119
# 1228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 204, EvoMasters_EvoCheckForMon_120
# 1230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 206, EvoMasters_EvoCheckForMon_121
# 1232 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 207, EvoMasters_EvoCheckForMon_122
# 1234 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 209, EvoMasters_EvoCheckForMon_123
# 1236 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 215, EvoMasters_EvoCheckForMon_124
# 1238 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 216, EvoMasters_EvoCheckForMon_125
# 1240 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 217, EvoMasters_EvoCheckForMon_126
# 1242 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 218, EvoMasters_EvoCheckForMon_127
# 1244 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 220, EvoMasters_EvoCheckForMon_128
# 1246 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 221, EvoMasters_EvoCheckForMon_129
# 1248 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 223, EvoMasters_EvoCheckForMon_130
# 1250 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 228, EvoMasters_EvoCheckForMon_131
# 1252 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 231, EvoMasters_EvoCheckForMon_132
# 1254 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 233, EvoMasters_EvoCheckForMon_133
# 1256 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 234, EvoMasters_EvoCheckForMon_134
# 1258 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 236, EvoMasters_EvoCheckForMon_135
# 1260 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 238, EvoMasters_EvoCheckForMon_136
# 1262 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 239, EvoMasters_EvoCheckForMon_137
# 1264 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 240, EvoMasters_EvoCheckForMon_138
# 1266 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 246, EvoMasters_EvoCheckForMon_139
# 1268 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 247, EvoMasters_EvoCheckForMon_140
# 1270 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 252, EvoMasters_EvoCheckForMon_141
# 1272 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 253, EvoMasters_EvoCheckForMon_142
# 1274 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 255, EvoMasters_EvoCheckForMon_143
# 1276 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 256, EvoMasters_EvoCheckForMon_144
# 1278 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 258, EvoMasters_EvoCheckForMon_145
# 1280 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 259, EvoMasters_EvoCheckForMon_146
# 1282 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 261, EvoMasters_EvoCheckForMon_147
# 1284 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 263, EvoMasters_EvoCheckForMon_148
# 1285 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 987, EvoMasters_EvoCheckForMon_148
# 1287 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 265, EvoMasters_EvoCheckForMon_149
# 1289 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 266, EvoMasters_EvoCheckForMon_150
# 1291 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 268, EvoMasters_EvoCheckForMon_151
# 1293 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 270, EvoMasters_EvoCheckForMon_152
# 1295 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 271, EvoMasters_EvoCheckForMon_153
# 1297 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 273, EvoMasters_EvoCheckForMon_154
# 1299 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 274, EvoMasters_EvoCheckForMon_155
# 1301 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 276, EvoMasters_EvoCheckForMon_156
# 1303 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 278, EvoMasters_EvoCheckForMon_157
# 1305 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 280, EvoMasters_EvoCheckForMon_158
# 1307 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 281, EvoMasters_EvoCheckForMon_159
# 1309 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 283, EvoMasters_EvoCheckForMon_160
# 1311 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 285, EvoMasters_EvoCheckForMon_161
# 1313 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 287, EvoMasters_EvoCheckForMon_162
# 1315 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 288, EvoMasters_EvoCheckForMon_163
# 1317 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 290, EvoMasters_EvoCheckForMon_164
# 1319 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 293, EvoMasters_EvoCheckForMon_165
# 1321 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 294, EvoMasters_EvoCheckForMon_166
# 1323 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 296, EvoMasters_EvoCheckForMon_167
# 1325 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 298, EvoMasters_EvoCheckForMon_168
# 1327 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 299, EvoMasters_EvoCheckForMon_169
# 1329 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 300, EvoMasters_EvoCheckForMon_170
# 1331 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 304, EvoMasters_EvoCheckForMon_171
# 1333 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 305, EvoMasters_EvoCheckForMon_172
# 1335 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 307, EvoMasters_EvoCheckForMon_173
# 1337 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 309, EvoMasters_EvoCheckForMon_174
# 1339 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 315, EvoMasters_EvoCheckForMon_175
# 1341 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 316, EvoMasters_EvoCheckForMon_176
# 1343 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 318, EvoMasters_EvoCheckForMon_177
# 1345 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 320, EvoMasters_EvoCheckForMon_178
# 1347 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 322, EvoMasters_EvoCheckForMon_179
# 1349 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 325, EvoMasters_EvoCheckForMon_180
# 1351 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 328, EvoMasters_EvoCheckForMon_181
# 1353 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 329, EvoMasters_EvoCheckForMon_182
# 1355 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 331, EvoMasters_EvoCheckForMon_183
# 1357 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 333, EvoMasters_EvoCheckForMon_184
# 1359 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 339, EvoMasters_EvoCheckForMon_185
# 1361 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 341, EvoMasters_EvoCheckForMon_186
# 1363 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 343, EvoMasters_EvoCheckForMon_187
# 1365 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 345, EvoMasters_EvoCheckForMon_188
# 1367 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 347, EvoMasters_EvoCheckForMon_189
# 1369 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 349, EvoMasters_EvoCheckForMon_190
# 1371 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 353, EvoMasters_EvoCheckForMon_191
# 1373 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 355, EvoMasters_EvoCheckForMon_192
# 1375 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 356, EvoMasters_EvoCheckForMon_193
# 1377 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 360, EvoMasters_EvoCheckForMon_194
# 1379 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 361, EvoMasters_EvoCheckForMon_195
# 1381 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 363, EvoMasters_EvoCheckForMon_196
# 1383 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 364, EvoMasters_EvoCheckForMon_197
# 1385 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 366, EvoMasters_EvoCheckForMon_198
# 1387 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 371, EvoMasters_EvoCheckForMon_199
# 1389 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 372, EvoMasters_EvoCheckForMon_200
# 1391 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 374, EvoMasters_EvoCheckForMon_201
# 1393 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 375, EvoMasters_EvoCheckForMon_202
# 1395 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 387, EvoMasters_EvoCheckForMon_203
# 1397 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 388, EvoMasters_EvoCheckForMon_204
# 1399 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 390, EvoMasters_EvoCheckForMon_205
# 1401 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 391, EvoMasters_EvoCheckForMon_206
# 1403 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 393, EvoMasters_EvoCheckForMon_207
# 1405 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 394, EvoMasters_EvoCheckForMon_208
# 1407 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 396, EvoMasters_EvoCheckForMon_209
# 1409 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 397, EvoMasters_EvoCheckForMon_210
# 1411 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 399, EvoMasters_EvoCheckForMon_211
# 1413 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 401, EvoMasters_EvoCheckForMon_212
# 1415 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 403, EvoMasters_EvoCheckForMon_213
# 1417 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 404, EvoMasters_EvoCheckForMon_214
# 1419 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 406, EvoMasters_EvoCheckForMon_215
# 1421 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 408, EvoMasters_EvoCheckForMon_216
# 1423 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 410, EvoMasters_EvoCheckForMon_217
# 1425 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 412, EvoMasters_EvoCheckForMon_218
# 1426 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1057, EvoMasters_EvoCheckForMon_218
# 1427 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1058, EvoMasters_EvoCheckForMon_218
# 1429 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 415, EvoMasters_EvoCheckForMon_219
# 1431 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 418, EvoMasters_EvoCheckForMon_220
# 1433 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 420, EvoMasters_EvoCheckForMon_221
# 1435 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 422, EvoMasters_EvoCheckForMon_222
# 1436 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1062, EvoMasters_EvoCheckForMon_222
# 1438 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 425, EvoMasters_EvoCheckForMon_223
# 1440 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 427, EvoMasters_EvoCheckForMon_224
# 1442 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 431, EvoMasters_EvoCheckForMon_225
# 1444 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 433, EvoMasters_EvoCheckForMon_226
# 1446 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 434, EvoMasters_EvoCheckForMon_227
# 1448 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 436, EvoMasters_EvoCheckForMon_228
# 1450 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 438, EvoMasters_EvoCheckForMon_229
# 1452 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 439, EvoMasters_EvoCheckForMon_230
# 1454 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 440, EvoMasters_EvoCheckForMon_231
# 1456 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 443, EvoMasters_EvoCheckForMon_232
# 1458 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 444, EvoMasters_EvoCheckForMon_233
# 1460 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 446, EvoMasters_EvoCheckForMon_234
# 1462 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 447, EvoMasters_EvoCheckForMon_235
# 1464 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 449, EvoMasters_EvoCheckForMon_236
# 1466 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 451, EvoMasters_EvoCheckForMon_237
# 1468 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 453, EvoMasters_EvoCheckForMon_238
# 1470 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 456, EvoMasters_EvoCheckForMon_239
# 1472 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 458, EvoMasters_EvoCheckForMon_240
# 1474 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 459, EvoMasters_EvoCheckForMon_241
# 1476 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 479, EvoMasters_EvoCheckForMon_242
# 1478 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 489, EvoMasters_EvoCheckForMon_243
# 1480 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 490, EvoMasters_EvoCheckForMon_244
# 1482 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 493, EvoMasters_EvoCheckForMon_245
# 1483 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1073, EvoMasters_EvoCheckForMon_245
# 1484 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1074, EvoMasters_EvoCheckForMon_245
# 1485 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1075, EvoMasters_EvoCheckForMon_245
# 1486 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1076, EvoMasters_EvoCheckForMon_245
# 1487 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1077, EvoMasters_EvoCheckForMon_245
# 1488 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1078, EvoMasters_EvoCheckForMon_245
# 1489 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1079, EvoMasters_EvoCheckForMon_245
# 1490 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1080, EvoMasters_EvoCheckForMon_245
# 1491 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1081, EvoMasters_EvoCheckForMon_245
# 1492 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1082, EvoMasters_EvoCheckForMon_245
# 1493 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1083, EvoMasters_EvoCheckForMon_245
# 1494 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1084, EvoMasters_EvoCheckForMon_245
# 1495 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1085, EvoMasters_EvoCheckForMon_245
# 1496 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1086, EvoMasters_EvoCheckForMon_245
# 1497 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1087, EvoMasters_EvoCheckForMon_245
# 1498 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1088, EvoMasters_EvoCheckForMon_245
# 1499 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1089, EvoMasters_EvoCheckForMon_245
# 1501 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 495, EvoMasters_EvoCheckForMon_246
# 1503 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 496, EvoMasters_EvoCheckForMon_247
# 1505 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 498, EvoMasters_EvoCheckForMon_248
# 1507 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 499, EvoMasters_EvoCheckForMon_249
# 1509 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 501, EvoMasters_EvoCheckForMon_250
# 1511 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 502, EvoMasters_EvoCheckForMon_251
# 1513 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 504, EvoMasters_EvoCheckForMon_252
# 1515 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 506, EvoMasters_EvoCheckForMon_253
# 1517 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 507, EvoMasters_EvoCheckForMon_254
# 1519 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 509, EvoMasters_EvoCheckForMon_255
# 1521 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 511, EvoMasters_EvoCheckForMon_256
# 1523 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 513, EvoMasters_EvoCheckForMon_257
# 1525 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 515, EvoMasters_EvoCheckForMon_258
# 1527 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 517, EvoMasters_EvoCheckForMon_259
# 1529 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 519, EvoMasters_EvoCheckForMon_260
# 1531 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 520, EvoMasters_EvoCheckForMon_261
# 1533 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 522, EvoMasters_EvoCheckForMon_262
# 1535 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 524, EvoMasters_EvoCheckForMon_263
# 1537 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 525, EvoMasters_EvoCheckForMon_264
# 1539 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 527, EvoMasters_EvoCheckForMon_265
# 1541 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 529, EvoMasters_EvoCheckForMon_266
# 1543 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 532, EvoMasters_EvoCheckForMon_267
# 1545 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 533, EvoMasters_EvoCheckForMon_268
# 1547 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 535, EvoMasters_EvoCheckForMon_269
# 1549 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 536, EvoMasters_EvoCheckForMon_270
# 1551 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 540, EvoMasters_EvoCheckForMon_271
# 1553 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 541, EvoMasters_EvoCheckForMon_272
# 1555 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 543, EvoMasters_EvoCheckForMon_273
# 1557 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 544, EvoMasters_EvoCheckForMon_274
# 1559 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 546, EvoMasters_EvoCheckForMon_275
# 1561 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 548, EvoMasters_EvoCheckForMon_276
# 1563 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 551, EvoMasters_EvoCheckForMon_277
# 1565 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 552, EvoMasters_EvoCheckForMon_278
# 1567 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 554, EvoMasters_EvoCheckForMon_279
# 1569 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 557, EvoMasters_EvoCheckForMon_280
# 1571 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 559, EvoMasters_EvoCheckForMon_281
# 1573 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 562, EvoMasters_EvoCheckForMon_282
# 1575 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 564, EvoMasters_EvoCheckForMon_283
# 1577 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 566, EvoMasters_EvoCheckForMon_284
# 1579 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 568, EvoMasters_EvoCheckForMon_285
# 1581 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 570, EvoMasters_EvoCheckForMon_286
# 1582 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1002, EvoMasters_EvoCheckForMon_286
# 1584 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 572, EvoMasters_EvoCheckForMon_287
# 1586 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 574, EvoMasters_EvoCheckForMon_288
# 1588 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 575, EvoMasters_EvoCheckForMon_289
# 1590 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 577, EvoMasters_EvoCheckForMon_290
# 1592 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 578, EvoMasters_EvoCheckForMon_291
# 1594 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 580, EvoMasters_EvoCheckForMon_292
# 1596 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 582, EvoMasters_EvoCheckForMon_293
# 1598 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 583, EvoMasters_EvoCheckForMon_294
# 1600 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 585, EvoMasters_EvoCheckForMon_295
# 1601 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1094, EvoMasters_EvoCheckForMon_295
# 1602 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1095, EvoMasters_EvoCheckForMon_295
# 1603 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1096, EvoMasters_EvoCheckForMon_295
# 1605 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 588, EvoMasters_EvoCheckForMon_296
# 1607 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 590, EvoMasters_EvoCheckForMon_297
# 1609 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 592, EvoMasters_EvoCheckForMon_298
# 1611 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 595, EvoMasters_EvoCheckForMon_299
# 1613 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 597, EvoMasters_EvoCheckForMon_300
# 1615 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 599, EvoMasters_EvoCheckForMon_301
# 1617 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 600, EvoMasters_EvoCheckForMon_302
# 1619 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 602, EvoMasters_EvoCheckForMon_303
# 1621 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 603, EvoMasters_EvoCheckForMon_304
# 1623 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 605, EvoMasters_EvoCheckForMon_305
# 1625 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 607, EvoMasters_EvoCheckForMon_306
# 1627 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 608, EvoMasters_EvoCheckForMon_307
# 1629 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 610, EvoMasters_EvoCheckForMon_308
# 1631 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 611, EvoMasters_EvoCheckForMon_309
# 1633 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 613, EvoMasters_EvoCheckForMon_310
# 1635 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 616, EvoMasters_EvoCheckForMon_311
# 1637 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 619, EvoMasters_EvoCheckForMon_312
# 1639 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 622, EvoMasters_EvoCheckForMon_313
# 1641 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 624, EvoMasters_EvoCheckForMon_314
# 1643 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 625, EvoMasters_EvoCheckForMon_315
# 1645 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 627, EvoMasters_EvoCheckForMon_316
# 1647 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 629, EvoMasters_EvoCheckForMon_317
# 1649 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 633, EvoMasters_EvoCheckForMon_318
# 1651 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 634, EvoMasters_EvoCheckForMon_319
# 1653 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 636, EvoMasters_EvoCheckForMon_320
# 1655 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 650, EvoMasters_EvoCheckForMon_321
# 1657 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 651, EvoMasters_EvoCheckForMon_322
# 1659 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 653, EvoMasters_EvoCheckForMon_323
# 1661 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 654, EvoMasters_EvoCheckForMon_324
# 1663 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 656, EvoMasters_EvoCheckForMon_325
# 1665 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 657, EvoMasters_EvoCheckForMon_326
# 1667 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 659, EvoMasters_EvoCheckForMon_327
# 1669 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 661, EvoMasters_EvoCheckForMon_328
# 1671 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 662, EvoMasters_EvoCheckForMon_329
# 1673 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 664, EvoMasters_EvoCheckForMon_330
# 1674 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1438, EvoMasters_EvoCheckForMon_330
# 1675 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1439, EvoMasters_EvoCheckForMon_330
# 1676 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1440, EvoMasters_EvoCheckForMon_330
# 1677 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1441, EvoMasters_EvoCheckForMon_330
# 1678 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1442, EvoMasters_EvoCheckForMon_330
# 1679 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1443, EvoMasters_EvoCheckForMon_330
# 1680 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1444, EvoMasters_EvoCheckForMon_330
# 1681 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1445, EvoMasters_EvoCheckForMon_330
# 1682 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1446, EvoMasters_EvoCheckForMon_330
# 1683 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1447, EvoMasters_EvoCheckForMon_330
# 1684 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1448, EvoMasters_EvoCheckForMon_330
# 1685 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1449, EvoMasters_EvoCheckForMon_330
# 1686 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1450, EvoMasters_EvoCheckForMon_330
# 1687 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1451, EvoMasters_EvoCheckForMon_330
# 1688 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1452, EvoMasters_EvoCheckForMon_330
# 1689 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1453, EvoMasters_EvoCheckForMon_330
# 1690 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1454, EvoMasters_EvoCheckForMon_330
# 1691 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1455, EvoMasters_EvoCheckForMon_330
# 1692 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1456, EvoMasters_EvoCheckForMon_330
# 1694 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 665, EvoMasters_EvoCheckForMon_331
# 1695 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1457, EvoMasters_EvoCheckForMon_331
# 1696 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1458, EvoMasters_EvoCheckForMon_331
# 1697 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1459, EvoMasters_EvoCheckForMon_331
# 1698 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1460, EvoMasters_EvoCheckForMon_331
# 1699 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1461, EvoMasters_EvoCheckForMon_331
# 1700 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1462, EvoMasters_EvoCheckForMon_331
# 1701 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1463, EvoMasters_EvoCheckForMon_331
# 1702 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1464, EvoMasters_EvoCheckForMon_331
# 1703 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1465, EvoMasters_EvoCheckForMon_331
# 1704 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1466, EvoMasters_EvoCheckForMon_331
# 1705 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1467, EvoMasters_EvoCheckForMon_331
# 1706 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1468, EvoMasters_EvoCheckForMon_331
# 1707 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1469, EvoMasters_EvoCheckForMon_331
# 1708 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1470, EvoMasters_EvoCheckForMon_331
# 1709 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1471, EvoMasters_EvoCheckForMon_331
# 1710 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1472, EvoMasters_EvoCheckForMon_331
# 1711 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1473, EvoMasters_EvoCheckForMon_331
# 1712 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1474, EvoMasters_EvoCheckForMon_331
# 1713 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1475, EvoMasters_EvoCheckForMon_331
# 1715 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 667, EvoMasters_EvoCheckForMon_332
# 1717 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 669, EvoMasters_EvoCheckForMon_333
# 1718 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1133, EvoMasters_EvoCheckForMon_333
# 1719 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1134, EvoMasters_EvoCheckForMon_333
# 1720 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1135, EvoMasters_EvoCheckForMon_333
# 1721 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1136, EvoMasters_EvoCheckForMon_333
# 1723 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 670, EvoMasters_EvoCheckForMon_334
# 1724 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1137, EvoMasters_EvoCheckForMon_334
# 1725 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1138, EvoMasters_EvoCheckForMon_334
# 1726 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1139, EvoMasters_EvoCheckForMon_334
# 1727 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1140, EvoMasters_EvoCheckForMon_334
# 1729 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 672, EvoMasters_EvoCheckForMon_335
# 1731 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 674, EvoMasters_EvoCheckForMon_336
# 1733 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 677, EvoMasters_EvoCheckForMon_337
# 1735 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 679, EvoMasters_EvoCheckForMon_338
# 1737 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 680, EvoMasters_EvoCheckForMon_339
# 1739 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 682, EvoMasters_EvoCheckForMon_340
# 1741 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 684, EvoMasters_EvoCheckForMon_341
# 1743 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 686, EvoMasters_EvoCheckForMon_342
# 1745 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 688, EvoMasters_EvoCheckForMon_343
# 1747 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 690, EvoMasters_EvoCheckForMon_344
# 1749 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 692, EvoMasters_EvoCheckForMon_345
# 1751 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 694, EvoMasters_EvoCheckForMon_346
# 1753 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 696, EvoMasters_EvoCheckForMon_347
# 1755 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 698, EvoMasters_EvoCheckForMon_348
# 1757 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 704, EvoMasters_EvoCheckForMon_349
# 1759 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 705, EvoMasters_EvoCheckForMon_350
# 1760 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1005, EvoMasters_EvoCheckForMon_350
# 1762 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 708, EvoMasters_EvoCheckForMon_351
# 1764 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 710, EvoMasters_EvoCheckForMon_352
# 1765 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1157, EvoMasters_EvoCheckForMon_352
# 1766 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1158, EvoMasters_EvoCheckForMon_352
# 1767 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1159, EvoMasters_EvoCheckForMon_352
# 1769 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 712, EvoMasters_EvoCheckForMon_353
# 1771 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 714, EvoMasters_EvoCheckForMon_354
# 1773 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 722, EvoMasters_EvoCheckForMon_355
# 1775 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 723, EvoMasters_EvoCheckForMon_356
# 1777 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 725, EvoMasters_EvoCheckForMon_357
# 1779 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 726, EvoMasters_EvoCheckForMon_358
# 1781 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 728, EvoMasters_EvoCheckForMon_359
# 1783 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 729, EvoMasters_EvoCheckForMon_360
# 1785 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 731, EvoMasters_EvoCheckForMon_361
# 1787 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 732, EvoMasters_EvoCheckForMon_362
# 1789 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 734, EvoMasters_EvoCheckForMon_363
# 1791 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 736, EvoMasters_EvoCheckForMon_364
# 1793 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 737, EvoMasters_EvoCheckForMon_365
# 1795 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 739, EvoMasters_EvoCheckForMon_366
# 1797 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 742, EvoMasters_EvoCheckForMon_367
# 1799 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 744, EvoMasters_EvoCheckForMon_368
# 1801 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 747, EvoMasters_EvoCheckForMon_369
# 1803 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 749, EvoMasters_EvoCheckForMon_370
# 1805 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 751, EvoMasters_EvoCheckForMon_371
# 1807 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 753, EvoMasters_EvoCheckForMon_372
# 1809 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 755, EvoMasters_EvoCheckForMon_373
# 1811 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 757, EvoMasters_EvoCheckForMon_374
# 1813 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 759, EvoMasters_EvoCheckForMon_375
# 1815 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 761, EvoMasters_EvoCheckForMon_376
# 1817 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 762, EvoMasters_EvoCheckForMon_377
# 1819 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 767, EvoMasters_EvoCheckForMon_378
# 1821 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 769, EvoMasters_EvoCheckForMon_379
# 1823 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 772, EvoMasters_EvoCheckForMon_380
# 1825 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 782, EvoMasters_EvoCheckForMon_381
# 1827 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 783, EvoMasters_EvoCheckForMon_382
# 1829 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 789, EvoMasters_EvoCheckForMon_383
# 1831 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 790, EvoMasters_EvoCheckForMon_384
# 1833 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 808, EvoMasters_EvoCheckForMon_385
# 1835 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 810, EvoMasters_EvoCheckForMon_386
# 1837 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 811, EvoMasters_EvoCheckForMon_387
# 1839 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 813, EvoMasters_EvoCheckForMon_388
# 1841 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 814, EvoMasters_EvoCheckForMon_389
# 1843 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 816, EvoMasters_EvoCheckForMon_390
# 1845 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 817, EvoMasters_EvoCheckForMon_391
# 1847 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 819, EvoMasters_EvoCheckForMon_392
# 1849 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 821, EvoMasters_EvoCheckForMon_393
# 1851 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 822, EvoMasters_EvoCheckForMon_394
# 1853 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 824, EvoMasters_EvoCheckForMon_395
# 1855 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 825, EvoMasters_EvoCheckForMon_396
# 1857 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 827, EvoMasters_EvoCheckForMon_397
# 1859 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 829, EvoMasters_EvoCheckForMon_398
# 1861 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 831, EvoMasters_EvoCheckForMon_399
# 1863 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 833, EvoMasters_EvoCheckForMon_400
# 1865 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 835, EvoMasters_EvoCheckForMon_401
# 1867 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 837, EvoMasters_EvoCheckForMon_402
# 1869 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 838, EvoMasters_EvoCheckForMon_403
# 1871 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 840, EvoMasters_EvoCheckForMon_404
# 1873 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 843, EvoMasters_EvoCheckForMon_405
# 1875 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 846, EvoMasters_EvoCheckForMon_406
# 1877 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 848, EvoMasters_EvoCheckForMon_407
# 1879 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 850, EvoMasters_EvoCheckForMon_408
# 1881 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 852, EvoMasters_EvoCheckForMon_409
# 1883 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 854, EvoMasters_EvoCheckForMon_410
# 1885 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 856, EvoMasters_EvoCheckForMon_411
# 1887 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 857, EvoMasters_EvoCheckForMon_412
# 1889 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 859, EvoMasters_EvoCheckForMon_413
# 1891 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 860, EvoMasters_EvoCheckForMon_414
# 1893 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 868, EvoMasters_EvoCheckForMon_415
# 1895 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 872, EvoMasters_EvoCheckForMon_416
# 1897 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 878, EvoMasters_EvoCheckForMon_417
# 1899 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 884, EvoMasters_EvoCheckForMon_418
# 1901 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 885, EvoMasters_EvoCheckForMon_419
# 1903 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 886, EvoMasters_EvoCheckForMon_420
# 1905 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 891, EvoMasters_EvoCheckForMon_421
# 1907 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 896, EvoMasters_EvoCheckForMon_422
# 1908 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 897, EvoMasters_EvoCheckForMon_422
# 1909 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 898, EvoMasters_EvoCheckForMon_422
# 1911 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 956, EvoMasters_EvoCheckForMon_423
# 1913 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 959, EvoMasters_EvoCheckForMon_424
# 1915 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 961, EvoMasters_EvoCheckForMon_425
# 1917 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 965, EvoMasters_EvoCheckForMon_426
# 1919 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 977, EvoMasters_EvoCheckForMon_427
# 1921 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 981, EvoMasters_EvoCheckForMon_428
# 1923 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 986, EvoMasters_EvoCheckForMon_429
# 1925 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 988, EvoMasters_EvoCheckForMon_430
# 1927 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 989, EvoMasters_EvoCheckForMon_431
# 1929 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 991, EvoMasters_EvoCheckForMon_432
# 1931 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 995, EvoMasters_EvoCheckForMon_433
# 1933 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 997, EvoMasters_EvoCheckForMon_434
# 1935 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 998, EvoMasters_EvoCheckForMon_435
# 1937 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 999, EvoMasters_EvoCheckForMon_436
# 1939 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1009, EvoMasters_EvoCheckForMon_437
# 1940 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1010, EvoMasters_EvoCheckForMon_437
# 1941 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1011, EvoMasters_EvoCheckForMon_437
# 1942 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1012, EvoMasters_EvoCheckForMon_437
# 1943 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1013, EvoMasters_EvoCheckForMon_437
# 1944 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1014, EvoMasters_EvoCheckForMon_437
# 1945 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1015, EvoMasters_EvoCheckForMon_437
# 1946 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1016, EvoMasters_EvoCheckForMon_437
# 1947 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1017, EvoMasters_EvoCheckForMon_437
# 1948 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1018, EvoMasters_EvoCheckForMon_437
# 1949 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1019, EvoMasters_EvoCheckForMon_437
# 1950 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1020, EvoMasters_EvoCheckForMon_437
# 1951 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1021, EvoMasters_EvoCheckForMon_437
# 1952 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1022, EvoMasters_EvoCheckForMon_437
# 1953 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1023, EvoMasters_EvoCheckForMon_437
# 1955 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1091, EvoMasters_EvoCheckForMon_438
# 1957 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1141, EvoMasters_EvoCheckForMon_439
# 1959 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1172, EvoMasters_EvoCheckForMon_440
# 1961 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1214, EvoMasters_EvoCheckForMon_441
# 1963 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1289, EvoMasters_EvoCheckForMon_442
# 1965 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1290, EvoMasters_EvoCheckForMon_443
# 1967 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1292, EvoMasters_EvoCheckForMon_444
# 1969 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1293, EvoMasters_EvoCheckForMon_445
# 1971 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1295, EvoMasters_EvoCheckForMon_446
# 1973 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1296, EvoMasters_EvoCheckForMon_447
# 1975 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1298, EvoMasters_EvoCheckForMon_448
# 1977 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1301, EvoMasters_EvoCheckForMon_449
# 1979 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1303, EvoMasters_EvoCheckForMon_450
# 1981 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1305, EvoMasters_EvoCheckForMon_451
# 1983 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1306, EvoMasters_EvoCheckForMon_452
# 1985 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1308, EvoMasters_EvoCheckForMon_453
# 1987 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1311, EvoMasters_EvoCheckForMon_454
# 1989 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1313, EvoMasters_EvoCheckForMon_455
# 1991 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1314, EvoMasters_EvoCheckForMon_456
# 1993 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1320, EvoMasters_EvoCheckForMon_457
# 1995 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1321, EvoMasters_EvoCheckForMon_458
# 1997 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1323, EvoMasters_EvoCheckForMon_459
# 1999 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1326, EvoMasters_EvoCheckForMon_460
# 2001 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1328, EvoMasters_EvoCheckForMon_461
# 2003 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1330, EvoMasters_EvoCheckForMon_462
# 2005 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1332, EvoMasters_EvoCheckForMon_463
# 2007 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1334, EvoMasters_EvoCheckForMon_464
# 2009 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1336, EvoMasters_EvoCheckForMon_465
# 2011 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1339, EvoMasters_EvoCheckForMon_466
# 2013 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1341, EvoMasters_EvoCheckForMon_467
# 2015 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1343, EvoMasters_EvoCheckForMon_468
# 2017 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1345, EvoMasters_EvoCheckForMon_469
# 2019 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1346, EvoMasters_EvoCheckForMon_470
# 2021 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1348, EvoMasters_EvoCheckForMon_471
# 2023 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1351, EvoMasters_EvoCheckForMon_472
# 2025 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1354, EvoMasters_EvoCheckForMon_473
# 2027 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1358, EvoMasters_EvoCheckForMon_474
# 2029 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1360, EvoMasters_EvoCheckForMon_475
# 2031 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1363, EvoMasters_EvoCheckForMon_476
# 2033 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1376, EvoMasters_EvoCheckForMon_477
# 2034 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1377, EvoMasters_EvoCheckForMon_477
# 2035 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1378, EvoMasters_EvoCheckForMon_477
# 2036 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1379, EvoMasters_EvoCheckForMon_477
# 2037 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1380, EvoMasters_EvoCheckForMon_477
# 2038 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1381, EvoMasters_EvoCheckForMon_477
# 2039 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1382, EvoMasters_EvoCheckForMon_477
# 2040 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1383, EvoMasters_EvoCheckForMon_477
# 2041 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1384, EvoMasters_EvoCheckForMon_477
# 2042 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1385, EvoMasters_EvoCheckForMon_477
# 2043 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1386, EvoMasters_EvoCheckForMon_477
# 2044 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1387, EvoMasters_EvoCheckForMon_477
# 2045 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1398, EvoMasters_EvoCheckForMon_477
# 2046 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1399, EvoMasters_EvoCheckForMon_477
# 2047 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1406, EvoMasters_EvoCheckForMon_477
# 2048 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1407, EvoMasters_EvoCheckForMon_477
# 2049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1427, EvoMasters_EvoCheckForMon_477
# 2050 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1428, EvoMasters_EvoCheckForMon_477
# 2051 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1429, EvoMasters_EvoCheckForMon_477
# 2052 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1430, EvoMasters_EvoCheckForMon_477
# 2054 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1388, EvoMasters_EvoCheckForMon_478
# 2056 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1389, EvoMasters_EvoCheckForMon_479
# 2058 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1391, EvoMasters_EvoCheckForMon_480
# 2060 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1408, EvoMasters_EvoCheckForMon_481
# 2062 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1411, EvoMasters_EvoCheckForMon_482
# 2064 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1412, EvoMasters_EvoCheckForMon_483
# 2066 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	case 1435, EvoMasters_EvoCheckForMon_484
# 2069 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_483
	return

EvoMasters_EvoCheckForMon_2:
# 197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_1
	return

EvoMasters_EvoCheckForMon_3:
# 714 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_2
	return

EvoMasters_EvoCheckForMon_4:
# 863 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_3
	return

EvoMasters_EvoCheckForMon_5:
# 874 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_4
	return

EvoMasters_EvoCheckForMon_6:
# 969 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_5
	return

EvoMasters_EvoCheckForMon_7:
# 994 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_6
	return

EvoMasters_EvoCheckForMon_8:
# 996 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_7
	return

EvoMasters_EvoCheckForMon_9:
# 998 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_8
	return

EvoMasters_EvoCheckForMon_10:
# 1000 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_9
	return

EvoMasters_EvoCheckForMon_11:
# 1002 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_10
	return

EvoMasters_EvoCheckForMon_12:
# 1004 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_11
	return

EvoMasters_EvoCheckForMon_13:
# 1006 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_12
	return

EvoMasters_EvoCheckForMon_14:
# 1008 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_13
	return

EvoMasters_EvoCheckForMon_15:
# 1010 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_14
	return

EvoMasters_EvoCheckForMon_16:
# 1012 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_15
	return

EvoMasters_EvoCheckForMon_17:
# 1014 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_16
	return

EvoMasters_EvoCheckForMon_18:
# 1016 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_17
	return

EvoMasters_EvoCheckForMon_19:
# 1018 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_18
	return

EvoMasters_EvoCheckForMon_20:
# 1020 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_19
	return

EvoMasters_EvoCheckForMon_21:
# 1022 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_20
	return

EvoMasters_EvoCheckForMon_22:
# 1024 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_21
	return

EvoMasters_EvoCheckForMon_23:
# 1026 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_22
	return

EvoMasters_EvoCheckForMon_24:
# 1028 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_23
	return

EvoMasters_EvoCheckForMon_25:
# 1031 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_24
	return

EvoMasters_EvoCheckForMon_26:
# 1033 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_25
	return

EvoMasters_EvoCheckForMon_27:
# 1035 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_26
	return

EvoMasters_EvoCheckForMon_28:
# 1037 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_27
	return

EvoMasters_EvoCheckForMon_29:
# 1039 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_28
	return

EvoMasters_EvoCheckForMon_30:
# 1041 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_29
	return

EvoMasters_EvoCheckForMon_31:
# 1043 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_30
	return

EvoMasters_EvoCheckForMon_32:
# 1045 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_31
	return

EvoMasters_EvoCheckForMon_33:
# 1047 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_32
	return

EvoMasters_EvoCheckForMon_34:
# 1049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_33
	return

EvoMasters_EvoCheckForMon_35:
# 1051 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_34
	return

EvoMasters_EvoCheckForMon_36:
# 1053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_35
	return

EvoMasters_EvoCheckForMon_37:
# 1056 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_36
	return

EvoMasters_EvoCheckForMon_38:
# 1059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_37
	return

EvoMasters_EvoCheckForMon_39:
# 1061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_38
	return

EvoMasters_EvoCheckForMon_40:
# 1063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_39
	return

EvoMasters_EvoCheckForMon_41:
# 1065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_40
	return

EvoMasters_EvoCheckForMon_42:
# 1068 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_41
	return

EvoMasters_EvoCheckForMon_43:
# 1070 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_42
	return

EvoMasters_EvoCheckForMon_44:
# 1072 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_43
	return

EvoMasters_EvoCheckForMon_45:
# 1074 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_44
	return

EvoMasters_EvoCheckForMon_46:
# 1076 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_45
	return

EvoMasters_EvoCheckForMon_47:
# 1078 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_46
	return

EvoMasters_EvoCheckForMon_48:
# 1080 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_47
	return

EvoMasters_EvoCheckForMon_49:
# 1082 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_48
	return

EvoMasters_EvoCheckForMon_50:
# 1084 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_49
	return

EvoMasters_EvoCheckForMon_51:
# 1086 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_50
	return

EvoMasters_EvoCheckForMon_52:
# 1089 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_51
	return

EvoMasters_EvoCheckForMon_53:
# 1092 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_52
	return

EvoMasters_EvoCheckForMon_54:
# 1095 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_53
	return

EvoMasters_EvoCheckForMon_55:
# 1097 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_54
	return

EvoMasters_EvoCheckForMon_56:
# 1099 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_55
	return

EvoMasters_EvoCheckForMon_57:
# 1101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_56
	return

EvoMasters_EvoCheckForMon_58:
# 1103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_57
	return

EvoMasters_EvoCheckForMon_59:
# 1105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_58
	return

EvoMasters_EvoCheckForMon_60:
# 1107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_59
	return

EvoMasters_EvoCheckForMon_61:
# 1110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_60
	return

EvoMasters_EvoCheckForMon_62:
# 1112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_61
	return

EvoMasters_EvoCheckForMon_63:
# 1114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_62
	return

EvoMasters_EvoCheckForMon_64:
# 1116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_63
	return

EvoMasters_EvoCheckForMon_65:
# 1118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_64
	return

EvoMasters_EvoCheckForMon_66:
# 1120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_65
	return

EvoMasters_EvoCheckForMon_67:
# 1122 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_66
	return

EvoMasters_EvoCheckForMon_68:
# 1124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_67
	return

EvoMasters_EvoCheckForMon_69:
# 1126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_68
	return

EvoMasters_EvoCheckForMon_70:
# 1128 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_69
	return

EvoMasters_EvoCheckForMon_71:
# 1130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_70
	return

EvoMasters_EvoCheckForMon_72:
# 1132 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_71
	return

EvoMasters_EvoCheckForMon_73:
# 1134 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_72
	return

EvoMasters_EvoCheckForMon_74:
# 1136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_73
	return

EvoMasters_EvoCheckForMon_75:
# 1138 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_74
	return

EvoMasters_EvoCheckForMon_76:
# 1140 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_75
	return

EvoMasters_EvoCheckForMon_77:
# 1142 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_76
	return

EvoMasters_EvoCheckForMon_78:
# 1144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_77
	return

EvoMasters_EvoCheckForMon_79:
# 1146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_78
	return

EvoMasters_EvoCheckForMon_80:
# 1148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_79
	return

EvoMasters_EvoCheckForMon_81:
# 1150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_80
	return

EvoMasters_EvoCheckForMon_82:
# 1152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_81
	return

EvoMasters_EvoCheckForMon_83:
# 1154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_82
	return

EvoMasters_EvoCheckForMon_84:
# 1156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_83
	return

EvoMasters_EvoCheckForMon_85:
# 1158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_84
	return

EvoMasters_EvoCheckForMon_86:
# 1160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_85
	return

EvoMasters_EvoCheckForMon_87:
# 1162 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_86
	return

EvoMasters_EvoCheckForMon_88:
# 1164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_87
	return

EvoMasters_EvoCheckForMon_89:
# 1166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_88
	return

EvoMasters_EvoCheckForMon_90:
# 1168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_89
	return

EvoMasters_EvoCheckForMon_91:
# 1170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_90
	return

EvoMasters_EvoCheckForMon_92:
# 1172 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_91
	return

EvoMasters_EvoCheckForMon_93:
# 1174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_92
	return

EvoMasters_EvoCheckForMon_94:
# 1176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_93
	return

EvoMasters_EvoCheckForMon_95:
# 1178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_94
	return

EvoMasters_EvoCheckForMon_96:
# 1180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_95
	return

EvoMasters_EvoCheckForMon_97:
# 1182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_96
	return

EvoMasters_EvoCheckForMon_98:
# 1184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_97
	return

EvoMasters_EvoCheckForMon_99:
# 1186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_98
	return

EvoMasters_EvoCheckForMon_100:
# 1188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_99
	return

EvoMasters_EvoCheckForMon_101:
# 1190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_100
	return

EvoMasters_EvoCheckForMon_102:
# 1192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_101
	return

EvoMasters_EvoCheckForMon_103:
# 1194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_102
	return

EvoMasters_EvoCheckForMon_104:
# 1196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_103
	return

EvoMasters_EvoCheckForMon_105:
# 1198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_104
	return

EvoMasters_EvoCheckForMon_106:
# 1200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_105
	return

EvoMasters_EvoCheckForMon_107:
# 1202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_106
	return

EvoMasters_EvoCheckForMon_108:
# 1204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_107
	return

EvoMasters_EvoCheckForMon_109:
# 1206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_108
	return

EvoMasters_EvoCheckForMon_110:
# 1208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_109
	return

EvoMasters_EvoCheckForMon_111:
# 1210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_110
	return

EvoMasters_EvoCheckForMon_112:
# 1212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_111
	return

EvoMasters_EvoCheckForMon_113:
# 1214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_112
	return

EvoMasters_EvoCheckForMon_114:
# 1216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_113
	return

EvoMasters_EvoCheckForMon_115:
# 1218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_114
	return

EvoMasters_EvoCheckForMon_116:
# 1221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_115
	return

EvoMasters_EvoCheckForMon_117:
# 1223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_116
	return

EvoMasters_EvoCheckForMon_118:
# 1225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_117
	return

EvoMasters_EvoCheckForMon_119:
# 1227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_118
	return

EvoMasters_EvoCheckForMon_120:
# 1229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_119
	return

EvoMasters_EvoCheckForMon_121:
# 1231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_120
	return

EvoMasters_EvoCheckForMon_122:
# 1233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_121
	return

EvoMasters_EvoCheckForMon_123:
# 1235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_122
	return

EvoMasters_EvoCheckForMon_124:
# 1237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_123
	return

EvoMasters_EvoCheckForMon_125:
# 1239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_124
	return

EvoMasters_EvoCheckForMon_126:
# 1241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_125
	return

EvoMasters_EvoCheckForMon_127:
# 1243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_126
	return

EvoMasters_EvoCheckForMon_128:
# 1245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_127
	return

EvoMasters_EvoCheckForMon_129:
# 1247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_128
	return

EvoMasters_EvoCheckForMon_130:
# 1249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_129
	return

EvoMasters_EvoCheckForMon_131:
# 1251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_130
	return

EvoMasters_EvoCheckForMon_132:
# 1253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_131
	return

EvoMasters_EvoCheckForMon_133:
# 1255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_132
	return

EvoMasters_EvoCheckForMon_134:
# 1257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_133
	return

EvoMasters_EvoCheckForMon_135:
# 1259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_134
	return

EvoMasters_EvoCheckForMon_136:
# 1261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_135
	return

EvoMasters_EvoCheckForMon_137:
# 1263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_136
	return

EvoMasters_EvoCheckForMon_138:
# 1265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_137
	return

EvoMasters_EvoCheckForMon_139:
# 1267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_138
	return

EvoMasters_EvoCheckForMon_140:
# 1269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_139
	return

EvoMasters_EvoCheckForMon_141:
# 1271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_140
	return

EvoMasters_EvoCheckForMon_142:
# 1273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_141
	return

EvoMasters_EvoCheckForMon_143:
# 1275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_142
	return

EvoMasters_EvoCheckForMon_144:
# 1277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_143
	return

EvoMasters_EvoCheckForMon_145:
# 1279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_144
	return

EvoMasters_EvoCheckForMon_146:
# 1281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_145
	return

EvoMasters_EvoCheckForMon_147:
# 1283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_146
	return

EvoMasters_EvoCheckForMon_148:
# 1286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_147
	return

EvoMasters_EvoCheckForMon_149:
# 1288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_148
	return

EvoMasters_EvoCheckForMon_150:
# 1290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_149
	return

EvoMasters_EvoCheckForMon_151:
# 1292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_150
	return

EvoMasters_EvoCheckForMon_152:
# 1294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_151
	return

EvoMasters_EvoCheckForMon_153:
# 1296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_152
	return

EvoMasters_EvoCheckForMon_154:
# 1298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_153
	return

EvoMasters_EvoCheckForMon_155:
# 1300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_154
	return

EvoMasters_EvoCheckForMon_156:
# 1302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_155
	return

EvoMasters_EvoCheckForMon_157:
# 1304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_156
	return

EvoMasters_EvoCheckForMon_158:
# 1306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_157
	return

EvoMasters_EvoCheckForMon_159:
# 1308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_158
	return

EvoMasters_EvoCheckForMon_160:
# 1310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_159
	return

EvoMasters_EvoCheckForMon_161:
# 1312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_160
	return

EvoMasters_EvoCheckForMon_162:
# 1314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_161
	return

EvoMasters_EvoCheckForMon_163:
# 1316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_162
	return

EvoMasters_EvoCheckForMon_164:
# 1318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_163
	return

EvoMasters_EvoCheckForMon_165:
# 1320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_164
	return

EvoMasters_EvoCheckForMon_166:
# 1322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_165
	return

EvoMasters_EvoCheckForMon_167:
# 1324 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_166
	return

EvoMasters_EvoCheckForMon_168:
# 1326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_167
	return

EvoMasters_EvoCheckForMon_169:
# 1328 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_168
	return

EvoMasters_EvoCheckForMon_170:
# 1330 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_169
	return

EvoMasters_EvoCheckForMon_171:
# 1332 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_170
	return

EvoMasters_EvoCheckForMon_172:
# 1334 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_171
	return

EvoMasters_EvoCheckForMon_173:
# 1336 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_172
	return

EvoMasters_EvoCheckForMon_174:
# 1338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_173
	return

EvoMasters_EvoCheckForMon_175:
# 1340 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_174
	return

EvoMasters_EvoCheckForMon_176:
# 1342 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_175
	return

EvoMasters_EvoCheckForMon_177:
# 1344 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_176
	return

EvoMasters_EvoCheckForMon_178:
# 1346 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_177
	return

EvoMasters_EvoCheckForMon_179:
# 1348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_178
	return

EvoMasters_EvoCheckForMon_180:
# 1350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_179
	return

EvoMasters_EvoCheckForMon_181:
# 1352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_180
	return

EvoMasters_EvoCheckForMon_182:
# 1354 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_181
	return

EvoMasters_EvoCheckForMon_183:
# 1356 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_182
	return

EvoMasters_EvoCheckForMon_184:
# 1358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_183
	return

EvoMasters_EvoCheckForMon_185:
# 1360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_184
	return

EvoMasters_EvoCheckForMon_186:
# 1362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_185
	return

EvoMasters_EvoCheckForMon_187:
# 1364 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_186
	return

EvoMasters_EvoCheckForMon_188:
# 1366 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_187
	return

EvoMasters_EvoCheckForMon_189:
# 1368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_188
	return

EvoMasters_EvoCheckForMon_190:
# 1370 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_189
	return

EvoMasters_EvoCheckForMon_191:
# 1372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_190
	return

EvoMasters_EvoCheckForMon_192:
# 1374 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_191
	return

EvoMasters_EvoCheckForMon_193:
# 1376 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_192
	return

EvoMasters_EvoCheckForMon_194:
# 1378 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_193
	return

EvoMasters_EvoCheckForMon_195:
# 1380 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_194
	return

EvoMasters_EvoCheckForMon_196:
# 1382 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_195
	return

EvoMasters_EvoCheckForMon_197:
# 1384 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_196
	return

EvoMasters_EvoCheckForMon_198:
# 1386 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_197
	return

EvoMasters_EvoCheckForMon_199:
# 1388 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_198
	return

EvoMasters_EvoCheckForMon_200:
# 1390 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_199
	return

EvoMasters_EvoCheckForMon_201:
# 1392 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_200
	return

EvoMasters_EvoCheckForMon_202:
# 1394 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_201
	return

EvoMasters_EvoCheckForMon_203:
# 1396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_202
	return

EvoMasters_EvoCheckForMon_204:
# 1398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_203
	return

EvoMasters_EvoCheckForMon_205:
# 1400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_204
	return

EvoMasters_EvoCheckForMon_206:
# 1402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_205
	return

EvoMasters_EvoCheckForMon_207:
# 1404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_206
	return

EvoMasters_EvoCheckForMon_208:
# 1406 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_207
	return

EvoMasters_EvoCheckForMon_209:
# 1408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_208
	return

EvoMasters_EvoCheckForMon_210:
# 1410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_209
	return

EvoMasters_EvoCheckForMon_211:
# 1412 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_210
	return

EvoMasters_EvoCheckForMon_212:
# 1414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_211
	return

EvoMasters_EvoCheckForMon_213:
# 1416 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_212
	return

EvoMasters_EvoCheckForMon_214:
# 1418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_213
	return

EvoMasters_EvoCheckForMon_215:
# 1420 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_214
	return

EvoMasters_EvoCheckForMon_216:
# 1422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_215
	return

EvoMasters_EvoCheckForMon_217:
# 1424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_216
	return

EvoMasters_EvoCheckForMon_218:
# 1428 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_217
	return

EvoMasters_EvoCheckForMon_219:
# 1430 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_218
	return

EvoMasters_EvoCheckForMon_220:
# 1432 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_219
	return

EvoMasters_EvoCheckForMon_221:
# 1434 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_220
	return

EvoMasters_EvoCheckForMon_222:
# 1437 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_221
	return

EvoMasters_EvoCheckForMon_223:
# 1439 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_222
	return

EvoMasters_EvoCheckForMon_224:
# 1441 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_223
	return

EvoMasters_EvoCheckForMon_225:
# 1443 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_224
	return

EvoMasters_EvoCheckForMon_226:
# 1445 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_225
	return

EvoMasters_EvoCheckForMon_227:
# 1447 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_226
	return

EvoMasters_EvoCheckForMon_228:
# 1449 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_227
	return

EvoMasters_EvoCheckForMon_229:
# 1451 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_228
	return

EvoMasters_EvoCheckForMon_230:
# 1453 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_229
	return

EvoMasters_EvoCheckForMon_231:
# 1455 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_230
	return

EvoMasters_EvoCheckForMon_232:
# 1457 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_231
	return

EvoMasters_EvoCheckForMon_233:
# 1459 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_232
	return

EvoMasters_EvoCheckForMon_234:
# 1461 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_233
	return

EvoMasters_EvoCheckForMon_235:
# 1463 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_234
	return

EvoMasters_EvoCheckForMon_236:
# 1465 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_235
	return

EvoMasters_EvoCheckForMon_237:
# 1467 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_236
	return

EvoMasters_EvoCheckForMon_238:
# 1469 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_237
	return

EvoMasters_EvoCheckForMon_239:
# 1471 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_238
	return

EvoMasters_EvoCheckForMon_240:
# 1473 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_239
	return

EvoMasters_EvoCheckForMon_241:
# 1475 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_240
	return

EvoMasters_EvoCheckForMon_242:
# 1477 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_241
	return

EvoMasters_EvoCheckForMon_243:
# 1479 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_242
	return

EvoMasters_EvoCheckForMon_244:
# 1481 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_243
	return

EvoMasters_EvoCheckForMon_245:
# 1500 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_244
	return

EvoMasters_EvoCheckForMon_246:
# 1502 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_245
	return

EvoMasters_EvoCheckForMon_247:
# 1504 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_246
	return

EvoMasters_EvoCheckForMon_248:
# 1506 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_247
	return

EvoMasters_EvoCheckForMon_249:
# 1508 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_248
	return

EvoMasters_EvoCheckForMon_250:
# 1510 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_249
	return

EvoMasters_EvoCheckForMon_251:
# 1512 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_250
	return

EvoMasters_EvoCheckForMon_252:
# 1514 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_251
	return

EvoMasters_EvoCheckForMon_253:
# 1516 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_252
	return

EvoMasters_EvoCheckForMon_254:
# 1518 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_253
	return

EvoMasters_EvoCheckForMon_255:
# 1520 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_254
	return

EvoMasters_EvoCheckForMon_256:
# 1522 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_255
	return

EvoMasters_EvoCheckForMon_257:
# 1524 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_256
	return

EvoMasters_EvoCheckForMon_258:
# 1526 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_257
	return

EvoMasters_EvoCheckForMon_259:
# 1528 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_258
	return

EvoMasters_EvoCheckForMon_260:
# 1530 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_259
	return

EvoMasters_EvoCheckForMon_261:
# 1532 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_260
	return

EvoMasters_EvoCheckForMon_262:
# 1534 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_261
	return

EvoMasters_EvoCheckForMon_263:
# 1536 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_262
	return

EvoMasters_EvoCheckForMon_264:
# 1538 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_263
	return

EvoMasters_EvoCheckForMon_265:
# 1540 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_264
	return

EvoMasters_EvoCheckForMon_266:
# 1542 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_265
	return

EvoMasters_EvoCheckForMon_267:
# 1544 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_266
	return

EvoMasters_EvoCheckForMon_268:
# 1546 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_267
	return

EvoMasters_EvoCheckForMon_269:
# 1548 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_268
	return

EvoMasters_EvoCheckForMon_270:
# 1550 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_269
	return

EvoMasters_EvoCheckForMon_271:
# 1552 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_270
	return

EvoMasters_EvoCheckForMon_272:
# 1554 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_271
	return

EvoMasters_EvoCheckForMon_273:
# 1556 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_272
	return

EvoMasters_EvoCheckForMon_274:
# 1558 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_273
	return

EvoMasters_EvoCheckForMon_275:
# 1560 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_274
	return

EvoMasters_EvoCheckForMon_276:
# 1562 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_275
	return

EvoMasters_EvoCheckForMon_277:
# 1564 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_276
	return

EvoMasters_EvoCheckForMon_278:
# 1566 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_277
	return

EvoMasters_EvoCheckForMon_279:
# 1568 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_278
	return

EvoMasters_EvoCheckForMon_280:
# 1570 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_279
	return

EvoMasters_EvoCheckForMon_281:
# 1572 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_280
	return

EvoMasters_EvoCheckForMon_282:
# 1574 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_281
	return

EvoMasters_EvoCheckForMon_283:
# 1576 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_282
	return

EvoMasters_EvoCheckForMon_284:
# 1578 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_283
	return

EvoMasters_EvoCheckForMon_285:
# 1580 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_284
	return

EvoMasters_EvoCheckForMon_286:
# 1583 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_285
	return

EvoMasters_EvoCheckForMon_287:
# 1585 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_286
	return

EvoMasters_EvoCheckForMon_288:
# 1587 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_287
	return

EvoMasters_EvoCheckForMon_289:
# 1589 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_288
	return

EvoMasters_EvoCheckForMon_290:
# 1591 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_289
	return

EvoMasters_EvoCheckForMon_291:
# 1593 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_290
	return

EvoMasters_EvoCheckForMon_292:
# 1595 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_291
	return

EvoMasters_EvoCheckForMon_293:
# 1597 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_292
	return

EvoMasters_EvoCheckForMon_294:
# 1599 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_293
	return

EvoMasters_EvoCheckForMon_295:
# 1604 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_294
	return

EvoMasters_EvoCheckForMon_296:
# 1606 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_295
	return

EvoMasters_EvoCheckForMon_297:
# 1608 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_296
	return

EvoMasters_EvoCheckForMon_298:
# 1610 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_297
	return

EvoMasters_EvoCheckForMon_299:
# 1612 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_298
	return

EvoMasters_EvoCheckForMon_300:
# 1614 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_299
	return

EvoMasters_EvoCheckForMon_301:
# 1616 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_300
	return

EvoMasters_EvoCheckForMon_302:
# 1618 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_301
	return

EvoMasters_EvoCheckForMon_303:
# 1620 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_302
	return

EvoMasters_EvoCheckForMon_304:
# 1622 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_303
	return

EvoMasters_EvoCheckForMon_305:
# 1624 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_304
	return

EvoMasters_EvoCheckForMon_306:
# 1626 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_305
	return

EvoMasters_EvoCheckForMon_307:
# 1628 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_306
	return

EvoMasters_EvoCheckForMon_308:
# 1630 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_307
	return

EvoMasters_EvoCheckForMon_309:
# 1632 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_308
	return

EvoMasters_EvoCheckForMon_310:
# 1634 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_309
	return

EvoMasters_EvoCheckForMon_311:
# 1636 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_310
	return

EvoMasters_EvoCheckForMon_312:
# 1638 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_311
	return

EvoMasters_EvoCheckForMon_313:
# 1640 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_312
	return

EvoMasters_EvoCheckForMon_314:
# 1642 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_313
	return

EvoMasters_EvoCheckForMon_315:
# 1644 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_314
	return

EvoMasters_EvoCheckForMon_316:
# 1646 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_315
	return

EvoMasters_EvoCheckForMon_317:
# 1648 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_316
	return

EvoMasters_EvoCheckForMon_318:
# 1650 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_317
	return

EvoMasters_EvoCheckForMon_319:
# 1652 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_318
	return

EvoMasters_EvoCheckForMon_320:
# 1654 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_319
	return

EvoMasters_EvoCheckForMon_321:
# 1656 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_320
	return

EvoMasters_EvoCheckForMon_322:
# 1658 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_321
	return

EvoMasters_EvoCheckForMon_323:
# 1660 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_322
	return

EvoMasters_EvoCheckForMon_324:
# 1662 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_323
	return

EvoMasters_EvoCheckForMon_325:
# 1664 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_324
	return

EvoMasters_EvoCheckForMon_326:
# 1666 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_325
	return

EvoMasters_EvoCheckForMon_327:
# 1668 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_326
	return

EvoMasters_EvoCheckForMon_328:
# 1670 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_327
	return

EvoMasters_EvoCheckForMon_329:
# 1672 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_328
	return

EvoMasters_EvoCheckForMon_330:
# 1693 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_329
	return

EvoMasters_EvoCheckForMon_331:
# 1714 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_330
	return

EvoMasters_EvoCheckForMon_332:
# 1716 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_331
	return

EvoMasters_EvoCheckForMon_333:
# 1722 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_332
	return

EvoMasters_EvoCheckForMon_334:
# 1728 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_333
	return

EvoMasters_EvoCheckForMon_335:
# 1730 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_334
	return

EvoMasters_EvoCheckForMon_336:
# 1732 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_335
	return

EvoMasters_EvoCheckForMon_337:
# 1734 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_336
	return

EvoMasters_EvoCheckForMon_338:
# 1736 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_337
	return

EvoMasters_EvoCheckForMon_339:
# 1738 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_338
	return

EvoMasters_EvoCheckForMon_340:
# 1740 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_339
	return

EvoMasters_EvoCheckForMon_341:
# 1742 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_340
	return

EvoMasters_EvoCheckForMon_342:
# 1744 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_341
	return

EvoMasters_EvoCheckForMon_343:
# 1746 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_342
	return

EvoMasters_EvoCheckForMon_344:
# 1748 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_343
	return

EvoMasters_EvoCheckForMon_345:
# 1750 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_344
	return

EvoMasters_EvoCheckForMon_346:
# 1752 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_345
	return

EvoMasters_EvoCheckForMon_347:
# 1754 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_346
	return

EvoMasters_EvoCheckForMon_348:
# 1756 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_347
	return

EvoMasters_EvoCheckForMon_349:
# 1758 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_348
	return

EvoMasters_EvoCheckForMon_350:
# 1761 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_349
	return

EvoMasters_EvoCheckForMon_351:
# 1763 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_350
	return

EvoMasters_EvoCheckForMon_352:
# 1768 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_351
	return

EvoMasters_EvoCheckForMon_353:
# 1770 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_352
	return

EvoMasters_EvoCheckForMon_354:
# 1772 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_353
	return

EvoMasters_EvoCheckForMon_355:
# 1774 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_354
	return

EvoMasters_EvoCheckForMon_356:
# 1776 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_355
	return

EvoMasters_EvoCheckForMon_357:
# 1778 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_356
	return

EvoMasters_EvoCheckForMon_358:
# 1780 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_357
	return

EvoMasters_EvoCheckForMon_359:
# 1782 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_358
	return

EvoMasters_EvoCheckForMon_360:
# 1784 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_359
	return

EvoMasters_EvoCheckForMon_361:
# 1786 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_360
	return

EvoMasters_EvoCheckForMon_362:
# 1788 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_361
	return

EvoMasters_EvoCheckForMon_363:
# 1790 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_362
	return

EvoMasters_EvoCheckForMon_364:
# 1792 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_363
	return

EvoMasters_EvoCheckForMon_365:
# 1794 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_364
	return

EvoMasters_EvoCheckForMon_366:
# 1796 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_365
	return

EvoMasters_EvoCheckForMon_367:
# 1798 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_366
	return

EvoMasters_EvoCheckForMon_368:
# 1800 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_367
	return

EvoMasters_EvoCheckForMon_369:
# 1802 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_368
	return

EvoMasters_EvoCheckForMon_370:
# 1804 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_369
	return

EvoMasters_EvoCheckForMon_371:
# 1806 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_370
	return

EvoMasters_EvoCheckForMon_372:
# 1808 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_371
	return

EvoMasters_EvoCheckForMon_373:
# 1810 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_372
	return

EvoMasters_EvoCheckForMon_374:
# 1812 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_373
	return

EvoMasters_EvoCheckForMon_375:
# 1814 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_374
	return

EvoMasters_EvoCheckForMon_376:
# 1816 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_375
	return

EvoMasters_EvoCheckForMon_377:
# 1818 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_376
	return

EvoMasters_EvoCheckForMon_378:
# 1820 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_377
	return

EvoMasters_EvoCheckForMon_379:
# 1822 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_378
	return

EvoMasters_EvoCheckForMon_380:
# 1824 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_379
	return

EvoMasters_EvoCheckForMon_381:
# 1826 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_380
	return

EvoMasters_EvoCheckForMon_382:
# 1828 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_381
	return

EvoMasters_EvoCheckForMon_383:
# 1830 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_382
	return

EvoMasters_EvoCheckForMon_384:
# 1832 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_383
	return

EvoMasters_EvoCheckForMon_385:
# 1834 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_384
	return

EvoMasters_EvoCheckForMon_386:
# 1836 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_385
	return

EvoMasters_EvoCheckForMon_387:
# 1838 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_386
	return

EvoMasters_EvoCheckForMon_388:
# 1840 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_387
	return

EvoMasters_EvoCheckForMon_389:
# 1842 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_388
	return

EvoMasters_EvoCheckForMon_390:
# 1844 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_389
	return

EvoMasters_EvoCheckForMon_391:
# 1846 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_390
	return

EvoMasters_EvoCheckForMon_392:
# 1848 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_391
	return

EvoMasters_EvoCheckForMon_393:
# 1850 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_392
	return

EvoMasters_EvoCheckForMon_394:
# 1852 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_393
	return

EvoMasters_EvoCheckForMon_395:
# 1854 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_394
	return

EvoMasters_EvoCheckForMon_396:
# 1856 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_395
	return

EvoMasters_EvoCheckForMon_397:
# 1858 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_396
	return

EvoMasters_EvoCheckForMon_398:
# 1860 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_397
	return

EvoMasters_EvoCheckForMon_399:
# 1862 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_398
	return

EvoMasters_EvoCheckForMon_400:
# 1864 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_399
	return

EvoMasters_EvoCheckForMon_401:
# 1866 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_400
	return

EvoMasters_EvoCheckForMon_402:
# 1868 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_401
	return

EvoMasters_EvoCheckForMon_403:
# 1870 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_402
	return

EvoMasters_EvoCheckForMon_404:
# 1872 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_403
	return

EvoMasters_EvoCheckForMon_405:
# 1874 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_404
	return

EvoMasters_EvoCheckForMon_406:
# 1876 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_405
	return

EvoMasters_EvoCheckForMon_407:
# 1878 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_406
	return

EvoMasters_EvoCheckForMon_408:
# 1880 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_407
	return

EvoMasters_EvoCheckForMon_409:
# 1882 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_408
	return

EvoMasters_EvoCheckForMon_410:
# 1884 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_409
	return

EvoMasters_EvoCheckForMon_411:
# 1886 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_410
	return

EvoMasters_EvoCheckForMon_412:
# 1888 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_411
	return

EvoMasters_EvoCheckForMon_413:
# 1890 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_412
	return

EvoMasters_EvoCheckForMon_414:
# 1892 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_413
	return

EvoMasters_EvoCheckForMon_415:
# 1894 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_414
	return

EvoMasters_EvoCheckForMon_416:
# 1896 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_415
	return

EvoMasters_EvoCheckForMon_417:
# 1898 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_416
	return

EvoMasters_EvoCheckForMon_418:
# 1900 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_417
	return

EvoMasters_EvoCheckForMon_419:
# 1902 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_418
	return

EvoMasters_EvoCheckForMon_420:
# 1904 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_419
	return

EvoMasters_EvoCheckForMon_421:
# 1906 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_420
	return

EvoMasters_EvoCheckForMon_422:
# 1910 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_421
	return

EvoMasters_EvoCheckForMon_423:
# 1912 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_422
	return

EvoMasters_EvoCheckForMon_424:
# 1914 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_423
	return

EvoMasters_EvoCheckForMon_425:
# 1916 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_424
	return

EvoMasters_EvoCheckForMon_426:
# 1918 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_425
	return

EvoMasters_EvoCheckForMon_427:
# 1920 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_426
	return

EvoMasters_EvoCheckForMon_428:
# 1922 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_427
	return

EvoMasters_EvoCheckForMon_429:
# 1924 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_428
	return

EvoMasters_EvoCheckForMon_430:
# 1926 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_429
	return

EvoMasters_EvoCheckForMon_431:
# 1928 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_430
	return

EvoMasters_EvoCheckForMon_432:
# 1930 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_431
	return

EvoMasters_EvoCheckForMon_433:
# 1932 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_432
	return

EvoMasters_EvoCheckForMon_434:
# 1934 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_427
	return

EvoMasters_EvoCheckForMon_435:
# 1936 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_433
	return

EvoMasters_EvoCheckForMon_436:
# 1938 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_434
	return

EvoMasters_EvoCheckForMon_437:
# 1954 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_435
	return

EvoMasters_EvoCheckForMon_438:
# 1956 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_436
	return

EvoMasters_EvoCheckForMon_439:
# 1958 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_437
	return

EvoMasters_EvoCheckForMon_440:
# 1960 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_438
	return

EvoMasters_EvoCheckForMon_441:
# 1962 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_439
	return

EvoMasters_EvoCheckForMon_442:
# 1964 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_440
	return

EvoMasters_EvoCheckForMon_443:
# 1966 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_441
	return

EvoMasters_EvoCheckForMon_444:
# 1968 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_442
	return

EvoMasters_EvoCheckForMon_445:
# 1970 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_443
	return

EvoMasters_EvoCheckForMon_446:
# 1972 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_444
	return

EvoMasters_EvoCheckForMon_447:
# 1974 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_445
	return

EvoMasters_EvoCheckForMon_448:
# 1976 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_446
	return

EvoMasters_EvoCheckForMon_449:
# 1978 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_447
	return

EvoMasters_EvoCheckForMon_450:
# 1980 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_448
	return

EvoMasters_EvoCheckForMon_451:
# 1982 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_449
	return

EvoMasters_EvoCheckForMon_452:
# 1984 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_450
	return

EvoMasters_EvoCheckForMon_453:
# 1986 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_451
	return

EvoMasters_EvoCheckForMon_454:
# 1988 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_452
	return

EvoMasters_EvoCheckForMon_455:
# 1990 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_453
	return

EvoMasters_EvoCheckForMon_456:
# 1992 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_454
	return

EvoMasters_EvoCheckForMon_457:
# 1994 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_455
	return

EvoMasters_EvoCheckForMon_458:
# 1996 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_456
	return

EvoMasters_EvoCheckForMon_459:
# 1998 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_457
	return

EvoMasters_EvoCheckForMon_460:
# 2000 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_458
	return

EvoMasters_EvoCheckForMon_461:
# 2002 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_459
	return

EvoMasters_EvoCheckForMon_462:
# 2004 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_460
	return

EvoMasters_EvoCheckForMon_463:
# 2006 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_461
	return

EvoMasters_EvoCheckForMon_464:
# 2008 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_462
	return

EvoMasters_EvoCheckForMon_465:
# 2010 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_463
	return

EvoMasters_EvoCheckForMon_466:
# 2012 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_464
	return

EvoMasters_EvoCheckForMon_467:
# 2014 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_465
	return

EvoMasters_EvoCheckForMon_468:
# 2016 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_466
	return

EvoMasters_EvoCheckForMon_469:
# 2018 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_467
	return

EvoMasters_EvoCheckForMon_470:
# 2020 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_468
	return

EvoMasters_EvoCheckForMon_471:
# 2022 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_469
	return

EvoMasters_EvoCheckForMon_472:
# 2024 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_470
	return

EvoMasters_EvoCheckForMon_473:
# 2026 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_471
	return

EvoMasters_EvoCheckForMon_474:
# 2028 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_472
	return

EvoMasters_EvoCheckForMon_475:
# 2030 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_473
	return

EvoMasters_EvoCheckForMon_476:
# 2032 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_474
	return

EvoMasters_EvoCheckForMon_477:
# 2053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_475
	return

EvoMasters_EvoCheckForMon_478:
# 2055 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_476
	return

EvoMasters_EvoCheckForMon_479:
# 2057 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_477
	return

EvoMasters_EvoCheckForMon_480:
# 2059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_478
	return

EvoMasters_EvoCheckForMon_481:
# 2061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_479
	return

EvoMasters_EvoCheckForMon_482:
# 2063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_480
	return

EvoMasters_EvoCheckForMon_483:
# 2065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_481
	return

EvoMasters_EvoCheckForMon_484:
# 2067 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	msgbox EvoMasters_EvoCheckForMon_Text_482
	return


	.align 2
# 2073 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
MODHeadquarters_EvoShop:
# 2074 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 2075 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_STONE
# 2076 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 2077 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 2078 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_STONE
# 2079 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SUN_STONE
# 2080 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MOON_STONE
# 2081 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 2082 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 2083 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 2084 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 2085 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TART_APPLE
# 2086 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 2087 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 2088 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 2089 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 2090 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 2091 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UPGRADE
# 2092 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PROTECTOR
# 2093 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 2094 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 2095 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 2096 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 2097 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 2098 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 2099 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SACHET
# 2100 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 2101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 2102 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 2103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 2104 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 2105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 2106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 2107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 2108 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EVERSTONE
# 2109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 2110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 2111 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 2112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 2113 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 2114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 2115 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 2116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 2117 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 2118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 2119 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 2120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 2121 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 2122 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 2123 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 2124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 2125 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 2126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 2127 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 2128 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 2129 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 2130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 2131 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 2132 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 2133 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 2134 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 2135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 2136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 2137 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 2138 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 2139 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 2140 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 2141 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 2142 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 2143 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 2144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 2145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 2146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 2147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 2148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 2149 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 2150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 2151 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 2152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 2153 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_RED_ORB
# 2154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLUE_ORB
# 2155 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 2156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 2157 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 2158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 2159 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 2160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 2161 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 2162 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 2163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GENGARITE
# 2164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 2165 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PINSIRITE
# 2166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 2167 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 2168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 2169 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 2170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 2171 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_STEELIXITE
# 2172 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCIZORITE
# 2173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HERACRONITE
# 2174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 2175 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 2176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 2177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 2178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 2179 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SABLENITE
# 2180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MAWILITE
# 2181 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AGGRONITE
# 2182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 2183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MANECTITE
# 2184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 2185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 2186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 2187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BANETTITE
# 2188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ABSOLITE
# 2189 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GLALITITE
# 2190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 2191 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 2192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIASITE
# 2193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LATIOSITE
# 2194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 2195 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 2196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GALLADITE
# 2197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUDINITE
# 2198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DIANCITE
# 2199 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEEK
# 2200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 2201 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 2202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 2203 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRACIDEA
# 2204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
# 2205 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_DNA_SPLICERS
# 2206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ZYGARDE_CUBE
# 2207 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PRISON_BOTTLE
# 2208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_SOLARIZER
# 2209 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_N_LUNARIZER
# 2210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_REINS_OF_UNITY
# 2211 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 2212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GIMMIGHOUL_COIN
# 2213 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 2214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 2215 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 2216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 2217 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_ADAMANT_CRYSTAL
# 2218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_GRISEOUS_CORE
# 2219 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LUSTROUS_GLOBE
# 2220 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 2221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 2222 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 2223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 2224 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 2225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 2226 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 2227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 2228 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 2229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
# 2230 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
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
	.string "evolve them. If you use my service I can\l"
	.string "help you speed up the process and allow\l"
	.string "them to evolve almost instantly! Still,\l"
	.string "I would require sovme compensation if\l"
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
# 42 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but it seems like you don't\n"
	.string "have enough money for my services...$"

EvoMAsters_ObjectScript_Masseuse_Text_4:
# 48 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Alright, do come back if you require my\n"
	.string "services!$"

EvoMasters_CheckFreeMassageEevee_Text_0:
# 55 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
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
# 73 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "OK, that is your decision!\p"
	.string "If you change your mind about giving\n"
	.string "your Eevee a massage do come back to\l"
	.string "me.\p"
	.string "Though... I'll require you to pay the fee\n"
	.string "next time.$"

EvoMasters_CheckDeclineMassage_Text_2:
# 77 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "That is what I thought!\n"
	.string "So...$"

EvoMasters_GiveMassage_Text_0:
# 84 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Which Pokemon would you like me to give\n"
	.string "a massage?$"

EvoMasters_GiveMassage_Text_1:
# 89 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "please come again if you want me to give\n"
	.string "one of your pokemon a massage$"

EvoMasters_GiveMassage_Text_2:
# 93 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "My work is done, they should now\n"
	.string "consider you a close friend.\p"
	.string "Now for my payment$"

EvoMasters_GiveMassage_Text_3:
# 95 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Thank you for your patronage, may your\n"
	.string "friendship grow ever more!$"

EvoMasters_ObjectScript_Simulator_Text_0:
# 106 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Good day, I'm the Simulation Sister!\p"
	.string "Some pokemon require specific\n"
	.string "circumanstance to evolve them into\l"
	.string "their new form.\l"
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
# 109 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Well I probably can let you\l"
	.string "experience this simulation just once,\l"
	.string "but I would recommend you talk to my\l"
	.string "other sisters first before you take me\l"
	.string "on that offer.\p"
	.string "Would you like to try out this\n"
	.string "simulation for free?$"

EvoMasters_ObjectScript_Simulator_Text_2:
# 112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry sir, it seems that our\n"
	.string "simulation is still under construction.$"

EvoMasters_ObjectScript_Simulator_Text_3:
# 116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please talk to me again before you move\n"
	.string "on if you want to use my services for\l"
	.string "free, otherwise I'll require some\l"
	.string "compensation.$"

EvoMasters_ObjectScript_Simulator_Text_4:
# 120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Would you require us to simulate a\n"
	.string "specific environment for you?\l"
	.string "We have a processing fee of 2500 to do\l"
	.string "so.$"

EvoMasters_ObjectScript_Simulator_Text_5:
# 130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "I'm sorry, but if we want to make sure\n"
	.string "that the Simulation keeps working as\l"
	.string "intended, we do require you to pay the\l"
	.string "full fee.$"

EvoMasters_ObjectScript_Simulator_Text_6:
# 135 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you need something simulated, you\n"
	.string "know where to find me!$"

EvoMasters_ObjectScript_EvoChecker_Text_0:
# 145 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hi, I'm the Strategic Sister!\p"
	.string "I know of every pokemon what\n"
	.string "requirements they need to evolve, so if\l"
	.string "you're ever unsure how you can evolve a\l"
	.string "certain pokemon, please come to me\p"
	.string "Even if you think you know how they\n"
	.string "evolve, you might be surprised to learn\l"
	.string "that some will have different or\l"
	.string "multiple ways to evolve!\p"
	.string "Don't worry about pay, I don't require\n"
	.string "anything for my services. You can\l"
	.string "always come to me to check on what you\l"
	.string "need to do to evolve your pokemon.$"

EvoMasters_ObjectScript_EvoChecker_Text_1:
# 147 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Do you want to know how you need to\n"
	.string "evolve one of your pokemon?$"

EvoMasters_ObjectScript_EvoChecker_Text_2:
# 154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You don't need my knowledge?\n"
	.string "that is fine!\l"
	.string "Come back and find me if you ever need\l"
	.string "to know how to evolve a pokemon!$"

EvoMasters_ObjectScript_EvoChecker_Text_3:
# 163 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "If you ever want to know, you know\n"
	.string "where to find me!$"

EvoMasters_ObjectScript_MartEmployer_Text_0:
# 173 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Welcome, I'm the Sell-Out Sister!\p"
	.string "Maybe a bit of an unfortunate name, but\n"
	.string "you can come to me if you need any\l"
	.string "evolution items.$"

EvoMasters_ObjectScript_MartEmployer_Text_1:
# 177 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? Is that an Eevee I see in your\n"
	.string "party? Because it is your first time\l"
	.string "visiting us, please allow me to give you\l"
	.string "some stuff. For this once, it will be on\l"
	.string "the house!$"

EvoMasters_ObjectScript_MartEmployer_Text_2:
# 183 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hope that it will help you in your journey!$"

EvoMasters_ObjectScript_MartEmployer_Text_3:
# 185 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is there anything I could help you\n"
	.string "with?$"

EvoMasters_ObjectScript_MartEmployer_Text_4:
# 187 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Please come again!$"

EvoMasters_EvoCheckForMon_Text_0:
# 193 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Now let's see...$"

EvoMasters_EvoCheckForMon_Text_1:
# 197 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "hm... this should not have happened...$"

EvoMasters_EvoCheckForMon_Text_2:
# 714 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hm... This pokemon seems to be in peak\n"
	.string "condition!$"

EvoMasters_EvoCheckForMon_Text_3:
# 863 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? It seems like this pokemon doesn't\n"
	.string "evolve at all!$"

EvoMasters_EvoCheckForMon_Text_4:
# 874 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that an Ultra beast? I'm sorry but\n"
	.string "I'm not that familiar with their\l"
	.string "evolutions. Though, I have never seen\l"
	.string "them evovle though!$"

EvoMasters_EvoCheckForMon_Text_5:
# 969 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "WOW, a legendary pokemon!\n"
	.string "I'm pretty sure these ones don't evolve\l"
	.string "at all!$"

EvoMasters_EvoCheckForMon_Text_6:
# 994 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "How did you manage to get your hands on\n"
	.string "a mythical pokemon?!\l"
	.string "Don't look at me, as far as I know these\l"
	.string "definetly don't evolve!$"

EvoMasters_EvoCheckForMon_Text_7:
# 996 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bulbasaur to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_8:
# 998 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ivasaur to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_9:
# 1000 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Charmander to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_10:
# 1002 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Charmeleon to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_11:
# 1004 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Squirtle to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_12:
# 1006 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wartortle to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_13:
# 1008 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Caterpie to level\n"
	.string "7 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_14:
# 1010 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Metapod to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_15:
# 1012 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Weedle to level 7\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_16:
# 1014 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Kakuna to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_17:
# 1016 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pidgey to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_18:
# 1018 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pidgeotto to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_19:
# 1020 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rattata to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_20:
# 1022 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spearow to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_21:
# 1024 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ekans to level 22\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_22:
# 1026 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pickachu can evolve into two\n"
	.string "different forms.\p"
	.string "You can give them a Thunder Stone to\n"
	.string "evolve them normally or you can give\l"
	.string "them an Electrizer if you want to\l"
	.string "evolve them in a special form.$"

EvoMasters_EvoCheckForMon_Text_23:
# 1028 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sandshrew to\n"
	.string "level 22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_24:
# 1031 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nidoran to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_25:
# 1033 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nidorina needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_26:
# 1035 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nidorino needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_27:
# 1037 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Clefairy needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_28:
# 1039 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Vulpix needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_29:
# 1041 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Jigglypuff needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_30:
# 1043 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zubat to level 22\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_31:
# 1045 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Golbat will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_32:
# 1047 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Oddish to level\n"
	.string "21 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_33:
# 1049 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Gloom can evolve into two\n"
	.string "different forms.\p"
	.string "You can either give them a Leaf Stone\n"
	.string "or a Sun Stone to evolve.$"

EvoMasters_EvoCheckForMon_Text_34:
# 1051 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Paras to level 24\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_35:
# 1053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Venonat to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_36:
# 1056 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Diglett to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_37:
# 1059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Meowth to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_38:
# 1061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Psyduck to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_39:
# 1063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mankey to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_40:
# 1065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Primeape needs to use the move\n"
	.string "Rage fist 20 times in order to evolve\l"
	.string "them\p"
	.string "...\p"
	.string "What?\n"
	.string "I'm serious!$"

EvoMasters_EvoCheckForMon_Text_41:
# 1068 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Growlithe needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_42:
# 1070 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Poliwag to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_43:
# 1072 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Poliwirl can evolve into two\n"
	.string "different forms.\p"
	.string "You can either give them a Water Stone\n"
	.string "or a Kings Rock to evolve them.$"

EvoMasters_EvoCheckForMon_Text_44:
# 1074 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Abra to level 16\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_45:
# 1076 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Kadabra needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_46:
# 1078 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Machop to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_47:
# 1080 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Machoke needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_48:
# 1082 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bellsprout to\n"
	.string "level 21 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_49:
# 1084 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Weepingbell needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_50:
# 1086 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tentacool to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_51:
# 1089 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Geodude to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_52:
# 1092 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Graveler needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_53:
# 1095 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Ponyta needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_54:
# 1097 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Slowpoke to\n"
	.string "level 37 to evolve them.\p"
	.string "Alternatively you can also give them a\n"
	.string "Kings Rock to evolve them.$"

EvoMasters_EvoCheckForMon_Text_55:
# 1099 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Magnemite to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_56:
# 1101 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Magneton needs a Thunder Stonder\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_57:
# 1103 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Farfetched need to hit 3 critical\n"
	.string "hits in the same fight to evolve them.\p"
	.string "JUST KIDDING!\p"
	.string "He will evolve after hitting one critical\n"
	.string "hit!$"

EvoMasters_EvoCheckForMon_Text_58:
# 1105 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Doduo to level 31\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_59:
# 1107 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Seel to level 34\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_60:
# 1110 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grimer to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_61:
# 1112 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Shellder needs a Water Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_62:
# 1114 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gastly to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_63:
# 1116 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Haunter needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_64:
# 1118 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Onix needs a Metal Coat to evolve.$"

EvoMasters_EvoCheckForMon_Text_65:
# 1120 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drowzee to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_66:
# 1122 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Krabby to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_67:
# 1124 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Voltorb to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_68:
# 1126 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Execute can evolve into two\n"
	.string "different forms.\p"
	.string "You can give them a Leaf Stone to\n"
	.string "evolve them normally or you can give\l"
	.string "them a Dragon Fang if you want to\l"
	.string "evolve them into their special form.$"

EvoMasters_EvoCheckForMon_Text_69:
# 1128 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your cubone to level\n"
	.string "28 to evolve them.\p"
	.string "Alternatively, you can give them a\n"
	.string "Magmarizer to evolve them as well.$"

EvoMasters_EvoCheckForMon_Text_70:
# 1130 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Lickitung needs to learn Rollout in\n"
	.string "order to evolve them.\p"
	.string "I believe he learns this around level 6.$"

EvoMasters_EvoCheckForMon_Text_71:
# 1132 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Koffing to level\n"
	.string "35 to evolve them.\p"
	.string "Alternatively, you can give them a\n"
	.string "Reaper Cloth to evolve them.$"

EvoMasters_EvoCheckForMon_Text_72:
# 1134 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rhyhorn to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_73:
# 1136 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Rhydon needs a Protector to\n"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_74:
# 1138 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Chansey will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_75:
# 1140 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Tangela needs to learn Ancient\n"
	.string "Power in order to evolve them.\p"
	.string "I believe he learns this around level 24$"

EvoMasters_EvoCheckForMon_Text_76:
# 1142 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Horsea to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_77:
# 1144 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Seadra needs a Dragon Scale to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_78:
# 1146 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Goldeen to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_79:
# 1148 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Staryu needs a Water Stone to\n"
	.string "evolve$"

EvoMasters_EvoCheckForMon_Text_80:
# 1150 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Scyther can evolve into two different\n"
	.string "forms. You can either give them either a\l"
	.string "Metal Coat or a Black Augurite to\l"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_81:
# 1152 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Electabuzz needs an Electirizer to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_82:
# 1154 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Magmag needs a Magmarizer to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_83:
# 1156 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Magikarp to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_84:
# 1158 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Now this...\p"
	.string "This one is interesting!\p"
	.string "Do you want them to become a Water\n"
	.string "type? Give them a Water stone!\l"
	.string "An Electric type? Thunder Stone!\l"
	.string "A Fire type? Fire Stone!\l"
	.string "A Grass type? Leaf Stone!\l"
	.string "An Ice Type? Ice Stone!\p"
	.string "But that is not all!\p"
	.string "talk to my sister or create a natural\n"
	.string "bond with them naturally. If they\l"
	.string "consider you a close friend they will\l"
	.string "either evolve into a Dark type during\l"
	.string "the night or Psychic type during the\l"
	.string "day.\l"
	.string "Or, if they already know a Fairy Type\l"
	.string "move, they will turn into a Fairy Type!\p"
	.string "You have endless choices with this one,\n"
	.string "so choose wisely!$"

EvoMasters_EvoCheckForMon_Text_85:
# 1160 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Porygon needs an Upgrade to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_86:
# 1162 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Omanyte to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_87:
# 1164 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Kabuto to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_88:
# 1166 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dratini to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_89:
# 1168 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dragonair to\n"
	.string "level 55 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_90:
# 1170 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chikorita to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_91:
# 1172 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bayleef to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_92:
# 1174 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cyndaquil to\n"
	.string "level 14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_93:
# 1176 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Quilava can evolve into two\n"
	.string "different forms.\p"
	.string "You can train them to level 36 to evolve\n"
	.string "them normally, or you can give them a\l"
	.string "Reaper Cloth to evolve them in their\l"
	.string "special form.$"

EvoMasters_EvoCheckForMon_Text_94:
# 1178 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Totodile to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_95:
# 1180 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Croconaw to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_96:
# 1182 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sentret to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_97:
# 1184 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hoothoot to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_98:
# 1186 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ledyba to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_99:
# 1188 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spinarak to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_100:
# 1190 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chinchou to\n"
	.string "level 27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_101:
# 1192 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pichu will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_102:
# 1194 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Cleffa will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_103:
# 1196 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Igglybuff will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_104:
# 1198 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Togepi will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_105:
# 1200 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Togetic needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_106:
# 1202 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Natu to level 25\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_107:
# 1204 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mareep to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_108:
# 1206 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Flaaffy to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_109:
# 1208 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Marill to level 18\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_110:
# 1210 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hoppip to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_111:
# 1212 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skiploom to level\n"
	.string "27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_112:
# 1214 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Aipom needs to learn Double Hit in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 32.$"

EvoMasters_EvoCheckForMon_Text_113:
# 1216 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sunkern needs a Sun Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_114:
# 1218 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Yanma needs to learn Ancient\n"
	.string "Power in order to evolve them.\p"
	.string "I believe they learn this at level 33.$"

EvoMasters_EvoCheckForMon_Text_115:
# 1221 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wooper to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_116:
# 1223 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Murkow needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_117:
# 1225 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Misdreavus needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_118:
# 1227 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Girafarig needs to learn Twin Beam\n"
	.string "in order to evolve them.\p"
	.string "I believe they learn this at level 32.$"

EvoMasters_EvoCheckForMon_Text_119:
# 1229 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pineco to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_120:
# 1231 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dunsparce needs to learn Hyper\n"
	.string "Drill in order to evolve them.\p"
	.string "I believe they learn this at level 32.$"

EvoMasters_EvoCheckForMon_Text_121:
# 1233 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Gligar needs a Razor Fang at night\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_122:
# 1235 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Snubbull to level\n"
	.string "23 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_123:
# 1237 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sneasel needs a Razor Claw at\n"
	.string "night to evolve.$"

EvoMasters_EvoCheckForMon_Text_124:
# 1239 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Teddiursa to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_125:
# 1241 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Ursaring can evolve into two\n"
	.string "different forms. You can give them\l"
	.string "either a Peat Block or Reaper Cloth at\l"
	.string "night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_126:
# 1243 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Slugma to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_127:
# 1245 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Swinub to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_128:
# 1247 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Piloswine needs to learn Ancient\n"
	.string "Power in order to evolve them.\p"
	.string "Hm... I believe it should have already\n"
	.string "learned that by now...$"

EvoMasters_EvoCheckForMon_Text_129:
# 1249 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Remoraid to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_130:
# 1251 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Houndour to\n"
	.string "level 24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_131:
# 1253 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Phanpy to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_132:
# 1255 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Porygon2 needs a Dubious Disc to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_133:
# 1257 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Stantler needs to use the move\n"
	.string "Psyshiled Bash 20 times in order to\l"
	.string "evolve them\p"
	.string "...\p"
	.string "What?\n"
	.string "I'm serious.$"

EvoMasters_EvoCheckForMon_Text_134:
# 1259 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tyrogue to level\n"
	.string "20 to evolve them.\p"
	.string "They actually can evolve into three\n"
	.string "different forms based on their stats.\p"
	.string "They have one form if their Attack is\n"
	.string "higher as their Defense, one form if\l"
	.string "their Defense is higher than their\l"
	.string "Defense and one form if their Defense\l"
	.string "and Attack are equal.\p"
	.string "Maybe the general store next door has\n"
	.string "some items if you want your Tyrogue to\l"
	.string "evolve into a specific one!$"

EvoMasters_EvoCheckForMon_Text_135:
# 1261 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Smoochum to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_136:
# 1263 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Elekid to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_137:
# 1265 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Magby to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_138:
# 1267 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Larvitar to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_139:
# 1269 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pupitar to level\n"
	.string "55 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_140:
# 1271 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Treecko to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_141:
# 1273 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grovyle to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_142:
# 1275 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Torchic to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_143:
# 1277 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Combusken to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_144:
# 1279 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mudkip to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_145:
# 1281 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your MarshTomp to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_146:
# 1283 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Poochyena to\n"
	.string "level 18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_147:
# 1286 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zigzagoon to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_148:
# 1288 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wurmple to level\n"
	.string "7 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_149:
# 1290 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Silcoon to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_150:
# 1292 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cascoon to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_151:
# 1294 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lotad to level 14\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_152:
# 1296 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Lombre needs a Water Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_153:
# 1298 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Seedot to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_154:
# 1300 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nuzleaf needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_155:
# 1302 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Taillow to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_156:
# 1304 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wingull to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_157:
# 1306 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ralts to level 20\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_158:
# 1308 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Kirlia can evolve into two\n"
	.string "different forms. You can either train it\l"
	.string "to level 30 or, if it is a male, you can\l"
	.string "give it a Dawn Stone to evolve them.$"

EvoMasters_EvoCheckForMon_Text_159:
# 1310 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Surskit to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_160:
# 1312 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shroomish to\n"
	.string "level 23 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_161:
# 1314 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Slakoth to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_162:
# 1316 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vigoroth to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_163:
# 1318 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nincada to level\n"
	.string "20 to evolve them.\p"
	.string "I also heard a rumor that if you have an\n"
	.string "empty spot left in your party a second\l"
	.string "pokemon will appear after they have\l"
	.string "evolved!$"

EvoMasters_EvoCheckForMon_Text_164:
# 1320 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Whismur to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_165:
# 1322 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Loudred to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_166:
# 1324 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Makhuita to\n"
	.string "level 24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_167:
# 1326 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Azurill will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_168:
# 1328 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Nosepass needs a Thunder Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_169:
# 1330 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Skitty needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_170:
# 1332 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Aron to level 32\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_171:
# 1334 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lairon to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_172:
# 1336 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Meditite to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_173:
# 1338 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Electrike to\n"
	.string "level 26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_174:
# 1340 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Roselia needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_175:
# 1342 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gulpin to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_176:
# 1344 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Carvanha to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_177:
# 1346 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wailmer to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_178:
# 1348 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Numel to level 33\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_179:
# 1350 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spoink to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_180:
# 1352 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Trapinch to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_181:
# 1354 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vibrava to level\n"
	.string "45 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_182:
# 1356 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cacnea to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_183:
# 1358 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Swablu to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_184:
# 1360 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Barboach to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_185:
# 1362 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Corphish to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_186:
# 1364 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Baltoy to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_187:
# 1366 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lileep to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_188:
# 1368 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Anorith to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_189:
# 1370 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to make your Feedbas feel\n"
	.string "beautifull by feeding it poke blocks,\l"
	.string "then it'll evolve on its own.\p"
	.string "Just joking, you just need to give it a\n"
	.string "Prism Scale to evolve it.$"

EvoMasters_EvoCheckForMon_Text_190:
# 1372 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shuppet to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_191:
# 1374 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Duskull to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_192:
# 1376 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dusclops needs a Reaper Cloth to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_193:
# 1378 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wynaut to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_194:
# 1380 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Snorunt can evolve into two\n"
	.string "different forms.\p"
	.string "You can either train them to level 42 or,\n"
	.string "if they are female, give them a Dawn\l"
	.string "Stone to evolve.$"

EvoMasters_EvoCheckForMon_Text_195:
# 1382 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spheal to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_196:
# 1384 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sealeo to level\n"
	.string "44 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_197:
# 1386 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Clamperl can evolve into two\n"
	.string "different forms.\p"
	.string "You can give it either a Deep Sea Tooth\n"
	.string "or a Deep Sea Scale to evolve.$"

EvoMasters_EvoCheckForMon_Text_198:
# 1388 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bagon to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_199:
# 1390 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shelgon to level\n"
	.string "50 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_200:
# 1392 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Beldum to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_201:
# 1394 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Metang to level\n"
	.string "45 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_202:
# 1396 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Turtwig to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_203:
# 1398 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grotle to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_204:
# 1400 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chimcar to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_205:
# 1402 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Monferno to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_206:
# 1404 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Piplup to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_207:
# 1406 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Prinplup to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_208:
# 1408 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Starley to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_209:
# 1410 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Staravia to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_210:
# 1412 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bidoof to level\n"
	.string "15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_211:
# 1414 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Kricketot to\n"
	.string "level 10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_212:
# 1416 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shinx to level 15\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_213:
# 1418 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Luxio to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_214:
# 1420 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Budew will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_215:
# 1422 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cranidos to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_216:
# 1424 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shieldon to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_217:
# 1428 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Burmy to level 20\n"
	.string "to evolve them.\p"
	.string "I heard btw that the male and female\n"
	.string "species evolve into different pokemon!$"

EvoMasters_EvoCheckForMon_Text_218:
# 1430 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Combee, if it is a\n"
	.string "female, to level 21 to evolve them.\p"
	.string "If you have a male Combee than I'm\n"
	.string "sorry to dissapoint you, but that one\l"
	.string "does not evolve...$"

EvoMasters_EvoCheckForMon_Text_219:
# 1432 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Buizel to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_220:
# 1434 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cherubi to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_221:
# 1437 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shellos to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_222:
# 1439 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drifloon to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_223:
# 1441 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Buneary will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_224:
# 1443 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Glameow to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_225:
# 1445 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Chingling will evolve naturally\n"
	.string "after you create a bond with them at\l"
	.string "night.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_226:
# 1447 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Stunky to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_227:
# 1449 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bronzor to level\n"
	.string "33 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_228:
# 1451 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Bonsly needs to learn Mimic in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 16.$"

EvoMasters_EvoCheckForMon_Text_229:
# 1453 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Mime Jr will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_230:
# 1455 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Happiny will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_231:
# 1457 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gible to level 24\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_232:
# 1459 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gabite to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_233:
# 1461 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Munchlax will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_234:
# 1463 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Riolu will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_235:
# 1465 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hippopotas to\n"
	.string "level 34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_236:
# 1467 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skorupi to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_237:
# 1469 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Croagunk to\n"
	.string "level 37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_238:
# 1471 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Finneon to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_239:
# 1473 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Mantyke will evolve if you have a\n"
	.string "Remoraid in your party.\p"
	.string "...\p"
	.string "What? I'm serious!$"

EvoMasters_EvoCheckForMon_Text_240:
# 1475 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Snover to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_241:
# 1477 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Oh? It seems like this pokemon doesn't\n"
	.string "evolve at all!\p"
	.string "hm... I do believe one of my sisters has\n"
	.string "something that could change his form\l"
	.string "though...$"

EvoMasters_EvoCheckForMon_Text_242:
# 1479 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "How did you manage to get your hands on\n"
	.string "a mythical pokemon?!\l"
	.string "Don't look at me, as far as I know these\l"
	.string "definetly don't evolve!\p"
	.string "...\p"
	.string "What do you mean you got it from\n"
	.string "breeding a Manaphy?\p"
	.string "Don't look at me I have no idea how it\n"
	.string "would evolve into another Manaphy!$"

EvoMasters_EvoCheckForMon_Text_243:
# 1481 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "How did you manage to get your hands on\n"
	.string "a mythical pokemon?!\l"
	.string "Don't look at me, as far as I know these\l"
	.string "definetly don't evolve!\p"
	.string "Though, I did hear it is the only\n"
	.string "breedable mythical pokemon...$"

EvoMasters_EvoCheckForMon_Text_244:
# 1500 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Isn't God perfect as he is? I don't\n"
	.string "think we need to concern us about an\l"
	.string "evolution of God.$"

EvoMasters_EvoCheckForMon_Text_245:
# 1502 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Snivy to level 17\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_246:
# 1504 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Servine to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_247:
# 1506 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tepig to level 17\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_248:
# 1508 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pignite to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_249:
# 1510 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Oshawott to\n"
	.string "level 17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_250:
# 1512 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dewott can evolve into two\n"
	.string "different forms. You can train them to\l"
	.string "level 36 to evolve them normally, or you\l"
	.string "can give them a Dubious Disc to evolve\l"
	.string "them into their special form.$"

EvoMasters_EvoCheckForMon_Text_251:
# 1514 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Patrat to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_252:
# 1516 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lillipup to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_253:
# 1518 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Herdier to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_254:
# 1520 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Purrloin to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_255:
# 1522 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pansage needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_256:
# 1524 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pansear needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_257:
# 1526 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Panpour needs a Water Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_258:
# 1528 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Munna needs a Moon Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_259:
# 1530 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pidove to level\n"
	.string "21 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_260:
# 1532 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tranquill to\n"
	.string "level 32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_261:
# 1534 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Blitzle to level\n"
	.string "27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_262:
# 1536 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Roggenrola to\n"
	.string "level 25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_263:
# 1538 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Boldore needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_264:
# 1540 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Woobat will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_265:
# 1542 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dilbur to level\n"
	.string "31 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_266:
# 1544 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Timburr to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_267:
# 1546 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Gurdurr needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_268:
# 1548 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tympole to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_269:
# 1550 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Palpitoad to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_270:
# 1552 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sewaddle to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_271:
# 1554 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Swadloon will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_272:
# 1556 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Venipede to\n"
	.string "level 22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_273:
# 1558 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Whirlipede to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_274:
# 1560 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Cottonee needs a Sun Stone to\n"
	.string "evolve$"

EvoMasters_EvoCheckForMon_Text_275:
# 1562 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Petilil can transform into two\n"
	.string "different forms.\p"
	.string "You can give it either a Sun Stone or a\n"
	.string "Shiny Stone to evolve them.$"

EvoMasters_EvoCheckForMon_Text_276:
# 1564 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sandile to level\n"
	.string "29 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_277:
# 1566 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Krokorok to\n"
	.string "level 40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_278:
# 1568 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Darumaka to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_279:
# 1570 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dwebble to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_280:
# 1572 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Scraggy to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_281:
# 1574 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Yamask to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_282:
# 1576 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tirtouga to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_283:
# 1578 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Archen to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_284:
# 1580 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Trubbish to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_285:
# 1583 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zorua to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_286:
# 1585 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Minccino needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_287:
# 1587 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gothita to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_288:
# 1589 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gothorita to\n"
	.string "level 41 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_289:
# 1591 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Solosis to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_290:
# 1593 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Duosion to level\n"
	.string "41 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_291:
# 1595 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ducklett to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_292:
# 1597 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vanillite to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_293:
# 1599 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vanillish to\n"
	.string "level 47 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_294:
# 1604 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Deerling to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_295:
# 1606 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Karrablast will evolve if you have\n"
	.string "either a Shelmet or Accelgor in your\l"
	.string "party.$"

EvoMasters_EvoCheckForMon_Text_296:
# 1608 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Foongus to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_297:
# 1610 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Frillish to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_298:
# 1612 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Joltik to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_299:
# 1614 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Ferroseed to\n"
	.string "level 40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_300:
# 1616 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Klink to level 38\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_301:
# 1618 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Klang to level 49\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_302:
# 1620 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tynamo to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_303:
# 1622 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Eelektrik needs a Thunder Stone\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_304:
# 1624 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Elgyem to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_305:
# 1626 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Litwick to level\n"
	.string "41 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_306:
# 1628 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Lampent needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_307:
# 1630 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Axew to level 38\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_308:
# 1632 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fraxure to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_309:
# 1634 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cubchoo to level\n"
	.string "37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_310:
# 1636 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Shelmet will evolve if you have\n"
	.string "either a Karrablast or an Escavalier in\l"
	.string "your party.$"

EvoMasters_EvoCheckForMon_Text_311:
# 1638 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mienfoo to level\n"
	.string "50 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_312:
# 1640 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Golett to level\n"
	.string "43 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_313:
# 1642 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pawniard to level\n"
	.string "52 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_314:
# 1644 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Bisharp needs a Leader Crest to\n"
	.string "evolve it.$"

EvoMasters_EvoCheckForMon_Text_315:
# 1646 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Rufflet can evolve into two\n"
	.string "different forms.\p"
	.string "You can either train them to level 54 to\n"
	.string "evolve them normally, or you can give\l"
	.string "them a Prism Scale to evolve them into\l"
	.string "their special form$"

EvoMasters_EvoCheckForMon_Text_316:
# 1648 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Vullaby to level\n"
	.string "54 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_317:
# 1650 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Deino to level 50\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_318:
# 1652 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Zweilous to level\n"
	.string "64 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_319:
# 1654 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Larvesta to\n"
	.string "level 59 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_320:
# 1656 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chespin to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_321:
# 1658 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Quilladin to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_322:
# 1660 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fennekin to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_323:
# 1662 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Braixen to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_324:
# 1664 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Froakie to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_325:
# 1666 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Frogadier to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_326:
# 1668 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bunnelby to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_327:
# 1670 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fletchling to\n"
	.string "level 17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_328:
# 1672 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fletchinder to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_329:
# 1693 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Scatterbug to\n"
	.string "level 9 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_330:
# 1714 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Spewpa to level\n"
	.string "12 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_331:
# 1716 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Litleo to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_332:
# 1722 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Flabebe to level\n"
	.string "19 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_333:
# 1728 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Floette needs a Shiny Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_334:
# 1730 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skiddo to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_335:
# 1732 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pancham to level\n"
	.string "32, while having a dark type on your\l"
	.string "team to evolve them.\p"
	.string "...\p"
	.string "What? I'm serious!$"

EvoMasters_EvoCheckForMon_Text_336:
# 1734 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Espurr to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_337:
# 1736 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Honedge to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_338:
# 1738 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Doublade needs a Dusk Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_339:
# 1740 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Spritzee needs a Sachet to evolve.$"

EvoMasters_EvoCheckForMon_Text_340:
# 1742 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Swirlix needs a Whipped Dream to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_341:
# 1744 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Inkay to level 30\n"
	.string "and hold your console upside down to\l"
	.string "evolve them.\p"
	.string "Just kidding, you only need to train it\n"
	.string "to level 30.$"

EvoMasters_EvoCheckForMon_Text_342:
# 1746 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Binacle to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_343:
# 1748 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skrelp to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_344:
# 1750 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Clauncher to\n"
	.string "level 37 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_345:
# 1752 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Helioptile needs a Sun Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_346:
# 1754 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tyrunt to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_347:
# 1756 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Amaura to level\n"
	.string "39 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_348:
# 1758 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Goomy can evolve into two\n"
	.string "different forms. You can either train\l"
	.string "them to level 40 to evolve them normally\l"
	.string "or you can give them a Metal Alloy to\l"
	.string "evolve them in their special form.$"

EvoMasters_EvoCheckForMon_Text_349:
# 1761 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sliggoo to level\n"
	.string "50 while them is raining or it's foggy to\l"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_350:
# 1763 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Phantump needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_351:
# 1768 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pumpkaboo needs a Linking Cord to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_352:
# 1770 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Bergmite can evolve into two\n"
	.string "different forms. You can train them to\l"
	.string "level 37 to evolve them normally or you\l"
	.string "can give them a Razor Claw to evolve\l"
	.string "them into their special form.$"

EvoMasters_EvoCheckForMon_Text_353:
# 1772 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Noibat to level\n"
	.string "48 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_354:
# 1774 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rowlet to level\n"
	.string "17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_355:
# 1776 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dartrix can evolve into two\n"
	.string "different forms. You can train them to\l"
	.string "level 34 to evolve them normally or you\l"
	.string "can give them a Protector to evolve\l"
	.string "them into their special form.$"

EvoMasters_EvoCheckForMon_Text_356:
# 1778 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Litten to level\n"
	.string "17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_357:
# 1780 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Torracat to\n"
	.string "level 34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_358:
# 1782 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Popplio to level\n"
	.string "17 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_359:
# 1784 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Brionne to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_360:
# 1786 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pikipek to level\n"
	.string "14 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_361:
# 1788 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Trumbeak to\n"
	.string "level 28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_362:
# 1790 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Yungoos to level\n"
	.string "20 during the day to evolve them.$"

EvoMasters_EvoCheckForMon_Text_363:
# 1792 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grubbin to level\n"
	.string "20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_364:
# 1794 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Charjabug needs a Thunder Stone\n"
	.string "to evolve.$"

EvoMasters_EvoCheckForMon_Text_365:
# 1796 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Crabrawler needs a Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_366:
# 1798 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cutiefly to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_367:
# 1800 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rockruff to\n"
	.string "level 25 to evolve them.\p"
	.string "Depending on the time --morning, dusk\n"
	.string "or night-- it will evolve into a\l"
	.string "different form.$"

EvoMasters_EvoCheckForMon_Text_368:
# 1802 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mareanie to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_369:
# 1804 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Mudbray to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_370:
# 1806 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dewpider to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_371:
# 1808 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fomantis to\n"
	.string "level 34 during the day to evolve them.$"

EvoMasters_EvoCheckForMon_Text_372:
# 1810 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Morelull to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_373:
# 1812 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Salandit, if it is\n"
	.string "a female, to level 21 to evolve them.\p"
	.string "If you have a male Combee than I'm\n"
	.string "sorry to dissapoint you, but that one\l"
	.string "does not evolve...$"

EvoMasters_EvoCheckForMon_Text_374:
# 1814 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Stufful to level\n"
	.string "27 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_375:
# 1816 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Bounsweet to\n"
	.string "level 18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_376:
# 1818 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Steenee needs to learn Stomp in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 28.$"

EvoMasters_EvoCheckForMon_Text_377:
# 1820 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wimpod to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_378:
# 1822 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sandygast to\n"
	.string "level 42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_379:
# 1824 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Type_Null will evolve naturally\n"
	.string "after you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_380:
# 1826 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Jango-o to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_381:
# 1828 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hakamo-o to\n"
	.string "level 45 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_382:
# 1830 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that a Legendary pokemon? I\n"
	.string "thought they never evolved, but I would\l"
	.string "swear this little one does at level 43!$"

EvoMasters_EvoCheckForMon_Text_383:
# 1832 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that a Legendary pokemon? I\n"
	.string "thought they never evolved, but I would\l"
	.string "swear this little one does!\p"
	.string "What's more, I believe it can even\n"
	.string "evolve into two different forms.\l"
	.string "One form during the day and another\l"
	.string "during the night.\p"
	.string "For both versions they need to be\n"
	.string "trained to level 53.$"

EvoMasters_EvoCheckForMon_Text_384:
# 1834 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Well if that is not a strange fellow.\p"
	.string "Many people that he can only evolve if\n"
	.string "you have like catch over a 100 versions\l"
	.string "of him, but as far as I can tell you just\l"
	.string "need to level them up to level 40!$"

EvoMasters_EvoCheckForMon_Text_385:
# 1836 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Grookey to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_386:
# 1838 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rillaboom to\n"
	.string "level 35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_387:
# 1840 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Scorbunny to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_388:
# 1842 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Raboot to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_389:
# 1844 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sobble to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_390:
# 1846 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drizzile to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_391:
# 1848 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Skwovet to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_392:
# 1850 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rookidee to\n"
	.string "level 18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_393:
# 1852 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Corvisquire to\n"
	.string "level 38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_394:
# 1854 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Blipbug to level\n"
	.string "10 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_395:
# 1856 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dottler to level\n"
	.string "30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_396:
# 1858 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nickit to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_397:
# 1860 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Gossifleur to\n"
	.string "level 20 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_398:
# 1862 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wooloo to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_399:
# 1864 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Chewtle to level\n"
	.string "22 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_400:
# 1866 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Yamper to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_401:
# 1868 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rolycoly to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_402:
# 1870 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Carkol to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_403:
# 1872 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Applin can evolve into three\n"
	.string "different forms. You can evolve them\l"
	.string "either with a Tart Apple, Sweet Apple or\l"
	.string "a Syrupy apple.$"

EvoMasters_EvoCheckForMon_Text_404:
# 1874 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Silicobra to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_405:
# 1876 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Arrokuda to\n"
	.string "level 26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_406:
# 1878 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Toxel to level 30\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_407:
# 1880 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sizzilipede to\n"
	.string "level 28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_408:
# 1882 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Clobbopus needs to learn Taunt in\n"
	.string "order to evolve them.\p"
	.string "I believe they learn this at level 35.$"

EvoMasters_EvoCheckForMon_Text_409:
# 1884 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sinistea needs a Cracked Pot to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_410:
# 1886 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hatenna to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_411:
# 1888 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Hattrem to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_412:
# 1890 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Impidimp to level\n"
	.string "32 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_413:
# 1892 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Morgrem to level\n"
	.string "42 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_414:
# 1894 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Milcery has.... many forms. I'm still\n"
	.string "working on figuring out how to exactly\l"
	.string "all their evolutions work$"

EvoMasters_EvoCheckForMon_Text_415:
# 1896 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Snom will evolve naturally after\n"
	.string "you create a bond with them at night..\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_416:
# 1898 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Cufant to level\n"
	.string "34 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_417:
# 1900 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Duraludon needs a Metal Alloy to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_418:
# 1902 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dreepy to level\n"
	.string "50 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_419:
# 1904 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Drakloak to level\n"
	.string "60 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_420:
# 1906 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Is that a legendary pokemon? I thought\n"
	.string "they never evolved, but I would swear\l"
	.string "this little one does!\p"
	.string "What's more, I believe it can even\n"
	.string "evolve into two different forms.\l"
	.string "One form during the day and another\l"
	.string "during the night.\p"
	.string "You'll need to give it the Scroll Of\n"
	.string "Darkness or the Scroll Of Waters to\l"
	.string "evolve them.$"

EvoMasters_EvoCheckForMon_Text_421:
# 1910 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "WOW, a legendary pokemon!\n"
	.string "I'm pretty sure these ones don't evolve\l"
	.string "at all!\p"
	.string "Though I do believe you can make it\n"
	.string "change form somehow...$"

EvoMasters_EvoCheckForMon_Text_422:
# 1912 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Rattata to level\n"
	.string "20 at night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_423:
# 1914 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sanshrew needs a Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_424:
# 1916 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Vulpix needs a Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_425:
# 1918 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Meowth will evolve naturally after\n"
	.string "you create a bond with them.\p"
	.string "You can talk to my sister if you want to\n"
	.string "speed this process up!$"

EvoMasters_EvoCheckForMon_Text_426:
# 1920 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Slowpoke can evolve into two\n"
	.string "different forms.\p"
	.string "You can either give it a Glarica Cuff or\n"
	.string "a Glarica Wreath to evolve them.$"

EvoMasters_EvoCheckForMon_Text_427:
# 1922 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "$"

EvoMasters_EvoCheckForMon_Text_428:
# 1924 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Corsola to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_429:
# 1926 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Linoone to level\n"
	.string "35 at night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_430:
# 1928 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Darumaka needs an Ice Stone to\n"
	.string "evolve$"

EvoMasters_EvoCheckForMon_Text_431:
# 1930 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Yamask needs to take 49 damage\n"
	.string "and then walk under a very specific\l"
	.string "point.\p"
	.string "Just kidding!\p"
	.string "You just need to train the to level 34$"

EvoMasters_EvoCheckForMon_Text_432:
# 1932 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Voltorb needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_433:
# 1936 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Qwilfish needs to learn Barb\n"
	.string "Barrage in order to evolve them.\p"
	.string "I believe they learn this at level 16.$"

EvoMasters_EvoCheckForMon_Text_434:
# 1938 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sneasel needs a Razor Claw during\n"
	.string "the day to evolve.$"

EvoMasters_EvoCheckForMon_Text_435:
# 1954 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pikachu is quite special, it seems\n"
	.string "like your Pikachu can't evolve at all!$"

EvoMasters_EvoCheckForMon_Text_436:
# 1956 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Basculin needs to take 294 recoil\n"
	.string "damage to evolve.\p"
	.string "...\p"
	.string "What? I'm serious!$"

EvoMasters_EvoCheckForMon_Text_437:
# 1958 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Floette is quite special, it seems\n"
	.string "like your Floette can't evolve at all!$"

EvoMasters_EvoCheckForMon_Text_438:
# 1960 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Hm... I'm not sure about this one I'm\n"
	.string "afraid...$"

EvoMasters_EvoCheckForMon_Text_439:
# 1962 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Sinistea needs a Cracked...\p"
	.string "No wait, this design, is marvelous!\p"
	.string "You'll need a Chipped Pot to evolve this\n"
	.string "one!$"

EvoMasters_EvoCheckForMon_Text_440:
# 1964 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Sprigatito to\n"
	.string "level 16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_441:
# 1966 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Floragato to\n"
	.string "level 36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_442:
# 1968 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fuecoco to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_443:
# 1970 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Crocalor to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_444:
# 1972 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Quaxly to level\n"
	.string "16 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_445:
# 1974 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Quaxwell to level\n"
	.string "36 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_446:
# 1976 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Lechonk to level\n"
	.string "18 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_447:
# 1978 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tarountula to\n"
	.string "level 15 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_448:
# 1980 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nymble to level\n"
	.string "24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_449:
# 1982 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Pawmi to level 18\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_450:
# 1984 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Pawmo needs a Thunder Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_451:
# 1986 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tandemaus to\n"
	.string "level 25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_452:
# 1988 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Fidough to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_453:
# 1990 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Smoliv to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_454:
# 1992 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Dolliv to level 35\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_455:
# 1994 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Nacli to level 24\n"
	.string "to evolve them.$"

EvoMasters_EvoCheckForMon_Text_456:
# 1996 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Naclstack to\n"
	.string "level 38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_457:
# 1998 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Charcadet can evolve into two\n"
	.string "different forms. You can either give\l"
	.string "them an Auspicious Armour or a\l"
	.string "Malicious Armour to evolve them.$"

EvoMasters_EvoCheckForMon_Text_458:
# 2000 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Tadbulb needs a Thunder Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_459:
# 2002 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wattrel to level\n"
	.string "25 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_460:
# 2004 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Maschiff to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_461:
# 2006 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Shroodle to level\n"
	.string "28 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_462:
# 2008 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Brablin needs a Leaf Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_463:
# 2010 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Toadscool to\n"
	.string "level 30 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_464:
# 2012 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Capsakid needs a Fire Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_465:
# 2014 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Rellor needs a Peat Block to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_466:
# 2016 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Flittle to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_467:
# 2018 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tinkatink to\n"
	.string "level 24 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_468:
# 2020 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Tinkatuff to\n"
	.string "level 38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_469:
# 2022 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Wiglett to level\n"
	.string "26 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_470:
# 2024 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Finizen to level\n"
	.string "38 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_471:
# 2026 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Varoom to level\n"
	.string "40 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_472:
# 2028 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Glimmet to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_473:
# 2030 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Greavard to\n"
	.string "level 35 at night to evolve them.$"

EvoMasters_EvoCheckForMon_Text_474:
# 2032 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Cetoddle needs an Ice Stone to\n"
	.string "evolve.$"

EvoMasters_EvoCheckForMon_Text_475:
# 2053 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "What a strange pokemon? I have never\n"
	.string "seen this pokemon before. I don't\l"
	.string "believe it evolves though...$"

EvoMasters_EvoCheckForMon_Text_476:
# 2055 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Frigibax to level\n"
	.string "35 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_477:
# 2057 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to train your Articbax to level\n"
	.string "54 to evolve them.$"

EvoMasters_EvoCheckForMon_Text_478:
# 2059 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "You need to to collete 999 Gimmighoul\n"
	.string "Coins to evolve your Gimmighoul.\p"
	.string "Just kidding! You can just give it a\n"
	.string "Kings Rock to evolve them.$"

EvoMasters_EvoCheckForMon_Text_479:
# 2061 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Dipplin needs to learn Dragon\n"
	.string "Cheer in order to evolve them.\p"
	.string "hm... I believe it doesn't learn that by\n"
	.string "himself, but the TM Store further down\l"
	.string "the hall should be able to sell you that\l"
	.string "move.$"

EvoMasters_EvoCheckForMon_Text_480:
# 2063 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Poltchageist needs an\n"
	.string "Unremarkable Teacup to evolve.$"

EvoMasters_EvoCheckForMon_Text_481:
# 2065 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "Your Polterchageist needs an\n"
	.string "Unremarkable...\p"
	.string "Wait, this design is real! you'll need an\n"
	.string "Masterpiece Teacup to evolve them!$"

EvoMasters_EvoCheckForMon_Text_482:
# 2067 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "WOW, a legendary pokemon!\n"
	.string "I'm pretty sure these ones don't evolve\l"
	.string "at all!\p"
	.string "Wait... why does it look like that?$"

EvoMasters_EvoCheckForMon_Text_483:
# 2069 "data/maps/MODHeadquarters_EvoMasters/scripts.pory"
	.string "This pokemon does not evolve$"
