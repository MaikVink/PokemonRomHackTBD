DormHall2_MapScripts::
	.byte 0


DormhallTopLeft_EventScript_WindowWatcher::
# 6 "data/maps/DormHall2/scripts.pory"
	lockall
# 7 "data/maps/DormHall2/scripts.pory"
	faceplayer
# 8 "data/maps/DormHall2/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 10 "data/maps/DormHall2/scripts.pory"
	case 0, DormhallTopLeft_EventScript_WindowWatcher_3
# 11 "data/maps/DormHall2/scripts.pory"
	case 1, DormhallTopLeft_EventScript_WindowWatcher_3
# 12 "data/maps/DormHall2/scripts.pory"
	case 2, DormhallTopLeft_EventScript_WindowWatcher_3
# 13 "data/maps/DormHall2/scripts.pory"
	case 3, DormhallTopLeft_EventScript_WindowWatcher_3
# 14 "data/maps/DormHall2/scripts.pory"
	case 4, DormhallTopLeft_EventScript_WindowWatcher_3
# 16 "data/maps/DormHall2/scripts.pory"
	case 5, DormhallTopLeft_EventScript_WindowWatcher_4
# 18 "data/maps/DormHall2/scripts.pory"
	case 6, DormhallTopLeft_EventScript_WindowWatcher_5
# 19 "data/maps/DormHall2/scripts.pory"
	case 7, DormhallTopLeft_EventScript_WindowWatcher_5
# 21 "data/maps/DormHall2/scripts.pory"
	case 8, DormhallTopLeft_EventScript_WindowWatcher_6
# 23 "data/maps/DormHall2/scripts.pory"
	case 9, DormhallTopLeft_EventScript_WindowWatcher_7
# 33 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_6
DormhallTopLeft_EventScript_WindowWatcher_1:
# 35 "data/maps/DormHall2/scripts.pory"
	releaseall
	return

DormhallTopLeft_EventScript_WindowWatcher_3:
# 15 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_0
	goto DormhallTopLeft_EventScript_WindowWatcher_1

DormhallTopLeft_EventScript_WindowWatcher_4:
# 17 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_1
	goto DormhallTopLeft_EventScript_WindowWatcher_1

DormhallTopLeft_EventScript_WindowWatcher_5:
# 20 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_2
	goto DormhallTopLeft_EventScript_WindowWatcher_1

DormhallTopLeft_EventScript_WindowWatcher_6:
# 22 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_3
	goto DormhallTopLeft_EventScript_WindowWatcher_1

DormhallTopLeft_EventScript_WindowWatcher_7:
# 24 "data/maps/DormHall2/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormhallTopLeft_EventScript_WindowWatcher_9
# 30 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_5
	goto DormhallTopLeft_EventScript_WindowWatcher_1

DormhallTopLeft_EventScript_WindowWatcher_9:
# 26 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_WindowWatcher_Text_4
	goto DormhallTopLeft_EventScript_WindowWatcher_1


DormhallTopLeft_EventScript_NervousWalker::
# 39 "data/maps/DormHall2/scripts.pory"
	lockall
# 40 "data/maps/DormHall2/scripts.pory"
	faceplayer
# 41 "data/maps/DormHall2/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 43 "data/maps/DormHall2/scripts.pory"
	case 0, DormhallTopLeft_EventScript_NervousWalker_3
# 44 "data/maps/DormHall2/scripts.pory"
	case 1, DormhallTopLeft_EventScript_NervousWalker_3
# 45 "data/maps/DormHall2/scripts.pory"
	case 2, DormhallTopLeft_EventScript_NervousWalker_3
# 46 "data/maps/DormHall2/scripts.pory"
	case 3, DormhallTopLeft_EventScript_NervousWalker_3
# 47 "data/maps/DormHall2/scripts.pory"
	case 4, DormhallTopLeft_EventScript_NervousWalker_3
# 49 "data/maps/DormHall2/scripts.pory"
	case 5, DormhallTopLeft_EventScript_NervousWalker_4
# 51 "data/maps/DormHall2/scripts.pory"
	case 6, DormhallTopLeft_EventScript_NervousWalker_5
# 53 "data/maps/DormHall2/scripts.pory"
	case 7, DormhallTopLeft_EventScript_NervousWalker_6
# 54 "data/maps/DormHall2/scripts.pory"
	case 8, DormhallTopLeft_EventScript_NervousWalker_6
# 56 "data/maps/DormHall2/scripts.pory"
	case 9, DormhallTopLeft_EventScript_NervousWalker_7
# 66 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_6
DormhallTopLeft_EventScript_NervousWalker_1:
# 68 "data/maps/DormHall2/scripts.pory"
	releaseall
	return

DormhallTopLeft_EventScript_NervousWalker_3:
# 48 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_0
	goto DormhallTopLeft_EventScript_NervousWalker_1

DormhallTopLeft_EventScript_NervousWalker_4:
# 50 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_1
	goto DormhallTopLeft_EventScript_NervousWalker_1

DormhallTopLeft_EventScript_NervousWalker_5:
# 52 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_2
	goto DormhallTopLeft_EventScript_NervousWalker_1

DormhallTopLeft_EventScript_NervousWalker_6:
# 55 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_3
	goto DormhallTopLeft_EventScript_NervousWalker_1

DormhallTopLeft_EventScript_NervousWalker_7:
# 57 "data/maps/DormHall2/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormhallTopLeft_EventScript_NervousWalker_9
# 63 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_5
	goto DormhallTopLeft_EventScript_NervousWalker_1

DormhallTopLeft_EventScript_NervousWalker_9:
# 59 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_EventScript_NervousWalker_Text_4
	goto DormhallTopLeft_EventScript_NervousWalker_1


DormhallTopLeft_SignScript_StatueNormal::
# 72 "data/maps/DormHall2/scripts.pory"
	lockall
# 73 "data/maps/DormHall2/scripts.pory"
	msgbox DormhallTopLeft_SignScript_StatueNormal_Text_0
# 74 "data/maps/DormHall2/scripts.pory"
	releaseall
	return


DormhallTopLeft_Trigger_SetWarpValue1::
# 78 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 4
# 79 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue2::
# 83 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 5
# 84 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue3::
# 88 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 6
# 89 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue4::
# 93 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 7
# 94 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_Trigger_SetWarpValue5::
# 98 "data/maps/DormHall2/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 8
# 99 "data/maps/DormHall2/scripts.pory"
	release
	return


DormhallTopLeft_EventScript_WindowWatcher_Text_0:
# 15 "data/maps/DormHall2/scripts.pory"
	.string "I wonder when we will be allowed to\n"
	.string "leave this place with our pokemon$"

DormhallTopLeft_EventScript_WindowWatcher_Text_1:
# 17 "data/maps/DormHall2/scripts.pory"
	.string "With the tournament I doubt we will be\n"
	.string "able to leave this place anything soon\l"
	.string "huh?$"

DormhallTopLeft_EventScript_WindowWatcher_Text_2:
# 20 "data/maps/DormHall2/scripts.pory"
	.string "With the way I'm handeling these\n"
	.string "pokemon, I should probably not be too\l"
	.string "eager to go out into the world with my\l"
	.string "pokemon...$"

DormhallTopLeft_EventScript_WindowWatcher_Text_3:
# 22 "data/maps/DormHall2/scripts.pory"
	.string "I have made up my mind: I'm going to\n"
	.string "work hard so I can trust myself to\l"
	.string "handle these pokemon when I'm out and\l"
	.string "about.$"

DormhallTopLeft_EventScript_WindowWatcher_Text_4:
# 26 "data/maps/DormHall2/scripts.pory"
	.string "Congrats {PLAYER}! I won't be allowed\n"
	.string "to leave just yet with my pokemon, but I\l"
	.string "promise you I'll follow you soon enough!$"

DormhallTopLeft_EventScript_WindowWatcher_Text_5:
# 30 "data/maps/DormHall2/scripts.pory"
	.string "Seeing you and Fiona battle is so\n"
	.string "inspiring! I will make sure I earn the\l"
	.string "right to go out of here just the way you\l"
	.string "guys already have!$"

DormhallTopLeft_EventScript_WindowWatcher_Text_6:
# 33 "data/maps/DormHall2/scripts.pory"
	.string "{COLOR BLUE}Hera{COLOR DARK_GRAY}: The world out there is so\n"
	.string "beautiful, but it is good to have a safe\l"
	.string "place to call home if you need it, isn't\l"
	.string "it?$"

DormhallTopLeft_EventScript_NervousWalker_Text_0:
# 48 "data/maps/DormHall2/scripts.pory"
	.string "Aaah, I'm so nervous to collect my\n"
	.string "pokemon!\p"
	.string "What if I get a pokemon I don't like?\n"
	.string "What if I'm stuck with a pokemon I\l"
	.string "hate?\p"
	.string "Should I wait to see what other people\n"
	.string "get or should I just rip off this\l"
	.string "bandage?$"

DormhallTopLeft_EventScript_NervousWalker_Text_1:
# 50 "data/maps/DormHall2/scripts.pory"
	.string "What should I do? I'm not so sure that I\n"
	.string "can handle the responsability of owning\l"
	.string "pokemon but I also have gotten to far\l"
	.string "to back down!$"

DormhallTopLeft_EventScript_NervousWalker_Text_2:
# 52 "data/maps/DormHall2/scripts.pory"
	.string "I lost indescribly hard!\n"
	.string "I had no chance against Fiona. How can\l"
	.string "I now ever proof that I can handle\l"
	.string "pokemon to myself and {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY}?$"

DormhallTopLeft_EventScript_NervousWalker_Text_3:
# 55 "data/maps/DormHall2/scripts.pory"
	.string "What could I have done better? Should I\n"
	.string "have asked for a test battle before?\l"
	.string "Should I have been more aggresive?\l"
	.string "Should I have played it for the long\l"
	.string "game?$"

DormhallTopLeft_EventScript_NervousWalker_Text_4:
# 59 "data/maps/DormHall2/scripts.pory"
	.string "Should I go an congratulate {PLAYER}\n"
	.string "with their win? Or should I not bother\l"
	.string "them and let them rest out for a bit?$"

DormhallTopLeft_EventScript_NervousWalker_Text_5:
# 63 "data/maps/DormHall2/scripts.pory"
	.string "Who should I want to win? Do I want\n"
	.string "Fiona to win so I can say I lost to the\l"
	.string "Tournament Champion? Or should I want\l"
	.string "{PLAYER} to win so I can at least feel\l"
	.string "better she also lost?$"

DormhallTopLeft_EventScript_NervousWalker_Text_6:
# 66 "data/maps/DormHall2/scripts.pory"
	.string "{COLOR BLUE}Raoul{COLOR DARK_GRAY}: You know, running around like\n"
	.string "this always helps me to clear my mind.\l"
	.string "You should try it sometimes!$"

DormhallTopLeft_SignScript_StatueNormal_Text_0:
# 73 "data/maps/DormHall2/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"
