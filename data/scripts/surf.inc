EventScript_UseSurf::
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferstring STR_VAR_1, Text_Surfboard
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

EventScript_QuickSurf::
	setvar VAR_RESULT, 0
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndQuickSurf
	bufferstring STR_VAR_1, Text_Surfboard
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseQuickSurf::
	releaseall
EventScript_EndQuickSurf::
	end

Text_Surfboard:
	.string "Surfboard$"
