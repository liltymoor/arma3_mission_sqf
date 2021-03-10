//Удаление трупов
player addEventHandler ["Respawn",{ 
  params ["_unit", "_corpse"];

  deleteVehicle _corpse;
}];

player addEventHandler ["Killed", {
  params ["_unit", "_killer", "_instigator", "_useEffects"];
  
  if !(isNull objectParent _unit) then {moveOut _unit;};
}];