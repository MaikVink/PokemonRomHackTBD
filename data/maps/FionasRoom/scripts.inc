FionasRoom_MapScripts::
	.byte 0


FionasRoom_SignScript_Drawer::
# 6 "data/maps/FionasRoom/scripts.pory"
	lockall
# 7 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Drawer_Text_0
# 8 "data/maps/FionasRoom/scripts.pory"
	releaseall
	return


FionasRoom_SignScript_Book::
# 12 "data/maps/FionasRoom/scripts.pory"
	lockall
# 13 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_0, MSGBOX_YESNO
# 14 "data/maps/FionasRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FionasRoom_SignScript_Book_2
# 51 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_7
FionasRoom_SignScript_Book_1:
# 53 "data/maps/FionasRoom/scripts.pory"
	releaseall
	return

FionasRoom_SignScript_Book_2:
# 16 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_1
# 23 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_2, MSGBOX_YESNO
# 24 "data/maps/FionasRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FionasRoom_SignScript_Book_6
FionasRoom_SignScript_Book_5:
# 47 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_6
	goto FionasRoom_SignScript_Book_1

FionasRoom_SignScript_Book_6:
# 26 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_3
# 33 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_2, MSGBOX_YESNO
# 34 "data/maps/FionasRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FionasRoom_SignScript_Book_8
	goto FionasRoom_SignScript_Book_5

FionasRoom_SignScript_Book_8:
# 36 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_4
# 42 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Book_Text_5
# 43 "data/maps/FionasRoom/scripts.pory"
	releaseall
	end


FionasRoom_SignScript_Computer::
# 57 "data/maps/FionasRoom/scripts.pory"
	lockall
# 58 "data/maps/FionasRoom/scripts.pory"
	msgbox FionasRoom_SignScript_Computer_Text_0
# 59 "data/maps/FionasRoom/scripts.pory"
	releaseall
	return


FionasRoom_SignScript_Drawer_Text_0:
# 7 "data/maps/FionasRoom/scripts.pory"
	.string "Fiona seems to have used to bottem two\n"
	.string "drawers for her clothes and used the\l"
	.string "top one for some of her personal\l"
	.string "belongings. The top drawer also\l"
	.string "contains a very old, blood stained\l"
	.string "bandage for some reason.$"

FionasRoom_SignScript_Book_Text_0:
# 13 "data/maps/FionasRoom/scripts.pory"
	.string "It seems like Fiona left her diary open\n"
	.string "on the table.\l"
	.string "Do you want to read it?$"

FionasRoom_SignScript_Book_Text_1:
# 16 "data/maps/FionasRoom/scripts.pory"
	.string "'Dear Dairy,\n"
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

FionasRoom_SignScript_Book_Text_2:
# 23 "data/maps/FionasRoom/scripts.pory"
	.string "Do you want to continue reading?$"

FionasRoom_SignScript_Book_Text_3:
# 26 "data/maps/FionasRoom/scripts.pory"
	.string "'Dear Dairy,\n"
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

FionasRoom_SignScript_Book_Text_4:
# 36 "data/maps/FionasRoom/scripts.pory"
	.string "'Dear Dairy,\n"
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

FionasRoom_SignScript_Book_Text_5:
# 42 "data/maps/FionasRoom/scripts.pory"
	.string "That was everything that has been\n"
	.string "written down$"

FionasRoom_SignScript_Book_Text_6:
# 47 "data/maps/FionasRoom/scripts.pory"
	.string "That is enough for now.$"

FionasRoom_SignScript_Book_Text_7:
# 51 "data/maps/FionasRoom/scripts.pory"
	.string "Better not go through people's stuff\n"
	.string "without first asking permission.$"

FionasRoom_SignScript_Computer_Text_0:
# 58 "data/maps/FionasRoom/scripts.pory"
	.string "It's Fiona's computer. You can see a\n"
	.string "background of a cute cat hanging on a\l"
	.string "tree with the text: 'Hang in there!'.\p"
	.string "Not much else you can do on the\n"
	.string "computer since you don't know the\l"
	.string "password.$"
