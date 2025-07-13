/*
    File: fn_change_team.sqf
    Author: Savage Game Design
    Public: Yes
    
    Description:
        Changes team with checks.
    
    Parameter(s):
		_player - Player to change to the team of [UNIT]
		_team - Name of the team to change to [STRING]
    
    Returns:
	   	Team join successful [BOOLEAN]
    
    Example(s):
		[_myPlayer, "ACAV"] call vn_mf_fnc_change_team
*/

// Added new 4th parameter to allow overriding the officer check.
// A default value is provided and it is safely back-compatible with all other calls.
params ["_player", "_team", ["_fullTeamBehaviour", "ABORT"], ["_performOfficerCheck", true]];

private _currentTeam = _player getVariable ["vn_mf_db_player_group", "FAILED"];

if (_currentTeam isEqualTo _team) exitWith { false };

// Edited the officer check to allow skipping it for the initialization using triggers (I hope).
if (_performOfficerCheck && vn_mf_duty_officers inAreaArray [getPos _player, 20, 20, 0, false, 20] isEqualTo []) exitWith {
	["TaskFailed",["","STR_vn_mf_needdutyofficer"]] remoteExecCall ["para_c_fnc_show_notification",_player];
	false
};


private _tooManyPlayers = [_team] call vn_mf_fnc_is_team_full;


if (_tooManyPlayers && _fullTeamBehaviour == "DEFAULT") then {
	_team = "MikeForce";
};

if (_tooManyPlayers && _team != "MikeForce") exitWith {
	["TaskFailed",["","STR_vn_mf_notification_title_team_full"]] remoteExecCall ["para_c_fnc_show_notification",_player];
	false
};

[_player, _team] call vn_mf_fnc_force_team_change;
true
