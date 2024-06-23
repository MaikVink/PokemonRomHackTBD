DormHall1_MapScripts::
# 4 "data/maps/DormHall1/scripts.pory"
	.byte 0


Dormhall1_OnTransition::
# 8 "data/maps/DormHall1/scripts.pory"
	lock
# 9 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_OnTransition_Text_0
# 10 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_NoticePlayer
# 11 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 12 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_OnTransition_Text_1
# 14 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_MoveToPlayer
# 15 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 16 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_OnTransition_Text_2
# 23 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_WalkAway
# 24 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 25 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIRST_RIVAL_MEETING
# 26 "data/maps/DormHall1/scripts.pory"
	removeobject 2
# 27 "data/maps/DormHall1/scripts.pory"
	release
	return


DormHall1_EventScript_LadyInitiative::
# 31 "data/maps/DormHall1/scripts.pory"
	lockall
# 32 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_0
# 33 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


DormHall1_EventScript_ManInitiative::
# 37 "data/maps/DormHall1/scripts.pory"
	lockall
# 38 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_0
# 39 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


DormHall1_EventScript_StatueInitiative::
# 43 "data/maps/DormHall1/scripts.pory"
	lockall
# 44 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 45 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_0
# 46 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_NinjaInitiative::
# 50 "data/maps/DormHall1/scripts.pory"
	lockall
# 51 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 52 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_0
# 53 "data/maps/DormHall1/scripts.pory"
	face_original_direction
# 54 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardTop::
# 58 "data/maps/DormHall1/scripts.pory"
	lockall
# 59 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 60 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardTop_Text_0
# 61 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardBottem::
# 65 "data/maps/DormHall1/scripts.pory"
	lockall
# 66 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 67 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardBottem_Text_0
# 68 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_StatueNormal::
# 72 "data/maps/DormHall1/scripts.pory"
	lockall
# 73 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
# 74 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_SpecialStatueBack::
# 78 "data/maps/DormHall1/scripts.pory"
	lockall
# 79 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_SpecialStatueBack_Text_0
	return


Dormhall1_Trigger_NoEntry::
# 85 "data/maps/DormHall1/scripts.pory"
	lockall
# 86 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Trigger_NoEntry_Text_0
# 87 "data/maps/DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Dormhall1_Movement_MoveBack
	return


# 90 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_NoticePlayer:
# 91 "data/maps/DormHall1/scripts.pory"
	emote_exclamation_mark
	step_end

# 94 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveToPlayer:
# 95 "data/maps/DormHall1/scripts.pory"
	walk_up
# 95 "data/maps/DormHall1/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_WalkAway:
# 99 "data/maps/DormHall1/scripts.pory"
	walk_down
# 99 "data/maps/DormHall1/scripts.pory"
	walk_down
# 99 "data/maps/DormHall1/scripts.pory"
	walk_down
# 99 "data/maps/DormHall1/scripts.pory"
	walk_down
# 100 "data/maps/DormHall1/scripts.pory"
	walk_left
# 100 "data/maps/DormHall1/scripts.pory"
	walk_left
# 100 "data/maps/DormHall1/scripts.pory"
	walk_left
# 100 "data/maps/DormHall1/scripts.pory"
	walk_left
# 101 "data/maps/DormHall1/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveBack:
# 105 "data/maps/DormHall1/scripts.pory"
	walk_left
	step_end

Dormhall1_OnTransition_Text_0:
# 9 "data/maps/DormHall1/scripts.pory"
	.string "test$"

Dormhall1_OnTransition_Text_1:
# 12 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {COLOR BLUE}{PLAYER}! {COLOR DARK_GRAY}You're awake. I have\n"
	.string "been waiting for you!$"

Dormhall1_OnTransition_Text_2:
# 16 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???:{COLOR DARK_GRAY} What is that look on your face?\n"
	.string "Don't you remember me?\p"
	.string "{COLOR RED}Fiona:{COLOR DARK_GRAY} It's me: Fiona. I was the second\n"
	.string "best of the class, just below you.\p"
	.string "I guess being the second best at\n"
	.string "anything is not that impressive huh?\p"
	.string "Anyway, today is the day we're gonna\n"
	.string "recieve our first pokemon! I'm so\l"
	.string "excited, aren't you?\p"
	.string "I'll go ahead.\n"
	.string "Remember: we get our pokemon from the\l"
	.string "professor inside the headquarters.\l"
	.string "he is down the hallway, directly below\l"
	.string "our Dormhall.\p"
	.string "Catch you later {COLOR BLUE}{PLAYER}{COLOR DARK_GRAY}!$"

DormHall1_EventScript_LadyInitiative_Text_0:
# 32 "data/maps/DormHall1/scripts.pory"
	.string "Does he really think we don't notice\n"
	.string "him?$"

DormHall1_EventScript_ManInitiative_Text_0:
# 38 "data/maps/DormHall1/scripts.pory"
	.string "Just ignore that guy, let him enjoy the\n"
	.string "moment$"

DormHall1_EventScript_StatueInitiative_Text_0:
# 45 "data/maps/DormHall1/scripts.pory"
	.string "I wonder what kind of pokemon these\n"
	.string "statues are supposed to be$"

Dormhall1_EventScript_NinjaInitiative_Text_0:
# 52 "data/maps/DormHall1/scripts.pory"
	.string "sssh, don't let them know I'm hiding\n"
	.string "here.$"

Dormhall1_EventScript_GuardTop_Text_0:
# 60 "data/maps/DormHall1/scripts.pory"
	.string "This area lead to a special area not\n"
	.string "meant for initiatives, you better move\l"
	.string "to other way$"

Dormhall1_EventScript_GuardBottem_Text_0:
# 67 "data/maps/DormHall1/scripts.pory"
	.string "Our duty is to prevent any nosey\n"
	.string "initiative from entering this area$"

Dormhall1_SignScript_StatueNormal_Text_0:
# 73 "data/maps/DormHall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be$"

Dormhall1_SignScript_SpecialStatueBack_Text_0:
# 79 "data/maps/DormHall1/scripts.pory"
	.string "Hé, there seems to be something etched\n"
	.string "on the back of this statue:\p"
	.string "'forgotten, but not gone.\n"
	.string "-Team A.S.'$"

Dormhall1_Trigger_NoEntry_Text_0:
# 86 "data/maps/DormHall1/scripts.pory"
	.string "Sorry kid, no entry without prior\n"
	.string "authorization$"
