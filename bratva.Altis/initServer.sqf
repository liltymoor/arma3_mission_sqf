diag_log "Инициализация скриптов выполнена";
	protocol = "PenaUpal";
	db_name = "PenaDB";
	_result = "Extdb3" callExtension format["9:ADD_DATABASE:%1",db_name];
	if (!(_result isEqualTo "[1]")) then {
  	diag_log "extDB3: Ошибка соединения с базой данных";
	};
	diag_log [_result];
	_result = "Extdb3" callExtension format["9:ADD_DATABASE_PROTOCOL:%1:SQL:%2:TEXT",db_name,protocol];
	if (!(_result isEqualTo "[1]")) then {
  	diag_log "extDB3: Ошибка соединения с базой данных";
	};
	diag_log [_result];


/*
'########::'########:::'#######::'########:'####:'##:::::::'########:
 ##.... ##: ##.... ##:'##.... ##: ##.....::. ##:: ##::::::: ##.....::
 ##:::: ##: ##:::: ##: ##:::: ##: ##:::::::: ##:: ##::::::: ##:::::::
 ########:: ########:: ##:::: ##: ######:::: ##:: ##::::::: ######:::
 ##.....::: ##.. ##::: ##:::: ##: ##...::::: ##:: ##::::::: ##...::::
 ##:::::::: ##::. ##:: ##:::: ##: ##:::::::: ##:: ##::::::: ##:::::::
 ##:::::::: ##:::. ##:. #######:: ##:::::::'####: ########: ########:
..:::::::::..:::::..:::.......:::..::::::::....::........::........::
*/

	PENA_LOAD_STATS = {
	
		_result  =  ("extDB3" callExtension format ["0:PenaUpal:SELECT NAME, KILL_STAT FROM `PlayerStats`"]);    
		_result = (_result splitString ",][");    
		_result deleteAt 0; 
		_player = (_this # 0);  
  
	   	_sortedPl = [];

		_counter = -1;   
		_size = count _result;   
		_playersArray = [];   
		   
		   
		for "_i" from 0 to _size do {    
		_counter = _counter + 1;   
		if (_counter == 2) then {   
		_sortedPl pushBack _playersArray;   
		_playersArray = [];   
		_counter = 0;   
		   
		};   
		_playersArray pushBack _result # _i;   
		};

		_result1  = "extDB3" callExtension format ["0:PenaUpal:SELECT KILL_STAT FROM `PlayerStats` WHERE UID=""%1""", getPlayerUID _player];
		_result1 = (_result1 splitString ",][");
		_result1 deleteAt 0; 
		_result1 = parseNumber(_result1 # 0);

		_kills = _result1;


		_result2 = "extDB3" callExtension format ["0:PenaUpal:SELECT SCORE FROM `PlayerStats` WHERE UID=""%1""", getPlayerUID _player];
		_result2 = (_result2 splitString ",][");
		_result2 deleteAt 0; 
		_result2 = parseNumber(_result2 # 0);

		_score = _result2;
		
		[_sortedPl, _kills, _score]remoteExecCall["PENA_SORTED_PLAYER", _player , false];

	};


	PENA_DB_EnmKilled = {
	_killer = (_this # 0);
	_UID = getPlayerUID _killer;
	_result  = "extDB3" callExtension format ["0:PenaUpal:SELECT KILL_STAT FROM `PlayerStats` WHERE UID=""%1""", getPlayerUID _killer];
	_result = (_result splitString ",][");
	_result deleteAt 0; 
	_result = parseNumber(_result # 0);
	_result = _result + 1;
	"extDB3" callExtension format["0:PenaUpal:UPDATE PlayerStats SET KILL_STAT='%1' WHERE UID='%2'", _result, _UID];
};



// фреди сыночек дуры 
	PENA_DB_CHECK = {
	_UID = (_this select 0);
	_name = (_this select 1);

	diag_log "Подключился новый чел";
	diag_log [_UID, _name];

	_result  = "extDB3" callExtension format ["0:PenaUpal:SELECT UID FROM `Player` WHERE UID=""%1""",_UID];

	_array = _result splitString ",][";
	 diag_log [_array select 1];

	if (isNil {_array select 1}) then {

	//Создание бд для нового чубрека	
	diag_log "Новый пользователь";

	_result = "extDB3" callExtension format["0:PenaUpal:USE PenaDB"]; 

	_Money = 0; 
	_UID = (_this select 0); 
	_name = (_this select 1);
	_unit = (_this select 3);
	private _gear = []; 
	protocol = "PenaUpal"; 
	db_name = "PenaDB";
	_currentTime = systemTime;
	_title = "";

	//Создание начальных бд
	"extDB3" callExtension format["0:PenaUpal:INSERT INTO Player (UID, NAME, MONEY, FIRST_CON, LAST_CON, TITLE) VALUES (""%1"",""%2"", ""%3"", ""%4"", ""%4"", ""%5"")", _UID, _name, _Money, _currentTime, _title]; //Player

	"extDB3" callExtension format["0:PenaUpal:INSERT INTO PlayerGear (UID, GearOpfor, GearBlufor, GearIndependent) VALUES ('%1','%2','%2','%2')", _UID,  _gear]; //PlayerGear

	"extDB3" callExtension format["0:PenaUpal:INSERT INTO PlayerGarage (UID) VALUES ('%1')", _UID]; //PlayerGarage

	"extDB3" callExtension format["0:PenaUpal:INSERT INTO PlayerStats (UID, NAME, KILL_STAT, SPONSOR_LVL, SCORE) VALUES ('%1', '%2', '%3', '%4', '%5')", _UID, _name, 0, 1, 0]; //PlayerStats



	diag_log "Создание тк бд нет";
	diag_log [_result];

	} else {
	//Обновление бд для старого чубрека



	diag_log "Старый пользователь";
	_time = systemTime;
	_result = "extDB3" callExtension format["0:PenaUpal:UPDATE Player SET NAME=""%1"", LAST_CON=""%2"" WHERE UID=""%3""", _name, _time, _UID]; 
	diag_log "Обновление так как бд есть";
	diag_log [_result];
	};


	};

		PENA_DB_LOADMONEY = {
	diag_log "Ало прием это подгрузка бабла";
	_UID = (_this select 0);
	_player = (_this select 1);

	_result  = "extDB3" callExtension format ["0:PenaUpal:SELECT MONEY FROM `Player` WHERE UID=""%1""",_UID];

	_array = _result splitString ",][";
	MoneyPlayer = _array select 1;
	 diag_log [MoneyPlayer];

	[MoneyPlayer] remoteExec ["PENA_MONEY_FROM_SERVER", _player, false];

	MoneyPlayer;
	};


	PENA_DB_SAVERATING = {
	_player = (_this select 0);
	_rating = (_this select 1);

	_result  = "extDB3" callExtension format ["0:PenaUpal:SELECT SCORE FROM `PlayerStats` WHERE UID=""%1""", getPlayerUID _player];
	_result = (_result splitString ",][");
	_result deleteAt 0;
	_result = parseNumber(_result # 0);
	_result = _result + _rating;
	

	_void = "extDB3" callExtension format["0:PenaUpal:UPDATE PlayerStats SET SCORE=""%1"" WHERE UID=""%2""", _result , getPlayerUID _player];
	[_result] remoteExec ["PENA_LOAD_RatingClient", _player, false];
};

	PENA_DB_SAVEMONEY = {

	_Money = (_this select 0);
	_UID = (_this select 1);
	_player = (_this select 2);
	diag_log ("Игроку " + str _UID  + "было зачислено: " + str _Money + " за убийство.");
	_CurrentMoney = [_UID, _player]call PENA_DB_LOADMONEY;
	_CurrentMoney = (parseNumber _CurrentMoney) + _Money;
	_result = "extDB3" callExtension format["0:PenaUpal:UPDATE Player SET MONEY=""%1"" WHERE UID=""%2""", _CurrentMoney, _UID]; 
	};

PENA_SAVE_GEAR_FNC = {
    diag_log "Сохранение снаряжения (2/2 - Сервер)";

    params [
        ['_netId', '', ['']]
    ];

    private _unit           =     objectFromNetId _netId;
    private _uid            =     getPlayerUID _unit;
    private _gear           =     getUnitLoadout _unit;
    private _playerSide     =     side _unit;

    diag_log format ['%1', _playerSide];
    _space = "[]";

    switch (_playerSide) do {
        case EAST: 
        {
            "extDB3" callExtension format ["0:PenaUpal:UPDATE PlayerGear SET GearOpfor='%1' WHERE UID='%2'",_space, _uid];
            "extDB3" callExtension format ["0:PenaUpal:UPDATE PlayerGear SET GearOpfor='%1' WHERE UID='%2'",_gear, _uid];
        };
        case WEST: 
        {
            "extDB3" callExtension format["0:PenaUpal:UPDATE PlayerGear SET GearBlufor='%1' WHERE UID='%2'", _space, _uid];
            "extDB3" callExtension format["0:PenaUpal:UPDATE PlayerGear SET GearBlufor='%1' WHERE UID='%2'", _gear, _uid];
        };
        case independent: 
        {
            "extDB3" callExtension format["0:PenaUpal:UPDATE PlayerGear SET GearIndependent='%1' WHERE UID='%2'", _space, _uid];
            "extDB3" callExtension format["0:PenaUpal:UPDATE PlayerGear SET GearIndependent='%1' WHERE UID='%2'", _gear, _uid];
        };
    };
};


PENA_TITLE_SAVE = {
	_title = (_this # 0);
	_player = (_this # 1);

	"extDB3" callExtension format["0:PenaUpal:UPDATE Player SET TITLE=""%1"" WHERE UID=""%2""", _title, getPlayerUID _player]; 
};

PENA_PROFILE_LOAD = {
	_player = (_this # 0);

	_title  = "extDB3" callExtension format ["0:PenaUpal:SELECT TITLE FROM `Player` WHERE UID=""%1""", getPlayerUID _player];
	_title = (_title splitString ",][");
	_title deleteAt 0; 

	_sponsorLVL = "extDB3" callExtension format ["0:PenaUpal:SELECT SPONSOR_LVL FROM `PlayerStats` WHERE UID=""%1""", getPlayerUID _player];
	_sponsorLVL = (_sponsorLVL splitString ",][");
	_sponsorLVL deleteAt 0; 

	_playerRank = "extDB3" callExtension format ["0:PenaUpal:SELECT SCORE FROM `PlayerStats` WHERE UID=""%1""", getPlayerUID _player];
	_playerRank = (_playerRank splitString ",][");
	_playerRank deleteAt 0; 

	[_title # 0, _sponsorLVL # 0, _playerRank # 0]remoteExecCall["PENA_GET_PROFILE", _player, false];
};


PENA_LOAD_GEAR_FNCS = {
  params [
        ['_netId', '', ['']]
    ];

    if (_netId isEqualTo '') exitWith {};
    _unit = objectFromNetId _netId;
    if (isNull _unit) exitWith {};

    _uid   =   getPlayerUID _unit;
    _side = side _unit;

    _result = nil; 

    switch (_side) do {
        case EAST: 
        {
            _result  = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT GearOpfor FROM PlayerGear WHERE UID='%1'",_uid]);//OPFOR
        };
        case WEST: 
        {
           	_result  = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT GearBlufor FROM PlayerGear WHERE UID='%1'",_uid]);//BLUFOR
        };
        case independent: 
        {
            _result  = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT GearIndependent FROM PlayerGear WHERE UID='%1'",_uid]); //INDEPENDENT
        };
    };

    if (_result # 1 isEqualType []) then {

        [_result # 1 # 0 # 0,
        {
            player setUnitLoadout _this;
            hint 'Вы получили снаряжение';
        }] remoteExecCall ['call', remoteExecutedOwner];

    } else {
        {
        hint 'Конфигурации снаряжения не найдено';
        } remoteExecCall ['call', remoteExecutedOwner];
    };
};

PENA_SHOP_TRANSACTION = { //Покупка техники -бабки + спавн
	_player = (_this select 0);
	_UID = (_this select 1);
	_VehCost = (_this select 2);
	_index = (_this select 3);
 	_vehicle = (_this select 4);

 	_trg = ["CreateArmoredVehMazi", "CreateArmoredVehSelicano", "CreateArmoredVehMolos"];
	_nearestTrg = [_trg, _player] call BIS_fnc_nearestPosition;
	_entitiesArray = (getMarkerPos _nearestTrg) nearEntities [["Landvehicle", "Air"], 10];

	if ((_player getVariable "CouldntBuy") != true) exitWith {"Подождите немного" remoteExec ["hint", _player, false];};
	[_player,["CouldntBuy", false, false]] remoteExec ["setVariable", _player, false];
	if (count (_entitiesArray)!=0) exitWith {"Место занято" remoteExec ["hint", _player, false];}; 

	_CurrentMoney = [_UID, _player]call PENA_DB_LOADMONEY;
	_curMoneyNumber = parseNumber _CurrentMoney;

	if (_curMoneyNumber < _VehCost) then {
		"У вас недостаточно денег" remoteExec ["hint", _player, false];
	} else {
	_curMoneyNumber = _curMoneyNumber - _VehCost;
	_result = "extDB3" callExtension format["0:PenaUpal:UPDATE Player SET MONEY=""%1"" WHERE UID=""%2""", _curMoneyNumber, _UID]; 
	[_UID, _player] remoteExec ["PENA_DB_LOADMONEY", 2 , false];
	[_index, _vehicle] remoteExec ["FNC_GOVNO", _player , false];
	};
};

//заносим поставленную технику в гараж
	PENA_DB_BUY_ARMORED_VEH = {

	_veh = (_this select 0);
	_UID = (_this select 1);

	_lifes = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT %1 FROM PlayerGarage WHERE UID='%2'",_veh, _UID]);
	_lifes = _lifes # 1 # 0 # 0;
	_lifes = _lifes + 1;
	_result = "extDB3" callExtension format["0:PenaUpal:UPDATE PlayerGarage SET %1=""%2"" WHERE UID=""%3""", _veh, _lifes, _UID];
	
	diag_log ("Ставим технику " + getText (configFile >> "CfgVehicles" >> _veh >> "displayname") + " в гараж");
	diag_log ("Результат занесения в бд" + _result);
};


	PENA_DB_LOADLIFES_FNC = {

	_player = (_this select 0);
	_UID = (_this select 1);

	//_vehLifes = [_player, _UID] call PENA_DB_LOADVEH_FROM_DB;



    _lifes = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT I_MBT_03_cannon_F, O_MBT_04_command_F, O_MBT_02_cannon_F, B_MBT_01_TUSK_F, I_APC_Wheeled_03_cannon_F, O_APC_Tracked_02_AA_F, B_APC_Tracked_01_AA_F, O_Heli_Light_02_F, O_Heli_Attack_02_F, B_Heli_Attack_01_F FROM PlayerGarage WHERE UID='%1'",_uid]); 
    _lifes = _lifes # 1 # 0; 

	diag_log [_lifes];
	diag_log "Подгрузка жизней на серваке выполнена!";

	[_lifes] remoteExec ["PENA_CALLBACK_LIFES_FNC", _player, false];

};

	PENA_DB_LOAD_ARMORED_VEH = {


	_player = (_this select 0);
	_UID = (_this select 1);

	_Lifes = [];
	//Земля
	_dbLifes = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT I_MBT_03_cannon_F, O_MBT_04_command_F, O_MBT_02_cannon_F, B_MBT_01_TUSK_F, I_APC_Wheeled_03_cannon_F, O_APC_Tracked_02_AA_F, B_APC_Tracked_01_AA_F FROM PlayerGarage WHERE UID='%1'",_uid]); 
	_dbLifes = _dbLifes # 1 # 0; 
	for "_i" from 0 to 6 do {
		if (_dbLifes # _i != 0) then {
			switch (_i) do { 
				case 0 : { _Lifes = _Lifes + ["I_MBT_03_cannon_F"]}; //Кума
				case 1 : {  _Lifes = _Lifes + ["O_MBT_04_command_F"] }; //Angara
				case 2 : { _Lifes = _Lifes + ["O_MBT_02_cannon_F"] }; //Varsuk
				case 3 : {  _Lifes = _Lifes + ["B_MBT_01_TUSK_F"] }; //Slammer
				case 4 : { _Lifes = _Lifes + ["I_APC_Wheeled_03_cannon_F"] }; //Gorgone
				case 5 : { _Lifes = _Lifes + ["O_APC_Tracked_02_AA_F"] }; //Tigris
				case 6 : {  _Lifes = _Lifes + ["B_APC_Tracked_01_AA_F"] }; //Cheetah
			};

		};


	};


	[_Lifes] remoteExec ["FREDDT_FNC_HEAVYVEHARRAY", _player, false];
	diag_log "Я наземный транспорт и я... вроде... работаю";
	diag_log _Lifes;
};


PENA_DB_LOAD_HELI = {


	_player = (_this select 0);
	_UID = (_this select 1);

	_Lifes = [];
	//Земля
	_dbLifes = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT I_MBT_03_cannon_F, O_MBT_04_command_F, O_MBT_02_cannon_F, B_MBT_01_TUSK_F, I_APC_Wheeled_03_cannon_F, O_APC_Tracked_02_AA_F, B_APC_Tracked_01_AA_F, O_Heli_Light_02_F, O_Heli_Attack_02_F, B_Heli_Attack_01_F FROM PlayerGarage WHERE UID='%1'",_uid]); 
	_dbLifes = _dbLifes # 1 # 0; 
	for "_i" from 7 to 10 do {
		if (_dbLifes # _i != 0) then {
			switch (_i) do { 
				case 7 : {  _Lifes = _Lifes + ["O_Heli_Light_02_F"] }; //Orca
				case 8 : {  _Lifes = _Lifes + ["O_Heli_Attack_02_F"] }; //Kajman
				case 9 : {  _Lifes = _Lifes + ["B_Heli_Attack_01_F"] }; //Bf
			};

		};


	};


	[_Lifes] remoteExec ["FREDDY_FNC_HELIARRAY", _player, false];
	diag_log "Я наземный воздушный и я... вроде... работаю";
	diag_log _Lifes;
};



	PENA_DB_PAYLIFE_FNC = {

	_player = (_this select 0);
	_UID = (_this select 1);
	_veh = (_this select 2);

	diag_log [systemTime];
	diag_log "Сервер PAYLIFE работает...";
	diag_log "UID:";
	diag_log [_UID];
	diag_log [name _player];
	diag_log [_veh];

	_lifes = parseSimpleArray ("extDB3" callExtension format ["0:PenaUpal:SELECT %1 FROM PlayerGarage WHERE UID='%2'",_veh, _UID]);
	_lifes = _lifes # 1 # 0 # 0;
	_lifes = _lifes - 1;

	"extDB3" callExtension format["0:PenaUpal:UPDATE PlayerGarage SET %1=""%2"" WHERE UID=""%3""", _veh, _lifes, _UID];
};

Freddy_fnc_delvehServer = {
_entitiesArray = (_this select 0);
_vehName = (_this select 1);
_UID = (_this select 2);
_zaloopa1 = (_this select 3);
_player = (_this select 4);
_text = parsetext format ["Вы поставили <t size='1' color='#80ff80'>%1</t> в гараж", _vehName];
if (_player getVariable ["CouldntStore", true]) then {
	[_player,["CouldntStore", false, false]] remoteExec ["setVariable", _player, false];
  switch (true) do {
  case (_zaloopa1 isKindOf "I_MBT_03_cannon_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Кума
  case (_zaloopa1 isKindOf "O_MBT_04_command_F") : {deleteVehicle _entitiesArray;[[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Ангара
  case (_zaloopa1 isKindOf "O_MBT_02_cannon_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Варсук
  case (_zaloopa1 isKindOf "B_MBT_01_TUSK_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Сламмер
  case (_zaloopa1 isKindOf "I_APC_Wheeled_03_cannon_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Горгона
  case (_zaloopa1 isKindOf "O_APC_Tracked_02_AA_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Тигрис
  case (_zaloopa1 isKindOf "B_APC_Tracked_01_AA_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Читаха
  case (_zaloopa1 isKindOf "O_Heli_Light_02_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Орка
  case (_zaloopa1 isKindOf "O_Heli_Attack_02_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Кайман
  case (_zaloopa1 isKindOf "B_Heli_Attack_01_F") : {deleteVehicle _entitiesArray; [[_text], "hint",_player,false,true] call BIS_fnc_MP;[_zaloopa1, _UID]remoteExec["PENA_DB_BUY_ARMORED_VEH", 2 , false];};//Бфка
  default {"Рядом нет техники, которую можно поставить" remoteExec ["hint", _player , false];};
      };	
	};
};

addMissionEventHandler ["EntityKilled", { 
 params ["_unit", "_killer", "_instigator", "_useEffects"];
  	if (_killer in (crew _unit)) exitWith {};
    	if (side group (driver _unit) == side group _killer) exitWith {};
    	if (side group (commander _unit) == side group _killer) exitWith {};
    	if (side group (gunner _unit) == side group _killer) exitWith {};
    	"Я работаю" remoteExec ["diag_log", 2 ,false];
    	[_unit] remoteExec ["diag_log", 2 ,false];
    	[_killer] remoteExec ["diag_log", 2 ,false];
    	[_instigator] remoteExec ["diag_log", 2 ,false];
    switch (true) do {
      case (_unit isKindOf "I_MBT_03_cannon_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "O_MBT_04_command_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "O_MBT_02_cannon_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "B_MBT_01_cannon_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "I_APC_Wheeled_03_cannon_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "O_APC_Tracked_02_AA_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "B_APC_Tracked_01_AA_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "O_Heli_Light_02_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "O_Heli_Attack_02_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      case (_unit isKindOf "B_Heli_Attack_01_F") : {{[]remoteExec ["FREDDY_FNC_GETRANDOM_MNY_VEH", _x , false]} forEach crew vehicle _killer};
      default {};
      };
}];

//Удаление трупов при выходе с сервера
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	deleteVehicle _unit;
}];

call compile preprocessFileLineNumbers "scripts\BattleZone.sqf";
call compile preprocessFileLineNumbers "scripts\CleanUp.sqf";