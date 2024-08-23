MODHeadquarters_SpecialStore_MapScripts::
# 2 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpecialStore_OnTransition
	.byte 0


SpecialStore_OnTransition::
	return


SpecialStore_Trigger_TMs::
# 10 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	lockall
# 11 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	msgbox SpecialStore_Trigger_TMs_Text_0
# 12 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 13 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE01_GET
# 14 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE02_GET
# 15 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE03_GET
# 16 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE04_GET
# 17 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE05_GET
# 18 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE06_GET
# 19 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE07_GET
# 20 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	setflag FLAG_BADGE08_GET
# 21 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM01
# 22 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM02
# 23 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM03
# 24 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM04
# 25 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM05
# 26 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM06
# 27 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM07
# 28 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	giveitem ITEM_HM08
# 29 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	waitfanfare
# 30 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	releaseall
	return


SpecialStore_Trigger_TMs_Text_0:
# 11 "data/maps/MODHeadquarters_SpecialStore/scripts.pory"
	.string "Here, take this$"
