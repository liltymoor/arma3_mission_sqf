MAIL_FNC_SEND =
{
_message = ctrlText 155;
_caller = player;
_messagedisplay = parsetext format ["<t size='2' align ='center' color='#ffcc00'>Новое сообщение</t><br></br><br></br>
<t size='1' align ='left' color='#00cc00'>Кому:</t><t align ='left'> Команда</t><br></br>
<t size='1' align ='left' color='#00cc00'>От:</t> <t align ='left'> %1</t><br></br><br></br>
<t size='1' align ='left' color='#00cc00'>Сообщение:</t><br></br>
<t size='1' align ='left'>%2</t>", name player, _message];
[[_messagedisplay], "hint",side(_caller),false,true] call BIS_fnc_MP;
ctrlSetText [155, ""];
[[_messagedisplay], "hint",side(_caller),false,true] call BIS_fnc_MP;
lbAdd [1532, name _caller] call BIS_fnc_MP;
lbAdd [1532, _message] call BIS_fnc_MP;
};

TABLET_FNC_GETPLAYERSARRAY =
{
	{
    _uid = getPlayerUID _x;
    if (isPlayer _x && alive _x && getPlayerUID player != _uid) then {
    _index = lbAdd [14881, name _x];
    _data = lbSetData [14881, _index, _uid];
    lbSetTooltip [14881, _index, name _x];
	};
}forEach  allplayers;
};

MAIL_FNC_SENDLOCAL = {
[] spawn {
_unit = player;
_index = lbCurSel 14881;
_target1 = lbdata [14881, _index] call BIS_fnc_getUnitByUID;
_message = ctrlText 14883;
if ( isNil{_unit getVariable "F_CoolDown"} || _unit getVariable ["F_CoolDown" , false]) then {
if (_message != "" && _message != " ") then {
_unit setVariable ["F_CoolDown" , false, true];
_messagedisplay = parsetext format ["<t size='2' align ='center' color='#ffcc00'>Новое сообщение</t><br></br><br></br>
<t size='1' align ='left' color='#00cc00'>Кому:</t><t align ='left'> Вам</t><br></br>
<t size='1' align ='left' color='#00cc00'>От:</t> <t align ='left'> %1</t><br></br><br></br>
<t size='1' align ='left' color='#00cc00'>Сообщение:</t><br></br>
<t size='1' align ='left'>%2</t>", name player, _message];
lbAdd [14882, _message] call BIS_fnc_MP;
ctrlSetText [14883, ""];
[_messagedisplay] remoteExec ["hint", _target1];
sleep 2;
_unit setVariable ["F_CoolDown" ,true, true];
};
} else {
    hint "Подождите немного";
		};
	};
};

FREDDY_FNC_CHANGEVIEWDISTANCEPlus = {
_curDist = viewDistance;
_Ndistance = viewDistance + 500;
if (_Ndistance > 12000) then {} else {
setViewDistance + _Ndistance;
	};		
};

FREDDY_FNC_CHANGEVIEWDISTANCEMinus = {
_curDist = viewDistance;
_Ndistance = viewDistance - 500;
if (_Ndistance < 500) then {} else {
setViewDistance + _Ndistance;
	};		
};

FRAME_01_Load = {
_UID = getPlayerUID player;
_player = player;


[_UID, _player]remoteExec ["PENA_DB_LOADMONEY", 2 ,false];
((_this select 0) displayCtrl 1224677) ctrlSetText format ["%1", MoneyPlayer];
};



FRAME_02_Load = {
	
_UID = getPlayerUID player;
_player = player;

[_player]remoteExecCall["PENA_LOAD_STATS",2 , false];

_topPlayers = []; 
  
for "_j" from 0 to (count sortedPl) do {
  
	_mvpPlayer = sortedPl # 0; 
	_mvpPlace = 0;  
	for "_i" from 0 to (count sortedPl) do {
		if (parseNumber(_mvpPlayer # 1) < parseNumber(sortedPl # _i # 1)) then {  
			_mvpPlayer = sortedPl # _i; 
			_mvpPlace = _i;  
			};  
		};  
		sortedPl deleteAt _mvpPlace; 
		if (parseNumber(_mvpPlayer # 1) != 0) then {
			_topPlayers pushBack _mvpPlayer;
		};
}; 

[_topPlayers]remoteExec["diag_log", 2 ,false];


for "_i" from 100 to 115 do {
_s = _i - 100;

if (isNil{_topPlayers # _s}) exitWith {};
((_this select 0) displayCtrl _i) ctrlSetText format ["%1", _topPlayers # _s # 0];
};
((_this select 0) displayCtrl 116) ctrlSetText format ["Убийств: %1", localKills];
((_this select 0) displayCtrl 117) ctrlSetText format ["Рейтинг: %1", localRating];
};

FRAME_03_Load = {
 [] spawn {
 _UID = getPlayerUID player;
_player = player;
[_player]remoteExecCall["PENA_PROFILE_LOAD", 2 , false];

ctrlSetText [223, PlayerSponsorLVL];
ctrlSetText [224, PlayerRank];

ctrlSetText [231, name _player];
switch (title) do { 
	case "Terpila" : {ctrlSetText [221, "images\icons\pickaxe.paa"]; ctrlSetText [222, "Потерпевший"];}; 
    case "Clown" : {ctrlSetText [221, "images\icons\Clown.paa"]; ctrlSetText [222, "Клоун"];}; 
    case "Nigger" : {ctrlSetText [221, "images\icons\Wazzup.paa"]; ctrlSetText [222, "Хочу пиццы"];}; 
    case "doSvyazi" : {ctrlSetText [221, "images\icons\doSvyazi.paa"]; ctrlSetText [222, "До связи"];}; 
    case "arma3fun" : {ctrlSetText [221, "images\icons\Arma3Fun.paa"]; ctrlSetText [222, "Арма фан"];}; 
	default {  /*...code...*/ }; 
};
 _vehArray = ["Потерпевший", "Клоун", "Хочу пиццы", "До связи", "Арма фан"];
{	
	lbAdd [3614, _x];
	lbSetData [3614, _forEachIndex, _x];
} forEach  _vehArray;
	};
};

Freddy_fnc_pickRole = {
  _index = lbCurSel 3614;
  _vehicle = lbData [3614, _index];
switch (true) do {
  case (_vehicle == "Потерпевший") : {call Freddy_fnc_UnpickRoles; ctrlSetText [221, "images\icons\pickaxe.paa"]; ctrlSetText [222, "Потерпевший"]; player setVariable ["Terpila", true, true]; ["Terpila", player]remoteExec["PENA_TITLE_SAVE", 2 ,false]; title = "Terpila";};
  case (_vehicle == "Клоун") : {call Freddy_fnc_UnpickRoles; ctrlSetText [221, "images\icons\Clown.paa"]; ctrlSetText [222, "Клоун"]; player setVariable ["Clown", true, true]; ["Clown", player]remoteExec["PENA_TITLE_SAVE", 2 ,false]; title = "Clown";};
  case (_vehicle == "Хочу пиццы") : {call Freddy_fnc_UnpickRoles; ctrlSetText [221, "images\icons\Wazzup.paa"]; ctrlSetText [222, "Хочу пиццы"]; player setVariable ["Nigger", true, true]; ["Nigger", player]remoteExec["PENA_TITLE_SAVE", 2 ,false]; title = "Nigger";};
  case (_vehicle == "До связи") : {call Freddy_fnc_UnpickRoles; ctrlSetText [221, "images\icons\doSvyazi.paa"]; ctrlSetText [222, "До связи"]; player setVariable ["doSvyazi", true, true]; ["doSvyazi", player]remoteExec["PENA_TITLE_SAVE", 2 ,false]; title = "doSvyazi";};
  case (_vehicle == "Арма фан") : {call Freddy_fnc_UnpickRoles; ctrlSetText [221, "images\icons\Arma3Fun.paa"]; ctrlSetText [222, "Арма фан"]; player setVariable ["arma3fun", true, true]; ["arma3fun", player]remoteExec["PENA_TITLE_SAVE", 2 ,false]; title = "arma3fun";};
  default {hint "Вы ничего не выбрали";};
  };
};

Freddy_fnc_UnpickRoles = {
player setVariable ["Terpila", false, true];
player setVariable ["Clown", false, true];
player setVariable ["Nigger", false, true];
player setVariable ["doSvyazi", false, true];
player setVariable ["arma3fun", false, true];
};