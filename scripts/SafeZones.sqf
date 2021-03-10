while {true} do {
_triggers = NoFireTrgGuer, NoFireTrgOpfor, NoFireTrgBlufor;
_veh = nearestObjects [_triggers, ["Landvehicle", "Air"], 1000];
{_x allowDamage false;} forEach _veh; 
};