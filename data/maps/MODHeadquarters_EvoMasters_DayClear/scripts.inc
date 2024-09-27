MODHeadquarters_EvoMasters_DayClear_MapScripts::
# 2 "data/maps/MODHeadquarters_EvoMasters_DayClear/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SimulationClear_OnTransition
	.byte 0


SimulationClear_OnTransition::
# 6 "data/maps/MODHeadquarters_EvoMasters_DayClear/scripts.pory"
	setflag FLAG_SIMULATION_ENTERED
# 7 "data/maps/MODHeadquarters_EvoMasters_DayClear/scripts.pory"
	clearflag FLAG_HIDE_REPLICA_SIMULATION_SISTER
# 8 "data/maps/MODHeadquarters_EvoMasters_DayClear/scripts.pory"
	setvar VAR_SIMULATION_STATUS, 1
	return

