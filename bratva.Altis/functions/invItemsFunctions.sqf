//Настройки энергосов
Freddy_fnc_redbull = {
_player = _this select 0;
_item = _this select 1;
[_player, _item] spawn {
private _delay = 6;
private _zero = 0;
if (_this select 0 getVariable ["Repair_inProgress", false]) then {hint "Вы уже что-то принимаете";} else {
[format ["<t color='#ffffff' size = '.7'>Вы пьете энергетик, для отмены удерживайте</t> <t color='#ff0000' size = '.7'>W</t>"],-1,0.85,3,0.3,0,789] spawn BIS_fnc_dynamicText;
//"Вы пьете энергетик, для отмены удерживайте W" remoteExec ["hint", _this select 0, true];
_this select 0 setVariable ["Repair_inProgress", true, true];
closeDialog 0;
inGameUISetEventHandler ["Action","hint 'Вы чем-то заняты'; true"];
        	switch (true) do {
        		case !(isNull objectParent (_this select 0)) : {};  
        		case (stance player == "STAND") : {[_this select 0, "dss_acts_drinksoda_erect"] remoteExec ["switchMove", 0, true];};
        		case (stance player == "CROUCH") : {[_this select 0, "dss_acts_drinksoda_crouch"] remoteExec ["switchMove", 0, true];};
        		case (stance player == "PRONE") : {[_this select 0, "dss_acts_drinksoda_crouch"] remoteExec ["switchMove", 0, true];};
        	};
(_this select 0) removeItem (_this select 1);
        if (alive (_this select 0)) then {
            while {(_delay > _zero) && lifeState (_this select 0) != "INCAPACITATED" && inputAction "MoveForward" != 1} do {
                _delay = _delay - 1; 
                sleep 1;
            };
        };
        if ((_delay <= _zero) && lifeState (_this select 0) != "INCAPACITATED") then {
        	if !(isNull objectParent (_this select 0)) then {};
        	switch (animationState (_this select 0)) do {  
        		case ("dss_acts_drinksoda_erect") : {[_this select 0, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        		case ("dss_acts_drinksoda_crouch") : {[_this select 0, "AmovPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        	};
        	_newDamage = (damage (_this select 0)) - 0.25;
            (_this select 0) setDamage _newDamage;
            (_this select 0) setVariable ["Repair_inProgress", false, true];
            inGameUISetEventHandler ["Action","false"];
} else {
			if !(isNull objectParent (_this select 0)) then {};
        	switch (animationState (_this select 0)) do {  
        		case ("dss_acts_drinksoda_erect") : {[_this select 0, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        		case ("dss_acts_drinksoda_crouch") : {[_this select 0, "AmovPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        	};
			(_this select 0) addItem (_this select 1);
            [format ["<t color='#ffffff' size = '.7'>Действие</t> <t color='#ff0000' size = '.7'>прервано</t>"],-1,0.85,3,0.3,0,789] spawn BIS_fnc_dynamicText;
            //"Действие отменено" remoteExec ["hint", _this select 0, true];
            (_this select 0) setVariable ["Repair_inProgress", false, true];
            inGameUISetEventHandler ["Action","false"];
            };
         };
       };
};

Freddy_fnc_Buffout = {
_player = _this select 0;
_item = _this select 1;
[_player, _item] spawn {
private _delay = 6;
private _zero = 0;
if (_this select 0 getVariable ["Repair_inProgress", false]) then {hint "Вы уже что-то принимаете";} else {
[format ["<t color='#ffffff' size = '.7'>Вы принимаете баффаут, для отмены удерживайте</t> <t color='#ff0000' size = '.7'>W</t>"],-1,0.85,3,0.3,0,789] spawn BIS_fnc_dynamicText;
//"Вы принимаете баффаут, для отмены удерживайте W" remoteExec ["hint", _this select 0, true];
_this select 0 setVariable ["Repair_inProgress", true, true];
closeDialog 0;
inGameUISetEventHandler ["Action","hint 'Вы чем-то заняты'; true"];
        	switch (true) do {
        		case !(isNull objectParent (_this select 0)) : {};  
        		case (stance player == "STAND") : {[_this select 0, "dss_acts_drinksoda_erect"] remoteExec ["switchMove", 0, true];};
        		case (stance player == "CROUCH") : {[_this select 0, "dss_acts_drinksoda_crouch"] remoteExec ["switchMove", 0, true];};
        		case (stance player == "PRONE") : {[_this select 0, "dss_acts_drinksoda_crouch"] remoteExec ["switchMove", 0, true];};
        	};
(_this select 0) removeItem (_this select 1);
        if (alive (_this select 0)) then {
            while {(_delay > _zero) && lifeState (_this select 0) != "INCAPACITATED" && inputAction "MoveForward" != 1} do {
                _delay = _delay - 1; 
                sleep 1;
            };
        };
        if ((_delay <= _zero) && lifeState (_this select 0) != "INCAPACITATED") then {
        	if !(isNull objectParent (_this select 0)) then {};
        	switch (animationState (_this select 0)) do {  
        		case ("dss_acts_drinksoda_erect") : {[_this select 0, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        		case ("dss_acts_drinksoda_crouch") : {[_this select 0, "AmovPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        	};
            (_this select 0) setVariable ["Repair_inProgress", false, true];
            inGameUISetEventHandler ["Action","false"];
            (_this select 0) setAnimSpeedCoef 1.3;
            sleep 90;
            (_this select 0) setAnimSpeedCoef 1;
} else {
			if !(isNull objectParent (_this select 0)) then {};
        	switch (animationState (_this select 0)) do {  
        		case ("dss_acts_drinksoda_erect") : {[_this select 0, "AmovPercMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        		case ("dss_acts_drinksoda_crouch") : {[_this select 0, "AmovPknlMstpSnonWnonDnon"] remoteExec ["switchMove", 0, true];};
        	};
			(_this select 0) addItem (_this select 1);
            [format ["<t color='#ffffff' size = '.7'>Действие</t> <t color='#ff0000' size = '.7'>прервано</t>"],-1,0.85,3,0.3,0,789] spawn BIS_fnc_dynamicText;
            //"Действие отменено" remoteExec ["hint", _this select 0, true];
            (_this select 0) setVariable ["Repair_inProgress", false, true];
            inGameUISetEventHandler ["Action","false"];
            };
         };
       };
};