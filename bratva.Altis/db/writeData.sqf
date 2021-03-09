_UID = (_this select 0);
_loadout = (_this select 1);

_inidbi = ["new", _UID] call OO_INIDBI;

["write" , ["PlayerLoadout", "SteamID", _UID]] call _inidbi;
["write" , ["PlayerLoadout", "Gear", _loadout]] call _inidbi;