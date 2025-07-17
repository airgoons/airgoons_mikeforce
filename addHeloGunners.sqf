/* 
    File -- addHeloGunners.sqf
    Author -- Jerik / Alex
    Adds gunners to the helos for Air Goon Vietnam. Works on the Huey, Chinook, Cayuse, and Little Bird.
    Also sets the vehicle lock for the helicopters to DeltaTroop.
*/

params["_helo"];

createVehicleCrew _helo; 
_helo deleteVehicleCrew driver _helo;
_v1 = _helo turretUnit [0]; 
_helo deleteVehicleCrew _v1;
_helo setVariable ["teamLock", "DeltaTroop", true];
