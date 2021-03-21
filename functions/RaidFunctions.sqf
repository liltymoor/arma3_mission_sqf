//Максимум 12 Защ. 16 Ат.
//Минимум 6 Защ. 8 Ат.


FREDDY_FNC_CREATERAID = {
[] spawn {
//Тут создаются маркеры
createMarker ["RaidEllipse",BaseFlag];  
"RaidEllipse" setMarkerShape "ELLIPSE";  
"RaidEllipse" setMarkerType "ellipse";  
"RaidEllipse" setMarkerBrush "SolidBorder";  
"RaidEllipse" setMarkerSize [4000,4000];  
"RaidEllipse" setMarkerColor "ColorOrange"; 
 
createMarker ["RaidText",BaseFlag];   
"RaidText" setMarkerType "hd_warning"; 
"RaidText" setMarkerText "Рейд"; 
"RaidText" setMarkerColor "ColorWhite";

//Тут у нас игроки переносятся на стартовые позиции и получают переменные
//{_x setVariable ["Defender", true, true];} forEach raidLobbyDef
//{_x setVariable ["Attacker", true, true];} forEach raidLobbyAt
//{_x setPos base} forEach raidLobbyDef
//{_x setPos base} forEach raidLobbyAt
//{[] RemoteExec ["FREDDY_FNC_PLAYERINAREA", _x, false];} forEach raidLobbyDef
//{[] RemoteExec ["FREDDY_FNC_PLAYERINAREA", _x, false];} forEach raidLobbyAt

//Тут отчет обратный до начала рейда
_time = 10; 
while {_time > 0} do { 
_time = _time - 1;   
_s = format["Рейд начнется через: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t = str(_s);
"RaidText" setMarkerText _t;

if (!isNull findDisplay 20999) then {
_s1 = format["%1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t1 = str(_s1);
ctrlSetText [20010, "До начала"]; 
ctrlSetText [20009, _t1];     
	};
sleep 1; 
};

//Тут отчет обратный до конца рейда
missionNamespace setVariable ["Raid",true, true];
_time = 15; 
while {_time > 0 && missionNamespace getVariable ["Raid", false] && count raidLobbyDef > 0 && count raidLobbyAt > 0} do { 
_time = _time - 1;   
_s = format["Рейд закончится через: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t = str(_s);
"RaidText" setMarkerText _t;

if (!isNull findDisplay 20999) then {
_s1 = format["%1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t1 = str(_s1);
ctrlSetText [20010, "До конца"]; 
ctrlSetText [20009, _t1];   
	};
sleep 1; 
};
if (count raidLobbyDef > 0) then {call FREDDY_FNC_ENDRAIDDEF;} else {call FREDDY_FNC_ENDRAIDATTACK;};
	};
};

//Убийство игрока если не в зоне
FREDDY_FNC_PLAYERINAREA = {
[] spawn {
if (!(player inArea "RaidEllipse")) exitWith {player setDamage 1;};
waitUntil {!(player inArea "RaidEllipse")};
player setDamage 1;
	};
};

//Скрипт захвата флага
FREDDY_FNC_CAPTUREFLAG = {
[] spawn {
_unit = player;
_time = 120;
missionNamespace setVariable ["CaptureInProgress", true, true]; 
	while {_time > 0 && missionNamespace getVariable ["Raid", false] && lifeState _unit != "INCAPACITATED" && _unit distance BaseFlag <= 15 && isNull objectParent player} do { 
	_time = _time - 1;   
	hintSilent format["До захвата: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1; 
};
if (_time == 0 && lifeState _unit != "INCAPACITATED" && alive _unit) then {call FREDDY_FNC_ENDRAIDATTACK;} else {hint str "Захват сбит"; missionNamespace setVariable ["CaptureInProgress", nil, true];};
	};
};

//Скрипт победы защиты
FREDDY_FNC_ENDRAIDDEF = {
[] spawn {
_playersArray = allUnits inAreaArray "RaidEllipse";
hint "Победа защиты"; 
{_x setDamage 1} forEach _playersArray;
missionNamespace setVariable ["Raid",nil, true];
missionNamespace setVariable ["CaptureInProgress", nil, true];
"RaidText" setMarkerText "Победа защиты";
raidLobbyAt = [];
raidLobbyDef = [];
sleep 15;
deleteMarker "RaidEllipse";
deleteMarker "RaidText"; 
	};
};

//Скрипт победы атаки
FREDDY_FNC_ENDRAIDATTACK = {
[] spawn {
_playersArray = allUnits inAreaArray "RaidEllipse";
hint "Победа атаки"; 
{_x setDamage 1} forEach _playersArray;
missionNamespace setVariable ["Raid",nil, true];
missionNamespace setVariable ["CaptureInProgress", nil, true];
"RaidText" setMarkerText "Победа атаки";
raidLobbyAt = [];
raidLobbyDef = [];
sleep 15;
deleteMarker "RaidEllipse";
deleteMarker "RaidText"; 
	};
};

PENA_ARRAY_ONLOAD = {
	
};

PENA_Raid_OnLoad = {  
lbClear 20006;
lbClear 20008;
[]spawn {
if (!isNull findDisplay 20999) then {
 waitUntil {!isNull findDisplay 20999};
 	_playerData = [];
    {   
     _uid = getPlayerUID _x;     
         if (isPlayer _x && _playerData find _x == -1) then     
         {    
          _index = lbAdd [20006, name _x];     
          _data = lbSetData [20006, _index, _uid];     
          lbSetTooltip [20006, _index, name _x]; 
          if (_x == player) then {raidLocalLoc = [20006, _index]};
          _playerData pushBack _x;        
        };     
    }forEach raidLobbyDef;  
};
};

[]spawn {
if (!isNull findDisplay 20999) then {
 waitUntil {!isNull findDisplay 20999};
 	_playerData = [];
    {   
     _uid = getPlayerUID _x;     
         if (isPlayer _x && _playerData find _x == -1) then     
         {    
          _index = lbAdd [20008, name _x];     
          _data = lbSetData [20008, _index, _uid];     
          lbSetTooltip [20008, _index, name _x]; 
          if (_x == player) then {raidLocalLoc = [20008, _index]};
          _playerData pushBack _x;        
        };     
    }forEach raidLobbyAt;  
};
};
};

PENA_JoinToLobbyRaid = {
_idc = (_this # 0);
	if (raidLobbyDef find player == -1) then {
	if (count raidLobbyAt < 12 && raidLobbyAt find player == -1) then {
		raidLobbyAt pushBack player;
		[raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false];
	} else {
		if (raidLobbyAt find player == -1 && raidLobbyQueAt find player == -1) then {
		raidLobbyQueAt pushBack player;
		[raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false];
	} else { hint "Вы уже зашли в лобби"};
	};
} else {
	hint "Вы уже числитесь в другой команде"
};
};

PENA_JoinToLobbyDef = {
	_idc = (_this # 0);
	if (raidLobbyAt find player == -1) then {
	if (count raidLobbyDef < 12 && raidLobbyDef find player == -1) then {
		raidLobbyDef pushBack player;
		[raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false];
	} else {
		if (raidLobbyDef find player == -1 && raidLobbyQueDef find player == -1) then {
		raidLobbyQueDef pushBack player;
		[raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false];
	} else { hint "Вы уже зашли в лобби"};
	};
} else {
	hint "Вы уже числитесь в другой команде";
};
};

PENA_JoinToLobbyRaid_Squad = {
	

};



PENA_JoinToLobbyDef_Squad = {
	

};

PENA_QuitFromLobby_Queue = {
    _sender = (_this # 1);
    
    switch (true) do { 
        case (raidLobbyDef find player != -1) : { raidLobbyDef deleteAt (raidLobbyDef find player);
        [raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false]; 
        if (!isNull findDisplay 20999) then {
        lbDelete [raidLocalLoc # 0, raidLocalLoc # 1];
    };
    [_sender, raidLocalLoc # 0, raidLocalLoc # 1]remoteExec["PENA_QuitFromLobby_Helper", -2, false];
    }; 
        case (raidLobbyAt find player != -1) : {raidLobbyAt deleteAt (raidLobbyAt find player);
        [raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false]; 
        if (!isNull findDisplay 20999) then {
        lbDelete [raidLocalLoc # 0, raidLocalLoc # 1];
    };
    [_sender, raidLocalLoc # 0, raidLocalLoc # 1]remoteExec["PENA_QuitFromLobby_Helper", -2, false];
    };
        case (raidLobbyQueDef find player != -1) : {raidLobbyAt deleteAt (raidLobbyAt find player);
        [raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false]; 
        if (!isNull findDisplay 20999) then {
        lbDelete [raidLocalLoc # 0, raidLocalLoc # 1];
    };
    [_sender, raidLocalLoc # 0, raidLocalLoc # 1]remoteExec["PENA_QuitFromLobby_Helper", -2, false];
    }; 
        case (raidLobbyQueAt find player != -1) : {raidLobbyAt deleteAt (raidLobbyAt find player);
        [raidLobbyDef, raidLobbyAt, raidLobbyQueDef, raidLobbyQueAt]remoteExec["PENA_ARRAY_RAID_HANDLER", 2, false]; 
        if (!isNull findDisplay 20999) then {
        lbDelete [raidLocalLoc # 0, raidLocalLoc # 1];
    };
    [_sender, raidLocalLoc # 0, raidLocalLoc # 1]remoteExec["PENA_QuitFromLobby_Helper", -2, false];
    }; 
        default { hint "Вы не находитесь в лобби" }; 
    };
};

PENA_QuitFromLobby_Helper = {
	_sender = (_this # 0);
	if (!isNull findDisplay 20999) then {
		lbDelete [(_this # 1), (_this # 2)];
	};
};

/*
this addAction
[
	"Захватить",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		if (!(missionNamespace getVariable ["CaptureInProgress", false]) && missionNamespace getVariable ["Raid", false]) then {call FREDDY_FNC_CAPTUREFLAG;};
	},
	nil,		
	1.5,		
	true,		
	true,		
	"",			
	"true", 	
	10,			
	false,		
	"",			
	""			
];

this addAction
[
	"Включить",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		call FREDDY_FNC_CREATERAID;
	},
	nil,		
	1.5,		
	true,		
	true,		
	"",			
	"true", 	
	10,			
	false,		
	"",			
	""			
];