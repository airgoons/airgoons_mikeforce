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
		image = "img\AirGoonIcons\Charlie.paa";
		position_marker = "mf_charlieplatoon";
	};

	class alphaplatoon_base
	{
		image = "img\AirGoonIcons\Alpha.paa";
		position_marker = "mf_alphaplatoon";
	};

	class bravoplatoon_base
	{
		image = "img\AirGoonIcons\Bravo.paa";
		position_marker = "mf_bravoplatoon";
	};

	class deltatroop_base
	{
		image = "img\AirGoonIcons\Delta.paa";
		position_marker = "mf_deltatroop";
	};
};
