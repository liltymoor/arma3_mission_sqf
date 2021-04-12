FREDDY_FNC_REVIVEINBATTLE = {
[] spawn {
private _reviver = player;
private _veh = cursorObject;
private _delay = 10;
private _zero = 0;
if (_reviver getVariable ["Revive_inProgress", false]) then {hint "Вы уже реанимируете тело";} else {
	if (side group _veh != side group _reviver) exitWith {};
"Началась реанимация, для отмены удерживайте W" remoteExec ["hint", _reviver, true];
_reviver setVariable ["Revive_inProgress", true, true];
closeDialog 0;
inGameUISetEventHandler ["Action","hint 'Вы чем-то заняты'; true"];
[_reviver, "AinvPknlMstpSnonWnonDr_medic0"] remoteExec ["playMove", 0, true];
        if (alive _reviver) then {
            while {(_delay > _zero) && lifeState _reviver != "INCAPACITATED" && (getDammage cursorObject) <= 0.99 && isNull objectParent player && alive _veh && inputAction "MoveForward" != 1} do {
                _delay = _delay - 1; 
                sleep 1;
            };
        };
        if ((_delay <= _zero) && lifeState _reviver != "INCAPACITATED") then {
             [_reviver, ""] remoteExec ["switchMove", 0, true];
             [_veh, false ] remoteExec [ "setUnconscious", _veh]; 
              [_veh, ""] remoteExec ["switchMove", 0, true];
              "Вас реанимировали" remoteExec ["hint", _veh, false]; 
             "Реанимация закончена" remoteExec ["hint", _reviver, true];
              _veh setDamage 0;
              _reviver setVariable ["Revive_inProgress", false, true];
              inGameUISetEventHandler ["Action","false"];
} else { 
              [_reviver, ""] remoteExec ["switchMove", 0, true];
              "Реанимация прервана" remoteExec ["hint", _reviver, true];
              _reviver setVariable ["Revive_inProgress", false, true];
              inGameUISetEventHandler ["Action","false"];
            };
         };
     };
};

FREDDY_FNC_REVIVEONRAID = {
[] spawn {
private _reviver = player;
private _veh = cursorObject;
private _delay = 10;
private _zero = 0;
if (_reviver getVariable ["Revive_inProgress", false]) then {hint "Вы уже реанимируете тело";} else {
  _hasitem = [_reviver, "epenephrine"] call BIS_fnc_hasItem;
  if (_hasitem == false) exitWith {hint "У вас нет адреналина";};
_reviver removeItem "epenephrine";
"Началась реанимация, для отмены удерживайте W" remoteExec ["hint", _reviver, true];
_reviver setVariable ["Revive_inProgress", true, true];
closeDialog 0;
inGameUISetEventHandler ["Action","hint 'Вы чем-то заняты'; true"];
[_reviver, "AinvPknlMstpSnonWnonDr_medic0"] remoteExec ["playMove", 0, true];
        if (alive _reviver) then {
            while {(_delay > _zero) && lifeState _reviver != "INCAPACITATED" && (getDammage cursorObject) <= 0.99 && isNull objectParent player && inputAction "MoveForward" != 1} do {
                _delay = _delay - 1; 
                sleep 1;
            };
        };
        if ((_delay <= _zero) && lifeState _reviver != "INCAPACITATED") then {
             [_reviver, ""] remoteExec ["switchMove", 0, true];
             [_veh, false ] remoteExec [ "setUnconscious", _veh]; 
              [_veh, ""] remoteExec ["switchMove", 0, true];
              "Вас реанимировали" remoteExec ["hint", _veh, false]; 
             "Реанимация закончена" remoteExec ["hint", _reviver, true];
              _veh setDamage 0;
              _reviver setVariable ["Revive_inProgress", false, true];
              inGameUISetEventHandler ["Action","false"];
} else { 
              [_reviver, ""] remoteExec ["switchMove", 0, true];
              "Реанимация прервана" remoteExec ["hint", _reviver, true];
              _reviver addItem "epenephrine";
              _reviver setVariable ["Revive_inProgress", false, true];
              inGameUISetEventHandler ["Action","false"];
            };
         };
     };
};

FREDDY_FNC_DRAGBODY =
{
	[] spawn {
_unit = cursorObject;
_dragger = player;

if (_dragger getVariable ["F_Dragging", false]) then {} else {
_unit setVariable ["F_Dragged", true, true];
_dragger setVariable ["F_Dragging", true, true];

_unit attachTo [_dragger, [-0.2, 0.2, 0]];
[_unit, "AinjPfalMstpSnonWnonDf_carried_dead"] remoteExec ["switchMove", 0, true];
[_dragger, "AcinPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];
private _dropActionID = _dragger addAction [format["Бросить тело"], FREDDY_FNC_DROPBODY, _unit, 10.8, true, true, ""];
//ctrlEnable [12, false];

waitUntil {lifeState _dragger == "INCAPACITATED" || !(_dragger == vehicle _dragger)};
_dragger removeAction _dropActionID;
[_dragger, "", _dropActionID, _unit] spawn FREDDY_FNC_DROPBODY;
		};
	};
};

FREDDY_FNC_DROPBODY =
{
private _dragger = _this select 0;
private _dropActionID = _this select 2;
private _unit = _this select 3;

if (_unit getVariable "F_Dragged") then {
_dragger removeAction _dropActionID;
detach _unit;
[_unit, "unconsciousrevivedefault"] remoteExec ["switchMove", 0, true];
if !(player == vehicle player) then {
[_dragger, "driver_offroad01"] remoteExec ["switchMove", 0, true];
_unit setVariable ["F_Dragged", false, true];
_dragger setVariable ["F_Dragging", false, true];
  } else {
[_dragger, ""] remoteExec ["switchMove", 0, true];
_unit setVariable ["F_Dragged", false, true];
_dragger setVariable ["F_Dragging", false, true];
   };
  };
};

FREDDY_FNC_UNDRESS =
{
	[] spawn {
  _unit = cursorObject;
  _looter = player;
  _myBackpack = backpack cursorObject;
  _myUniform = Uniform cursorObject;
  _myVest = Vest cursorObject;
  _myGoogles = Goggles cursorObject;
  _myHeadgear = Headgear cursorObject;
  _myPWeapon = primaryWeapon cursorObject;

	if(_myBackpack == "" && _myVest == "" && _myUniform == "" && _myGoogles == "" && _myHeadgear == "" && _myPWeapon == "") then {hint "Игрок уже раздет"} else {
            private _box = "Box_NATO_Grenades_F" createVehicle position _unit;
            clearWeaponCargoGlobal _box;
            clearMagazineCargoGlobal _box;
            clearItemCargoGlobal _box;
            clearBackpackCargoGlobal _box;
            if (_myPWeapon != "") then {{_box addWeaponCargoGlobal[_x,1];} forEach (weapons _unit)};
            if (_myUniform != "") then {_box addItemCargoGlobal[(uniform _unit),1];};
            if (_myVest != "") then {_box addItemCargoGlobal[(vest _unit),1];};
            if (_myHeadgear != "") then {_box addItemCargoGlobal[(headgear _unit),1];};
            if (_myBackpack != "") then {_box addBackpackCargoGlobal[(Backpack _unit),1];};
            {_box addItemCargoGlobal[_x,1];} forEach (assignedItems _unit);
            {_box addItemCargoGlobal[_x,1];} forEach (vestItems _unit);
            {_box addItemCargoGlobal[_x,1];} forEach (uniformItems _unit);
            _unit setUnitLoadout (configFile >> "EmptyLoadout");
            sleep 30;
            deleteVehicle _box;
        };
  };
};

FREDDY_FNC_CHECKPASS =
{
_caller = player;
_target = cursorObject;  
_messagedisplay = parsetext format ["<t color='#00FF00' size='2' shadow='1' shadowColor='#000000' align='center'></t><br/><br/><img size='12' image='images\passport.paa' align='center'/><br></br><br></br>
<t size='1.2' align ='center' color='#00cc00'>Имя</t><br></br> 
<t size='1.2' align ='center'> %1</t>
<t size='1.2' align ='center'>%2</t>", name _target];
hint _messagedisplay;
};
