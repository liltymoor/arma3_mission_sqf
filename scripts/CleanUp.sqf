diag_log "Скрипт очистки работает";

Freddy_fnc_cleanup = { 
 {
if (!(count (crew _x) > 0) && {_x isKindOf 'Air' || {_x isKindOf 'LandVehicle'} || {_x isKindOf 'Ship'}} && (count( _x nearEntities ["Man", 70])) == 0 ) then { 
deleteVehicle _x;
}; 
        } forEach (vehicles select {!(_x inArea "RaidEllipse")});  
};

while {true} do {
Sleep 300;
call Freddy_fnc_cleanup;
diag_log "Скрипт очистки сработал";
{ deleteVehicle _x } forEach (allMissionObjects "weaponHolder");
//[] remoteExec ["Freddy_fnc_cleanup", 0, true];
};