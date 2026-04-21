class construction
{
	name = "STR_vn_mf_building_supplies";
	icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_build_ca.paa";

	class BuildingSuppliesCrate
	{
		name = "STR_vn_mf_building_supplies_crate";
		className = "vn_b_ammobox_supply_05";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_build_ca.paa";
		supplyType = "BuildingSupplies";
		supplyQuantity = 500;
	};

	class BuildingSuppliesContainer
	{
		name = "STR_vn_mf_building_supplies_container";
		className = "vn_us_komex_small_02";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_build_ca.paa";
		supplyType = "BuildingSupplies";
		supplyQuantity = 2000;
	};

	class SandbagSupplies
	{
		name = "STR_vn_mf_sandbag_supplies";
		className = "vn_b_ammobox_supply_10";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_build_ca.paa";
	};
	
	class WorkshopSupplies
	{
		name = "STR_vn_mf_workshop_supplies";
		className = "vn_b_ammobox_supply_06";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_work_ca.paa";
	};
};

class vehicles
{
	name = "STR_vn_mf_vehicle_supplies";
	icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_mg_ca.paa";
	
	class M2High
	{
		name = "STR_vn_mf_m2_high";
		className = "vn_b_army_static_m2_high";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
		
	class MK18
	{
		name = "STR_vn_mf_mk18";
		className = "vn_b_army_static_mk18";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
	
	class M45Quad
	{
		name = "STR_vn_mf_m45_quad";
		className = "vn_b_army_static_m45";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
	
	class M40RR
	{
		name = "STR_vn_mf_m40a1rr";
		className = "vn_b_army_static_m40a1rr";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
	
	class TOW
	{
		name = "STR_vn_mf_tow";
		className = "vn_b_army_static_tow";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
	
	class M101
	{
		name = "STR_vn_mf_M101";
		className = "vn_b_army_static_m101_01";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
	
	class M29Mortar
	{
		name = "STR_vn_mf_m29_mortar";
		className = "vn_b_army_static_mortar_m29";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
};

class support
{
	name = "STR_vn_mf_support_supplies";
	icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_med_ca.paa";

	class FoodSupplies
	{
		name = "STR_vn_mf_food_supplies";
		className = "vn_b_ammobox_supply_02";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_food_ca.paa";
		crateConfig = "FoodCrate";
	};
	
	class FoodSuppliesLocal
	{
		name = "STR_vn_mf_localfood_supplies";
		className = "vn_b_ammobox_supply_02";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_food_ca.paa";
		//crateName = "FoodCrate";
	};

	class MedicalSupplies
	{
		name = "STR_vn_mf_medical_supplies";
		className = "vn_b_ammobox_supply_03";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_med_ca.paa";
		crateConfig = "MedicalCrate";
	};
	
	class MoraleSupplies
	{
		name = "STR_vn_mf_morale_supplies";
		className =	"vn_b_ammobox_02";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_food_ca.paa";
		crateConfig = "MoraleCrate";
	};
};

class ammo
{
	name = "STR_vn_mf_ammo_supplies";
	icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";

	class LightAmmoSupplies
	{
		name = "STR_vn_mf_light_ammo_supplies";
		className =	"vn_b_ammobox_supply_01";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
		crateConfig = "AmmoCrateLight";
	};
	class SupportSupplies
	{
		name = "STR_vn_mf_support_ammo_supplies";
		className =	"vn_b_ammobox_supply_01";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
		crateConfig = "AmmoCrateSupport";
	};
	class ExplosivesSupplies
	{
		name = "STR_vn_mf_explosives_supplies";
		className =	"vn_b_ammobox_supply_01";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
		crateConfig = "AmmoCrateExplosives";
	};
	class MortarSupplies
	{
		name = "STR_vn_mf_mortar_supplies";
		className =	"vn_b_ammobox_full_14";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
	class MissileSupplies
	{
		name = "STR_vn_mf_missile_supplies";
		className =	"vn_b_ammobox_full_13";
		icon = "\vn\ui_f_vietnam\ui\wheelmenu\img\icons\vn_ico_mf_sup_ammo_ca.paa";
	};
};
