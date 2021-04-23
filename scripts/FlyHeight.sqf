[] spawn {
while {alive player} do {
if ((vehicle player) isKindOf "Air" && (getPos (vehicle player) # 2) >= 1500) then {
for "_i" from 1 to 15 do {

//systemChat str _i;
["introLayer", ["<t size='2'>Вы находитесь слишком высоко</t>", "PLAIN", 0.5, false, true]] remoteExec ["cutText", player, false];
if ((vehicle player) isKindOf "Air" && (getPos (vehicle player) # 2) < 1500) exitWith {}; 
sleep 1;    
    };
if ((vehicle player) isKindOf "Air" && (getPos (vehicle player) # 2) >= 1500) then {(vehicle player) setDammage 1;};
};
//systemChat str "ожидание";
waitUntil {(vehicle player) isKindOf "Air" && (getPos (vehicle player) # 2) >= 1500};
    };
};