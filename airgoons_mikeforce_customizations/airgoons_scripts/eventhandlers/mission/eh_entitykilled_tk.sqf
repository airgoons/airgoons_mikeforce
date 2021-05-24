/*
    File: eh_EntityKilled_tk.sqf
    Author: Air Goons

    Description:
		Entity death event handler for:
			- Logging friendly fire events

    Parameter(s):
		_unit - entity that was killed [OBJECT]
		_killer - the killer (vehicle or person) [OBJECT]
		_instigator - person who pulled the trigger [OBJECT]
		_useEffects - destruction effects [BOOL]

    Returns: nothing

    Example(s):
    	Not called directly.
*/

params
[
	"_unit",
	"_killer",
	"_instigator",
	"_useEffects"
];

if (isPlayer _unit) then
{
	if (isPlayer _killer) then {
		if (!(_unit isEqualTo _killer)) then {
			// Player TK'd by direct fire
			["(FRIENDLY FIRE) %1 killed by %2 [%3]", name _unit, name _killer, serverTime] call BIS_fnc_logFormat;
		};
	};

	if (isPlayer _instigator) then {
		if (!(_unit isEqualTo _instigator) && !(_killer isEqualTo _instigator)) then {
			// Player TK'd by area damage
			["(FRIENDLY FIRE) %1 killed by %2, instigated by %3 [%4]", name _unit, name _killer, name _instigator, serverTime] call BIS_fnc_logFormat;
		};
	};
};
