MODHeadquarters_FionasRoom_MapScripts::
	.byte 0


FionasRoom_SignScript_Drawer::
# 8 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	lockall
# 9 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Drawer_Text_0
# 10 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	goto_if_unset FLAG_FIONA_ROOM, FionasRoom_SignScript_Drawer_2
FionasRoom_SignScript_Drawer_1:
# 18 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	releaseall
	return

FionasRoom_SignScript_Drawer_2:
# 12 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_NoticeUp
# 13 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Drawer_Text_1
# 16 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_FaceOriginalDirection
	goto FionasRoom_SignScript_Drawer_1


FionasRoom_SignScript_Book::
# 22 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	lockall
# 23 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_0, MSGBOX_YESNO
# 24 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FionasRoom_SignScript_Book_2
# 112 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_9
FionasRoom_SignScript_Book_1:
# 114 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	releaseall
	return

FionasRoom_SignScript_Book_2:
# 26 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	goto_if_unset FLAG_FIONA_ROOM, FionasRoom_SignScript_Book_5
# 36 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	setvar VAR_TEMP_A, 1
# 37 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	message FionasRoom_SignScript_Book_Text_2
FionasRoom_SignScript_Book_8:
# 38 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq FionasRoom_SignScript_Book_9
	goto FionasRoom_SignScript_Book_1

FionasRoom_SignScript_Book_5:
# 28 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_FacePlayer
# 29 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_1
# 32 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_FaceOriginalDirection
	goto FionasRoom_SignScript_Book_1

FionasRoom_SignScript_Book_9:
# 40 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 10
	goto_if_lt FionasRoom_SignScript_Book_12
# 46 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	multichoice 25, 5, MULTI_DIARY_2, 0
FionasRoom_SignScript_Book_11:
# 48 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	closemessage
# 49 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 0, FionasRoom_SignScript_Book_16
# 60 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 1, FionasRoom_SignScript_Book_17
# 69 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 2, FionasRoom_SignScript_Book_18
# 77 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 3, FionasRoom_SignScript_Book_19
# 104 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	setvar VAR_TEMP_1, 0
# 105 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_8
	goto FionasRoom_SignScript_Book_8

FionasRoom_SignScript_Book_12:
# 42 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	multichoice 25, 5, MULTI_DIARY_1, 0
	goto FionasRoom_SignScript_Book_11

FionasRoom_SignScript_Book_16:
# 52 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_3
# 59 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	message FionasRoom_SignScript_Book_Text_2
	goto FionasRoom_SignScript_Book_8

FionasRoom_SignScript_Book_17:
# 61 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_4
# 68 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	message FionasRoom_SignScript_Book_Text_2
	goto FionasRoom_SignScript_Book_8

FionasRoom_SignScript_Book_18:
# 70 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_5
# 76 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	message FionasRoom_SignScript_Book_Text_2
	goto FionasRoom_SignScript_Book_8

FionasRoom_SignScript_Book_19:
# 78 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 10
	goto_if_lt FionasRoom_SignScript_Book_21
# 82 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	goto_if_set FLAG_TOURNAMENT_LOST, FionasRoom_SignScript_Book_22
# 94 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_7
# 101 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	message FionasRoom_SignScript_Book_Text_2
	goto FionasRoom_SignScript_Book_8

FionasRoom_SignScript_Book_21:
	goto FionasRoom_SignScript_Book_8

FionasRoom_SignScript_Book_22:
# 84 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_6
# 90 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	message FionasRoom_SignScript_Book_Text_2
	goto FionasRoom_SignScript_Book_8


FionasRoom_EventScript_Fiona::
# 118 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	lockall
# 119 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	faceplayer
# 120 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	switch VAR_STORY_PROGRESSION
# 122 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 6, FionasRoom_EventScript_Fiona_3
# 124 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 7, FionasRoom_EventScript_Fiona_4
# 126 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 8, FionasRoom_EventScript_Fiona_5
# 128 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	case 9, FionasRoom_EventScript_Fiona_6
# 140 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_EventScript_Fiona_Text_5
FionasRoom_EventScript_Fiona_1:
# 145 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_FaceOriginalDirection
# 146 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	releaseall
	return

FionasRoom_EventScript_Fiona_3:
# 123 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_EventScript_Fiona_Text_0
	goto FionasRoom_EventScript_Fiona_1

FionasRoom_EventScript_Fiona_4:
# 125 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_EventScript_Fiona_Text_1
	goto FionasRoom_EventScript_Fiona_1

FionasRoom_EventScript_Fiona_5:
# 127 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_EventScript_Fiona_Text_2
	goto FionasRoom_EventScript_Fiona_1

FionasRoom_EventScript_Fiona_6:
# 129 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	goto_if_set FLAG_BATTLE_WON, FionasRoom_EventScript_Fiona_8
# 136 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_EventScript_Fiona_Text_4
	goto FionasRoom_EventScript_Fiona_1

FionasRoom_EventScript_Fiona_8:
# 131 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_EventScript_Fiona_Text_3
	goto FionasRoom_EventScript_Fiona_1


FionasRoom_SignScript_Computer::
# 150 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	lockall
# 151 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Computer_Text_0
# 152 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	goto_if_unset FLAG_FIONA_ROOM, FionasRoom_SignScript_Computer_2
FionasRoom_SignScript_Computer_1:
# 160 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	releaseall
	return

FionasRoom_SignScript_Computer_2:
# 154 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_NoticeUp
# 155 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Computer_Text_1
# 158 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	applymovement 1, CommonMovement_FaceOriginalDirection
	goto FionasRoom_SignScript_Computer_1


FionasRoom_SignScript_Bed::
# 164 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	lockall
# 165 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Bed_Text_0, MSGBOX_YESNO
# 167 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FionasRoom_SignScript_Bed_2
# 190 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Bed_Text_3
FionasRoom_SignScript_Bed_1:
# 192 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	releaseall
	return

FionasRoom_SignScript_Bed_2:
# 169 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	compare VAR_STORY_PROGRESSION, 5
	goto_if_lt FionasRoom_SignScript_Bed_5
# 173 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	goto_if_unset FLAG_FIONA_ROOM, FionasRoom_SignScript_Bed_6
# 180 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	setrespawn HEAL_LOCATION_FIONASROOM
# 181 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	fadescreen 1
# 182 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	special HealPlayerParty
# 183 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	playfanfare MUS_HEAL
# 184 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	waitfanfare
# 185 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	fadescreen 0
	goto FionasRoom_SignScript_Bed_1

FionasRoom_SignScript_Bed_5:
# 171 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Bed_Text_1
	goto FionasRoom_SignScript_Bed_1

FionasRoom_SignScript_Bed_6:
# 175 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Bed_Text_2
	goto FionasRoom_SignScript_Bed_1


FionasRoom_SignScript_Table::
# 196 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Table_Text_0
# 197 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	releaseall
	return


FionasRoom_SignScript_Drawer_Text_0:
# 9 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Fiona seems to have used to bottem two\n"
	.string "drawers for her clothes and used the\l"
	.string "top one for some of her personal\l"
	.string "belongings. The top drawer also\l"
	.string "contains a very old, blood stained\l"
	.string "bandage for some reason.$"

FionasRoom_SignScript_Drawer_Text_1:
# 13 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Hé, please don't touch my stuff\n"
	.string "{PLAYER}!\l"
	.string "I...\l"
	.string "I just had that organised!$"

FionasRoom_SignScript_Book_Text_0:
# 23 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "It seems like Fiona left her diary open\n"
	.string "on the table.\l"
	.string "Do you want to read it?$"

FionasRoom_SignScript_Book_Text_1:
# 29 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}:Uhm...\p"
	.string "I hope you understand {PLAYER}, but\n"
	.string "this stuff is a little bit personal...\p"
	.string "So I would appreciate it if you didn't\n"
	.string "read it.$"

FionasRoom_SignScript_Book_Text_2:
# 37 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Which diary entry would you like to\n"
	.string "read?$"

FionasRoom_SignScript_Book_Text_3:
# 52 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "'Dear Diary,\n"
	.string "today is the day!\l"
	.string "The day I'm finally going to do\l"
	.string "something usefull with my life!\l"
	.string "My mom and brother were not happy with\l"
	.string "my choice, but I could not just sit\l"
	.string "around and do nothing anymore!\l"
	.string "My mom seems to eventually understood\l"
	.string "it, but I fear my brother still hates me\l"
	.string "for the choice I made.\p"
	.string "I just hope I can show him one day why I\n"
	.string "did this and why it was neseccary.\l"
	.string "Please Brother, forgive me.'$"

FionasRoom_SignScript_Book_Text_4:
# 61 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "'Dear Diary,\n"
	.string "I'm so annoyed right now!\l"
	.string "I have been studying really hard and\l"
	.string "pushing myself to the limit and still I\l"
	.string "only scored second highest of my class.\p"
	.string "I don't know how they do it, that\n"
	.string "{PLAYER}. They just seems to be a\l"
	.string "natural at this!\p"
	.string "I want to hate them, but I just can't\n"
	.string "help but respect their skill.\l"
	.string "Maybe I should just try to befriend\l"
	.string "them instead?\l"
	.string "Maybe they could help me out if I would\l"
	.string "ever be in need...'$"

FionasRoom_SignScript_Book_Text_5:
# 70 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "'Dear Diary,\n"
	.string "It's finally time, I have made it through\l"
	.string "the pre-selection and I'm now\l"
	.string "applicable for getting my first\l"
	.string "pokemon.\p"
	.string "I never have had a pokemon before, I\n"
	.string "wonder which one I will get and how they\l"
	.string "will be?\p"
	.string "I just hope everything I'm doing is\n"
	.string "gonna be worth it...\p"
	.string "Brother, if you would ever read this,\n"
	.string "know that I have done this in your best\l"
	.string "interest.\l"
	.string "Please forgive our mom for letting me do\l"
	.string "this and please forgive me for wanting\l"
	.string "to do it.'$"

FionasRoom_SignScript_Book_Text_6:
# 84 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "'Dear Diary,\n"
	.string "I cannot believe it!\l"
	.string "I won the Tournament! I was sure\l"
	.string "{PLAYER} would also beat me with this,\l"
	.string "but no, it was me who won!\l"
	.string "Even {COLOR LIGHT_GRAY}The Leader{COLOR DARK_GRAY} came to me personally\l"
	.string "and gave me an Shiny Eevee!\l"
	.string "Maybe... Maybe I can still do this...\l"
	.string "Maybe I can still be the sister that\l"
	.string "protects you Brother...$"

FionasRoom_SignScript_Book_Text_7:
# 94 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "'Dear Diary,\n"
	.string "The outcome I feared has happened.\l"
	.string "{PLAYER} won the tournament.\p"
	.string "It's not like I don't think they deserve\n"
	.string "it, I just don't know if I can trust\l"
	.string "them.\l"
	.string "I would like them to be my friend, but if\l"
	.string "they become a problem than I fear I\l"
	.string "won't be strong enough to stop them.\l"
	.string "Which means I won't be strong enough to\l"
	.string "protect you... Brother.\p"
	.string "I failed you... I'm sorry.$"

FionasRoom_SignScript_Book_Text_8:
# 105 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Enough snooping around for now.$"

FionasRoom_SignScript_Book_Text_9:
# 112 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Better not go through people's stuff\n"
	.string "without first asking permission.$"

FionasRoom_EventScript_Fiona_Text_0:
# 123 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Hé {PLAYER}, ready for your\n"
	.string "first day of the tournament?$"

FionasRoom_EventScript_Fiona_Text_1:
# 125 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Hope the tournament is going\n"
	.string "great for you! So far, I'm keeping up my\l"
	.string "end of our agreement.$"

FionasRoom_EventScript_Fiona_Text_2:
# 127 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: I made it to the finals\n"
	.string "{PLAYER}! Don't dissapoint me and\l"
	.string "make sure we meet each other there!$"

FionasRoom_EventScript_Fiona_Text_3:
# 131 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Hé Champion, don't think I'm just\n"
	.string "going to sulk around.\p"
	.string "I'm going to train harder than ever\n"
	.string "before and the next time you won't\l"
	.string "defeat me that easily!$"

FionasRoom_EventScript_Fiona_Text_4:
# 136 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Today is the day {PLAYER}.\n"
	.string "Today we're going to do that pokemon\l"
	.string "battle we promised each other. Once\l"
	.string "you're ready, go to the Battle Dojo.\l"
	.string "I'll be ready!$"

FionasRoom_EventScript_Fiona_Text_5:
# 140 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: Oh, hé {PLAYER}! Welcome to my\n"
	.string "room!\l"
	.string "Feel free to look around the place!\p"
	.string "If you need anything let me know!\p"
	.string "I do intend on getting an early night\n"
	.string "though, so hope you don't mind me going\l"
	.string "to bed soon.\p"
	.string "Maybe you should do the same, but that\n"
	.string "is entirely up to you!$"

FionasRoom_SignScript_Computer_Text_0:
# 151 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "It's Fiona's computer. You can see a\n"
	.string "background of a cute cat hanging on a\l"
	.string "tree with the text: 'Hang in there!'.\p"
	.string "Not much else you can do on the\n"
	.string "computer since you don't know the\l"
	.string "password.$"

FionasRoom_SignScript_Computer_Text_1:
# 155 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: What are you trying to do?\p"
	.string "Anyways, don't think that I'm just going\n"
	.string "to tell you my password and good luck\l"
	.string "guessing it!\p"
	.string "I know how to keep nosey people out of\n"
	.string "my affairs, if you know what I mean.$"

FionasRoom_SignScript_Bed_Text_0:
# 165 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "It's Fiona's bed!\p"
	.string "Do you want to sleep in it?$"

FionasRoom_SignScript_Bed_Text_1:
# 171 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Now is not the time to go to bed...$"

FionasRoom_SignScript_Bed_Text_2:
# 175 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "{COLOR RED}Fiona{COLOR DARK_GRAY}: uhm... please don't take this the\n"
	.string "wrong way, but I just see you as a\l"
	.string "friend {PLAYER}.\p"
	.string "I...\n"
	.string "I don't feel that comfortable sharing a\l"
	.string "bed with you...$"

FionasRoom_SignScript_Bed_Text_3:
# 190 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Why would you want to sleep in Fiona's\n"
	.string "bed?$"

FionasRoom_SignScript_Table_Text_0:
# 196 "data/maps/MODHeadquarters_FionasRoom/scripts.pory"
	.string "Why does Fiona also have an unique\n"
	.string "table and carpet?$"
