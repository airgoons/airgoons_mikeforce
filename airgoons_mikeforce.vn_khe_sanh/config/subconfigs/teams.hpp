// limits and vanilla/custom trait values
class alphaplatoon
{
    name = "Alpha Platoon [Infantry]";
    icon = "img\AirGoonIcons\Alpha.paa";
    shortname = "Alpha Plt";
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 5;
        engineer = 3;
        explosiveSpecialist = 3;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class charlieplatoon
{
    name = "Charlie Platoon [Mortar & Scouts]";
    icon = "img\AirGoonIcons\charlie.paa";
    shortname = "Charlie Plt";
    unit = "vn_b_men_sf_19";

    class rolelimits 
    {
        medic = 4;
        engineer = 2;
        explosiveSpecialist = 3;
        vn_artillery = 3;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1;
        audibleCoef = 0.3;
        loadCoef = 0.5;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = true;
        scout_multiple = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class bravoplatoon
{
    name = "Bravo Combat Engineer Platoon [Support]";
    icon = "img\AirGoonIcons\Bravo.paa";
    shortname = "Bravo Plt";
    unit = "vn_b_men_army_04";

    class rolelimits 
    {
        medic = 5;
        engineer = 40;
        explosiveSpecialist = 40;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = true;
        explosiveSpecialist = true;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class deltatroop
{
    name = "Delta Troop, Air Cav [Air Support]";
    icon = "img\AirGoonIcons\Delta.paa";
    shortname = "Delta Troop";
    unit = "vn_b_men_aircrew_05";
    
    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 0.8;
        audibleCoef = 0.6;
        loadCoef = 1;
        engineer = false;
        explosiveSpecialist = false;
        medic = false;
        UAVHacker = false;
        vn_artillery = false;
        harassable = true;
        scout = false;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
