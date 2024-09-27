MODHeadquarters_EvoMasters_Fog_MapScripts::
# 2 "data/maps/MODHeadquarters_EvoMasters_Fog/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SimulationFoggy_OnTransition
	.byte 0


SimulationFoggy_OnTransition::
# 6 "data/maps/MODHeadquarters_EvoMasters_Fog/scripts.pory"
	setflag FLAG_SIMULATION_ENTERED
# 7 "data/maps/MODHeadquarters_EvoMasters_Fog/scripts.pory"
	clearflag FLAG_HIDE_REPLICA_SIMULATION_SISTER
# 8 "data/maps/MODHeadquarters_EvoMasters_Fog/scripts.pory"
	setvar VAR_SIMULATION_STATUS, 1
	return

