#include "..\ui\icons.inc"

#define CONDITION_HAS_RANK { $STR_vn_mf_buildingMenu_condition_hasRank, "player getVariable ['vn_mf_db_rank',0] >= getNumber(_config >> 'rank')"}
#define CONDITION_IS_ENGINEER { $STR_vn_mf_buildingMenu_condition_isEngineer, "player getUnitTrait 'engineer'"}
#define CONDITION_IS_ON_FOOT { $STR_vn_mf_buildingMenu_condition_rnFoot, "isNull objectParent player"}
#define CONDITION_NOT_IN_RESTRICTED_ZONE { $STR_vn_mf_buildingMenu_condition_inRestrictedZone, "vn_mf_markers_blocked_areas findIf {_pos inArea _x} isEqualTo -1"}
#define CONDITION_IS_bravoplatoon { $STR_vn_mf_buildingMenu_condition_inbravoplatoon, "player getVariable ['vn_mf_db_player_group', 'alphaplatoon'] isEqualTo 'bravoplatoon'"}

//Takes "Capacity" in supply units, and "Lifetime" in seconds.
#define DAYS_TO_SECONDS(days) (days * 86400)
#define HOURS_TO_SECONDS(hours) (hours * 3600)
#define MINUTES_TO_SECONDS(minutes) (minutes * 60)
#define SUPPLY_CAPACITY(capacity, lifetime) \
	supply_capacity = capacity; \
	supply_consumption = __EVAL(capacity / lifetime)

class Land_vn_guardhouse_01
{
	name = "STR_vn_mf_checkpoint";
	type = "checkpoints";
	categories[] = {"spawn"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));

	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_guardhouse_01_part0";
		};
		class middle_state
		{
			object_class = "vn_guardhouse_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_guardhouse_01";
		};
	};

	class features
	{
		class respawn {};
	};
};

class Land_vn_b_trench_bunker_01_01
{
	name = "STR_vn_mf_bunkercheckpoint";
	type = "bunkers";
	categories[] = {"spawn"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_01_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_01_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_01_01";
		};
	};
	class features
	{
		class respawn {};
	};
};

class Land_vn_hootch_01_01
{
	name = "STR_vn_mf_hootchcheckpoint";
	type = "hootches";
	categories[] = {"spawn"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_01_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_01";
		};
	};
	class features
	{
		class respawn {};
	};
};

class Land_vn_hootch_02_03
{
	name = "STR_vn_mf_situation_room";
	type = "hqs";
	categories[] = {"hq"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_03_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_03";
		};
	};
	class features
	{
		class base_starter {};
	};
};

class Land_vn_b_trench_bunker_03_04
{
	name = "STR_vn_mf_hqbunker";
	type = "bunkers";
	categories[] = {"hq"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_04_part0";
		};
		class middle_state
		{
			object_class = "vn_b_trench_bunker_03_04_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_04";
		};
	};
	class features
	{
		class base_starter {};
	};
};

class Land_vn_b_helipad_01
{
	name = "";
	type = "helipads";
	categories[] = {"helipads", "hq"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};

	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_helipad_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_helipad_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_helipad_01";
		};
	};
};

class TFAR_Land_Communication_F
{
	name = "STR_vn_mf_communications";
	type = "antennae";
	categories[] = {"hq"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_vn_ttowersmall_1_f";
		};
		class middle_state
		{
			object_class = "Land_vn_ttowersmall_2_f";
		};
		class final_state
		{
			object_class = "TFAR_Land_Communication_F";
		};
	};
};

class Land_vn_tent_mash_01
{
	name = "STR_vn_mf_aid_post";
	type = "aid";
	categories[] = {"medical"};
	rank = 0;
	SUPPLY_CAPACITY(1000, HOURS_TO_SECONDS(2));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_CharliePlatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_tent_mash_01_part0";
		};
		class middle_state
		{
			object_class = "vn_tent_mash_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_tent_mash_01";
		};
	};
};

class Land_vn_b_trench_bunker_03_03
{
	name = "STR_vn_mf_aid_bunker";
	type = "bunkers";
	categories[] = {"medical"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_03_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_03";
		};
	};
};

class vn_b_ammobox_supply_07
{
	name = "STR_vn_mf_ammoresupply";
	type = "ammocrates";
	categories[] = {"resupply"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"ammo"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_07_part0";
		};
		class middle_state
		{
			//TODO: Fix this, this shouldn't able to resupply in middle state.
			object_class = "vn_b_ammobox_supply_07";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_supply_07";
		};
	};

	class features
	{
		class maintenance
		{
			canRearm = 1;
		};
	};
};

class vn_b_ammobox_supply_08
{
	name = "STR_vn_mf_repairresupply";
	type = "resupplycrates";
	categories[] = {"resupply"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"repair"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_08_part0";
		};
		class middle_state
		{
			//TODO: Fix this, should not be able to rearm in middle state
			object_class = "vn_b_ammobox_supply_08";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_supply_08";
		};
	};

	class features
	{
		class maintenance
		{
			canRepair = 1;
		};
	};
};

class vn_b_ammobox_supply_09
{
	name = "STR_vn_mf_fuelresupply";
	type = "refuelcrates";
	categories[] = {"resupply"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"fuel"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_09_part0";
		};
		class middle_state
		{
			//TODO: FIx this, hsould not be able to refuel in middle state.
			object_class = "vn_b_ammobox_supply_09";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_supply_09";
		};
	};

	class features
	{
		class maintenance
		{
			canRefuel = 1;
		};
	};
};

class Land_vn_usaf_fueltank_75_01
{
	name = "STR_vn_mf_fuelresupply";
	type = "refuelcrates";
	categories[] = {"resupply"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"fuel"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_usaf_fueltank_75_01_part0";
		};
		class middle_state
		{
			//TODO: FIx this, hsould not be able to refuel in middle state.
			object_class = "vn_usaf_fueltank_75_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_usaf_fueltank_75_01";
		};
	};

	class features
	{
		class maintenance
		{
			canRefuel = 1;
		};
	};
};

class vn_b_ammobox_wpn_01
{
	name = "STR_vn_mf_statics";
	type = "ammocrates";
	categories[] = {"statics"};
	rank = 0;
	SUPPLY_CAPACITY(600, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_ammobox_supply_07_part0";
		};
		class middle_state
		{
			object_class = "vn_b_ammobox_wpn_01";
		};
		class final_state
		{
			object_class = "vn_b_ammobox_wpn_01";
		};
	};

	class features
	{
		class vehicle_spawning
		{
			class vehicle_class
			{
				class statics
				{
					icon = VEHICLE_ICON_STATIC;
					name = "STR_vn_mf_vic_static";

					class vn_b_army_static_m2_high
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};

					class vn_b_army_static_m2_low
					{
						cost[] = {{"BuildingSupplies", 100}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};

					class vn_b_army_static_mk18
					{
						cost[] = {{"BuildingSupplies", 200}};
						cooldown = 60;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};

					class vn_b_army_static_m40a1rr
					{
						cost[] = {{"BuildingSupplies", 300}};
						cooldown = 120;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};

					class vn_b_army_static_tow
					{
						cost[] = {{"BuildingSupplies", 300}};
						cooldown = 120;
						icon = VEHICLE_ICON_STATIC;
						//side = "WEST";
					};
				};
			};
			
			spawnPositionModelSpace[] = {8.973,5.42801,0};
			spawnDirectionModelSpace = 0;

		};
	};
};

class Land_vn_b_trench_bunker_02_02
{
	name = "STR_vn_mf_supply_bunker_small";
	type = "bunkers";
	categories[] = {"storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_02";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 500;
		};
	};
};

class Land_vn_b_trench_bunker_02_03
{
	name = "STR_vn_mf_supply_bunker_small";
	type = "bunkers";
	categories[] = {"storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_03";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 500;
		};
	};
};

class Land_vn_b_trench_bunker_02_04
{
	name = "STR_vn_mf_supply_bunker_small";
	type = "bunkers";
	categories[] = {"storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_04";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_04";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 500;
		};
	};
};

class Land_vn_b_trench_bunker_02_01
{
	name = "STR_vn_mf_supply_bunker_medium";
	type = "bunkers";
	categories[] = {"storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_02_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_02_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_02_01";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 1000;
		};
	};
};

class Land_vn_b_trench_bunker_03_01
{
	name = "STR_vn_mf_supply_bunker_large";
	type = "bunkers";
	categories[] = {"storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_03_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_01";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 1500;
		};
	};
};

class Land_vn_b_trench_bunker_03_02
{
	name = "STR_vn_mf_supply_bunker_american";
	type = "bunkers";
	categories[] = {"storage"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_03_02_part0";
		};
		class middle_state
		{
			object_class = "vn_b_trench_bunker_03_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_03_02";
		};
	};
	class features
	{
		class supply_depot
		{
			supplyChange = 2500;
		};
	};
};

class Land_vn_b_tower_01
{
	name = "STR_vn_mf_guardtower";
	type = "towers";
	categories[] = {"towers"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_tower_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_tower_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_tower_01";
		};
	};
};

class Land_vn_hlaska
{
	name = "";
	type = "towers";
	categories[] = {"towers"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hlaska_part0";
		};
		class middle_state
		{
			object_class = "vn_hlaska_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hlaska";
		};
	};
};

class Land_vn_bunker_small_01
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bunker_small_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bunker_small_01";
		};
		class final_state
		{
			object_class = "Land_vn_bunker_small_01";
		};
	};
};

class Land_vn_bunker_big_01
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bunker_big_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bunker_big_01";
		};
		class final_state
		{
			object_class = "Land_vn_bunker_big_01";
		};
	};
};

class Land_vn_bunker_big_02
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bunker_big_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bunker_big_02";
		};
		class final_state
		{
			object_class = "Land_vn_bunker_big_02";
		};
	};
};

class Land_vn_pillboxbunker_01_big_f
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_01_big_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_01_big_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_01_big_f";
		};
	};
};

class Land_vn_b_trench_bunker_05_02
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_05_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_05_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_05_02";
		};
	};
};

class Land_vn_b_trench_bunker_05_01
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_05_01";
		};
	};
};

class Land_vn_b_trench_bunker_04_01
{
	name = "";
	type = "bunkers";
	categories[] = {"fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_04_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_04_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_04_01";
		};
	};
};

class Land_vn_b_mortarpit_01
{
	name = "";
	type = "mortarpits";
	categories[] = { "artillery"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_mortarpit_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_mortarpit_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_mortarpit_01";
		};
	};
};

class Land_vn_b_gunpit_01
{
	name = "";
	type = "gunpits";
	categories[] = {"artillery"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_gunpit_01_part0";
		};
		class middle_state
		{
			object_class = "vn_b_gunpit_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_b_gunpit_01";
		};
	};
};

class Land_vn_pillboxbunker_01_hex_f
{
	name = "";
	type = "bunkers";
	categories[] = {"pillboxes"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_01_hex_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_01_hex_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_01_hex_f";
		};
	};
};

class Land_vn_pillboxbunker_02_hex_f
{
	name = "";
	type = "bunkers";
	categories[] = {"pillboxes"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_02_hex_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_02_hex_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_02_hex_f";
		};
	};
};

class Land_vn_pillboxbunker_01_rectangle_f
{
	name = "";
	type = "bunkers";
	categories[] = {"pillboxes"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxbunker_01_rectangle_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxbunker_01_rectangle_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxbunker_01_rectangle_f";
		};
	};
};

class Land_vn_pillboxwall_01_3m_f
{
	name = "";
	type = "walls";
	categories[] = {"pillboxes"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxwall_01_3m_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxwall_01_3m_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxwall_01_3m_f";
		};
	};
};

class Land_vn_pillboxwall_01_6m_f
{
	name = "";
	type = "walls";
	categories[] = {"pillboxes"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pillboxwall_01_6m_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_pillboxwall_01_6m_f";
		};
		class final_state
		{
			object_class = "Land_vn_pillboxwall_01_6m_f";
		};
	};
};

class Land_vn_b_trench_wall_01_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	offset[] = {0,6.5,0};
	//max_segments = 3;
	min_distance = 7;
	max_distance = 15;
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_01_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_01_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_01_01";
		};
	};
};

class Land_vn_b_trench_wall_01_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_01_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_01_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_01_02";
		};
	};
};

class Land_vn_b_trench_wall_01_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_01_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_01_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_01_03";
		};
	};
};

class Land_vn_b_trench_wall_03_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_03_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_03_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_03_01";
		};
	};
};

class Land_vn_b_trench_wall_03_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_03_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_03_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_03_02";
		};
	};
};

class Land_vn_b_trench_wall_03_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_03_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_03_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_03_03";
		};
	};
};

class Land_vn_b_trench_wall_05_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_05_01";
		};
	};
};

class Land_vn_b_trench_wall_05_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_05_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_05_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_05_02";
		};
	};
};

class Land_vn_b_trench_wall_05_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_05_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_05_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_05_03";
		};
	};
};

class Land_vn_b_trench_wall_10_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_10_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_10_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_10_01";
		};
	};
};

class Land_vn_b_trench_wall_10_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_10_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_10_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_10_02";
		};
	};
};

class Land_vn_b_trench_wall_10_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_wall_10_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_wall_10_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_wall_10_03";
		};
	};
};

class Land_vn_b_trench_tee_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_tee_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_tee_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_tee_01";
		};
	};
};

class Land_vn_b_trench_stair_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_stair_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_stair_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_stair_01";
		};
	};
};

class Land_vn_b_trench_stair_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_stair_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_stair_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_stair_02";
		};
	};
};

class Land_vn_b_trench_revetment_tall_09
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_tall_09_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_09";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_09";
		};
	};
};

class Land_vn_b_trench_revetment_tall_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_tall_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_tall_03";
		};
	};
};

class Land_vn_b_trench_revetment_90_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_90_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_90_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_90_01";
		};
	};
};

class Land_vn_b_trench_revetment_05_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_revetment_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_revetment_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_revetment_05_01";
		};
	};
};

class Land_vn_b_trench_firing_05
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_05_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_05";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_05";
		};
	};
};

class Land_vn_b_trench_firing_04
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_04";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_04";
		};
	};
};

class Land_vn_b_trench_firing_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_03";
		};
	};
};

class Land_vn_b_trench_firing_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_01";
		};
	};
};

class Land_vn_b_trench_firing_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_firing_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_firing_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_firing_02";
		};
	};
};

class Land_vn_b_trench_end_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_end_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_end_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_end_01";
		};
	};
};

class Land_vn_b_trench_cross_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_cross_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_cross_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_cross_02";
		};
	};
};

class Land_vn_b_trench_cross_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_cross_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_cross_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_cross_01";
		};
	};
};

class Land_vn_b_trench_corner_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_corner_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_corner_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_corner_01";
		};
	};
};

class Land_vn_b_trench_90_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_90_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_90_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_90_02";
		};
	};
};

class Land_vn_b_trench_90_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_90_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_90_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_90_01";
		};
	};
};

class Land_vn_b_trench_45_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_45_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_45_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_45_02";
		};
	};
};

class Land_vn_b_trench_45_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_45_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_45_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_45_01";
		};
	};
};

class Land_vn_b_trench_20_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_20_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_20_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_20_02";
		};
	};
};

class Land_vn_b_trench_20_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_20_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_20_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_20_01";
		};
	};
};

class Land_vn_b_trench_05_03
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_05_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_05_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_05_03";
		};
	};
};

class Land_vn_b_trench_05_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_05_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_05_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_05_02";
		};
	};
};

class Land_vn_b_trench_05_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_05_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_05_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_05_01";
		};
	};
};

class Land_vn_us_common_lantern_01
{
	name = "";
	type = "lighting";
	categories[] = {"lights"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_us_common_lantern_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_us_common_lantern_01";
		};
		class final_state
		{
			object_class = "Land_vn_us_common_lantern_01";
		};
	};
};

class Land_vn_lampazel
{
	name = "";
	type = "lighting";
	categories[] = {"lights"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampazel_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampazel";
		};
		class final_state
		{
			object_class = "Land_vn_lampazel";
		};
	};
};

class Land_vn_lampshabby_f_dir_normal
{
	name = "";
	type = "lighting";
	categories[] = {"lights"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampshabby_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampshabby_f_dir_normal";
		};
		class final_state
		{
			object_class = "Land_vn_lampshabby_f_dir_normal";
		};
	};
};

class Land_vn_lampshabby_f_dir_close
{
	name = "";
	type = "lighting";
	categories[] = {"lights"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampshabby_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampshabby_f_dir_close";
		};
		class final_state
		{
			object_class = "Land_vn_lampshabby_f_dir_close";
		};
	};
};

class Land_vn_lampshabby_f_dir_far
{
	name = "";
	type = "lighting";
	categories[] = {"lights"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_lampshabby_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_lampshabby_f_dir_far";
		};
		class final_state
		{
			object_class = "Land_vn_lampshabby_f_dir_far";
		};
	};
};

class Land_vn_steeldrum_bbq_01
{
	name = "";
	type = "props";
	categories[] = {"decorative"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_steeldrum_bbq_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_steeldrum_bbq_01";
		};
		class final_state
		{
			object_class = "Land_vn_steeldrum_bbq_01";
		};
	};
};

class vn_b_prop_fmradio_01
{
	name = "";
	type = "radio";
	categories[] = {"decorative"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_radio_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_radio";
		};
		class final_state
		{
			object_class = "vn_b_prop_fmradio_01";
		};
	};
	class features
	{
		class radio {};
	};
};

class Land_vn_b_foxhole_01
{
	name = "";
	type = "foxholes";
	categories[] = {"nonbravoplatoon"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_foxhole_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_foxhole_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_foxhole_01";
		};
	};
};

class Land_vn_razorwire_f
{
	name = "";
	type = "fences";
	categories[] = {"nonbravoplatoon"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_razorwire_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_razorwire_f";
		};
		class final_state
		{
			object_class = "Land_vn_razorwire_f";
		};
	};
};

class Land_vn_czechhedgehog_01_f
{
	name = "";
	type = "fences";
	categories[] = {"nonbravoplatoon"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_czechhedgehog_01_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_czechhedgehog_01_f";
		};
		class final_state
		{
			object_class = "Land_vn_czechhedgehog_01_f";
		};
	};
};

class Land_vn_bagfence_long_f
{
	name = "";
	type = "walls";
	categories[] = {"nonbravoplatoon"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bagfence_long_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_bagfence_long_f";
		};
		class final_state
		{
			object_class = "Land_vn_bagfence_long_f";
		};
	};
};

class Land_vn_fireplace_f
{
	name = "";
	type = "lighting";
	categories[] = {"lights", "nonbravoplatoon"};
	rank = 0;
	SUPPLY_CAPACITY(20, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_fireplace_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_fireplace_f";
		};
		class final_state
		{
			object_class = "Land_vn_fireplace_f";
		};
	};
};

class Land_vn_bridge_bailey_01
{
	name = "STR_vn_mf_bridgebailey01";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_bailey_01_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_bailey_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_bailey_01";
		};
	};
};

class Land_vn_bridge_bailey_02
{
	name = "STR_vn_mf_bridgebailey02";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_bailey_02_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_bailey_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_bailey_02";
		};
	};
};

class Land_vn_bridge_bailey_03
{
	name = "STR_vn_mf_bridgebailey03";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_bailey_03_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_bailey_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_bailey_03";
		};
	};
};

class Land_vn_bridge_bailey_04
{
	name = "STR_vn_mf_bridgebailey04";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_bailey_04_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_bailey_04_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_bailey_04";
		};
	};
};
class Land_vn_bridge_ramp_01
{
	name = "STR_vn_mf_bridgeramp01";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;

	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_ramp_01_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_ramp_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_ramp_01";
		};
	};
};

class Land_vn_bridge_small_01
{
	name = "STR_vn_mf_bridgesmall01";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_small_01_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_small_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_small_01";
		};
	};
};

class Land_vn_bridge_small_02
{
	name = "STR_vn_mf_bridgesmall02";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_small_02_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_small_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_small_02";
		};
	};
};

class Land_vn_bridge_small_03
{
	name = "STR_vn_mf_bridgesmall03";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_small_03_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_small_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_small_03";
		};
	};
};

class Land_vn_bridge_small_04
{
	name = "STR_vn_mf_bridgesmall04";
	type = "bridges";
	categories[] = {"bridges"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	rotation = -90;
	offset[] = {22.19,0,0};
	max_segments = 10;
	min_distance = 15;
	max_distance = 30;
	check_pos_start[] = {-10.386,0.14209,-0.55};
	check_pos_stop[] = {10.386,0.14209,-0.55};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_bridge_small_04_part0";
		};
		class middle_state
		{
			object_class = "vn_bridge_small_04_part1";
		};
		class final_state
		{
			object_class = "Land_vn_bridge_small_04";
		};
	};
};

class Land_vn_o_platform_04
{
	name = "";
	type = "platforms";
	categories[] = {"platforms"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_platform_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_platform_04";
		};
		class final_state
		{
			object_class = "Land_vn_o_platform_04";
		};
	};
};

class Land_vn_hut_stairs_01
{
	name = "";
	type = "platforms";
	categories[] = {"platforms"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_vn_hut_stairs_01";
		};
		class middle_state
		{
			object_class = "Land_vn_hut_stairs_01";
		};
		class final_state
		{
			object_class = "Land_vn_hut_stairs_01";
		};
	};
};

class Land_vn_hut_stairs_02
{
	name = "";
	type = "platforms";
	categories[] = {"platforms"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_bravoplatoon
	};
	class build_states
	{
		class initial_state
		{
			object_class = "Land_vn_hut_stairs_02";
		};
		class middle_state
		{
			object_class = "Land_vn_hut_stairs_02";
		};
		class final_state
		{
			object_class = "Land_vn_hut_stairs_02";
		};
	};
};