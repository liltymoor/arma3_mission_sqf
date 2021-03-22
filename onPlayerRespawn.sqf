createDialog "SpawnMenu";
player setPos [0,0,12];
player enableFatigue false;
      if ((player getVariable ["Defender", false])==true) then {player setVariable ["Defender", nil, true];};
      if ((player getVariable ["Attacker", false])==true) then {player setVariable ["Attacker", nil, true];};
call compile preprocessFileLineNumbers "scripts\HALO.sqf";
call compile preprocessFileLineNumbers "scripts\FirstPersonInTrg.sqf";
call compile preprocessFileLineNumbers "scripts\BattleZonePayForCapture.sqf";