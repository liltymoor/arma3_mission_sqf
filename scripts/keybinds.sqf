waitUntil {!(isNull (findDisplay 46))};
(findDisplay 46) displaySetEventHandler ["KeyDown", "_this call KeyPressScr"];

KeyPressScr = {
	_key = _this select 1;
	_unit = player;
//Респавн в агонии
	if(_key == 37 && lifeState player == "Incapacitated" && player getVariable ["CouldDie", false]) then {_unit setVariable ["CouldDie", false, true]; player setDamage 1;hintSilent "";}; //K

//Открыть планшет
	if(_key == 21 && lifeState player != "Incapacitated") then {createDialog "Tablet";}; //Y

//Принять приглашение
	if(_key == 22) then { if ((player getVariable ["PendingInvite", false]) == true) then {
		[player] joinSilent	group sender;
		player setVariable ["groupState", true, true];
		player setVariable ["PendingInvite", false, true];
		hint parseText format ["Вы вошли в группу [ <t size='1' color='#80ff80'>%1</t> ]!", str (group player)];

		sender = nil;
	};
	}; //U	

//Взаимодействие с выведенными из строя игроками
	if(_key == 219 && cursorObject isKindOf 'CAManBase' && player distance cursorObject <= 5 && lifeState cursorObject == "Incapacitated" && lifeState player != "Incapacitated" || _key == 220 && cursorObject isKindOf 'CAManBase' && player distance cursorObject <= 5 && lifeState cursorObject == "Incapacitated" && lifeState player != "Incapacitated") then {createDialog "InteractionPlayerMenu";}; //Winkey

//Взаимодействие с машинами
	if(_key == 219 && cursorObject isKindOf 'landvehicle' && player distance cursorObject <= 5 && (getDammage cursorObject) <= 0.99 && lifeState player != "Incapacitated"|| _key == 220 && cursorObject isKindOf 'landvehicle' && player distance cursorObject <= 5 && (getDammage cursorObject) <= 0.99 && lifeState player != "Incapacitated" || _key == 219 && cursorObject isKindOf 'AIR' && player distance cursorObject <= 5 && (getDammage cursorObject) <= 0.99 && lifeState player != "Incapacitated"|| _key == 220 && cursorObject isKindOf 'AIR' && player distance cursorObject <= 5 && (getDammage cursorObject) <= 0.99 && lifeState player != "Incapacitated") then {createDialog "VehInteraction";}; //Winkey
};


