/*
    File: para_player_init_server.sqf
    Author: Savage Game Design
    Public: Yes

    Description:
		Called on the server immediately after preinit_client, and before init_client.
		Perform server-side player initialisation here.
		It is safe to access the player object in this function.

		Load order:
			- para_player_preload_client.sqf - Called as soon as possible on the client.
			- para_player_loaded_client.sqf - Called on client as soon as the player is ready
			- para_player_init_server.sqf - Serverside player initialisation.
			- para_player_init_client.sqf - Clientside player initialisation.
			- para_player_postinit_server.sqf - Called on server once all player initialisation is done.

    Parameter(s):
		_player - Player to initialise [OBJECT]
		_didJIP - Whether the player joined in progress [BOOLEAN]

    Returns:
		None

    Example(s):
		//description.ext
		use_paradigm_init = 1;
*/

params [["_player", objNull, [objNull]], ["_didJIP", true, [true]]];

diag_log format ["Mike Force: Player init server - %1", _player];

private _initialised = _player getVariable "para_s_player_initialised";
// prevent repeated execution of init
if !(isNil "_initialised") exitWith {};

private _uid = getPlayerUID _player;
(["GET", (_uid + "_data"), []] call para_s_fnc_profile_db) params ["","_object_data"];

private _config = (missionConfigFile >> "gamemode" >> "vars" >> "players");
private _public_vars = getArray(_config >> "publicvars");
private _blacklisted_vars = getArray(_config >> "blacklisted");

_local_vars = [];
if !(_object_data isEqualTo []) then
{
	{
		_x params ["_varname","_vardata"];
		if (!isNil "_vardata" && !(_varname in _blacklisted_vars)) then
		{
			if (_varname in _public_vars) then
			{
				// set everwhere
				_player setVariable [_varname,_vardata,true];
			}
			else
			{
				// set only on server and client
				_local_vars pushBack [_varname,_vardata];
				_player setVariable [_varname,_vardata];
			};
		};
	} forEach _object_data;
};


// set new enlisted number
private _enlisted = _player getVariable ["vn_mf_db_serial","0"];
if (_enlisted isEqualTo "0") then {
	private _warcodes = [51,52,53,54,55,56];
	// increment enlisted count server side
	vn_mf_enlisted_counter = vn_mf_enlisted_counter + 1;
	["SET", "enlisted_counter", vn_mf_enlisted_counter] call para_s_fnc_profile_db;
	private _serial = format["US %1 %2",selectRandom _warcodes,vn_mf_enlisted_counter];
	_local_vars pushBack ["vn_mf_db_serial",_serial];
	_player setVariable ["vn_mf_db_serial",_serial];

};

// last group, or if not one assign AlphaPlatoon
// private _lastTeamName = _player getVariable ["vn_mf_db_player_group", "AlphaPlatoon"];
// Attempt team change, defaulting to AlphaPlatoon is team is full.

// Assigns players to the appropriate team based on their group.
_playersGroup = groupId group _player;
hint _playersGroup;
switch (_playersGroup) do
{
	case "Alpha Platoon": {[_player, "AlphaPlatoon", nil, false] call vn_mf_fnc_change_team; [(call TFAR_fnc_activeSwRadio), "60.1"] call TFAR_fnc_setSwFrequency};
	case "Bravo Aussies": {[_player, "BravoPlatoon", nil, false] call vn_mf_fnc_change_team; [(call TFAR_fnc_activeSwRadio), "60.2"] call TFAR_fnc_setSwFrequency};
	case "Charlie Platoon": {[_player, "CharliePlatoon", nil, false] call vn_mf_fnc_change_team; [(call TFAR_fnc_activeSwRadio), "60.3"] call TFAR_fnc_setSwFrequency};
	default {[_player, "DeltaTroop", nil, false] call vn_mf_fnc_change_team; [(call TFAR_fnc_activeSwRadio), "60.4"] call TFAR_fnc_setSwFrequency};
};

// [NOFUN][AJK] This would load the last loadout, but instead we want to always spawn with the equipment preset in the editor
// (["GET", (_uid + "_loadout"), []] call para_s_fnc_profile_db) params ["","_loadout"];
// if !(_loadout isEqualTo []) then
// {
// 	_player setUnitLoadout [_loadout, false];
// };

//THIS BELOW IS NOT CURRENTLY IN USE BUT IS PRESERVED IF NEEDED 
//[NOFUN][AJK] Just set everyone's rank to Private to avoid doing any rank stuff. I had previously
// just removed all this but the whole module seems dependent on the existence of the 
// stupid arsenal module so it is easier to restrict items by making the ranks low.
// If I can figure out how to decouple the arsenal module we could undo this, but also I don't think we need it so it is probably fine?

// restore players rank
// ([_player] call vn_mf_fnc_unit_to_rank) params ["", "_rank", ""];
// _rank = toUpper _rank;
// if !(rank _player isEqualTo _rank) then
// {
// 	_player setUnitRank _rank;
// };

// start player at correct camp for team
//For now, we're just hardcoding this.

// [NOFUN][AJK] This code enables the AlphaPlatoon special spawn system
//private _playerGroup = _player getVariable ["vn_mf_db_player_group", "AlphaPlatoon"];
//private _respawnMarker = format ["mf_respawn_%1", _playerGroup];
//_player setPos getMarkerPos _respawnMarker;


// add event handlers from the harass subsystem.
[_player] call para_s_fnc_harass_add_player_event_handlers;

// add cleanup handlers for dropped gear to the player
[_player] call para_s_fnc_cleanup_register_player;

// send all variables to player
[_local_vars] remoteExecCall ["para_c_fnc_set_local_var",_player];

_player setVariable ["para_s_player_initialised", true];
_player setVariable ["vn_mf_dyn_issetup", true];
