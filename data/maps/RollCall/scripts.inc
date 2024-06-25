RollCall_MapScripts::
	.byte 0


RollCall_EventScript_FatGuy::
# 6 "data/maps/RollCall/scripts.pory"
	lockall
# 7 "data/maps/RollCall/scripts.pory"
	faceplayer
# 8 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_FatGuy_Text_0
# 10 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_EventScript_LadyLeft::
# 14 "data/maps/RollCall/scripts.pory"
	lockall
# 15 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyLeft_Text_0
# 16 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_EventScript_LadyRight::
# 20 "data/maps/RollCall/scripts.pory"
	lockall
# 21 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_LadyRight_Text_0
# 22 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_EventScript_Guard::
# 26 "data/maps/RollCall/scripts.pory"
	lockall
# 27 "data/maps/RollCall/scripts.pory"
	faceplayer
# 28 "data/maps/RollCall/scripts.pory"
	msgbox RollCall_EventScript_Guard_Text_0
# 29 "data/maps/RollCall/scripts.pory"
	releaseall
	return


RollCall_EventScript_FatGuy_Text_0:
# 8 "data/maps/RollCall/scripts.pory"
	.string "We were told to go to this room after we\n"
	.string "got our pokemon.\p"
	.string "I wonder if this means we will get to\n"
	.string "meet {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}...$"

RollCall_EventScript_LadyLeft_Text_0:
# 15 "data/maps/RollCall/scripts.pory"
	.string "I was so suprised I got an Eevee! What\n"
	.string "pokemon did you get from your test?$"

RollCall_EventScript_LadyRight_Text_0:
# 21 "data/maps/RollCall/scripts.pory"
	.string "My test resulted into a Charmander! I\n"
	.string "cannot wait to be able to fly on my\l"
	.string "charizards back!$"

RollCall_EventScript_Guard_Text_0:
# 28 "data/maps/RollCall/scripts.pory"
	.string "Sorry, nobody is allowed past this\n"
	.string "point.$"
