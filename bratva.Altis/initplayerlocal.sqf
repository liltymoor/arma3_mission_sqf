sortedPl = [];
localKills = 0;
localRating = 0;

title = "";

PlayerSponsorLVL = 0;
PlayerRank = 0;


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

//Отключение стрельбы в сейв зонах
0 = [] spawn {
  while {true} do {
   sleep 2;
   {
     if !(_x getVariable ["MGIttd",false]) then {
       _x setVariable ["MGIttd",true];
       _x addEventHandler ["firedman", 
        { 
          _shooter = _this select 0; 
          _projectile = _this select 6;
          _target = if (isplayer _shooter) then [{cursorTarget},{ assignedTarget _shooter}];
          call {
            if (_projectile inArea NoFireTrgGuer or _projectile inArea NoFireTrgOpfor or _projectile inArea NoFireTrgBlufor) exitWith {
              deleteVehicle _projectile;
              if (isPlayer _shooter) then {
              }
            };

            if (_shooter inArea RedzoneBlufor or _shooter inArea RedzoneGuer or _shooter inArea RedzoneOpfor) exitWith {
              deleteVehicle _projectile;
              if (isPlayer _shooter) then {
              }
            };

            if (_target inArea NoFireTrgGuer or _target inArea NoFireTrgOpfor or _target inArea NoFireTrgBlufor) exitWith {
              deleteVehicle _projectile;
              if (isPlayer _shooter) then {
              }
            };
            [_shooter,_projectile] spawn {
              params ["_shooter","_projectile"];
              waitUntil {_projectile inArea NoFireTrgGuer or _projectile inarea NoFireTrgOpfor or _projectile inArea NoFireTrgBlufor or isnull _projectile};
              if (!isNull _projectile) then {
                deleteVehicle _projectile;
                if (isPlayer _shooter) then {
                }
              };
            };
          };  
       }]
      }
    } forEach allUnits;
  }
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
    case (_playerScore >= 0 && _playerScore <= 100) : {PlayerRank = "2";}; 
    case (_playerScore >= 100 && _playerScore <= 500) : {PlayerRank = "3";};
    case (_playerScore >= 500 && _playerScore <= 1500) : {PlayerRank = "4";};
    case (_playerScore >= 1500 && _playerScore <= 4500) : {PlayerRank = "5";};
    case (_playerScore >= 4500 && _playerScore <= 13500) : {PlayerRank = "6";};
    case (_playerScore >= 13500 && _playerScore <= 27000) : {PlayerRank = "7";};
    case (_playerScore >= 27000 && _playerScore <= 54000) : {PlayerRank = "8";};
    case (_playerScore >= 54000 && _playerScore <= 108000) : {PlayerRank = "9";};
    case (_playerScore >= 108000 && _playerScore <= 162000) : {PlayerRank = "10";};  
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