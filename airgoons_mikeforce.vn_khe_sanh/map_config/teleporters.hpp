class objects
{
	class vn_mf_deltatroop_teleporter 
	{
		destinations[] = {"alphaplatoon_base", "bravoplatoon_base", "charlieplatoon_base"};
	};

	class vn_mf_charlieplatoon_teleporter
	{
		destinations[] = {"alphaplatoon_base", "bravoplatoon_base", "deltatroop_base"};
	};

	class vn_mf_alphaplatoon_teleporter
	{
		destinations[] = {"charlieplatoon_base", "bravoplatoon_base", "deltatroop_base"};
	};

	class vn_mf_bravoplatoon_teleporter
	{
		destinations[] = {"alphaplatoon_base", "charlieplatoon_base", "deltatroop_base"};
	};
};

class destinations
{
	class charlieplatoon_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_spikebase_ca.paa";
		position_marker = "mf_respawn_charlieplatoon";
	};

	class alphaplatoon_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_mikebase_ca.paa";
		position_marker = "mf_respawn_alphaplatoon";
	};

	class bravoplatoon_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_bravoplatoonbase_ca.paa";
		position_marker = "mf_respawn_bravoplatoon";
	};

	class deltatroop_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_airbase_ca.paa";
		position_marker = "mf_respawn_deltatroop";
	};
};
