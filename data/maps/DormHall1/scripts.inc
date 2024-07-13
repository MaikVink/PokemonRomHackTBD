DormHall1_MapScripts::
# 5 "data/maps/DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dormhall1_OnTransition
# 6 "data/maps/DormHall1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DormHall1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/DormHall1/scripts.pory"
	map_script_2 VAR_STORY_PROGRESSION, 1, Dormhall1_Frame
	.2byte 0


Dormhall1_OnTransition::
# 12 "data/maps/DormHall1/scripts.pory"
	setvar VAR_ALWAYS_ON, 1
# 13 "data/maps/DormHall1/scripts.pory"
	setvar VAR_HIDE_OBJECTS, 1
# 14 "data/maps/DormHall1/scripts.pory"
	compare VAR_STORY_PROGRESSION, 0
	goto_if_eq Dormhall1_OnTransition_1
	return

Dormhall1_OnTransition_1:
# 16 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 1
# 17 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 18 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_SYS_ALWAYS_ON
# 19 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_REVERSE_ROLLCALL_FLAG
# 20 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIONA_REVERSE_ROLLCALL_FLAG
# 21 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 22 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_REVERSED_GUARD
	return


Dormhall1_Frame::
# 27 "data/maps/DormHall1/scripts.pory"
	lock
# 28 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_NoticePlayer
# 29 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 30 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_0
# 32 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_MoveToPlayer
# 33 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 34 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Frame_Text_1
# 41 "data/maps/DormHall1/scripts.pory"
	applymovement 2, Dormhall1_Movement_WalkAway
# 42 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 43 "data/maps/DormHall1/scripts.pory"
	setflag FLAG_FIRST_RIVAL_MEETING
# 44 "data/maps/DormHall1/scripts.pory"
	setvar VAR_STORY_PROGRESSION, 2
# 45 "data/maps/DormHall1/scripts.pory"
	removeobject 2
# 46 "data/maps/DormHall1/scripts.pory"
	release
	return


DormHall1_EventScript_LadyInitiative::
# 50 "data/maps/DormHall1/scripts.pory"
	lockall
# 51 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 53 "data/maps/DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_LadyInitiative_3
# 54 "data/maps/DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_LadyInitiative_3
# 55 "data/maps/DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_LadyInitiative_3
# 56 "data/maps/DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_LadyInitiative_3
# 57 "data/maps/DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_LadyInitiative_3
# 59 "data/maps/DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_LadyInitiative_4
# 61 "data/maps/DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_LadyInitiative_5
# 63 "data/maps/DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_LadyInitiative_6
# 65 "data/maps/DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_LadyInitiative_7
# 67 "data/maps/DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_LadyInitiative_8
# 77 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_7
DormHall1_EventScript_LadyInitiative_1:
# 79 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_LadyInitiative_3:
# 58 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_0
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_4:
# 60 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_1
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_5:
# 62 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_2
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_6:
# 64 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_3
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_7:
# 66 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_4
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_8:
# 68 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_LadyInitiative_10
# 74 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_6
	goto DormHall1_EventScript_LadyInitiative_1

DormHall1_EventScript_LadyInitiative_10:
# 70 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_LadyInitiative_Text_5
	goto DormHall1_EventScript_LadyInitiative_1


DormHall1_EventScript_ManInitiative::
# 83 "data/maps/DormHall1/scripts.pory"
	lockall
# 84 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 86 "data/maps/DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_ManInitiative_3
# 87 "data/maps/DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_ManInitiative_3
# 88 "data/maps/DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_ManInitiative_3
# 89 "data/maps/DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_ManInitiative_3
# 90 "data/maps/DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_ManInitiative_3
# 92 "data/maps/DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_ManInitiative_4
# 94 "data/maps/DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_ManInitiative_5
# 96 "data/maps/DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_ManInitiative_6
# 98 "data/maps/DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_ManInitiative_7
# 100 "data/maps/DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_ManInitiative_8
# 112 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_7
DormHall1_EventScript_ManInitiative_1:
# 114 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_ManInitiative_3:
# 91 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_0
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_4:
# 93 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_1
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_5:
# 95 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_2
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_6:
# 97 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_3
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_7:
# 99 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_4
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_8:
# 101 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_ManInitiative_10
# 109 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_6
	goto DormHall1_EventScript_ManInitiative_1

DormHall1_EventScript_ManInitiative_10:
# 103 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_ManInitiative_Text_5
	goto DormHall1_EventScript_ManInitiative_1


DormHall1_EventScript_StatueInitiative::
# 118 "data/maps/DormHall1/scripts.pory"
	lockall
# 119 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 120 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 122 "data/maps/DormHall1/scripts.pory"
	case 0, DormHall1_EventScript_StatueInitiative_3
# 123 "data/maps/DormHall1/scripts.pory"
	case 1, DormHall1_EventScript_StatueInitiative_3
# 124 "data/maps/DormHall1/scripts.pory"
	case 2, DormHall1_EventScript_StatueInitiative_3
# 125 "data/maps/DormHall1/scripts.pory"
	case 3, DormHall1_EventScript_StatueInitiative_3
# 126 "data/maps/DormHall1/scripts.pory"
	case 4, DormHall1_EventScript_StatueInitiative_3
# 128 "data/maps/DormHall1/scripts.pory"
	case 5, DormHall1_EventScript_StatueInitiative_4
# 130 "data/maps/DormHall1/scripts.pory"
	case 6, DormHall1_EventScript_StatueInitiative_5
# 132 "data/maps/DormHall1/scripts.pory"
	case 7, DormHall1_EventScript_StatueInitiative_6
# 133 "data/maps/DormHall1/scripts.pory"
	case 8, DormHall1_EventScript_StatueInitiative_6
# 135 "data/maps/DormHall1/scripts.pory"
	case 9, DormHall1_EventScript_StatueInitiative_7
# 145 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_6
DormHall1_EventScript_StatueInitiative_1:
# 148 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

DormHall1_EventScript_StatueInitiative_3:
# 127 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_0
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_4:
# 129 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_1
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_5:
# 131 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_2
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_6:
# 134 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_3
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_7:
# 136 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHall1_EventScript_StatueInitiative_9
# 142 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_5
	goto DormHall1_EventScript_StatueInitiative_1

DormHall1_EventScript_StatueInitiative_9:
# 138 "data/maps/DormHall1/scripts.pory"
	msgbox DormHall1_EventScript_StatueInitiative_Text_4
	goto DormHall1_EventScript_StatueInitiative_1


Dormhall1_EventScript_NinjaInitiative::
# 152 "data/maps/DormHall1/scripts.pory"
	lockall
# 153 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 154 "data/maps/DormHall1/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 156 "data/maps/DormHall1/scripts.pory"
	case 0, Dormhall1_EventScript_NinjaInitiative_3
# 157 "data/maps/DormHall1/scripts.pory"
	case 1, Dormhall1_EventScript_NinjaInitiative_3
# 158 "data/maps/DormHall1/scripts.pory"
	case 2, Dormhall1_EventScript_NinjaInitiative_3
# 159 "data/maps/DormHall1/scripts.pory"
	case 3, Dormhall1_EventScript_NinjaInitiative_3
# 160 "data/maps/DormHall1/scripts.pory"
	case 4, Dormhall1_EventScript_NinjaInitiative_3
# 162 "data/maps/DormHall1/scripts.pory"
	case 5, Dormhall1_EventScript_NinjaInitiative_4
# 164 "data/maps/DormHall1/scripts.pory"
	case 6, Dormhall1_EventScript_NinjaInitiative_5
# 167 "data/maps/DormHall1/scripts.pory"
	case 7, Dormhall1_EventScript_NinjaInitiative_6
# 168 "data/maps/DormHall1/scripts.pory"
	case 8, Dormhall1_EventScript_NinjaInitiative_6
# 170 "data/maps/DormHall1/scripts.pory"
	case 9, Dormhall1_EventScript_NinjaInitiative_7
# 181 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_6
Dormhall1_EventScript_NinjaInitiative_1:
# 183 "data/maps/DormHall1/scripts.pory"
	applymovement 4, Dormhall1_Movement_LookOriginalDireciton
# 184 "data/maps/DormHall1/scripts.pory"
	releaseall
	return

Dormhall1_EventScript_NinjaInitiative_3:
# 161 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_0
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_4:
# 163 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_1
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_5:
# 165 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_2
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_6:
# 169 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_3
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_7:
# 171 "data/maps/DormHall1/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, Dormhall1_EventScript_NinjaInitiative_9
# 177 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_5
	goto Dormhall1_EventScript_NinjaInitiative_1

Dormhall1_EventScript_NinjaInitiative_9:
# 173 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_NinjaInitiative_Text_4
	goto Dormhall1_EventScript_NinjaInitiative_1


Dormhall1_EventScript_GuardTop::
# 188 "data/maps/DormHall1/scripts.pory"
	lockall
# 189 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 190 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardTop_Text_0
# 191 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_EventScript_GuardBottem::
# 195 "data/maps/DormHall1/scripts.pory"
	lockall
# 196 "data/maps/DormHall1/scripts.pory"
	faceplayer
# 197 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_EventScript_GuardBottem_Text_0
# 198 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_StatueNormal::
# 202 "data/maps/DormHall1/scripts.pory"
	lockall
# 203 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_StatueNormal_Text_0
# 204 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_SignScript_SpecialStatueBack::
# 208 "data/maps/DormHall1/scripts.pory"
	lockall
# 209 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_SignScript_SpecialStatueBack_Text_0
# 212 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_NoEntry::
# 216 "data/maps/DormHall1/scripts.pory"
	lockall
# 217 "data/maps/DormHall1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Dormhall1_Movement_MoveBack
# 218 "data/maps/DormHall1/scripts.pory"
	msgbox Dormhall1_Trigger_NoEntry_Text_0
# 219 "data/maps/DormHall1/scripts.pory"
	waitmovement 0
# 220 "data/maps/DormHall1/scripts.pory"
	releaseall
	return


Dormhall1_Trigger_SetWarpValue1::
# 224 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 1
# 225 "data/maps/DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue2::
# 229 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 2
# 230 "data/maps/DormHall1/scripts.pory"
	release
	return


Dormhall1_Trigger_SetWarpValue3::
# 234 "data/maps/DormHall1/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 3
# 235 "data/maps/DormHall1/scripts.pory"
	release
	return


# 238 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_NoticePlayer:
# 239 "data/maps/DormHall1/scripts.pory"
	emote_exclamation_mark
	step_end

# 242 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveToPlayer:
# 243 "data/maps/DormHall1/scripts.pory"
	walk_up
# 243 "data/maps/DormHall1/scripts.pory"
	walk_up
	step_end

# 246 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_WalkAway:
# 247 "data/maps/DormHall1/scripts.pory"
	walk_down
# 247 "data/maps/DormHall1/scripts.pory"
	walk_down
# 247 "data/maps/DormHall1/scripts.pory"
	walk_down
# 247 "data/maps/DormHall1/scripts.pory"
	walk_down
# 248 "data/maps/DormHall1/scripts.pory"
	walk_left
# 248 "data/maps/DormHall1/scripts.pory"
	walk_left
# 248 "data/maps/DormHall1/scripts.pory"
	walk_left
# 248 "data/maps/DormHall1/scripts.pory"
	walk_left
# 249 "data/maps/DormHall1/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_MoveBack:
# 253 "data/maps/DormHall1/scripts.pory"
	walk_left
	step_end

# 256 "data/maps/DormHall1/scripts.pory"
Dormhall1_Movement_LookOriginalDireciton:
# 257 "data/maps/DormHall1/scripts.pory"
	face_down
	step_end

Dormhall1_Frame_Text_0:
# 30 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {COLOR BLUE}{PLAYER}! {COLOR DARK_GRAY}You're awake. I have\n"
	.string "been waiting for you!$"

Dormhall1_Frame_Text_1:
# 34 "data/maps/DormHall1/scripts.pory"
	.string "{COLOR RED}???:{COLOR DARK_GRAY} What is that look on your face?\n"
	.string "Don't you remember me?\p"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: It's me, Fiona! I was the second\n"
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
# 58 "data/maps/DormHall1/scripts.pory"
	.string "Does he really think we don't notice\n"
	.string "him?$"

DormHall1_EventScript_LadyInitiative_Text_1:
# 60 "data/maps/DormHall1/scripts.pory"
	.string "I never had a pokemon before and now I\n"
	.string "have to fight in a tournament. I wonder\l"
	.string "how it will go...$"

DormHall1_EventScript_LadyInitiative_Text_2:
# 62 "data/maps/DormHall1/scripts.pory"
	.string "Did you really have to go that hard on\n"
	.string "me? You could have at least given me a\l"
	.string "chance!$"

DormHall1_EventScript_LadyInitiative_Text_3:
# 64 "data/maps/DormHall1/scripts.pory"
	.string "I saw your fight! Fiona is really a\n"
	.string "powerfull Pokemon Trainer\p"
	.string "She has a good chance at winning this\n"
	.string "whole Tournament!$"

DormHall1_EventScript_LadyInitiative_Text_4:
# 66 "data/maps/DormHall1/scripts.pory"
	.string "You can always ask for a rematch!\n"
	.string "I'll make sure I won't lose this time!$"

DormHall1_EventScript_LadyInitiative_Text_5:
# 70 "data/maps/DormHall1/scripts.pory"
	.string "I really thought Fiona had the upper\n"
	.string "hand in that battle for a moment!$"

DormHall1_EventScript_LadyInitiative_Text_6:
# 74 "data/maps/DormHall1/scripts.pory"
	.string "Todays final is gonna be very\n"
	.string "interesting! Fiona and {PLAYER} have\l"
	.string "both shown incredible skill!$"

DormHall1_EventScript_LadyInitiative_Text_7:
# 77 "data/maps/DormHall1/scripts.pory"
	.string "The world outside can be a scary place,\n"
	.string "but at least with my Pokemon I can make\l"
	.string "sure I'm safe.$"

DormHall1_EventScript_ManInitiative_Text_0:
# 91 "data/maps/DormHall1/scripts.pory"
	.string "Just ignore that guy, let him enjoy the\n"
	.string "moment.$"

DormHall1_EventScript_ManInitiative_Text_1:
# 93 "data/maps/DormHall1/scripts.pory"
	.string "Don't worry about it, I'm sure {COLOR LIGHT_GRAY}The\n"
	.string "Leader{COLOR DARK_GRAY} made this a safe environment to\l"
	.string "test out the waters.$"

DormHall1_EventScript_ManInitiative_Text_2:
# 95 "data/maps/DormHall1/scripts.pory"
	.string "I'm sorry. I guess I was just a bit too\n"
	.string "much focussed on impressing Surge and\l"
	.string "possibly the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

DormHall1_EventScript_ManInitiative_Text_3:
# 97 "data/maps/DormHall1/scripts.pory"
	.string "Wow, that Fiona Lass is really something\n"
	.string "else, she wiped the floor with me.$"

DormHall1_EventScript_ManInitiative_Text_4:
# 99 "data/maps/DormHall1/scripts.pory"
	.string "Seeing the other Initatives fight each\n"
	.string "other makes me realize I still have much\l"
	.string "to learn.$"

DormHall1_EventScript_ManInitiative_Text_5:
# 103 "data/maps/DormHall1/scripts.pory"
	.string "I was so close to be the tournament\n"
	.string "champion losers, guess I have to live\l"
	.string "with the fact I'm just a regular loser.\p"
	.string "...\p"
	.string "Don't you dare, Vera!$"

DormHall1_EventScript_ManInitiative_Text_6:
# 109 "data/maps/DormHall1/scripts.pory"
	.string "It certainly is! I hope Fiona will win, at\n"
	.string "least then I can say I lost to the\l"
	.string "Tournament Champion...$"

DormHall1_EventScript_ManInitiative_Text_7:
# 112 "data/maps/DormHall1/scripts.pory"
	.string "You should watch out for those A.S.\n"
	.string "members, they look very strong...$"

DormHall1_EventScript_StatueInitiative_Text_0:
# 127 "data/maps/DormHall1/scripts.pory"
	.string "I wonder what kind of pokemon these\n"
	.string "statues are supposed to be.$"

DormHall1_EventScript_StatueInitiative_Text_1:
# 129 "data/maps/DormHall1/scripts.pory"
	.string "With the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} here, who knows\n"
	.string "what kinds of things we can learn from\l"
	.string "{COLOR LIGHT_GRAY}Him{COLOR DARK_GRAY}.$"

DormHall1_EventScript_StatueInitiative_Text_2:
# 131 "data/maps/DormHall1/scripts.pory"
	.string "I underestimated how little I actually\n"
	.string "know about using my skills out on the\l"
	.string "field.$"

DormHall1_EventScript_StatueInitiative_Text_3:
# 134 "data/maps/DormHall1/scripts.pory"
	.string "I have been reflecting on my failures\n"
	.string "and I think I should try becoming more\l"
	.string "of do-er and less of learner.$"

DormHall1_EventScript_StatueInitiative_Text_4:
# 138 "data/maps/DormHall1/scripts.pory"
	.string "Impressive {PLAYER}! I do hope you\n"
	.string "would allow a low level trainer like me\l"
	.string "take you on sometime!$"

DormHall1_EventScript_StatueInitiative_Text_5:
# 142 "data/maps/DormHall1/scripts.pory"
	.string "You know, watching you have made me\n"
	.string "realize I have still a long way to go,\l"
	.string "but that does not mean I intend to give\l"
	.string "up that easily!$"

DormHall1_EventScript_StatueInitiative_Text_6:
# 145 "data/maps/DormHall1/scripts.pory"
	.string "Strange how no matter what kind of\n"
	.string "pokemon I encounter, I have never seen\l"
	.string "a pokemon like this statue...$"

Dormhall1_EventScript_NinjaInitiative_Text_0:
# 161 "data/maps/DormHall1/scripts.pory"
	.string "sssh, don't let them know I'm hiding\n"
	.string "here.$"

Dormhall1_EventScript_NinjaInitiative_Text_1:
# 163 "data/maps/DormHall1/scripts.pory"
	.string "I have to improve my ninja skills if I\n"
	.string "want to impress the {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}$"

Dormhall1_EventScript_NinjaInitiative_Text_2:
# 165 "data/maps/DormHall1/scripts.pory"
	.string "I thought I was very sneaky with my\n"
	.string "tactics, but my opponent saw straight\l"
	.string "through me.\p"
	.string "I have to improve my sneaking skills if\n"
	.string "I ever want to make it far in MOD!$"

Dormhall1_EventScript_NinjaInitiative_Text_3:
# 169 "data/maps/DormHall1/scripts.pory"
	.string "I'm impressed you have gotten this far\n"
	.string "without making sure you got the upper\l"
	.string "hand on your opponent.$"

Dormhall1_EventScript_NinjaInitiative_Text_4:
# 173 "data/maps/DormHall1/scripts.pory"
	.string "Congratulations {PLAYER}, you have\n"
	.string "done a great job! If you ever feel like\l"
	.string "someone is watching you, just... ignore\l"
	.string "it for me will you?$"

Dormhall1_EventScript_NinjaInitiative_Text_5:
# 177 "data/maps/DormHall1/scripts.pory"
	.string "You and Fiona are both fascinating\n"
	.string "trainers to watch!\p"
	.string "I might try to shadow you for a while to\n"
	.string "learn a thing or two from you!$"

Dormhall1_EventScript_NinjaInitiative_Text_6:
# 181 "data/maps/DormHall1/scripts.pory"
	.string "Fighting head on is not always the best\n"
	.string "tactic, I have learned that sneaking\l"
	.string "about can give you a better idea what\l"
	.string "is going on than to beat the answers\l"
	.string "out of people.$"

Dormhall1_EventScript_GuardTop_Text_0:
# 190 "data/maps/DormHall1/scripts.pory"
	.string "This area lead to a special area not\n"
	.string "meant for initiatives, you better move\l"
	.string "to other way.$"

Dormhall1_EventScript_GuardBottem_Text_0:
# 197 "data/maps/DormHall1/scripts.pory"
	.string "Our duty is to prevent any nosey\n"
	.string "initiative from entering this area.$"

Dormhall1_SignScript_StatueNormal_Text_0:
# 203 "data/maps/DormHall1/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"

Dormhall1_SignScript_SpecialStatueBack_Text_0:
# 209 "data/maps/DormHall1/scripts.pory"
	.string "Hé, there seems to be something etched\n"
	.string "on the back of this statue:\p"
	.string "'forgotten, but not gone.\n"
	.string "-Team A.S.'$"

Dormhall1_Trigger_NoEntry_Text_0:
# 218 "data/maps/DormHall1/scripts.pory"
	.string "Sorry kid, no entry without prior\n"
	.string "authorization.$"
