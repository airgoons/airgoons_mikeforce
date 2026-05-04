	_uniform = [
	"vn_b_uniform_macv_01_07",
	"vn_b_uniform_macv_01_01",
	"vn_b_uniform_macv_02_07",
	"vn_b_uniform_macv_02_01",
	"vn_b_uniform_macv_03_07",
	"vn_b_uniform_macv_03_01",
	"vn_b_uniform_macv_04_07",
	"vn_b_uniform_macv_04_01",
	"vn_b_uniform_macv_05_07",
	"vn_b_uniform_macv_05_01",
	"vn_b_uniform_macv_06_07",
	"vn_b_uniform_macv_06_01"
	] select floor random 12;
	
	_headgear = [
	"vn_b_helmet_m1_01_01",
	"vn_b_helmet_m1_02_01",
	"vn_b_helmet_m1_03_01",
	"vn_b_helmet_m1_04_01",
	"vn_b_helmet_m1_05_01",
	"vn_b_helmet_m1_06_01",
	"vn_b_helmet_m1_07_01",
	"vn_b_helmet_m1_08_01",
	"vn_b_helmet_m1_09_01",
	"vn_b_helmet_m1_10_01",
	"vn_b_helmet_m1_11_01",
	"vn_b_helmet_m1_14_01",
	"vn_b_helmet_m1_15_01",
	"vn_b_helmet_m1_16_01",
	"vn_b_helmet_m1_17_01",
	"vn_b_helmet_m1_18_01",
	"vn_b_helmet_m1_19_01",
	"vn_b_helmet_m1_20_01",
	"vn_i_helmet_m1_02_01",
	"vn_i_helmet_m1_03_01"
	] select floor random 20;
	
	_scoutuniform = [
	"vn_b_uniform_macv_01_02",
	"vn_b_uniform_macv_02_02",
	"vn_b_uniform_macv_03_02",
	"vn_b_uniform_macv_04_02",
	"vn_b_uniform_macv_05_02",
	"vn_b_uniform_macv_06_02"
	] select floor random 6;
	
	_rifle = [
	"vn_m16",
	"vn_m16_camo"
	] select floor random 2;
	
	_riflegl = [
	"vn_m16_m203",
	"vn_m16_m203_camo"
	] select floor random 2;
	
	_scoutrifle = [
	"vn_xm177",
	"vn_xm177_camo",
	"vn_xm177_fg",
	"vn_xm177_short",
	"vn_xm177_stock",
	"vn_xm177_stock_camo"
	] select floor random 6;
	
	_binocs = [
	"vn_m19_binocs_grn",
	"vn_m19_binocs_grey",
	"vn_mk21_binocs"
	] select floor random 3;
	
	switch (_type) do {
	// "HQ";
	
	case "CO": {
	
		comment "Company Cmd";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 3 do {_unit addItemToUniform "vn_m1911_mag";};
		_unit addVest "vn_b_vest_usarmy_09";		
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_06";
		for "_i" from 1 to 4 do {_unit addItemToBackpack "vn_40mm_m680_smoke_w_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_beret_01_11";

		comment "Add weapons";
		_unit addWeapon _riflegl;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addPrimaryWeaponItem "vn_40mm_m680_smoke_w_mag";
		_unit addWeapon "vn_m1911";
		_unit addHandgunItem "vn_m1911_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "XO": {
	
		comment "Company XO";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 3 do {_unit addItemToUniform "vn_m1911_mag";};
		_unit addVest "vn_b_vest_usarmy_09";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_06";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_beret_01_10";

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_m1911";
		_unit addHandgunItem "vn_m1911_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "CAM": {
	
		comment "Combat Camera";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_camera_01";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "FO": {
	
		comment "Fire Observer";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_prc77_01";
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	// "Platoon Command";
	
	case "PL": {
	
		comment "Platoon Cmd";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 3 do {_unit addItemToUniform "vn_m1911_mag";};
		_unit addVest "vn_b_vest_usarmy_09";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_06";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_m1911";
		_unit addHandgunItem "vn_m1911_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
		_unit linkItem "vn_b_item_radio_urc10";
	};
			
	case "CM": {

		// "Platoon Medic";
		// "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_07";
		for "_i" from 1 to 4 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 7 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_07";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addItemToBackpack "vn_b_item_medikit_01";
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_prop_med_antivenom";};
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_prop_med_dysentery";};
		_unit addHeadgear _headgear;

		// "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		// "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
		
	// "Infantry Section";
	
	case "SL": {
	
		comment "Squad Leader";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_03";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 4 do {_unit addItemToBackpack "vn_m16_20_t_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vn_mx991_red";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
		_unit linkItem "vn_b_item_radio_urc10";
	};
	
	case "TL": {
	
		comment "Team Leader";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		for "_i" from 1 to 4 do {_unit addItemToVest "vn_m16_20_t_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
		
	case "RFL": {
	
		comment "Rifleman";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "AR": {
	
		comment "Auto rifleman";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_06";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m60_100_mag";};
		_unit addBackpack "vn_b_pack_lw_02";
		for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m60_100_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon "vn_m60";
		_unit addPrimaryWeaponItem "vn_m60_100_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "GL": {
	
		comment "Grenadier";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_05";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 12 do {_unit addItemToBackpack "vn_40mm_m406_he_mag";};
		for "_i" from 1 to 8 do {_unit addItemToBackpack "vn_40mm_m397_ab_mag";};
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_40mm_m680_smoke_w_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _riflegl;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addPrimaryWeaponItem "vn_40mm_m406_he_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "RAT": {
	
		comment "Rifleman AT";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "BOOM": {
	
		comment "Demolitions";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_trp_03_02";
		_unit addItemToBackpack "vn_m34_grenade_mag";
		for "_i" from 1 to 4 do {_unit addItemToBackpack "vn_mine_m112_remote_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};

	// "Weapons";
	
	case "MG": {
	
		comment "Machine Gunner";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_06";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 3 do {_unit addItemToVest "vn_m60_100_mag";};
		_unit addBackpack "vn_b_pack_lw_02";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m60_100_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon "vn_m60";
		_unit addPrimaryWeaponItem "vn_m60_100_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "MGA": {
	
		comment "Asst. Machine Gunner";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_05";
		for "_i" from 1 to 3 do {_unit addItemToBackpack "vn_m60_100_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "AMMO": {
	
		comment "Ammo bearer";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_05";
		for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m60_100_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "HAT": {
	
		comment "Anti-Tank Gunner";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m20a1b1_heat_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m20a1b1_wp_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_m20a1b1_01";
		_unit addSecondaryWeaponItem "vn_m20a1b1_heat_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "HATA": {
	
		comment "Asst. Anti-Tank Gunner";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_01";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m20a1b1_heat_mag";};
		for "_i" from 1 to 3 do {_unit addItemToBackpack "vn_m20a1b1_wp_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	// "Mortar Team";
	
	case "MPL": {
	
		comment "Mortar Section Leader";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_09";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_06";
		for "_i" from 1 to 4 do {_unit addItemToBackpack "vn_40mm_m680_smoke_w_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_red_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _riflegl;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addPrimaryWeaponItem "vn_40mm_m680_smoke_w_mag";
		_unit addWeapon "vn_mx991_red";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "TUBE": {
	
		comment "Mortar Gunner";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 2 do {_unit addItemToUniform "vn_m18_white_mag";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_static_m29_01";
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "PLATE": {
	
		comment "Mortar Assistant";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 2 do {_unit addItemToUniform "vn_m18_white_mag";};
		_unit addVest "vn_b_vest_usarmy_02";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_static_base_01";
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _rifle;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	// "Engineers";
	
	case "ESL": {
	
		comment "Engineer Squad Leader";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_14";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_lw_06";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_type = selectRandom ["M3","M1897","XM","M1"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
			
			case ("M1897"): {
					_unit addWeapon "vn_m1897";
					_unit addPrimaryWeaponItem "vn_m1897_fl_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m1897_fl_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m1897_buck_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon "vn_xm177";
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
			
			case ("M1"): {
					_unit addWeapon "vn_m1carbine";
					_unit addPrimaryWeaponItem "vn_carbine_15_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_carbine_15_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_carbine_15_t_mag";};					
				};
		};
		
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vnx_m_shovel_01";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
		_unit linkItem "vn_b_item_radio_urc10";
	};
	
	case "ETL": {
	
		comment "Engineer Team Leader";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_14";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_lw_04";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_type = selectRandom ["M3","M1897","XM","M1"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
			
			case ("M1897"): {
					_unit addWeapon "vn_m1897";
					_unit addPrimaryWeaponItem "vn_m1897_fl_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m1897_fl_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m1897_buck_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon "vn_xm177";
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
			
			case ("M1"): {
					_unit addWeapon "vn_m1carbine";
					_unit addPrimaryWeaponItem "vn_carbine_15_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_carbine_15_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_carbine_15_t_mag";};					
				};
		};
		
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vnx_m_shovel_01";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "EGL": {
	
		comment "Engineer Grenadier";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_14";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_lw_04";
		for "_i" from 1 to 12 do {_unit addItemToBackpack "vn_40mm_m406_he_mag";};
		for "_i" from 1 to 8 do {_unit addItemToBackpack "vn_40mm_m397_ab_mag";};
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_40mm_m680_smoke_w_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon "vn_xm177_m203";
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addPrimaryWeaponItem "vn_40mm_m406_he_mag";
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vnx_m_shovel_01";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "EMG": {
	
		comment "Engineer Machine Gunner";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_14";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 3 do {_unit addItemToVest "vn_m60_100_mag";};
		_unit addBackpack "vn_b_pack_lw_02";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m60_100_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon "vn_m60";
		_unit addPrimaryWeaponItem "vn_m60_100_mag";
		_unit addWeapon "vnx_m_shovel_01";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "SAPPER": {
	
		comment "Sapper";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_14";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_lw_04";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_type = selectRandom ["M3","M1897","XM","M1"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
			
			case ("M1897"): {
					_unit addWeapon "vn_m1897";
					_unit addPrimaryWeaponItem "vn_m1897_fl_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m1897_fl_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m1897_buck_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon "vn_xm177";
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
			
			case ("M1"): {
					_unit addWeapon "vn_m1carbine";
					_unit addPrimaryWeaponItem "vn_carbine_15_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_carbine_15_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_carbine_15_t_mag";};					
				};
		};
		
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vn_m_axe_01";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "ENGI": {
	
		comment "Engineer";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_14";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_lw_04";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_type = selectRandom ["M3","M1897","XM","M1"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
			
			case ("M1897"): {
					_unit addWeapon "vn_m1897";
					_unit addPrimaryWeaponItem "vn_m1897_fl_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m1897_fl_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m1897_buck_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon "vn_xm177";
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
			
			case ("M1"): {
					_unit addWeapon "vn_m1carbine";
					_unit addPrimaryWeaponItem "vn_carbine_15_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_carbine_15_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_carbine_15_t_mag";};					
				};
		};
		
		_unit addWeapon "vn_m72";
		_unit addSecondaryWeaponItem "vn_m72_mag";
		_unit addWeapon "vnx_m_shovel_01";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	// "Scouts";
	
	case "SPL": {
	
		comment "Scout Patrol Leader";
		comment "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_01";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_trp_04";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_02";

		comment "Add weapons";
		comment "Add weapons";
		_type = selectRandom ["M3","XM"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_s_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon _scoutrifle;
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
		};
		_unit addWeapon "vn_mx991_m1911";
		_unit addHandgunItem "vn_s_m1911";
		_unit addHandgunItem "vn_m1911_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
		_unit linkItem "vn_b_item_radio_urc10";
	};
	
	case "SRTO": {
	
		comment "Scout RTO";
		comment "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_06";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_trp_04";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_02";

		comment "Add weapons";
		comment "Add weapons";
		_type = selectRandom ["M3","XM"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_s_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon _scoutrifle;
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
		};
		_unit addWeapon "vn_mx991_m1911";
		_unit addHandgunItem "vn_s_m1911";
		_unit addHandgunItem "vn_m1911_mag";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "SCOUT": {
	
		comment "Senior Scout-Observer";
		comment "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_04";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_trp_02";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_02";

		comment "Add weapons";
		comment "Add weapons";
		_type = selectRandom ["M3","XM"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_s_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon _scoutrifle;
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
		};
		_unit addWeapon "vn_mx991_m1911";
		_unit addHandgunItem "vn_s_m1911";
		_unit addHandgunItem "vn_m1911_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "SAR": {
	
		comment "Scout Autorifleman";
		comment "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_05";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m60_100_mag";};
		_unit addBackpack "vn_b_pack_trp_01";
		for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m60_100_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_02";

		comment "Add weapons";
		_unit addWeapon "vn_m60_shorty_camo";
		_unit addPrimaryWeaponItem "vn_m60_100_mag";
		_unit addWeapon "vn_mx991_red";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};

	case "OBSERVER": {
	
		comment "Scout-Observer";
		comment "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_04";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_trp_02";
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_02";

		comment "Add weapons";
		comment "Add weapons";
		_type = selectRandom ["M3","XM"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_s_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon _scoutrifle;
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
		};
		_unit addWeapon "vn_mx991_m1911";
		_unit addHandgunItem "vn_s_m1911";
		_unit addHandgunItem "vn_m1911_mag";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "SCM": {

		// "Scout Medic";
		// "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_02";
		for "_i" from 1 to 4 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_lw_07";
		_unit addItemToBackpack "vn_b_item_medikit_01";
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_prop_med_antivenom";};
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_prop_med_dysentery";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_02";

		// "Add weapons";
		comment "Add weapons";
		_type = selectRandom ["M3","XM"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_s_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon _scoutrifle;
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
		};
		_unit addWeapon "vn_mx991_m1911";
		_unit addHandgunItem "vn_s_m1911";
		_unit addHandgunItem "vn_m1911_mag";

		// "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "SBOOM": {
	
		comment "Scout-Observer";
		comment "Add containers";
		_unit forceAddUniform _scoutuniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_sog_03";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		_unit addBackpack "vn_b_pack_trp_03";
		_unit addItemToBackpack "vn_m34_grenade_mag";
		for "_i" from 1 to 4 do {_unit addItemToBackpack "vn_mine_m112_remote_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_04";

		comment "Add weapons";
		_type = selectRandom ["M3","XM"];
		
		switch (_type) do {
			case ("M3"): {
					_unit addWeapon "vn_m3a1";
					_unit addPrimaryWeaponItem "vn_s_m3a1";
					_unit addPrimaryWeaponItem "vn_m3a1_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m3a1_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m3a1_t_mag";};
				};
					
			case ("XM"): {
					_unit addWeapon _scoutrifle;
					_unit addPrimaryWeaponItem "vn_m16_20_mag";
					for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
					for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m16_20_t_mag";};					
				};
		};
		_unit addWeapon "vn_mx991_m1911";
		_unit addHandgunItem "vn_s_m1911";
		_unit addHandgunItem "vn_m1911_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	// "Sniper Team";
	
	case "SENIOR": {
	
		comment "Senior Sniper";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_m1895_mag";};
		_unit addVest "vn_b_vest_usarmy_08";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 10 do {_unit addItemToVest "vn_m40a1_t_mag";};
		_unit addBackpack "vn_b_pack_trp_02_02";
		for "_i" from 1 to 5 do {_unit addItemToBackpack "vn_m40a1_t_mag";};
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_m40a1_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear "vn_b_boonie_02_04";

		comment "Add weapons";
		_unit addWeapon "vn_m40a1";
		_unit addPrimaryWeaponItem "vn_o_9x_m40a1";
		_unit addPrimaryWeaponItem "vn_m40a1_t_mag";
		_unit addPrimaryWeaponItem "vn_b_camo_m40a1";
		_unit addWeapon "vn_m1895";
		_unit addHandgunItem "vn_m1895_mag";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "SNIPER": {
	
		comment "Sniper";
		comment "Add containers";
		_unit forceAddUniform _uniform;
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		_unit addVest "vn_b_vest_usarmy_05";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 5 do {_unit addItemToVest "vn_m16_20_mag";};
		_unit addBackpack "vn_b_pack_trp_02_02";
		for "_i" from 1 to 12 do {_unit addItemToBackpack "vn_40mm_m406_he_mag";};
		for "_i" from 1 to 8 do {_unit addItemToBackpack "vn_40mm_m397_ab_mag";};
		for "_i" from 1 to 10 do {_unit addItemToBackpack "vn_40mm_m680_smoke_w_mag";};
		for "_i" from 1 to 2 do {_unit addItemToBackpack "vn_m18_white_mag";};
		_unit addHeadgear _headgear;

		comment "Add weapons";
		_unit addWeapon _riflegl;
		_unit addPrimaryWeaponItem "vn_m16_20_mag";
		_unit addPrimaryWeaponItem "vn_40mm_m406_he_mag";
		_unit addWeapon "vn_mx991_red";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
		_unit linkItem "vn_b_item_radio_urc10";
	};
	
	// "Air crew";
	
	case "ACOM": {
	
		comment "Flight Leader";
		comment "Add containers";
		_unit forceAddUniform "vn_b_uniform_heli_01_01";
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_m1911_mag";};
		_unit addVest "vn_b_vest_aircrew_05";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_red_mag";};
		_unit addBackpack "vn_b_pack_prc77_01";
		_unit addHeadgear "vn_b_helmet_svh4_02_05";

		comment "Add weapons";
		_unit addWeapon "vn_m1911";
		_unit addHandgunItem "vn_m1911_mag";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
		_unit linkItem "vn_b_item_radio_urc10";
	};
	
	case "COPILOT": {
	
		comment "Copilot";
		comment "Add containers";
		_unit forceAddUniform "vn_b_uniform_heli_01_01";
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_m1911_mag";};
		_unit addVest "vn_b_vest_aircrew_05";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_red_mag";};
		_unit addHeadgear "vn_b_helmet_svh4_02_04";

		comment "Add weapons";
		_unit addWeapon "vn_m1911";
		_unit addHandgunItem "vn_m1911_mag";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "PILOT": {
	
		comment "Pilot";
		comment "Add containers";
		_unit forceAddUniform "vn_b_uniform_heli_01_01";
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_m1911_mag";};
		_unit addVest "vn_b_vest_aircrew_05";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_red_mag";};
		_unit addBackpack "vn_b_pack_prc77_01";
		_unit addHeadgear "vn_b_helmet_svh4_02_01";

		comment "Add weapons";
		_unit addWeapon "vn_m1911";
		_unit addHandgunItem "vn_m1911_mag";

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
	
	case "FAC": {
	
		comment "FAC Pilot";
		comment "Add containers";
		_unit forceAddUniform "vn_b_uniform_k2b_02_01";
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_b_item_firstaidkit";};
		for "_i" from 1 to 4 do {_unit addItemToUniform "vn_m10_mag";};
		_unit addVest "vn_b_vest_aircrew_04";
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_white_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m67_grenade_mag";};
		for "_i" from 1 to 2 do {_unit addItemToVest "vn_m18_red_mag";};
		_unit addBackpack "vn_b_pack_ba18_01";
		_unit addHeadgear "vn_b_helmet_aph6_02_02";

		comment "Add weapons";
		_unit addWeapon "vn_m10";
		_unit addHandgunItem "vn_m10_mag";
		_unit addWeapon _binocs;

		comment "Add items";
		_unit linkItem "vn_b_item_map";
		_unit linkItem "vn_b_item_compass";
		_unit linkItem "vn_b_item_watch";
	};
};