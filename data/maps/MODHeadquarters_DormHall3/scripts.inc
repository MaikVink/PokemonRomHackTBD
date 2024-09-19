MODHeadquarters_DormHall3_MapScripts::
	.byte 0


DormHallBottemLeft_EventScript_Hiker::
# 6 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	lockall
# 7 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	faceplayer
# 8 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 10 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 0, DormHallBottemLeft_EventScript_Hiker_3
# 11 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 1, DormHallBottemLeft_EventScript_Hiker_3
# 12 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 2, DormHallBottemLeft_EventScript_Hiker_3
# 13 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 3, DormHallBottemLeft_EventScript_Hiker_3
# 14 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 4, DormHallBottemLeft_EventScript_Hiker_3
# 18 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 5, DormHallBottemLeft_EventScript_Hiker_4
# 20 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 6, DormHallBottemLeft_EventScript_Hiker_5
# 23 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 7, DormHallBottemLeft_EventScript_Hiker_6
# 34 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 8, DormHallBottemLeft_EventScript_Hiker_7
# 47 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 9, DormHallBottemLeft_EventScript_Hiker_8
# 66 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_9
DormHallBottemLeft_EventScript_Hiker_1:
# 68 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	releaseall
	return

DormHallBottemLeft_EventScript_Hiker_3:
# 15 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_0
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_4:
# 19 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_1
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_5:
# 21 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_2
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_6:
# 24 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHallBottemLeft_EventScript_Hiker_10
# 31 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_4
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_7:
# 35 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHallBottemLeft_EventScript_Hiker_13
# 43 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_6
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_8:
# 48 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHallBottemLeft_EventScript_Hiker_16
# 61 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_8
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_10:
# 26 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_3
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_13:
# 37 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_5
	goto DormHallBottemLeft_EventScript_Hiker_1

DormHallBottemLeft_EventScript_Hiker_16:
# 50 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Hiker_Text_7
	goto DormHallBottemLeft_EventScript_Hiker_1


DormHallBottemLeft_EventScript_Woman::
# 72 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	lockall
# 73 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	faceplayer
# 74 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 76 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 0, DormHallBottemLeft_EventScript_Woman_3
# 77 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 1, DormHallBottemLeft_EventScript_Woman_3
# 78 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 2, DormHallBottemLeft_EventScript_Woman_3
# 79 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 3, DormHallBottemLeft_EventScript_Woman_3
# 80 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 4, DormHallBottemLeft_EventScript_Woman_3
# 84 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 5, DormHallBottemLeft_EventScript_Woman_4
# 87 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 6, DormHallBottemLeft_EventScript_Woman_5
# 91 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 7, DormHallBottemLeft_EventScript_Woman_6
# 93 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 8, DormHallBottemLeft_EventScript_Woman_7
# 103 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	case 9, DormHallBottemLeft_EventScript_Woman_8
# 113 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_8
DormHallBottemLeft_EventScript_Woman_1:
# 115 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	releaseall
	return

DormHallBottemLeft_EventScript_Woman_3:
# 81 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_0
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_4:
# 85 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_1
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_5:
# 88 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_2
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_6:
# 92 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_3
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_7:
# 94 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHallBottemLeft_EventScript_Woman_10
# 100 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_5
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_8:
# 104 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, DormHallBottemLeft_EventScript_Woman_13
# 110 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_7
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_10:
# 96 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_4
	goto DormHallBottemLeft_EventScript_Woman_1

DormHallBottemLeft_EventScript_Woman_13:
# 106 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormHallBottemLeft_EventScript_Woman_Text_6
	goto DormHallBottemLeft_EventScript_Woman_1


DormhallBottemLeft_SignScript_StatueNormal::
# 119 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	lockall
# 120 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	msgbox DormhallBottemLeft_SignScript_StatueNormal_Text_0
# 121 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	releaseall
	return


DormhallBottemLeft_Trigger_SetWarpValue1::
# 125 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 9
# 126 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue2::
# 130 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 10
# 131 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue3::
# 135 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 11
# 136 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue4::
# 140 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 12
# 141 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue5::
# 145 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 13
# 146 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	release
	return


DormhallBottemLeft_Trigger_SetWarpValue6::
# 150 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	setvar VAR_DYNAMIC_DORMWARP, 14
# 151 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	release
	return


DormHallBottemLeft_EventScript_Hiker_Text_0:
# 15 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "If you want to look in my room, go\n"
	.string "ahead!\l"
	.string "As long as you allow me also to look in\l"
	.string "your room, of course!\l"
	.string "I cannot deny that I'm also curious to\l"
	.string "see what the other initiatives have\l"
	.string "done with the limiting house rules we\l"
	.string "have been given.$"

DormHallBottemLeft_EventScript_Hiker_Text_1:
# 19 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "uhm... I mean you still can go in my room\n"
	.string "if you want, but I do intend to go to\l"
	.string "bed soon.\l"
	.string "Maybe you should also go to your room\l"
	.string "sometime soon.$"

DormHallBottemLeft_EventScript_Hiker_Text_2:
# 21 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "Hé, good luck with the tournament!\p"
	.string "I have made it through my first round,\n"
	.string "I'm sure you'll be able to make it\l"
	.string "through yours as well!$"

DormHallBottemLeft_EventScript_Hiker_Text_3:
# 26 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: After my first battle I felt\n"
	.string "like I was unbeatable. I was absolutely\l"
	.string "sure I was gonna come out as the\l"
	.string "Tournament Champion, but you sure\l"
	.string "showed me I have still a long way to go.\p"
	.string "I'll be rooting for you to win this\n"
	.string "Tournament!$"

DormHallBottemLeft_EventScript_Hiker_Text_4:
# 31 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "I heard you're gonna be my next\n"
	.string "opponent.\p"
	.string "Well I don't intend to lose, so make sure\n"
	.string "you're prepared to lose!$"

DormHallBottemLeft_EventScript_Hiker_Text_5:
# 37 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: HAHAHA!\n"
	.string "I knew you could do it!\p"
	.string "I hope she will now learn that she is not\n"
	.string "so great as she thinks she is!$"

DormHallBottemLeft_EventScript_Hiker_Text_6:
# 43 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: I heard that beauty girl was\n"
	.string "gonna be your next opponent.\p"
	.string "Well, you humbled me with our fight, if\n"
	.string "someone needs a little bit of humbling\l"
	.string "it's gotta be her!\p"
	.string "Go beat her up {PLAYER}!$"

DormHallBottemLeft_EventScript_Hiker_Text_7:
# 50 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: I knew you could do it! Only the\n"
	.string "best could defeat me HAHAHAHA.\l"
	.string "HAHAHA\l"
	.string "HA\l"
	.string "ha\l"
	.string "ha...\l"
	.string "...\l"
	.string "I was joking of course.\p"
	.string "I know I have still a lot to learn before\n"
	.string "I can win from someone like you.$"

DormHallBottemLeft_EventScript_Hiker_Text_8:
# 61 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Of course I hope you win\n"
	.string "{PLAYER}!\p"
	.string "Though I have also seen Fiona fight...\p"
	.string "This is probably going to be one\n"
	.string "interesting battle!$"

DormHallBottemLeft_EventScript_Hiker_Text_9:
# 66 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "{COLOR BLUE}Herald{COLOR DARK_GRAY}: Well I like sleeping in the wild,\n"
	.string "nothing beats a comfortable bed with a\l"
	.string "strong room above your head.$"

DormHallBottemLeft_EventScript_Woman_Text_0:
# 81 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "Have you gotten your pokemon already?\p"
	.string "I was not prepared for the test they\n"
	.string "gave me before they handed the\l"
	.string "pokemon to me.\p"
	.string "Such a strange method to decide what\n"
	.string "pokemon you should get...$"

DormHallBottemLeft_EventScript_Woman_Text_1:
# 85 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "First that weird test to get your\n"
	.string "pokemon and now a tournament as your\l"
	.string "first pokemon battle.\p"
	.string "They have a strange customs around in\n"
	.string "team MOD.$"

DormHallBottemLeft_EventScript_Woman_Text_2:
# 88 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "How annoying, I lost my first ever\n"
	.string "pokemon battle. Though I believe I'm\l"
	.string "more frustrating because I lost to\l"
	.string "that Bi-...\l"
	.string "...\l"
	.string "annoying lady than that I lost the\l"
	.string "tournament.$"

DormHallBottemLeft_EventScript_Woman_Text_3:
# 92 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "Bella sadly made it to the semi-finals, I\n"
	.string "wish someone could beat her so she\l"
	.string "might act less high and mighty!$"

DormHallBottemLeft_EventScript_Woman_Text_4:
# 96 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "Thank you {PLAYER}, even though she\n"
	.string "might still talk high and mighty, I can\l"
	.string "see your win against her has dealt a\l"
	.string "massive blow to her ego!$"

DormHallBottemLeft_EventScript_Woman_Text_5:
# 100 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "I know I have no right to ask this of\n"
	.string "you {PLAYER}, but if you wouldn't mind\l"
	.string "Could you please win this next battle?\l"
	.string "I heard you're gonna fight Bella and I\l"
	.string "just hate looking at her smug face...$"

DormHallBottemLeft_EventScript_Woman_Text_6:
# 106 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "Well done {PLAYER}! or should I say\n"
	.string "Champion now?$"

DormHallBottemLeft_EventScript_Woman_Text_7:
# 110 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "The finals are today, aren't they? Good\n"
	.string "luck {PLAYER}, may the best rookie\l"
	.string "win!$"

DormHallBottemLeft_EventScript_Woman_Text_8:
# 113 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "You learn a lot when you're out in the\n"
	.string "field. If you ever want to find out what\l"
	.string "I have learned during my travels, go\l"
	.string "talk to Surge and see if we can use the\l"
	.string "battle arena!$"

DormhallBottemLeft_SignScript_StatueNormal_Text_0:
# 120 "data/maps/MODHeadquarters_DormHall3/scripts.pory"
	.string "It seems to be of a statue of a\n"
	.string "pokemon, though the erosion make it\l"
	.string "hard to determine which pokemon it is\l"
	.string "supposed to be.$"
