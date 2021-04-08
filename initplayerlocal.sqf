sortedPl = [];
localKills = 0;
localRating = 0;
title = "";
PlayerSponsorLVL = 0;
PlayerRank = 0;
raidLocalLoc = [];
player setVariable ["groupState", false, true];

[]remoteExec["PENA_RAID_LOAD", 2, false];

PENA_Raid_Handler = {
  raidLobbyDef = (_this # 0);
  raidLobbyAt = (_this # 1);
  raidLobbyQueDef = (_this # 2);
  raidLobbyQueAt = (_this # 3);
  "Пришли новые данные по рейд лобби" remoteExec ["diag_log", 2 ,false];
  "================================" remoteExec ["diag_log", 2 ,false];
  [raidLobbyDef]remoteExec["diag_log", 2 , false];
  [raidLobbyAt]remoteExec["diag_log", 2 , false];
  [raidLobbyQueDef] remoteExec ["diag_log", 2 ,false];
  [raidLobbyQueAt] remoteExec ["diag_log", 2 ,false];
  "================================" remoteExec ["diag_log", 2 ,false];
};

PENA_Group_Handler = {
  sender = (_this # 0);
  []spawn {
  player setVariable ["PendingInvite", true, true];
  sleep 20;
  player setVariable ["PendingInvite", false, true];
};
};


PENA_SORTED_PLAYER = {
  sortedPl = (_this select 0);
  localKills = (_this # 1);
  localRating = (_this # 2);
};

setterraingrid 50;
setviewdistance 1500;
enableRadio false;
enableSentences false;

activeControls = [];
HALs_ticker_killfeed = [];
controlNum = 0;
HALs_updateDelay = 0.25;
HALs_lastUpdate = diag_tickTime;

//Стрельба в сейв-зонах
player addEventHandler ["FiredMan", {
  params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];

      call {
            if (_projectile inArea "RaidEllipse" && _unit getVariable ["Defender", false]==false && _unit getVariable ["Attacker", false]==false) exitWith {deleteVehicle _projectile; if (isPlayer _unit) then {};};

              [_unit,_projectile] spawn {
              params ["_unit","_projectile"];
              waitUntil {_projectile inArea "RaidEllipse" or isnull _projectile};
              if (!isNull _projectile && _unit getVariable ["Defender", false]==false && _unit getVariable ["Attacker", false]==false) then {
                deleteVehicle _projectile;
                if (isPlayer _unit) then {
                }
              };
            };
        };
}];

Freddy_fnc_DamageInSafeZones = {
BluforSafe = (_this # 0);
OpforSafe = (_this # 1);
IndepSafe = (_this # 2);
vehiclesInSafeZone = (_this # 3);
vehiclesNotInSafeZone = (_this # 4);
allVehWithVariable = (_this # 5);
allVehWithoutVariable = (_this # 6);

{_x allowDamage true;} forEach allVehWithVariable;
{_x allowDamage false;} forEach allVehWithoutVariable;
{_x allowDamage true;} forEach vehiclesNotInSafeZone; 
};

_UID = getPlayerUID player;
_player = player;

[_UID, _player]remoteExec ["PENA_DB_LOADMONEY", 2 ,false];

PENA_MONEY_FROM_SERVER = {
	MoneyPlayer = (_this select 0);
};


[player]remoteExecCall["PENA_PROFILE_LOAD", 2 , false];

PENA_GET_PROFILE = {
  title = (_this # 0);
  PlayerSponsorLVL = (_this # 1);
  _playerScore = (_this # 2);

  switch (true) do { 
    case (_playerScore >= 100 && _playerScore <= 500) : {PlayerRank = "2";}; 
    case (_playerScore >= 500 && _playerScore <= 1500) : {PlayerRank = "3";};
    case (_playerScore >= 1500 && _playerScore <= 4500) : {PlayerRank = "4";};
    case (_playerScore >= 4500 && _playerScore <= 13500) : {PlayerRank = "5";};
    case (_playerScore >= 13500 && _playerScore <= 27000) : {PlayerRank = "6";};
    case (_playerScore >= 27000 && _playerScore <= 54000) : {PlayerRank = "7";};
    case (_playerScore >= 54000 && _playerScore <= 108000) : {PlayerRank = "8";};
    case (_playerScore >= 108000 && _playerScore <= 162000) : {PlayerRank = "9";};
    case (_playerScore >= 162000 && _playerScore <= 185000) : {PlayerRank = "10";};  
    default {PlayerRank = "1";}; 
  };


  switch (title) do { 
    case "Terpila" : {player setVariable ["Terpila", true, true];}; 
    case "Clown" : {player setVariable ["Clown", true, true];}; 
    case "Nigger" : {player setVariable ["Nigger", true, true];}; 
    case "doSvyazi" : {player setVariable ["doSvyazi", true, true];}; 
    case "arma3fun" : {player setVariable ["arma3fun", true, true];}; 
    default {title = "Terpila"; player setVariable ["Terpila", true, true]; }; 
  };

};

call PENA_PLAYER_LOGISTIC;

timeToGetSafe = 30;

player addEventHandler ["FiredMan", {
  params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
  _unit setVariable ["FiredInSafeZone", true, true];
  timeToGetSafe = 30;
}];

[timeToGetSafe] spawn {
while {true} do {
_unit = player;

waitUntil {player getVariable ["FiredInSafeZone", false]==true};
for [{ _i = 1, timeToGetSafe = (_this # 0)}, { timeToGetSafe > 0 }, { timeToGetSafe = timeToGetSafe - _i}] do {if (alive _unit) then {sleep 1; _unit setVariable ["SafeZoneTimer", timeToGetSafe, true];} else {timeToGetSafe = 0; _unit setVariable ["SafeZoneTimer", nil, true];};};
_unit setVariable ["SafeZoneTimer", nil, true];
_unit setVariable ["FiredInSafeZone", nil, true];
  };
};



// для игроков
[] spawn {
while {true} do {
_player = player;

if ((player inArea "BluforS" || player inArea "OpforS" || player inArea "IndepS") && player getVariable ["FiredInSafeZone", false]==false) then {
player allowDamage false;
systemChat str "Ты в сейве";
waitUntil {((!(player inArea "BluforS")) &&  (!(player inArea "OpforS")) && (!(player inArea "IndepS"))) || player getVariable ["FiredInSafeZone", false]==true};
  } else {
player allowDamage true;
systemChat str "Ты не в сейве";
waitUntil {((player inArea "BluforS") || (player inArea "OpforS") || (player inArea "IndepS") )&& player getVariable ["FiredInSafeZone", false]==false};  
};
  };
};

player addRating 99999999;
player enableFatigue false;

call compile preprocessFileLineNumbers "Scripts\DeleteBodyRespawn.sqf";
call compile preprocessFileLineNumbers "Functions\ActivateFunctions.sqf";
call compile preprocessFileLineNumbers "Scripts\ActivateScripts.sqf";

waitUntil {! isNull player};
_SUID = getPlayerUID player;	
_Sname = name player;
_time = systemTime;
[_SUID, _Sname, _time, player] remoteExec ["PENA_DB_CHECK", 2 , false];


//килл фид
controlList = [];
controlNumber = 0;

{
_x addEventHandler ["killed",
	{
	_unitName = (_this select 0);
	_killerName = (_this select 1);
	_killerSide = side (_this selesct 1);
	unitKilled = [_unitName, _killerSide, _killerSide];
	publicVariableServer "unitKilled";
	}];
} forEach allUnits;