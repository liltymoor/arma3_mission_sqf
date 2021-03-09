_clientID = (_this select 0);
_UID = (_this select 1);
_name = (_this select 2);
_ConTime = systemData;

_inidbi = ["new", _UID] call OO_INIDBI;

["write" , ["PlayerInformation", "Name", _name]] call _inidbi;
["write" , ["PlayerInformation", "SteamID", _UID]] call _inidbi;
["write" , ["PlayerInformation", "Last Connection", _ConTime]] call _inidbi;