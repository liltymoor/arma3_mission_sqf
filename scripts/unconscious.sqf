waitUntil {!isNull player};
player addEventHandler ["HandleDamage", 
{
    params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];

        _distance = _instigator distance _unit;
        _nameinstigator = name _instigator;

        if (lifeState _unit == "INCAPACITATED" && (_instigator distance _unit) <= 3 && animationState _unit == "unconsciousrevivedefault") then {
          switch (true) do { 
            case (lifeState _unit == "INCAPACITATED" && (_instigator distance _unit) <= 3 && side _instigator != side group _unit && _instigator != _unit) : { 
            _unit setDamage 1;
             _unit setVariable ["CantDie", false, true];
              _unit setVariable ["CouldDie", false, true];
            []remoteExec ["FREDDY_FNC_GETRANDOM_MNY", _instigator, false];
          
            };

            case (lifeState _unit == "INCAPACITATED" && (_instigator distance _unit) <= 3 && side _instigator == side group _unit && _instigator != _unit) : {
            _unit setDamage 1;
            _unit setVariable ["CantDie", false, true];
            _unit setVariable ["CouldDie", false, true];
            };
          };
        };

    if (_damage >= 1 && alive _unit && lifeState _unit != "INCAPACITATED") then 
    {
        _unit allowDamage false; _unit setDamage 0.95; _unit setUnconscious true; _unit switchCamera "INTERNAL";
        if (_unit inArea "RaidEllipse") then {[format["<t color='#ffffff' size = '.7'>Вас вывел из строя</t><t color='#ff0000' size = '.7'> %1</t><br /><t color='#ffffff' size = '.7'>Ваши товарищи могут реанимировать вас в течении</t> <t color='#ff0000' size = '.7'>2 минут</t>", _nameinstigator],-1,0.85,19,0.3,0,789] spawn BIS_fnc_dynamicText;} else {[format["<t color='#ffffff' size = '.7'>Вас вывел из строя</t><t color='#ff0000' size = '.7'> %1</t><br /><t color='#ffffff' size = '.7'>Возрождение будет доступно через</t> <t color='#ff0000' size = '.7'>20 секунд</t>", _nameinstigator],-1,0.85,19,0.3,0,789] spawn BIS_fnc_dynamicText;}; 
        if (_unit inArea "RaidEllipse") then {_unit call FREDDY_FNC_RAIDDEADCOUNTER;} else {_unit call FREDDY_FNC_DEADCOUNTER;};
        _unit call FREDDY_FNC_INCAPACIATEDSCREEN;
        showCompass false;
        if !(isNull objectParent _unit) then {moveOut _unit};
        if (side _instigator != side group _unit && _instigator != _unit) then {[]remoteExec ["FREDDY_FNC_GETRANDOM_MNYINCAP", _instigator, false]; [_instigator]remoteExec["PENA_DB_EnmKilled", 2 , false];};

    _unit spawn
    {
        while {lifeState _this == "INCAPACITATED"} do {
          _this switchCamera "INTERNAL";
          closeDialog 0;
          ((findDisplay 49) displayctrl 1010) ctrlShow false;
          ((findDisplay 49) displayctrl 104) ctrlShow false;
          sleep 0.1;
        };
        waituntil {lifeState _this != "INCAPACITATED"};
        _this allowDamage true;
        _this setDamage 0;
        showCompass true;
        ((findDisplay 49) displayctrl 1010) ctrlShow true;
        ((findDisplay 49) displayctrl 104) ctrlShow true;
        sleep 0.1;
      };
    };
}];

FREDDY_FNC_RAIDDEADCOUNTER =
{
[] spawn {
_unit = player;
_unit setVariable ["CantDie", true, true];
while {lifeState _unit == "INCAPACITATED" && _unit getVariable ["CantDie", true] && _unit inArea "RaidEllipse"} do {
sleep 120;
_unit setVariable ["CantDie", false, true];
    };
     if (lifeState _unit == "Incapacitated") then {
      if ((player getVariable ["Defender", false])==true) then {player setVariable ["Defender", nil, true];};
      if ((player getVariable ["Attacker", false])==true) then {player setVariable ["Attacker", nil, true];};
     _unit setDamage 1;
    } else {};
  };
};

FREDDY_FNC_DEADCOUNTER =
{
[] spawn {
_unit = player;
_unit setVariable ["CantDie", true, true];
while {lifeState _unit == "INCAPACITATED" && _unit getVariable ["CantDie", true]} do {
sleep 20;
_unit setVariable ["CantDie", false, true];
    };
     if (lifeState _unit == "Incapacitated") then {
     hintSilent parseText format["Нажмите <t size='1' color='#ff0000'>K</t> для возрождения"];
     _unit setVariable ["CouldDie", true, true];
    } else {};
  };
};

FREDDY_FNC_INCAPACIATEDSCREEN = {
["ColorCorrections", 1500, [1, 0.2, 0, [0, 0, 0, 0], [1, 1, 1, 0], [1, 1, 1, 0]]] spawn {  
 params ["_name", "_priority", "_effect", "_handle"];  
 _handle = ppEffectCreate [_name, _priority];  
 _handle ppEffectEnable true;  
 _handle ppEffectAdjust _effect;  
 _handle ppEffectCommit 0.1;  
 waitUntil {lifeState player != "INCAPACITATED"}; 
 _handle ppEffectEnable false;  
 ppEffectDestroy _handle;  
  }; 
};