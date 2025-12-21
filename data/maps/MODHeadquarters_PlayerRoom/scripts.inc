MODHeadquarters_PlayerRoom_MapScripts::
	.byte 0


PlayerRoom_SignScript_Table::
# 6 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 7 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Table_Text_0
# 8 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Computer::
# 12 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 13 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_0
# 14 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_USB_STICK, PlayerRoom_SignScript_Computer_2
# 97 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_10
PlayerRoom_SignScript_Computer_1:
# 99 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return

PlayerRoom_SignScript_Computer_2:
# 16 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_1, MSGBOX_YESNO
# 17 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Computer_5
# 92 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_9
	goto PlayerRoom_SignScript_Computer_1

PlayerRoom_SignScript_Computer_5:
# 19 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_unset FLAG_FIRST_REVIEW_USB, PlayerRoom_SignScript_Computer_9
PlayerRoom_SignScript_Computer_8:
# 29 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setvar VAR_TEMP_A, 1
PlayerRoom_SignScript_Computer_11:
# 30 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq PlayerRoom_SignScript_Computer_12
	goto PlayerRoom_SignScript_Computer_1

PlayerRoom_SignScript_Computer_9:
# 21 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_2
# 27 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setflag FLAG_FIRST_REVIEW_USB
	goto PlayerRoom_SignScript_Computer_8

PlayerRoom_SignScript_Computer_12:
# 32 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	message PlayerRoom_SignScript_Computer_Text_3
# 33 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	waitmessage
# 34 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	multichoice 25, 2, MULTI_USB, 0
# 35 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	closemessage
# 36 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	case 0, PlayerRoom_SignScript_Computer_15
# 45 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	case 1, PlayerRoom_SignScript_Computer_16
# 52 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	case 2, PlayerRoom_SignScript_Computer_17
# 61 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	case 3, PlayerRoom_SignScript_Computer_18
# 85 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setvar VAR_TEMP_A, 0
# 86 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_8
	goto PlayerRoom_SignScript_Computer_11

PlayerRoom_SignScript_Computer_15:
# 39 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_2
	goto PlayerRoom_SignScript_Computer_11

PlayerRoom_SignScript_Computer_16:
# 46 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_4
	goto PlayerRoom_SignScript_Computer_11

PlayerRoom_SignScript_Computer_17:
# 53 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_5
	goto PlayerRoom_SignScript_Computer_11

PlayerRoom_SignScript_Computer_18:
# 62 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, PlayerRoom_SignScript_Computer_20
# 75 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_7
	goto PlayerRoom_SignScript_Computer_11

PlayerRoom_SignScript_Computer_20:
# 64 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_6
	goto PlayerRoom_SignScript_Computer_11


PlayerRoom_SignScript_Drawer::
# 103 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 104 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Drawer_Text_0
# 105 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Box::
# 109 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 110 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Box_Text_0
# 111 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Bed::
# 115 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 116 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FIRST_POKEMON, PlayerRoom_SignScript_Bed_2
# 159 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_4
PlayerRoom_SignScript_Bed_1:
# 161 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return

PlayerRoom_SignScript_Bed_2:
# 118 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 5
	goto_if_lt PlayerRoom_SignScript_Bed_5
# 124 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_1, MSGBOX_YESNO
# 126 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Bed_8
# 153 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_3
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_5:
# 120 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_0
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_8:
# 128 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setrespawn LOCATION_MOD_HEADQUARTERS_PLAYERROOM
# 129 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	fadescreen 1
# 130 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	special HealPlayerParty
# 131 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	playfanfare MUS_HEAL
# 132 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	waitfanfare
# 133 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	fadescreen 0
# 134 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 5
	goto_if_eq PlayerRoom_SignScript_Bed_12
PlayerRoom_SignScript_Bed_11:
# 139 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION < 10, 0
	goto_if_ne PlayerRoom_SignScript_Bed_16
PlayerRoom_SignScript_Bed_14:
# 144 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 10
	goto_if_eq PlayerRoom_SignScript_Bed_20
PlayerRoom_SignScript_Bed_19:
# 149 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_2
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_12:
# 136 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	clearflag FLAG_REVERSED_GUARD
# 137 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setflag FLAG_TOURNAMENT
	goto PlayerRoom_SignScript_Bed_11

PlayerRoom_SignScript_Bed_15:
# 141 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	addvar VAR_STORY_PROGRESSION, 1
# 142 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	clearflag FLAG_BATTLE_WON
	goto PlayerRoom_SignScript_Bed_14

PlayerRoom_SignScript_Bed_16:
# 139 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, PlayerRoom_SignScript_Bed_15
	goto PlayerRoom_SignScript_Bed_14

PlayerRoom_SignScript_Bed_20:
# 146 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 147 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	clearflag FLAG_HIDE_LEADER
	goto PlayerRoom_SignScript_Bed_19


PlayerRoom_SignScript_Table_Text_0:
# 7 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "It's your table.\n"
	.string "For some reason you're the only one\l"
	.string "whose table and carpet seems to be of\l"
	.string "two different kinds.$"

PlayerRoom_SignScript_Computer_Text_0:
# 13 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "It's your computer.$"

PlayerRoom_SignScript_Computer_Text_1:
# 16 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "Do you want to put in the usbstick?$"

PlayerRoom_SignScript_Computer_Text_2:
# 21 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You put int the usb stick\p"
	.string "...\p"
	.string "The USB contains a folder filled with\n"
	.string "different kind of files containing some\l"
	.string "logs and data for a project called...\l"
	.string "'G.S.P.'\p"
	.string "Sadly, a lot of the files are redacted,\n"
	.string "making it difficult to understand\l"
	.string "everything in the files, including what\l"
	.string "G.S.P. stands for.\p"
	.string "There are still some logs you can read\n"
	.string "through.$"

PlayerRoom_SignScript_Computer_Text_3:
# 32 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "Which file would you like to read?$"

PlayerRoom_SignScript_Computer_Text_4:
# 46 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "'Entry Log 1358\p"
	.string "G- S- Program finally got the green\n"
	.string "light. It took us over 20 years to\l"
	.string "perfect the formula, but this time the\l"
	.string "subject should not be able to -.\p"
	.string "We will start with human testing soon.\n"
	.string "Actually we already have the perfect\l"
	.string "canditate for it:\l"
	.string "-.\l"
	.string "Who beter than the - of -. It would also\l"
	.string "be a perfect test to see that - won't\l"
	.string "happen again.\p"
	.string "- G.'$"

PlayerRoom_SignScript_Computer_Text_5:
# 53 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "'Entry Log 1462\p"
	.string "Experiment 224 on subject -, from now\n"
	.string "on referred to as Test Subject or TS,\l"
	.string "was a success.\l"
	.string "They don't even seem to notice\l"
	.string "anything themselves, nor do any of the\l"
	.string "other members.\l"
	.string "This is even better result that we\l"
	.string "could have hoped for, it almost like -.\p"
	.string "We will continue with performing stress\n"
	.string "tests on TS to see if the effects of\l"
	.string "G.S.P. will stay strong.\l"
	.string "The last thing we want is another\l"
	.string "Rocket Incident, aspecially now - has\l"
	.string "taken control of the region.\l"
	.string "Best case scenario, TS will become a\l"
	.string "great asset. Worst case scenario we will\l"
	.string "have to dispose of them...\p"
	.string "- G.'$"

PlayerRoom_SignScript_Computer_Text_6:
# 64 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "'Entry Log 1467\p"
	.string "Final stress test complete. Though a\n"
	.string "full test could sadly not be performed,\l"
	.string "the result was far from disappointing.\l"
	.string "TS proves to be clearly the best\l"
	.string "subject to have chosen for G.S.P.. -\l"
	.string "also gave TS special attention today,\l"
	.string "though I warned him not to do that.\l"
	.string "He seemed to not care for my warnings\l"
	.string "though...\p"
	.string "{COLOR LIGHT_GRAY}He{COLOR DARK_GRAY} agreed with letting TS free... of\n"
	.string "course, while we keeping an eye out.\l"
	.string "This will be the final test we will\l"
	.string "perform, if this returns a success we\l"
	.string "will use G.S.P worldwide... on subjects\l"
	.string "that are deemed necessary of course.\l"
	.string "In the meantime, I will continue with\l"
	.string "making daily logs to see the progress\l"
	.string "of TS.\p"
	.string "- G.'$"

PlayerRoom_SignScript_Computer_Text_7:
# 75 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "'Entry Log 1467\p"
	.string "Final stress test complete. I can say\n"
	.string "I'm happily surprised by it. TS\l"
	.string "performed better than I could have\l"
	.string "hoped for.\l"
	.string "There was a moment I feared -, but that\l"
	.string "ended up not happening. This proves\l"
	.string "that our progress in the G- S- Program\l"
	.string "will soon be ready to release worldwide.\l"
	.string "{COLOR LIGHT_GRAY}He{COLOR DARK_GRAY} agreed with letting TS free... of\l"
	.string "course, while we keeping an eye out.\l"
	.string "This will be the final test we will\l"
	.string "perform, but I'm already sure this will\l"
	.string "return a success. Soon, we will be able\l"
	.string "to run G.S.P. on all subjects...\l"
	.string "that are deemed necessary of course.\l"
	.string "In the meantime, I will continue with\l"
	.string "making daily logs to see the progress\l"
	.string "of TS.\p"
	.string "- G.'$"

PlayerRoom_SignScript_Computer_Text_8:
# 86 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You've seen enough for now.$"

PlayerRoom_SignScript_Computer_Text_9:
# 92 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "Maybe another time.$"

PlayerRoom_SignScript_Computer_Text_10:
# 97 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "There isn't anything you need to do on\n"
	.string "it though.$"

PlayerRoom_SignScript_Drawer_Text_0:
# 104 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You have neatly placed all your clothes\n"
	.string "inside the different drawers.$"

PlayerRoom_SignScript_Box_Text_0:
# 110 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "It's a box with some of your personal\n"
	.string "stuff.\l"
	.string "You weren't allowed to bring a lot with\l"
	.string "you, but you're still looking for a good\l"
	.string "place to store it.$"

PlayerRoom_SignScript_Bed_Text_0:
# 120 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "How come these bed are always\n"
	.string "perfectly made?$"

PlayerRoom_SignScript_Bed_Text_1:
# 124 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You could use a rest if you need it.\p"
	.string "Do you want to sleep and rest up for\n"
	.string "today?$"

PlayerRoom_SignScript_Bed_Text_2:
# 149 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You feel refreshed!$"

PlayerRoom_SignScript_Bed_Text_3:
# 153 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "Maybe later.$"

PlayerRoom_SignScript_Bed_Text_4:
# 159 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "It's your bed.\n"
	.string "You don't feel tired though, so there\l"
	.string "seems to be no reason right now to\l"
	.string "sleep.$"
