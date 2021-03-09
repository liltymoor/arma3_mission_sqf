call{0 spawn {
	waitUntil {!isNull(findDisplay 46)};

	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		if(_this select 1 == 207) then {
			_earplugsctrl = (_this select 0) displayCtrl 9001;
			if(isNull(_earplugsctrl)) then {
				_earplugsctrl = (_this select 0) ctrlCreate ["RscText", 9001];
				_earplugsctrl ctrlSetPosition [SafeZoneXAbs, SafeZoneY + (SafeZoneH - 0.05) / 2, 0.2, 0.03];
				_earplugsctrl ctrlSetFontHeight 0.03;
				_earplugsctrl ctrlSetText "Earplugs";
				_earplugsctrl ctrlShow false;
				_earplugsctrl ctrlCommit 0;
			};
			_shown = ctrlShown _earplugsctrl;
			0.1 fadeSound (if(_shown)then{1}else{0.1});
			_earplugsctrl ctrlShow !_shown;
		};
	}];
};};