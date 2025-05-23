@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
	setfieldeffectargument 0, VAR_RESULT
	bufferstring STR_VAR_1, Text_Axe
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!\p"
	.string "Would you like to CUT it?$"

Text_MonUsedFieldMove:
	.string "{PLAYER} used the {STR_VAR_1}!$"

Text_CantCut:
	.string "This tree looks like it can be\n"
	.string "CUT down with the right tool!$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferstring STR_VAR_1, Text_RockerSmasher
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

EventScript_FailedFieldEffect::
	msgbox Text_Dad_Advice, MSGBOX_DEFAULT
	releaseall
	end

Text_Dad_Advice:
	.string "DAD's advice…\n"
	.string "{PLAYER}, there's a time and place for\l"
	.string "everything!$"

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_CantSmash:
	.string "It's a rugged rock, but with the \n"
	.string "right tool you may be able to \l"
	.string "smash it$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "It's a big boulder, but with your\n"
	.string "Bolder Pusher you may be able to \l"
	.string "push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{PLAYER} used the Bolder Pusher\p"
	.string "{PLAYER}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder, but with the\n"
	.string "right tool you may be able to \l"
	.string "push it aside.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\l"
	.string "boulders around.$"

EventScript_UseWaterfall::
	lockall
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

EventScript_QuickWaterfall::
	lockall
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use Reverse\l"
	.string "Waterfall?$"

Text_MonUsedWaterfall:
	.string "{PLAYER} used Reverse Waterfall.$"

EventScript_UseDive::
	lockall
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
	msgbox Text_MonSurfaced, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

EventScript_QuickDive::
	lockall
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_QuickDiveUnderwater::
	lockall
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_MonSurfaced, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

Text_CantDive:
	.string "The sea is deep here. With some\n"
	.string "equipment you may be able to \l"
	.string "go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to DIVE?$"

Text_MonUsedDive:
	.string "{PLAYER} dived deep into\n"
	.string "the water.$"

Text_MonSurfaced:
	.string "{PLAYER} swam up to\n"
	.string "the surface.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "With the right equipment you may\l"
	.string "be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to swim back to the\l"
	.string "surface?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"

Text_RockerSmasher:
	.string "Rock Smasher$"

Text_Axe:
	.string "Axe$"
