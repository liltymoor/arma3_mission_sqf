    diag_log "Запускаю BattleZone";
    _prevPos = "";
    [_prevPos] spawn {
    _prevPos = (_this select 0);
    while {true} do {  
    _pos  = ["Combat1", "Combat2", "Combat3", "Combat4", "Combat5", "Combat6"] call BIS_fnc_selectRandom;
    if (_pos != _prevPos) then { 
   //	diag_log "Пред. поз.";
   //   diag_log [_prevPos];
   //	diag_log "Поз.";
   //   diag_log [_pos];
    "CombatMrk" setMarkerPos (getMarkerPos _pos); 
    CombatTrg setPos (getMarkerPos "CombatMrk");
    taskmrk setPos (getMarkerPos "CombatMrk");
    AtiraTrg setPos (getMarkerPos "CombatMrk");
    PayC setPos (getMarkerPos "CombatMrk");
    _prevPos = _pos;
    sleep 900;
			};
		}; 
    };