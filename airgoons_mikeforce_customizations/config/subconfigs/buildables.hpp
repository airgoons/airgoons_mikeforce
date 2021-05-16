#define CONDITION_HAS_RANK { $STR_vn_mf_buildingMenu_condition_hasRank, "player getVariable ['vn_mf_db_rank',0] >= getNumber(_config >> 'rank')"}
#define CONDITION_IS_ENGINEER { $STR_vn_mf_buildingMenu_condition_isEngineer, "player getUnitTrait 'engineer'"}
#define CONDITION_IS_ON_FOOT { $STR_vn_mf_buildingMenu_condition_rnFoot, "isNull objectParent player"}
#define CONDITION_NOT_IN_RESTRICTED_ZONE { $STR_vn_mf_buildingMenu_condition_inRestrictedZone, "['blocked_area1', 'blocked_area2', 'blocked_area3'] findIf {_pos inArea _x} isEqualTo -1"}
#define CONDITION_IS_ACAV { $STR_vn_mf_buildingMenu_condition_inACav, "groupId group player isEqualTo 'ACAV'"}

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
	categories[] = {"functional", "us", "buildings"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));

	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_tent_mash_01
{
	name = "STR_vn_mf_aid_post";
	type = "aid";
	categories[] = {"medical", "functional", "us", "tents"};
	rank = 0;
	SUPPLY_CAPACITY(1000, HOURS_TO_SECONDS(2));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_tower_01
{
	name = "STR_vn_mf_guardtower";
	type = "towers";
	categories[] = {"towers", "us"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	name = ""
	type = "towers";
	categories[] = {"towers", "us"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_watertower1
{
	name = ""
	type = "towers";
	categories[] = {"towers", "water"};
	rank = 0;
	SUPPLY_CAPACITY(1000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_watertower1_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_watertower1";
		};
		class final_state
		{
			object_class = "Land_vn_watertower1";
		};
	};
};

class Land_vn_reservoirtower_aircav_f
{
	name = ""
	type = "towers";
	categories[] = {"towers", "water", "us"};
	rank = 0;
	SUPPLY_CAPACITY(1000, HOURS_TO_SECONDS(12));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_reservoirtower_aircav_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_reservoirtower_aircav_f";
		};
		class final_state
		{
			object_class = "Land_vn_reservoirtower_aircav_f";
		};
	};
};

class Land_vn_sm_01_reservoirtower_f
{
	name = ""
	type = "towers";
	categories[] = {"towers", "water"};
	rank = 0;
	SUPPLY_CAPACITY(1000, HOURS_TO_SECONDS(12));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_sm_01_reservoirtower_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_sm_01_reservoirtower_f";
		};
		class final_state
		{
			object_class = "Land_vn_sm_01_reservoirtower_f";
		};
	};
};

class Land_vn_concretewell_01_f
{
	name = ""
	type = "props";
	categories[] = {"decorative", "water"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_concretewell_01_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_concretewell_01_f";
		};
		class final_state
		{
			object_class = "Land_vn_concretewell_01_f";
		};
	};
};

class Land_vn_b_prop_m149_01
{
	name = ""
	type = "props";
	categories[] = {"decorative", "water"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_prop_m149__part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_prop_m149_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_prop_m149_01";
		};
	};
};

class Land_vn_latrine_01
{
	name = "";
	type = "latrines";
	categories[] = {"buildings", "us", "sanitation"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_latrine_01_part0";
		};
		class middle_state
		{
			object_class = "vn_latrine_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_latrine_01";
		};
	};
};
class Land_vn_shower_01
{
	name = "";
	type = "s";
	categories[] = {"buildings", "us", "sanitation"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_shower_01_part0";
		};
		class middle_state
		{
			object_class = "vn_shower_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_shower_01";
		};
	};
};

class vn_b_ammobox_supply_07
{
	name = "STR_vn_mf_ammoresupply";
	type = "ammocrates";
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"ammo"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"repair"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"fuel"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"resupply", "functional"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	nearby[] = {"fuel"};
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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
		CONDITION_IS_ACAV
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


class Land_vn_bunker_small_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us", "nonACav"};
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
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"bunkers", "fortifications", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_pillboxbunker_01_hex_f
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"bunkers", "fortifications", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"bunkers", "fortifications", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_trench_wall_01_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "us"};
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
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_trench_firing_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
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

class Land_vn_b_trench_firing_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_o_trench_firing_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "nv", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
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
			object_class = "vn_o_trench_firing_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_trench_firing_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_trench_firing_01";
		};
	};
};

class Land_vn_b_trench_end_01
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us","nonACav"};
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


class Land_vn_b_trench_bunker_06_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us", "nonACav"};
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
			object_class = "vn_b_trench_bunker_06_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_06_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_06_02";
		};
	};
};

class Land_vn_b_trench_bunker_06_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us", "nonACav"};
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
			object_class = "vn_b_trench_bunker_06_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_06_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_06_01";
		};
	};
};

class Land_vn_b_trench_bunker_05_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us", "nonACav"};
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
	categories[] = {"bunkers", "fortifications", "us", "nonACav"};
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
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_trench_bunker_03_04
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_03_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_trench_bunker_03_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_03_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_02_04
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_02_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_02_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_02_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_bunker_01_03
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_01_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_01_03";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_01_03";
		};
	};
};

class Land_vn_b_trench_bunker_01_02
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_trench_bunker_01_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_trench_bunker_01_02";
		};
		class final_state
		{
			object_class = "Land_vn_b_trench_bunker_01_02";
		};
	};
};

class Land_vn_b_trench_bunker_01_01
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_b_trench_90_02
{
	name = "";
	type = "trenches";
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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
	categories[] = {"trenches", "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_mortarpit_01
{
	name = "";
	type = "mortarpits";
	categories[] = { "fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_helipad_01
{
	name = "";
	type = "helipads";
	categories[] = {"helipads", "us"};
	rank = 0;
	SUPPLY_CAPACITY(100, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_gunpit_01
{
	name = "";
	type = "gunpits";
	categories[] = {"fortifications", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_b_foxhole_01
{
	name = "";
	type = "foxholes";
	categories[] = {"trenches", "fortifications", "us", "nonACav"};
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

class Land_vn_o_tower_01
{
	name = "";
	type = "towers";
	categories[] = {"towers", "nv", "nonACav"};
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
			object_class = "vn_o_tower_01_part0";
		};
		class middle_state
		{
			object_class = "vn_o_tower_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_o_tower_01";
		};
	};
};


class Land_vn_o_tower_02
{
	name = "";
	type = "towers";
	categories[] = {"towers", "nv", "nonACav"};
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
			object_class = "vn_o_tower_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_tower_02";
		};
		class final_state
		{
			object_class = "Land_vn_o_tower_02";
		};
	};
};

class Land_vn_o_tower_03
{
	name = "";
	type = "towers";
	categories[] = {"towers", "nv", "nonACav"};
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
			object_class = "vn_o_tower_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_tower_03";
		};
		class final_state
		{
			object_class = "Land_vn_o_tower_03";
		};
	};
};

class Land_vn_cave_01
{
	name = ""
	type = "caves";
	categories[] = {"caves", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(2000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_cave_01_part0";
		};
		class middle_state
		{
			object_class = "vn_cave_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_cave_01";
		};
	};
};

class Land_vn_cave_02
{
	name = ""
	type = "caves";
	categories[] = {"caves", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(2000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_cave_02_part0";
		};
		class middle_state
		{
			object_class = "vn_cave_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_cave_02";
		};
	};
};

class Land_vn_cave_03
{
	name = ""
	type = "caves";
	categories[] = {"caves", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(2000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_cave_03_part0";
		};
		class middle_state
		{
			object_class = "vn_cave_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_cave_03";
		};
	};
};

class Land_vn_cave_04
{
	name = ""
	type = "caves";
	categories[] = {"caves", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(2000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_cave_04_part0";
		};
		class middle_state
		{
			object_class = "vn_cave_04_part1";
		};
		class final_state
		{
			object_class = "Land_vn_cave_04";
		};
	};
};

class Land_vn_b_prop_barrels_water_01
{
	name = ""
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
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_b_prop_barrels_water_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_b_prop_barrels_water_01";
		};
		class final_state
		{
			object_class = "Land_vn_b_prop_barrels_water_01";
		};
	};
};

class Land_vn_steeldrum_bbq_01
{
	name = ""
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
		CONDITION_IS_ACAV
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

class Land_vn_steeldrum_01
{
	name = ""
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
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_steeldrum_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_steeldrum_01";
		};
		class final_state
		{
			object_class = "Land_vn_steeldrum_01";
		};
	};
};

class Land_vn_us_common_lantern_01
{
	name = ""
	type = "lighting";
	categories[] = {"decorative", "lighting", "us", "nonAcav"};
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
	name = ""
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	name = ""
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	name = ""
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	name = ""
	type = "lighting";
	categories[] = {"lighting", "decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_o_bunker_01
{
	name = ""
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_bunker_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_bunker_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_bunker_01";
		};
	};
};

class Land_vn_o_bunker_02
{
	name = ""
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_bunker_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_bunker_02";
		};
		class final_state
		{
			object_class = "Land_vn_o_bunker_02";
		};
	};
};

class Land_vn_o_bunker_03
{
	name = ""
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_bunker_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_bunker_03";
		};
		class final_state
		{
			object_class = "Land_vn_o_bunker_03";
		};
	};
};

class Land_vn_o_bunker_04
{
	name = ""
	type = "bunkers";
	categories[] = {"bunkers", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_bunker_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_bunker_04";
		};
		class final_state
		{
			object_class = "Land_vn_o_bunker_04";
		};
	};
};

class Land_vn_o_platform_01
{
	name = ""
	type = "platforms";
	categories[] = {"platforms", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_platform_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_platform_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_platform_01";
		};
	};
};

class Land_vn_o_platform_02
{
	name = ""
	type = "platforms";
	categories[] = {"platforms", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_platform_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_platform_02";
		};
		class final_state
		{
			object_class = "Land_vn_o_platform_02";
		};
	};
};

class Land_vn_o_platform_03
{
	name = ""
	type = "platforms";
	categories[] = {"platforms", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_platform_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_platform_03";
		};
		class final_state
		{
			object_class = "Land_vn_o_platform_03";
		};
	};
};

class Land_vn_o_platform_04
{
	name = ""
	type = "platforms";
	categories[] = {"platforms", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_o_platform_05
{
	name = ""
	type = "towers";
	categories[] = {"towers", "platforms", "nv", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
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
			object_class = "vn_o_platform_05_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_platform_05";
		};
		class final_state
		{
			object_class = "Land_vn_o_platform_05";
		};
	};
};

class Land_vn_o_platform_06
{
	name = ""
	type = "towers";
	categories[] = {"towers", "platforms", "nv", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
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
			object_class = "vn_o_platform_06_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_platform_06";
		};
		class final_state
		{
			object_class = "Land_vn_o_platform_06";
		};
	};
};

class Land_vn_o_shelter_01
{
	name = "";
	type = "shelters";
	categories[] = {"tents", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_shelter_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_shelter_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_shelter_01";
		};
	};
};

class Land_vn_o_shelter_02
{
	name = "";
	type = "shelters";
	categories[] = {"tents", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_shelter_02_part0";
		};
		class middle_state
		{
			object_class = "vn_o_shelter_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_o_shelter_02";
		};
	};
};

class Land_vn_o_shelter_03
{
	name = "";
	type = "shelters";
	categories[] = {"tents", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_shelter_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_shelter_03";
		};
		class final_state
		{
			object_class = "Land_vn_o_shelter_03";
		};
	};
};

class Land_vn_o_shelter_04
{
	name = "";
	type = "shelters";
	categories[] = {"tents", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_shelter_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_shelter_04";
		};
		class final_state
		{
			object_class = "Land_vn_o_shelter_04";
		};
	};
};

class Land_vn_o_shelter_05
{
	name = "";
	type = "bunkers";
	categories[] = {"bunkers", "shelters", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_shelter_05_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_shelter_05";
		};
		class final_state
		{
			object_class = "Land_vn_o_shelter_05";
		};
	};
};

class Land_vn_o_shelter_06
{
	name = "";
	type = "shelters";
	categories[] = {"tents", "fortifications", "nv", "nonACav"};
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
			object_class = "vn_o_shelter_06_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_shelter_06";
		};
		class final_state
		{
			object_class = "Land_vn_o_shelter_06";
		};
	};
};

class Land_vn_o_wallfoliage_01
{
	name = "";
	type = "shelters";
	categories[] = {"tents", "fortifications", "nv", "nonACav"};
	rank = 0;
	SUPPLY_CAPACITY(50, DAYS_TO_SECONDS(1));
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
			object_class = "vn_o_wallfoliage_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_wallfoliage_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_wallfoliage_01";
		};
	};
};

class Land_vn_o_snipertree_01
{
	name = ""
	type = "trees";
	categories[] = {"trees", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_snipertree_01_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_snipertree_01";
		};
		class final_state
		{
			object_class = "Land_vn_o_snipertree_01";
		};
	};
};

class Land_vn_o_snipertree_02
{
	name = ""
	type = "trees";
	categories[] = {"trees", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_snipertree_02_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_snipertree_02";
		};
		class final_state
		{
			object_class = "Land_vn_o_snipertree_02";
		};
	};
};

class Land_vn_o_snipertree_03
{
	name = ""
	type = "trees";
	categories[] = {"trees", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_snipertree_03_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_snipertree_03";
		};
		class final_state
		{
			object_class = "Land_vn_o_snipertree_03";
		};
	};
};

class Land_vn_o_snipertree_04
{
	name = ""
	type = "trees";
	categories[] = {"trees", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_o_snipertree_04_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_o_snipertree_04";
		};
		class final_state
		{
			object_class = "Land_vn_o_snipertree_04";
		};
	};
};

class Land_vn_fence_punji_01_10
{
	name = ""
	type = "fences";
	categories[] = {"fences", "nv", "nonAcav"};
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
			object_class = "vn_fence_punji_01_10_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_fence_punji_01_10";
		};
		class final_state
		{
			object_class = "Land_vn_fence_punji_01_10";
		};
	};
};

class Land_vn_razorwire_f
{
	name = ""
	type = "fences";
	categories[] = {"fences", "us", "nonAcav"};
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
	name = ""
	type = "fences";
	categories[] = {"fences", "us", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_hut_tower_03
{
	name = ""
	type = "towers";
	categories[] = {"buildings", "towers", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hut_tower_03_part0";
		};
		class middle_state
		{
			object_class = "vn_hut_tower_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hut_tower_03";
		};
	};
};

class Land_vn_hut_village_01
{
	name = ""
	type = "huts";
	categories[] = {"buildings", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(400, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hut_village_01_part0";
		};
		class middle_state
		{
			object_class = "vn_hut_village_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hut_village_01";
		};
	};
};

class Land_vn_fence_bamboo_02
{
	name = ""
	type = "fences";
	categories[] = {"fences", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_fence_bamboo_02_part0";
		};
		class middle_state
		{
			object_class = "vn_fence_bamboo_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_fence_bamboo_02";
		};
	};
};

class Land_vn_fence_bamboo_02_gate
{
	name = ""
	type = "fences";
	categories[] = {"fences", "nv"};
	rank = 0;
	SUPPLY_CAPACITY(250, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_fence_bamboo_02_gate_part0";
		};
		class middle_state
		{
			object_class = "vn_fence_bamboo_02_gate_part1";
		};
		class final_state
		{
			object_class = "Land_vn_fence_bamboo_02_gate";
		};
	};
};

class Land_vn_bagfence_long_f
{
	name = "";
	type = "walls";
	categories[] = {"walls", "fortifications", "us", "nonACav"};
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

class Land_vn_barricade_01_10m_f
{
	name = "";
	type = "walls";
	categories[] = {"walls", "fortifications", "nonACav"};
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
			object_class = "vn_barricade_01_10m_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_barricade_01_10m_f";
		};
		class final_state
		{
			object_class = "Land_vn_barricade_01_10m_f";
		};
	};
};

class Land_vn_d_fallentrunk_clear_f
{
	name = "";
	type = "walls";
	categories[] = {"walls", "fences", "nonACav"};
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
			object_class = "vn_d_fallentrunk_clear_f_part0";
		};
		class middle_state
		{
			object_class = "Land_vn_d_fallentrunk_clear_f";
		};
		class final_state
		{
			object_class = "Land_vn_d_fallentrunk_clear_f";
		};
	};
};

class Land_vn_pillboxwall_01_3m_f
{
	name = "";
	type = "walls";
	categories[] = {"walls", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
	categories[] = {"walls", "fortifications"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_tropo_antenna_01
{
	name = ""
	type = "antennae";
	categories[] = {"antennae", "us"};
	rank = 0;
	SUPPLY_CAPACITY(2000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_tropo_antenna_01_part0";
		};
		class middle_state
		{
			object_class = "vn_tropo_antenna_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_tropo_antenna_01";
		};
	};
};

class Land_vn_tower_signal_01
{
	name = ""
	type = "antennae";
	categories[] = {"antennae", "towers", "us"};
	rank = 0;
	SUPPLY_CAPACITY(1000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_tower_signal_01_part0";
		};
		class middle_state
		{
			object_class = "vn_tower_signal_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_tower_signal_01";
		};
	};
};

class Land_vn_ttowersmall_2_f
{
	name = ""
	type = "antennae";
	categories[] = {"antennae", "towers", "us"};
	rank = 0;
	SUPPLY_CAPACITY(1000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_ttowersmall_2_f_part0";
		};
		class middle_state
		{
			object_class = "vn_ttowersmall_2_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_ttowersmall_2_f";
		};
	};
};

class Land_vn_hootch_02_03
{
	name = "STR_vn_mf_situation_room"
	type = "hqs";
	categories[] = {"hootches", "us", "buildings"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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

class Land_vn_hootch_01_01
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
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
};

class Land_vn_hootch_01_02
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_02_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_02";
		};
	};
};

class Land_vn_hootch_01_03
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_03_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_03_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_03";
		};
	};
};

class Land_vn_hootch_01_11
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_11_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_11_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_11";
		};
	};
};

class Land_vn_hootch_01_12
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_12_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_12_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_12";
		};
	};
};

class Land_vn_hootch_01_13
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_01_13_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_01_13_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_01_13";
		};
	};
};

class Land_vn_hootch_02
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02";
		};
	};
};

class Land_vn_hootch_02_01
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_01_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_01";
		};
	};
};

class Land_vn_hootch_02_02
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_02_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_02";
		};
	};
};

class Land_vn_hootch_02_11
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_hootch_02_11_part0";
		};
		class middle_state
		{
			object_class = "vn_hootch_02_11_part1";
		};
		class final_state
		{
			object_class = "Land_vn_hootch_02_11";
		};
	};
};

class Land_vn_slum_03_f
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_slum_03_f_part0";
		};
		class middle_state
		{
			object_class = "vn_slum_03_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_slum_03_f";
		};
	};
};

class Land_vn_barracks_02
{
	name = ""
	type = "barracks";
	categories[] = {"buildings", "barracks", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_barracks_02_part0";
		};
		class middle_state
		{
			object_class = "vn_barracks_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_barracks_02";
		};
	};


};

class Land_vn_barracks_04
{
	name = ""
	type = "barracks";
	categories[] = {"buildings", "barracks", "us"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_barracks_04_part0";
		};
		class middle_state
		{
			object_class = "vn_barracks_04_part1";
		};
		class final_state
		{
			object_class = "Land_vn_barracks_04";
		};
	};
};

class Land_vn_i_barracks_v1_f
{
	name = ""
	type = "barracks";
	categories[] = {"buildings", "barracks", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_i_barracks_v1_f_part0";
		};
		class middle_state
		{
			object_class = "vn_i_barracks_v1_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_i_barracks_v1_f";
		};
	};
};

class Land_vn_barracks_02_f
{
	name = ""
	type = "barracks";
	categories[] = {"buildings", "barracks", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_barracks_02_f_part0";
		};
		class middle_state
		{
			object_class = "vn_barracks_02_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_barracks_02_f";
		};
	};
};

class Land_vn_barracks_03_f
{
	name = ""
	type = "barracks";
	categories[] = {"buildings", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_barracks_03_f_part0";
		};
		class middle_state
		{
			object_class = "vn_barracks_03_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_barracks_03_f";
		};
	};
};

class Land_vn_barracks_04_f
{
	name = ""
	type = "barracks";
	categories[] = {"buildings", "arvn"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_barracks_04_f_part0";
		};
		class middle_state
		{
			object_class = "vn_barracks_04_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_barracks_04_f";
		};
	};
};

class Land_vn_i_shed_ind_old_f
{
	name = "STR_vn_mf_vehicle_workshop"
	type = "buildings";
	categories[] = {"buildings"};
	rank = 0;
	SUPPLY_CAPACITY(300, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};

	class build_states
	{
		class initial_state
		{
			object_class = "vn_i_shed_ind_old_f_part0";
		};
		class middle_state
		{
			object_class = "vn_i_shed_ind_old_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_i_shed_ind_old_f";
		};
	};

	class features
	{
		class vehicle_spawning
		{
			class vehicles
			{
				class vn_b_wheeled_m54_02
				{
					/*Array currently unused, only the first number is used*/
					cost[] = {{"BuildingSupplies", 500}};
					cooldown = 300;
					//side = "WEST";
				};

				class vn_b_wheeled_m151_01
				{
					cost[] = {{"BuildingSupplies", 250}};
					cooldown = 120;
				};

				class vn_b_wheeled_m151_mg_04
				{
					cost[] = {{"BuildingSupplies", 500}};
					cooldown = 300;
					//side = "WEST";
				};

				class vn_b_sf_static_m2_high
				{
					cost[] = {{"BuildingSupplies", 100}};
					cooldown = 60;
					//side = "WEST";
				};
			};

			spawnPositionModelSpace[] = {6.00293,3.26758,-1.91181};
			spawnDirectionModelSpace = 270;
		};
	};
};

class Land_vn_radar_01_hq_f
{
	name = ""
	type = "buildings";
	categories[] = {"buildings"};
	rank = 0;
	SUPPLY_CAPACITY(1000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_radar_01_hq_f_part0";
		};
		class middle_state
		{
			object_class = "vn_radar_01_hq_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_radar_01_hq_f";
		};
	};
};

class Land_vn_radar_01_antenna_base_f
{
	name = ""
	type = "buildings";
	categories[] = {"buildings"};
	rank = 0;
	SUPPLY_CAPACITY(1000, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_radar_01_antenna_base_f_part0";
		};
		class middle_state
		{
			object_class = "vn_radar_01_antenna_base_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_radar_01_antenna_base_f";
		};
	};
};

class Land_vn_army_hut3_long_int
{
	name = ""
	type = "hootches";
	categories[] = {"buildings", "hootches", "us"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_army_hut3_long_int_part0";
		};
		class middle_state
		{
			object_class = "vn_army_hut3_long_int_part1";
		};
		class final_state
		{
			object_class = "Land_vn_army_hut3_long_int";
		};
	};
};

class Land_vn_usaf_hangar_01
{
	name = ""
	type = "hangars";
	categories[] = {"hangars", "us", "buildings"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_usaf_hangar_01_part0";
		};
		class middle_state
		{
			object_class = "vn_usaf_hangar_01_part1";
		};
		class final_state
		{
			object_class = "Land_vn_usaf_hangar_01";
		};
	};
};

class Land_vn_usaf_hangar_02
{
	name = ""
	type = "hangars";
	categories[] = {"hangars", "us", "buildings"};
	rank = 0;
	SUPPLY_CAPACITY(500, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_usaf_hangar_02_part0";
		};
		class middle_state
		{
			object_class = "vn_usaf_hangar_02_part1";
		};
		class final_state
		{
			object_class = "Land_vn_usaf_hangar_02";
		};
	};
};

class Land_vn_fuel_tank_stairs
{
	name = ""
	type = "props";
	categories[] = {"decorative"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_fuel_tank_stairs_part0";
		};
		class middle_state
		{
			object_class = "vn_fuel_tank_stairs_part1";
		};
		class final_state
		{
			object_class = "Land_vn_fuel_tank_stairs";
		};
	};
};

class Land_vn_fireplace_f
{
	name = ""
	type = "lighting";
	categories[] = {"decorative", "lighting", "nonAcav"};
	rank = 0;
	SUPPLY_CAPACITY(20, DAYS_TO_SECONDS(1));
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

class Land_vn_pierwooden_01_dock_f
{
	name = ""
	type = "piers";
	categories[] = {"buildings", "piers"};
	rank = 0;
	SUPPLY_CAPACITY(200, DAYS_TO_SECONDS(1));
	resupply = "BuildingSupplies";
	conditions[] = {
		CONDITION_HAS_RANK,
		CONDITION_IS_ENGINEER,
		CONDITION_IS_ON_FOOT,
		CONDITION_NOT_IN_RESTRICTED_ZONE,
		CONDITION_IS_ACAV
	};
	class build_states
	{
		class initial_state
		{
			object_class = "vn_pierwooden_01_dock_f_part0";
		};
		class middle_state
		{
			object_class = "vn_pierwooden_01_dock_f_part1";
		};
		class final_state
		{
			object_class = "Land_vn_pierwooden_01_dock_f";
		};
	};
};

class vn_o_vc_spiderhole_01
{
	name = ""
	type = "spiderholes";
	categories[] = {"spiderholes", "nonAcav", "nv"};
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
			object_class = "vn_o_spiderhole_01_part0";
		};
		class middle_state
		{
			object_class = "vn_o_vc_spiderhole_01";
		};
		class final_state
		{
			object_class = "vn_o_vc_spiderhole_01";
		};
	};
};

class vn_o_vc_spiderhole_02
{
	name = ""
	type = "spiderholes";
	categories[] = {"spiderholes", "nonAcav", "nv"};
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
			object_class = "vn_o_spiderhole_02_part0";
		};
		class middle_state
		{
			object_class = "vn_o_vc_spiderhole_02";
		};
		class final_state
		{
			object_class = "vn_o_vc_spiderhole_02";
		};
	};
};

class vn_o_vc_spiderhole_03
{
	name = ""
	type = "spiderholes";
	categories[] = {"spiderholes", "nonAcav", "nv"};
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
			object_class = "vn_o_spiderhole_03_part0";
		};
		class middle_state
		{
			object_class = "vn_o_vc_spiderhole_03";
		};
		class final_state
		{
			object_class = "vn_o_vc_spiderhole_03";
		};
	};
};

class vn_b_prop_fmradio_01
{
	name = ""
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
		CONDITION_IS_ACAV
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
};