createDialog "SpawnMenu";
player setPos [0,0,12];
player enableFatigue false;
      if ((player getVariable ["Defender", false])==true) then {{_x setVariable ["Defender", nil, true];} forEach raidLobbyDef;};
      if ((player getVariable ["Attacker", false])==true) then {{_x setVariable ["Attacker", nil, true];} forEach raidLobbyAt;};
call compile preprocessFileLineNumbers "scripts\HALO.sqf";
call compile preprocessFileLineNumbers "scripts\FirstPersonInTrg.sqf";
call compile preprocessFileLineNumbers "scripts\BattleZonePayForCapture.sqf";