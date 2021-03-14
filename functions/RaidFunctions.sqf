raidLobbyAt = [];
raidLobbyDef = [];

raidLobbyQueAt = [];
raidLobbyQueDef = []; 

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
sleep 1; 
};

//Тут отчет обратный до конца рейда
missionNamespace setVariable ["Raid",true, true];
_time = 15; 
while {_time > 0 && missionNamespace getVariable ["Raid", false]} do { 
_time = _time - 1;   
_s = format["Рейд закончится через: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t = str(_s);
"RaidText" setMarkerText _t;  
sleep 1; 
};
//if (count raidLobbyDef > 1) then {call FREDDY_FNC_ENDRAIDDEF;} else {FREDDY_FNC_ENDRAIDDEF};
call FREDDY_FNC_ENDRAIDDEF;
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