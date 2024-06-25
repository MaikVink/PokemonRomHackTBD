DormHall1_MapScripts::
# 4 "data/maps/DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dormhall1_OnTransition
# 5 "data/maps/DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 1, Dormhall1_Frame
	.2byte 0


Dormhall1_OnTransition::
# 11 "data/maps/DormHall1/scripts.pory"
	setvar VAR_ALWAYS_ON, 1
# 12 "data/maps/DormHall1/scripts.pory"
	compare VAR_STORY_PROGRESSION, 0
	goto_if_eq Dormhall1_OnTransition_1
	return

Dormhall1_OnTransition_1:
# 14 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 1
# 15 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 16 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_SYS_ALWAYS_ON
	return


Dormhall1_Frame::
# 21 "data/maps/DormHall1/scripts.pory"
	lock
# 22 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_NoticePlayer
# 23 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 24 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_0
# 26 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_MoveToPlayer
# 27 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 28 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_1
# 35 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_WalkAway
# 36 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 37 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIRST_RIVAL_MEETING
# 38 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 2
# 39 "data/maps/DormHall1/scripts.pory"
	removeobject 2
# 40 "data/maps/DormHall1/scripts.pory"
	release
	return


DormHall1_EventScript_LadyInitiative::
# 44 "data/maps/DormHall1/scripts.pory"
	lockall
# 45 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_0
# 46 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


DormHall1_EventScript_ManInitiative::
# 50 "data/maps/DormHall1/scripts.pory"
	lockall
# 51 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_0
# 52 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


DormHall1_EventScript_StatueInitiative::
# 56 "data/maps/DormHall1/scripts.pory"
	lockall
# 57 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 58 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_0
# 59 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_NinjaInitiative::
# 63 "data/maps/DormHall1/scripts.pory"
	lockall
# 64 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 65 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_0
# 66 "data/maps/DormHall1/scripts.pory"
	face_original_direction
# 67 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardTop::
# 71 "data/maps/DormHall1/scripts.pory"
	lockall
# 72 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 73 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardTop_Text_0
# 74 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardBottem::
# 78 "data/maps/DormHall1/scripts.pory"
	lockall
# 79 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 80 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardBottem_Text_0
# 81 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_StatueNormal::
# 85 "data/maps/DormHall1/scripts.pory"
	lockall
# 86 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
# 87 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_SpecialStatueBack::
# 91 "data/maps/DormHall1/scripts.pory"
	lockall
# 92 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_SpecialStatueBack_Text_0
# 95 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_NoEntry::
# 99 "data/maps/DormHall1/scripts.pory"
	lockall
# 100 "data/maps/DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Dormhall1_Movement_MoveBack
# 101 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Trigger_NoEntry_Text_0
# 102 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 103 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_SetWarpValue1::
# 107 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 1
# 108 "data/maps/DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue2::
# 112 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 2
# 113 "data/maps/DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue3::
# 117 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 3
# 118 "data/maps/DormHall1/scripts.pory"
	release
	return


# 121 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_NoticePlayer:
# 122 "data/maps/DormHall1/scripts.pory"
	emote_exclamation_mark
	step_end

# 125 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveToPlayer:
# 126 "data/maps/DormHall1/scripts.pory"
	walk_up
# 126 "data/maps/DormHall1/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_WalkAway:
# 130 "data/maps/DormHall1/scripts.pory"
	walk_down
# 130 "data/maps/DormHall1/scripts.pory"
	walk_down
# 130 "data/maps/DormHall1/scripts.pory"
	walk_down
# 130 "data/maps/DormHall1/scripts.pory"
	walk_down
# 131 "data/maps/DormHall1/scripts.pory"
	walk_left
# 131 "data/maps/DormHall1/scripts.pory"
	walk_left
# 131 "data/maps/DormHall1/scripts.pory"
	walk_left
# 131 "data/maps/DormHall1/scripts.pory"
	walk_left
# 132 "data/maps/DormHall1/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveBack:
# 136 "data/maps/DormHall1/scripts.pory"
	walk_left
	step_end

Dormhall1_Frame_Text_0:
# 24 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {COLOR BLUE}{PLAYER}! {COLOR DARK_GRAY}You're awake. I have\n"
	.string "been waiting for you!$"

Dormhall1_Frame_Text_1:
# 28 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???:{COLOR DARK_GRAY} What is that look on your face?\n"
	.string "Don't you remember me?\p"
	.string "{COLOR RED}Fiona:{COLOR DARK_GRAY} It's me, Fiona! I was the second\n"
	.string "best of the class, just below you!\p"
	.string "I guess being the second best at\n"
	.string "anything is not that impressive huh?\p"
	.string "Anyway, today is the day, we're gonna\n"
	.string "recieve our first pokemon! I'm so\l"
	.string "excited, aren't you?\p"
	.string "I'll go ahead.\n"
	.string "Remember, we get our pokemon from the\l"
	.string "professor inside the headquarters.\l"
	.string "he is down the hallway, directly below\l"
	.string "our Dormhall.\p"
	.string "Catch you later, {COLOR BLUE}{PLAYER}{COLOR DARK_GRAY}!$"

DormHall1_EventScript_LadyInitiative_Text_0:
# 45 "data/maps/DormHall1/scripts.pory"
	.string "Does he really think we don't notice\n"
	.string "him?$"

DormHall1_EventScript_ManInitiative_Text_0:
# 51 "data/maps/DormHall1/scripts.pory"
	.string "Just ignore that guy, let him enjoy the\n"
	.string "moment.$"

DormHall1_EventScript_StatueInitiative_Text_0:
# 58 "data/maps/DormHall1/scripts.pory"
	.string "I wonder what kind of pokemon these\n"
	.string "statues are supposed to be.$"

Dormhall1_EventScript_NinjaInitiative_Text_0:
# 65 "data/maps/DormHall1/scripts.pory"
	.string "sssh, don't let them know I'm hiding\n"
	.string "here.$"

Dormhall1_EventScript_GuardTop_Text_0:
# 73 "data/maps/DormHall1/scripts.pory"
	.string "This area lead to a special area not\n"
	.string "meant for initiatives, you better move\l"
	.string "to other way.$"

Dormhall1_EventScript_GuardBottem_Text_0:
# 80 "data/maps/DormHall1/scripts.pory"
	.string "Our duty is to prevent any nosey\n"
	.string "initiative from entering this area.$"

Dormhall1_SignScript_StatueNormal_Text_0:
# 86 "data/maps/DormHall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Dormhall1_SignScript_SpecialStatueBack_Text_0:
# 92 "data/maps/DormHall1/scripts.pory"
	.string "Hé, there seems to be something etched\n"
	.string "on the back of this statue:\p"
	.string "'forgotten, but not gone.\n"
	.string "-Team A.S.'$"

Dormhall1_Trigger_NoEntry_Text_0:
# 101 "data/maps/DormHall1/scripts.pory"
	.string "Sorry kid, no entry without prior\n"
	.string "authorization.$"
