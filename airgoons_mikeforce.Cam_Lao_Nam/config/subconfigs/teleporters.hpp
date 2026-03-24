class objects
{
	class vn_mf_DeltaTroop_teleporter 
	{
		destinations[] = {"AlphaPlatoon_base", "CharliePlatoon_base", "BravoPlatoon_base"};
	};

	class vn_mf_BravoPlatoon_teleporter
	{
		destinations[] = {"AlphaPlatoon_base", "CharliePlatoon_base", "DeltaTroop_base"};
	};

	class vn_mf_AlphaPlatoon_teleporter
	{
		destinations[] = {"BravoPlatoon_base", "CharliePlatoon_base", "DeltaTroop_base"};
	};

	class vn_mf_CharliePlatoon_teleporter
	{
		destinations[] = {"AlphaPlatoon_base", "BravoPlatoon_base", "DeltaTroop_base"};
	};
};

class destinations
{
	class BravoPlatoon_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_spikebase_ca.paa";
		position_marker = "mf_respawn_BravoPlatoon";
	};

	class AlphaPlatoon_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_mikebase_ca.paa";
		position_marker = "mf_respawn_AlphaPlatoon";
	};

	class CharliePlatoon_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_CharliePlatoonbase_ca.paa";
		position_marker = "mf_respawn_CharliePlatoon";
	};

	class DeltaTroop_base
	{
		image = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_tel_airbase_ca.paa";
		position_marker = "mf_respawn_DeltaTroop";
	};
};
