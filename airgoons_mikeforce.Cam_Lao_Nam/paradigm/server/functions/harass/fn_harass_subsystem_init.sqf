/*
    File: fn_harass_subsystem_init.sqf
    Author:  Savage Game Design
    Public: No
    
    Description:
        Initialises the player harassment subsystem.
		Sends AI squads and ambushes to keep players busy.
    
    Parameter(s):
        None
    
    Returns:
        None
    
    Example(s):
        [] call para_s_fnc_harass_subsystem_init
*/
//Target number of AI per player
para_s_harassBaseChallengeRating = 1;
para_s_harassMaxChallengeRating = 2;
//Delay between each harass attack
para_s_harassDelay = 900;
para_s_harassMinDelay = 480;

para_s_harassFiredDelay = 120;
para_s_harassFiredChallengeValue = 0.5;
para_s_harassFiredFrequencyMultiplier = 0.8;
para_s_harassFiredChallengeCooldown = 300;

["harass_manager", para_s_fnc_harass_job, [], 15] call para_g_fnc_scheduler_add_job;