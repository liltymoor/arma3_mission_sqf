waitUntil {!isNull (finddisplay 12)}; ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler [
    "Draw",
    {
        params ["_ctrl"];

        switch (true) do { 
            case (player getVariable ["Defender", false] == true) : {
            {
            _ctrl drawIcon [
                getText (configFile >> "CfgVehicles" >> typeOf _x >> "icon"),
                [0.4,0,0.5,1], //[0.4,0,0.5,1] или [side _x] call BIS_fnc_sideColor,
                _x,
                24,
                24,
                getDir _x, 
                name _x, //Что написано в тексте
                false, //Тень
                0.05 //Размер текста
            ]} forEach (allPlayers select {_x getVariable ["Defender", false] == true;});};

            case (player getVariable ["Attacker", false] == true) : {
            {
            _ctrl drawIcon [
                getText (configFile >> "CfgVehicles" >> typeOf _x >> "icon"),
                [0.4,0,0.5,1], //[0.4,0,0.5,1] или [side _x] call BIS_fnc_sideColor,
                _x,
                24,
                24,
                getDir _x, 
                name _x, //Что написано в тексте
                false, //Тень
                0.05 //Размер текста
            ]} forEach (allPlayers select {_x getVariable ["Attacker", false] == true;});};

            default {
            {
            _ctrl drawIcon [
                getText (configFile >> "CfgVehicles" >> typeOf _x >> "icon"),
                [0.4,0,0.5,1], //[0.4,0,0.5,1] или [side _x] call BIS_fnc_sideColor,
                _x,
                24,
                24,
                getDir _x, 
                name _x, //Что написано в тексте
                false, //Тень
                0.05 //Размер текста
            ]} forEach (allPlayers select {(side group _x) == playerSide; _x getVariable ["Attacker", false] == false; _x getVariable ["Defender", false] == false;});};
        };
    } 
];

//forEach (allPlayers select {(side group _x) == playerSide; _x getVariable ["Defender", false] == false;});
//forEach (allPlayers select {(side group _x) == playerSide; _x getVariable ["Defender", false] == false;});
/*
waitUntil {!isNull (finddisplay 12)}; ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler [
    "Draw",
    {
        params ["_ctrl"];

        {
        switch (true) do { 
            case ((side group _x) == east) : {hint str "красный";}; 
            case ((side group _x) == west) : {            _ctrl drawIcon [
                getText (configFile >> "CfgVehicles" >> typeOf _x >> "icon"),
                [0.4,0,0.5,1], //[0.4,0,0.5,1] или [side _x] call BIS_fnc_sideColor,
                _x,
                24,
                24,
                getDir _x, 
                name _x, //Что написано в тексте
                false, //Тень
                0.05 //Размер текста
            ]}; 
            default {hint str "Дефолт";}; 
        };
        } forEach (allPlayers select {(side group _x) == playerSide; _x getVariable ["Defender", false] == false;});
    }
];

waitUntil {!isNull (finddisplay 12)}; ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler [
    "Draw",
    {
        params ["_ctrl"];

        {
        switch (true) do { 
            case (player getVariable ["Defender", false] == true) : {{_ctrl drawIcon [getText (configFile >> "CfgVehicles" >> typeOf _x >> "icon"),[0.4,0,0.5,1],_x,24,24,getDir _x, name _x,false,0.05] forEach (allPlayers select {_x getVariable ["Defender", false] == false;});}; 
            case (player getVariable ["Attacker", false] == true) : {hint "1" }; 
            default {hint str "дефолт";}; 
        };
        };
    }forEach allPlayers;
];

{
            _ctrl drawIcon [
                getText (configFile >> "CfgVehicles" >> typeOf _x >> "icon"),
                [0.4,0,0.5,1], //[0.4,0,0.5,1] или [side _x] call BIS_fnc_sideColor,
                _x,
                24,
                24,
                getDir _x, 
                name _x, //Что написано в тексте
                false, //Тень
                0.05 //Размер текста
            ]} forEach (allPlayers select {_x getVariable ["Defender", false] == false;});