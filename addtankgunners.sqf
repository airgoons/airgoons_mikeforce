params["_tank"];

_d = createGroup [west, true];
_l = createGroup [west, true];

if (!isServer) exitWith {};

_tank setVariable ["teamLock", "CharliePlatoon", true];

switch (typeOf _tank) do
{
	// M41A3 Walker Bulldog, driver [-1] loader [0,1]
	case "vn_b_armor_m41_01_01":
    {
                _u = _d createUnit ["vn_b_men_army_24", [0,0,0], [], 0, "NONE"];				
                _u setSkill 1;
				_u moveInDriver _tank;
				
				_u = _l createUnit ["vn_b_men_army_25", [0,0,0], [], 0, "NONE"];				
                _u setSkill 1;
				_u moveInGunner _tank;
    };
	
	// M48A3 Patton Tank, driver [-1] loader [0,1]
	case "vn_b_armor_m48_01_01":
    {
                _u = _d createUnit ["vn_b_men_army_24", [0,0,0], [], 0, "NONE"];				
                _u setSkill 1;
				_u moveInDriver _tank;
				
				_u = _l createUnit ["vn_b_men_army_25", [0,0,0], [], 0, "NONE"];				
                _u setSkill 1;
				_u moveInGunner _tank;
    };
	
	
	// M67A2 Flame Tank, driver [-1]
	case "vn_b_armor_m67_01_01":
    {
				_u = _d createUnit ["vn_b_men_army_24", [0,0,0], [], 0, "NONE"];				
                _u setSkill 1;
				_u moveInDriver _tank;
    };
};


				
				
				