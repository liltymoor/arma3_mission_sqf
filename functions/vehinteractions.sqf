FREDDY_FNC_REPAIRVEH =
{
[] spawn {
private _fixer = player;
private _veh = cursorObject;
private _delay = 15;
private _zero = 0;
if (_fixer getVariable ["Repair_inProgress", false]) then {hint "Вы уже чините транспортное средство";} else {
//"Начался ремонт, для отмены удерживайте W" remoteExec ["hint", _fixer, true];
[format["<t color='#ffffff' size = '.7'>Начался ремонт, для отмены удерживайте</t> <t color='#ff0000' size = '.7'>W</t>"],-1,0.85,17,0.3,0,789] spawn BIS_fnc_dynamicText;
_fixer setVariable ["Repair_inProgress", true, true];
closeDialog 0;
inGameUISetEventHandler ["Action","hint 'Вы чем-то заняты'; true"];
[_fixer, "Acts_carFixingWheel"] remoteExec ["playMove", 0, true];
        if (alive _fixer) then {
            while {(_delay > _zero) && lifeState _fixer != "INCAPACITATED" && (getDammage cursorObject) <= 0.99 && isNull objectParent player && inputAction "MoveForward" != 1} do {
                _delay = _delay - 1; 
                sleep 1;
            };
        };
        if ((_delay <= _zero) && lifeState _fixer != "INCAPACITATED") then {
             [_fixer, ""] remoteExec ["switchMove", 0, true];
             //"Ремонт закончен" remoteExec ["hint", _fixer, true];
             [format["<t color='#ffffff' size = '.7'>Ремонт</t> <t color='#ff0000' size = '.7'>закончен</t>"],-1,0.85,3,0.3,0,789] spawn BIS_fnc_dynamicText;
              _veh setDamage 0;
              _fixer setVariable ["Repair_inProgress", false, true];
              inGameUISetEventHandler ["Action","false"];
} else {
              [_fixer, ""] remoteExec ["switchMove", 0, true];
              //"Ремонт прерван" remoteExec ["hint", _fixer, true];
              [format["<t color='#ffffff' size = '.7'>Ремонт</t> <t color='#ff0000' size = '.7'>прерван</t>"],-1,0.85,3,0.3,0,789] spawn BIS_fnc_dynamicText;
              _fixer setVariable ["Repair_inProgress", false, true];
              inGameUISetEventHandler ["Action","false"];
            };
         };
       };
};

FREDDY_FNC_EJECTVEH = {
_mover = player;
_target = cursorObject;
_UID = getPlayerUID player;
_veh = _target getVariable ["keys", 50];
if (_UID != _veh) exitWith {};
{moveOut _x} forEach crew cursorObject;
};

FREDDY_FNC_GETINVEH =
{
private ["_unit"];
_unit = cursorObject;
_nearestVehicle = nearestObjects[getPosATL player,["Car","Ship","Submarine","Air"],10] select 0;
//if (isNil "_nearestVehicle") exitWith {"Рядом нет техники" remoteExec ["hint", _call, false];};
[_unit, _nearestVehicle] remoteExec ["moveInCargo", _unit];
};

FREDDY_FNC_FLIPVEH = {
_vehicle = cursorObject;
_UID = getPlayerUID player;
_veh = _vehicle getVariable ["keys", 50];
if (_UID != _veh) exitWith {};
_vehicle setVectorUp surfaceNormal getPos _vehicle;
_vehicle setPosATL [getPosATL _vehicle select 0, getPosATL _vehicle select 1, 0];
};