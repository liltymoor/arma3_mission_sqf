raidLobbyAt = [];
raidLobbyDef = [];

raidLobbyQueAt = [];
raidLobbyQueDef = []; 

//Отношения между фракциями

east setFriend [west, 1];
east setFriend [resistance, 1];
east setFriend [civilian, 1];
west setFriend [east, 1];
west setFriend [resistance, 1];
west setFriend [civilian, 1];
resistance setFriend [west, 1];
resistance setFriend [east, 1];
resistance setFriend [civilian, 1];
civilian setFriend [west, 1];
civilian setFriend [east, 1];
civilian setFriend [resistance, 1];

//Отключение голосовых каналов
0 enableChannel [false, false];
1 enableChannel [false, false];
2 enableChannel [true, true];
3 enableChannel [false, false];
4 enableChannel [false, false];
5 enableChannel [false, false];
setCurrentChannel 2;

call compile preprocessFileLineNumbers "functions\RaidFunctions.sqf";

MISSION_ROOT = call {
    private "_arr";
    _arr = toArray __FILE__;
    _arr resize (count _arr - 8);
    toString _arr
};

addMissionEventHandler ["EachFrame", {
          if (diag_tickTime > HALs_lastUpdate) then {
            HALs_lastUpdate = diag_tickTime + HALs_updateDelay;

            if (count HALs_ticker_killfeed > 0) then {
              //hint str HALs_ticker_killfeed;
              call PENA_MSG_SHOW;
              HALs_ticker_killfeed deleteAt 0;
            };
          } 
        }];

//Отключение эскпейа в агонии
diag_log "Отключение эскейпа работает";
0 = [] spawn {
  waitUntil {!isNull findDisplay 46};
  waitUntil {uiSleep 0.01;!isNull (finddisplay 49)};
  findDisplay 46 displayAddEventHandler ["keyDown",{
    params ["_ctrl","_key"];
    private _h = false;
    if (_key == 1 && lifeState player == "INCAPACITATED") then {_h = true};
    _h
  }]
};

