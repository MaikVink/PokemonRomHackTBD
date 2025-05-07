Empty_MapScripts::
	.byte 0


Debug_Trigger_TestFlying::
	return


# 8 "data/maps/Empty/scripts.pory"
CommonMovement_NoticeUp:
# 9 "data/maps/Empty/scripts.pory"
	face_up
# 10 "data/maps/Empty/scripts.pory"
	emote_exclamation_mark
	step_end

# 13 "data/maps/Empty/scripts.pory"
CommonMovement_NoticeDown:
# 14 "data/maps/Empty/scripts.pory"
	face_down
# 15 "data/maps/Empty/scripts.pory"
	emote_exclamation_mark
	step_end

# 18 "data/maps/Empty/scripts.pory"
CommonMovement_LookLeft:
# 19 "data/maps/Empty/scripts.pory"
	face_left
	step_end

# 22 "data/maps/Empty/scripts.pory"
CommonMovement_LookRight:
# 23 "data/maps/Empty/scripts.pory"
	face_right
	step_end

# 26 "data/maps/Empty/scripts.pory"
CommonMovement_WalkDown1:
# 27 "data/maps/Empty/scripts.pory"
	walk_down
	step_end

# 30 "data/maps/Empty/scripts.pory"
CommonMovement_WalkUp1:
# 31 "data/maps/Empty/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/Empty/scripts.pory"
CommonMovement_WalkUpSlow1:
# 35 "data/maps/Empty/scripts.pory"
	walk_slow_up
	step_end

# 38 "data/maps/Empty/scripts.pory"
CommonMovement_WalkDownAndNotice:
# 39 "data/maps/Empty/scripts.pory"
	walk_down
# 40 "data/maps/Empty/scripts.pory"
	emote_exclamation_mark
	step_end
