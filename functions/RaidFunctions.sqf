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
"RaidEllipse" setMarkerSize [3000,3000];  
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
_time = 120; 
while {_time > 0} do { 
_time = _time - 1;   
_s = format["Рейд начнется через: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t = str(_s);
"RaidText" setMarkerText _t;  
sleep 1; 
};

//Тут отчет обратный до конца рейда
missionNamespace setVariable ["Raid",true, true];
_time = 5400; 
while {_time > 0 && missionNamespace getVariable ["Raid", false]} do { 
_time = _time - 1;   
_s = format["Рейд закончится через: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
_t = str(_s);
"RaidText" setMarkerText _t;  
sleep 1; 
};
"RaidText" setMarkerText "Рейд окончен"; 
call FREDDY_FNC_ENDRAID;
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

//Скрипт по окончанию рейда
FREDDY_FNC_ENDRAID = {
_playersArray = allUnits inAreaArray "RaidEllipse";
{_x setDamage 1} forEach _playersArray;

raidLobbyAt = [];
raidLobbyDef = [];
};

//Скрипт захвата флага
FREDDY_FNC_CAPTUREFLAG = {
[] spawn {
_unit = player;
_time = 120;
missionNamespace setVariable ["CaptureInProgress", true, true]; 
	while {_time > 0 && missionNamespace getVariable ["Raid", false] && lifeState _unit != "INCAPACITATED" && _unit distance BaseFlag <= 10 && isNull objectParent player} do { 
	_time = _time - 1;   
	hintSilent format["До захвата: %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring];
	sleep 1; 
};
if (_time == 0 && lifeState _unit != "INCAPACITATED") then {missionNamespace setVariable ["CaptureInProgress", false, true]; call FREDDY_FNC_ENDRAID;} else {hint str "Захват сбит"; missionNamespace setVariable ["CaptureInProgress", false, true];};
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