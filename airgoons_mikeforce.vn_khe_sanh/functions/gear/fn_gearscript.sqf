//call with: [this, "ROLE"] call Gib_fnc_Gearscript;

private ["_unit", "_type", "_groupId"];

_unit = _this select 0;
_type = _this select 1;

if (count _this > 2) then {

	_groupId = _this select 2;

	(group _unit) setGroupId [_groupId];

};

if (!local _unit) exitWith {};

_unit setVariable ["BIS_enableRandomization", false];
_unit setVariable ["FW_Loadout", _type, true];

removeHeadgear _unit;
removeVest _unit;
removeBackpack _unit;
removeUniform _unit;
removeAllWeapons _unit;
removeAllAssignedItems _unit;

#include "..\..\loadouts\US Army Infantry (MF).sqf"

