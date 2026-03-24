groups[] =
{
	{"AlphaPlatoon","vn_b_men_army_01"},
	{"BravoPlatoon","vn_b_men_army_01"},
	{"CharliePlatoon","vn_b_men_army_01"},
	{"DeltaTroop","vn_b_men_army_01"}
};

class teams
{
    //["Regular Name", "path to Icon", "Shortname"]
    CharliePlatoon[] = {"Combat Engineers [Ground Support]", "\vn\ui_f_vietnam\ui\taskroster\img\logos\logo_acav_HL.paa", "Charlie"};
    DeltaTroop[] = {"Army Aviation [Air Support]", "\vn\ui_f_vietnam\ui\taskroster\img\logos\Logo_Hornets_HL.paa", "Delta"};
    AlphaPlatoon[] = {"US Army [Infantry]", "\vn\ui_f_vietnam\ui\taskroster\img\logos\logo_mikeforce_HL.paa", "Alpha"};
    BravoPlatoon[] = {"AUS Army [Infantry]", "\vn\ui_f_vietnam\ui\taskroster\img\logos\logo_spiketeam_HL.paa", "Bravo"};
    FAILED[] = {"NO TEAM","\vn\ui_f_vietnam\ui\taskroster\img\icons\vn_icon_task_secondary.paa", "FAILED"};
};

snakebitechance[] = {0.0,1};  // default:  {0.5,1} 50% chance to get bit if closer than 1m, 0.1 = 10%
snakebitefrequency[] = {300,300}; // Restrict snakes to biting once every 600s, with another 300s of reduced chance.

dbprefix = "mf_db_";
