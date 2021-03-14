diag_log "Первое лицо в триггере работает";
[] spawn {
_unit = player; 
while {alive _unit} do { 
if (_unit inArea AtiraTrg && cameraOn == _unit && cameraView == "External" || _unit inArea AtiraTrg && cameraOn == vehicle _unit && cameraView == "External" || _unit inArea "RaidEllipse" && cameraOn == _unit && cameraView == "External" || _unit inArea "RaidEllipse" && cameraOn == vehicle _unit && cameraView == "External") then { 
          _unit switchCamera "INTERNAL"; 
          sleep 0.5; 
      }; 
  }; 
};