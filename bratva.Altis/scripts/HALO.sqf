GF_Eject = {
	
	unassignvehicle _this;
	moveOut _this;
	
	private _data = [backpack _this,backpackitems _this];
    removeBackpack _this;
	_this addBackPack "B_parachute";	
	

	cutText ["", "BLACK FADED",999];
	[_this]spawn{
		private "_unit";
		_unit = _this select 0;
		uisleep 0.5;
		cutText ["", "BLACK IN", 3];
	};
	
	waitUntil {animationState _this == "para_pilot"};
	[_this,_data] spawn {
	private ["_unit","_data"];
	_unit = _this select 0;
	_data = _this select 1;
	waitUntil {uisleep 1; isTouchingGround _unit or (position _unit select 2) < 1 };
	uisleep 1;
	removeBackpack _unit;
	_unit addbackpack (_data select 0);
	{_unit additemtobackpack _x;} foreach (_data select 1);
	};
};

player addAction ["<t size='1.2' font='RobotoCondensedBold' color='#FF9933'>Десантирование</t><br/><img size='4' image='\a3\ui_f\data\gui\cfg\CommunicationMenu\supplydrop_ca.paa'/>", "player call GF_Eject", [], -1, false, false, "", "(vehicle player) isKindOf 'AIR' && {(position (vehicle player) select 2) > 100}"];