PENA_MSG_SHOW = {
 controlNum  = controlNum  + 1;
{
disableSerialization;
 _ctrl = (findDisplay 46) displayCtrl _x; 
 _pos = ctrlPosition _ctrl; 
 _pos set [1, (_pos select 1) + 0.04]; 
 _ctrl ctrlSetPosition _pos; 
 _ctrl ctrlCommit 0.25; 
}forEach activeControls; 
_message = HALs_ticker_killfeed # 0;
        _display = findDisplay 46;
        _ctrl = _display ctrlCreate ["RscStructuredText", controlNum];
        _ctrl ctrlSetPosition [0, 0.7, 1, 1];
        _ctrl ctrlSetStructuredText parseText _message;
        _ctrl ctrlCommit 0;
        _ctrl ctrlSetFade 1;
        _ctrl ctrlCommit 10;

activeControls pushBack controlNum;
};

FREDDY_FNC_GETRANDOM_MNYINCAP = {
  _UID = getPlayerUID player;
  _player = player;
  _killer = (_this select 0);
  _randomMoney = [random[500, 500, 500], 0] call BIS_fnc_cutDecimals;
  _randomRating = [random[15, 15, 15], 0] call BIS_fnc_cutDecimals;

HALs_ticker_killfeed pushBack format [format ["<t color='#ffffff' align='center' shadow='2' size = '1.2'>ПРОТИВНИК ВЫВЕДЕН ИЗ СТРОЯ</t> <t color='#80ff80' align='center' shadow='2' size = '1.2'> +%1$</t> <t color='#ffff00' align='center' shadow='2' size = '1'> +%2R</t>", _randomMoney, _randomRating]];
[_randomMoney, _UID, _player]remoteExec["PENA_DB_SAVEMONEY", 2, false];
[_player, _randomRating]remoteExec["PENA_DB_SAVERATING" , 2 , false];
};

FREDDY_FNC_GETRANDOM_MNY = {
  _UID = getPlayerUID player;
  _player = player;
  _randomMoney = [random[500, 1000, 2000], 0] call BIS_fnc_cutDecimals;


  HALs_ticker_killfeed pushBack format [format ["<t color='#ffffff' align='center' shadow='2' size = '1.2'>ПРОТИВНИК УБИТ</t> <t color='#80ff80' align='center' shadow='2' size = '1.2'> +%1$</t>", _randomMoney]];
  [_randomMoney, _UID, _player]remoteExec["PENA_DB_SAVEMONEY", 2, false];
};

FREDDY_FNC_GETRANDOM_MNYCAPTUREZONE = {
  _UID = getPlayerUID player;
  _player = player;
  _randomMoney = [random[250, 250, 250], 0] call BIS_fnc_cutDecimals;

  HALs_ticker_killfeed pushBack format [format ["<t color='#ffffff' align='center' shadow='2' size = '1.2'>НАГРАДА ЗА УДЕРЖАНИЕ ЗОНЫ</t> <t color='#80ff80' align='center' shadow='2' size = '1.2'> +%1$</t>", _randomMoney]]; 
  [_randomMoney, _UID, _player]remoteExec["PENA_DB_SAVEMONEY", 2, false];
};

FREDDY_FNC_GETRANDOM_MNY_VEH = {
  _UID = getPlayerUID player;
  _player = player;
  _randomMoney = (_this # 0);
  _randomRating = [random[50, 50, 50], 0] call BIS_fnc_cutDecimals;
  
HALs_ticker_killfeed pushBack format [format ["<t color='#ffffff' align='center' shadow='2' size = '1.2'>ТЕХНИКА УНИЧТОЖЕНА</t> <t color='#80ff80' align='center' shadow='2' size = '1.2'> +%1$</t> <t color='#ffff00' align='center' shadow='2' size = '1'> +%2R</t>", _randomMoney, _randomRating]];
[_randomMoney, _UID, _player]remoteExec["PENA_DB_SAVEMONEY", 2, false];
[_player, _randomRating]remoteExec["PENA_DB_SAVERATING" , 2 , false];
};

FREDDY_FNC_GETRANDOM_MNYRAIDWIN = {
  _UID = getPlayerUID player;
  _player = player;
  
  _randomMoney = [random[30000, 30000, 30000], 0] call BIS_fnc_cutDecimals;
  _randomRating = [random[150, 150, 150], 0] call BIS_fnc_cutDecimals;

HALs_ticker_killfeed pushBack format [format ["<t color='#ffffff' align='center' shadow='2' size = '1.2'>ПОБЕДА В РЕЙДЕ</t> <t color='#80ff80' align='center' shadow='2' size = '1.2'> +%1$</t> <t color='#ffff00' align='center' shadow='2' size = '1'> +%2R</t>", _randomMoney, _randomRating]];
[_randomMoney, _UID, _player]remoteExec["PENA_DB_SAVEMONEY", 2, false];
[_player, _randomRating]remoteExec["PENA_DB_SAVERATING" , 2 , false];
};