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
# 81 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_9
PlayerRoom_SignScript_Computer_1:
# 83 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return

PlayerRoom_SignScript_Computer_2:
# 16 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_1, MSGBOX_YESNO
# 17 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Computer_6
PlayerRoom_SignScript_Computer_5:
# 27 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Computer_9
PlayerRoom_SignScript_Computer_8:
# 77 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_8
	goto PlayerRoom_SignScript_Computer_1

PlayerRoom_SignScript_Computer_6:
# 19 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_2, MSGBOX_YESNO
	goto PlayerRoom_SignScript_Computer_5

PlayerRoom_SignScript_Computer_9:
# 29 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_3, MSGBOX_YESNO
# 36 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Computer_12
PlayerRoom_SignScript_Computer_11:
# 48 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Computer_14
	goto PlayerRoom_SignScript_Computer_8

PlayerRoom_SignScript_Computer_12:
# 38 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_4, MSGBOX_YESNO
	goto PlayerRoom_SignScript_Computer_11

PlayerRoom_SignScript_Computer_14:
# 50 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, PlayerRoom_SignScript_Computer_17
# 63 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_6
PlayerRoom_SignScript_Computer_16:
# 72 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_7
# 73 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	end

PlayerRoom_SignScript_Computer_17:
# 52 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Computer_Text_5
	goto PlayerRoom_SignScript_Computer_16


PlayerRoom_SignScript_Drawer::
# 87 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 88 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Drawer_Text_0
# 89 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Box::
# 93 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 94 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Box_Text_0
# 95 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return


PlayerRoom_SignScript_Bed::
# 99 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	lockall
# 100 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FIRST_POKEMON, PlayerRoom_SignScript_Bed_2
# 140 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_4
PlayerRoom_SignScript_Bed_1:
# 142 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	releaseall
	return

PlayerRoom_SignScript_Bed_2:
# 102 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 5
	goto_if_lt PlayerRoom_SignScript_Bed_6
PlayerRoom_SignScript_Bed_5:
# 106 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_1, MSGBOX_YESNO
# 108 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PlayerRoom_SignScript_Bed_8
# 135 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_3
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_6:
# 104 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_0
	goto PlayerRoom_SignScript_Bed_5

PlayerRoom_SignScript_Bed_8:
# 110 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYERROOM
# 111 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	fadescreen 1
# 112 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	special HealPlayerParty
# 113 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	playfanfare MUS_HEAL
# 114 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	waitfanfare
# 115 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	fadescreen 0
# 116 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 5
	goto_if_eq PlayerRoom_SignScript_Bed_12
PlayerRoom_SignScript_Bed_11:
# 121 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION < 10, 0
	goto_if_ne PlayerRoom_SignScript_Bed_16
PlayerRoom_SignScript_Bed_14:
# 126 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 10
	goto_if_eq PlayerRoom_SignScript_Bed_20
PlayerRoom_SignScript_Bed_19:
# 131 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	msgbox PlayerRoom_SignScript_Bed_Text_2
	goto PlayerRoom_SignScript_Bed_1

PlayerRoom_SignScript_Bed_12:
# 118 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	clearflag FLAG_REVERSED_GUARD
# 119 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setflag FLAG_TOURNAMENT
	goto PlayerRoom_SignScript_Bed_11

PlayerRoom_SignScript_Bed_15:
# 123 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	addvar VAR_STORY_PROGRESSION, 1
# 124 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	clearflag FLAG_BATTLE_WON
	goto PlayerRoom_SignScript_Bed_14

PlayerRoom_SignScript_Bed_16:
# 121 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, PlayerRoom_SignScript_Bed_15
	goto PlayerRoom_SignScript_Bed_14

PlayerRoom_SignScript_Bed_20:
# 128 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	setflag FLAG_FIONA_ROOM
# 129 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
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
# 19 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
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
	.string "through, would you like to look at them?$"

PlayerRoom_SignScript_Computer_Text_3:
# 29 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
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
	.string "- G.'\p"
	.string "Would you like to continue reading?$"

PlayerRoom_SignScript_Computer_Text_4:
# 38 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
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
	.string "- G.'\p"
	.string "Would you like to continue reading?$"

PlayerRoom_SignScript_Computer_Text_5:
# 52 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
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

PlayerRoom_SignScript_Computer_Text_6:
# 63 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
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

PlayerRoom_SignScript_Computer_Text_7:
# 72 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "That were all logs that you were able to\n"
	.string "read.$"

PlayerRoom_SignScript_Computer_Text_8:
# 77 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "Maybe another time$"

PlayerRoom_SignScript_Computer_Text_9:
# 81 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "There isn't anything you need to do on\n"
	.string "it though.$"

PlayerRoom_SignScript_Drawer_Text_0:
# 88 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You have neatly placed all your clothes\n"
	.string "inside the different drawers.$"

PlayerRoom_SignScript_Box_Text_0:
# 94 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "It's a box with some of your personal\n"
	.string "stuff.\l"
	.string "You weren't allowed to bring a lot with\l"
	.string "you, but you're still looking for a good\l"
	.string "place to store it.$"

PlayerRoom_SignScript_Bed_Text_0:
# 104 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "How come these bed are always\n"
	.string "perfectly made?$"

PlayerRoom_SignScript_Bed_Text_1:
# 106 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You could use a rest if you need it.\p"
	.string "Do you want to sleep and rest up for\n"
	.string "today?$"

PlayerRoom_SignScript_Bed_Text_2:
# 131 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "You feel refreshed!$"

PlayerRoom_SignScript_Bed_Text_3:
# 135 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "Maybe later.$"

PlayerRoom_SignScript_Bed_Text_4:
# 140 "data/maps/MODHeadquarters_PlayerRoom/scripts.pory"
	.string "It's your bed.\n"
	.string "You don't feel tired though, so there\l"
	.string "seems to be no reason right now to\l"
	.string "sleep$"
