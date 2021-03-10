waitUntil {!isNull (finddisplay 12)}; ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler [
    "Draw",
    {
        params ["_ctrl"];

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
            ]
        } forEach (allPlayers select {(side group _x) == playerSide; });
    }
];