// limits and vanilla/custom trait values
class MikeForce
{
    name = "Alpha Platoon[Infantry]";
    icon = "img\AirGoonIcons\Alpha.paa";
    shortname = "Alpha";
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 4;
        engineer = 4;
        explosiveSpecialist = 2;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1.0;
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
class SpikeTeam
{
    name = "Bravo Platoon [Infantry]";
    icon = "img\AirGoonIcons\Bravo.paa";
    shortname = "Bravo";
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 4;
        engineer = 4;
        explosiveSpecialist = 2;
        vn_artillery = 2;
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
        harassable = false;
        scout = true;
        scout_multiple = true;
    };

    //Function Calls on team Join
    onJoin = "";
    onLeave = "";
};
class ACAV
{
    name = "Charlie Platoon[Engineers]";
    icon = "img\AirGoonIcons\Charlie.paa";
    shortname = "Charlie";
    unit = "vn_b_men_army_01";

    class rolelimits 
    {
        medic = 4;
        engineer = 40;
        explosiveSpecialist = 4;
        vn_artillery = 2;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1.0;
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
class GreenHornets
{
    name = "Delta Troop [Air Support]";
    icon = "img\AirGoonIcons\Delta.paa";
    shortname = "Delta";
    unit = "vn_b_men_army_01";
    
    class rolelimits 
    {
        medic = 1;
        engineer = 1;
        explosiveSpecialist = 1;
        vn_artillery = 1;
    };
    
    class defaultTraits
    {
        camouflageCoef = 1.0;
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
