createDialog "SpawnMenu";
player setPos [0,0,12];
player enableFatigue false;
call compile preprocessFileLineNumbers "scripts\HALO.sqf";
call compile preprocessFileLineNumbers "scripts\FirstPersonInTrg.sqf";
call compile preprocessFileLineNumbers "scripts\BattleZonePayForCapture.sqf";