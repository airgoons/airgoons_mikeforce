/* 
    File -- addHeloGunners.sqf
    Author -- Jerik / Alex
    Version -- 2 -- 18/7/2025
    Adds gunners to the helos for Air Goon Vietnam. Works on the Huey, Chinook, Cayuse, and Little Bird.
    Also sets the vehicle lock for the helicopters to DeltaTroop.
*/

params["_helo"];

// Make some group to stuff these fellas in
// [TODO] Should check to see if anyone is alive in these slots and if so, add them to that group
// I am not implementing that yet because I just want it working
_g = createGroup [west, true];

// Ensure the newly spawned Helo is appropriately teamlocked
_helo setVariable ["teamLock", "DeltaTroop", true];

// We want to make sure that we add the appropriate gunners to each Helo type
// [TODO] At some point it would be wise to maybe make this as general as possible
// by generically searching for empty slots and then filling them
// but right now the goal is to get it working
// We could check the turrets with ((allTurrets vehicle))
switch (typeOf _helo) do
{
    // Cayuse has one turret, slot 1
    case "vn_b_air_oh6a_05":
    {
        for [{_i = 1}, {_i < 2}, {_i = _i + 1}] do
        {
            if (isNull (_this turretUnit [_i])) then
            {
                _u = _g createUnit ["vn_b_men_aircrew_12", [0,0,0], [], 0, "NONE"];
                _u moveInTurret [_helo, [_i]];
            };
        };
    };
    // Iroquois has two turrets, slots 1, 2
    case "vn_b_air_uh1c_03_01":
    {
        for [{_i = 1}, {_i < 3}, {_i = _i + 1}] do
        {
            if (isNull (_this turretUnit [_i])) then
            {
                _u = _g createUnit ["vn_b_men_aircrew_12", [0,0,0], [], 0, "NONE"];
                _u moveInTurret [_helo, [_i]];
            };
        };
    };
    // Huey Slick has two turrets, slots 1, 2
    case "vn_b_air_uh1c_07_02":
    {
        for [{_i = 1}, {_i < 3}, {_i = _i + 1}] do
        {
            if (isNull (_this turretUnit [_i])) then
            {
                _u = _g createUnit ["vn_b_men_aircrew_12", [0,0,0], [], 0, "NONE"];
                _u moveInTurret [_helo, [_i]];
            };
        };
    };
    // Chinook has three turrets, slots 3, 4, 5
    case "vn_b_air_ch47_01_02":
    {
        for [{_i = 3}, {_i < 6}, {_i = _i + 1}] do
        {
            if (isNull (_this turretUnit [_i])) then
            {
                _u = _g createUnit ["vn_b_men_aircrew_12", [0,0,0], [], 0, "NONE"];
                _u moveInTurret [_helo, [_i]];
            };
        };
    };
};