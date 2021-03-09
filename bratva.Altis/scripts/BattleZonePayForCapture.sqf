    diag_log "Запускаю нагрду BattleZone";
[] spawn {
_unit = player;
_zero = 0;
while {alive _unit} do {
if (_unit inArea PayC) then {
	while {_unit inArea PayC && lifeState _unit != "INCAPACITATED" && alive _unit} do {
	  _zero = _zero + 1;
	  sleep 1;
	  //systemChat str _zero;
	  if (_zero == 20) then {_zero = 0; call FREDDY_FNC_GETRANDOM_MNYCAPTUREZONE;};
	};
} else {
_zero = 0;
waitUntil {_unit inArea PayC; lifeState _unit != "INCAPACITATED";};
		};
	};
};