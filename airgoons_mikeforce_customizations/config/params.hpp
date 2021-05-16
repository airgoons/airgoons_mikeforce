class wipe_save
{
    title = $STR_vn_mf_param_wipe_save;
    values[] = {0, 1};
    texts[] = {"False", "True"};
    default = 0;
};

class wipe_save_desc
{
    title = $STR_vn_mf_param_wipe_save_desc;
    values[] = {""};
    texts[] = {""};
    default = "";
};

class Spacer0
{
    title = "";
    values[] = {""};
    texts[] = {""};
    default = ""
};

class enable_ranks
{
    title = $STR_vn_mf_param_enable_ranks;
    values[] = {0, 1};
    texts[] = {"False", "True"};
    default = 1;
};

class enable_ranks_desc
{
    title = $STR_vn_mf_param_enable_ranks_desc;
    values[] = {""};
    texts[] = {""};
    default = "";
};

class Spacer1 : Spacer0 {};

class hard_ai_limit
{
    title = $STR_vn_mf_param_hard_ai_limit;
    values[] = {60, 80, 100, 120, 140, 160, 180, 200};
    texts[] = {"60", "80 (recommended)", "100", "120", "140", "160", "180", "200"};
    default = 80;
};

class hard_ai_limit_desc
{
    title = $STR_vn_mf_param_hard_ai_limit_desc;
    values[] = {""};
    texts[] = {""};
    default = "";
};

class Spacer10 : Spacer0 {};

// gamemode specific start
class buildables_require_vehicles
{
    title = $STR_vn_mf_buildables_require_vehicles;
    values[] = {0, 1};
    texts[] = {"False", "True"};
    default = 0;
};

class buildables_require_vehicles_desc
{
    title = $STR_vn_mf_buildables_require_vehicles_desc;
    values[] = {""};
    texts[] = {""};
    default = "";
};

class Spacer2 : Spacer1 {};

class dawn_length
{
    title = $STR_vn_mf_dawn_length;
    values[] = {600, 1200, 1800, 2400, 3600, 5400, 7200, 9000, 10800};
    texts[] = {"10 minutes", "20 minutes", "30 minutes", "40 minutes", "1 hour", "1.5 hours", "2 hours", "2.5 hours", "3 hours"};
    default = 1200;
};

class Spacer3 : Spacer1 {};

class day_length
{
    title = $STR_vn_mf_day_length;
    values[] = {3600, 5400, 7200, 9000, 10800, 21600, 43200, 86400, 172800};
    texts[] = {"1 hour", "1.5 hours", "2 hours", "2.5 hours", "3 hours", "6 hours", "12 hours", "24 hours", "48 hours"};
    default = 7200;
};

class Spacer4 : Spacer1 {};

class dusk_length
{
    title = $STR_vn_mf_dusk_length;
    values[] = {600, 1200, 1800, 2400, 3600, 5400, 7200, 9000, 10800};
    texts[] = {"10 minutes", "20 minutes", "30 minutes", "40 minutes", "1 hour", "1.5 hours", "2 hours", "2.5 hours", "3 hours"};
    default = 1200;
};

class Spacer5 : Spacer1 {};

class night_length
{
    title = $STR_vn_mf_night_length;
    values[] = {600, 1200, 1800, 2400, 3600, 5400, 7200, 9000, 10800, 21600, 43200, 86400, 172800};
    texts[] = {"10 minutes", "20 minutes", "30 minutes", "40 minutes", "1 hour", "1.5 hours", "2 hours", "2.5 hours", "3 hours", "6 hours", "12 hours", "24 hours", "48 hours"};
    default = 1200;
};

class Spacer6 : Spacer1 {};

class always_allow_withstand
{
    title = $STR_vn_mf_always_allow_withstand;
    values[] = {0, 1};
    texts[] = {"False", "True"};
    default = 1;
};


class always_allow_withstand_desc
{
    title = $STR_vn_mf_always_allow_withstand_desc;
    values[] = {""};
    texts[] = {""};
    default = "";
};

class Spacer7 : Spacer1 {};

class building_sandbag_value
{
    title = $STR_vn_mf_building_sandbag_value;
    values[] = {10};
    texts[] = {"Default (10)"};
    default = 10;
};

class building_sandbag_value_desc
{
    title = $STR_vn_mf_building_sandbag_value_desc;
    values[] = {""};
    texts[] = {""};
    default = "";
};

/*
class Spacer3: Spacer1 {};

class ArsenalSettings
{
    title = $STR_VN_PARAMS_ARSENAL_SETTINGS;
    values[] = {""};
    texts[] = {""};
    default = "";
};
class vn_whitelisted_arsenal_params_enable
{
    title = $STR_VN_PARAMS_ARSENAL_TOGGLE;
    values[] = {0, 1};
    texts[] = {$STR_VN_MISSIONS_DISABLED, $STR_VN_MISSIONS_ENABLED};
    default = 0; // TODO change to 0 in release
};
class vn_whitelisted_arsenal_params_scope
{
    title = $STR_VN_PARAMS_ARSENAL_SCOPE;
    values[] = {0, 1, 2};
    texts[] = {$STR_VN_PARAMS_ARSENAL_SCOPE_DLC, $STR_VN_PARAMS_ARSENAL_SCOPE_CUSTOM, $STR_VN_PARAMS_ARSENAL_SCOPE_UNSUNG};
    default = 0;
};
class vn_whitelisted_arsenal_params_rank
{
    title = $STR_VN_PARAMS_ARSENAL_RANK;
    values[] = {0, 1};
    texts[] = {$STR_VN_MISSIONS_ENABLED, $STR_VN_MISSIONS_DISABLED};
    default = 1;
};
class vn_whitelisted_arsenal_params_side
{
    title = $STR_VN_PARAMS_ARSENAL_SIDE;
    values[] = {0, 1};
    texts[] = {$STR_VN_PARAMS_ARSENAL_SIDE_RESTRICTED, $STR_VN_PARAMS_ARSENAL_UNRESTRICTED};
    default = 1; // TODO change to 0 in release
};
class vn_whitelisted_arsenal_params_equipment
{
    title = $STR_VN_PARAMS_ARSENAL_EQUIPMENT;
    values[] = {0, 1, 2, 3};
    texts[] = {$STR_VN_PARAMS_ARSENAL_EQUIPMENT_EQUIPMENT, $STR_VN_PARAMS_ARSENAL_EQUIPMENT_VEHICLES, $STR_VN_PARAMS_ARSENAL_EQUIPMENT_BOTH, $STR_VN_PARAMS_ARSENAL_EQUIPMENT_NONE};
    default = 0;
};
*/