
PENA_RAID_LOBBY_CHECKER = {
[] spawn  
 { 
  waitUntil {!isNull findDisplay 15000};  
  _playerData = []; 
  while {!isNull findDisplay 15000} do  
  {  
    { 
     _uid = getPlayerUID _x;  
         if (isPlayer _x && alive _x && getPlayerUID player != _uid && _playerData find _uid == -1) then  
         {  
          _index = lbAdd [15666, name _x];  
          _data = lbSetData [15666, _index, _uid];  
          lbSetTooltip [15666, _index, name _x];  
          _playerData pushBack _uid; 
        };  
    }forEach  allplayers; 
   sleep 2; 
  }; 
  _playerData = []; 
 };
};



PENA_SEND_INVITE = {
[]spawn {

waitUntil {!isNull findDisplay 15000};

_index = lbCurSel 15666; 
_target1 = lbdata [15666, _index] call BIS_fnc_getUnitByUID;
_nameSender = name player;

[parseText format ["<t size='1' color='#80ff80'>%1</t> приглашает вас в группу. <br></br><t>Нажмите [<t size='1' color='#80ff80'> U </t>], чтобы принять приглашение.</t>", _nameSender]]remoteExec["hint", _target1, false];
hint "Отправлено!";
};


};

PENA_CREATE_PARTY = {
[(_this # 0)]spawn {
  _idc = (_this # 0);
  squadPlayers = [];
  squadPlayers pushBack player;
  _playerData = []; 
   while {!isNull findDisplay 15000} do  
  {  
    { 
     _uid = getPlayerUID _x;  
         if (isPlayer _x && alive _x && getPlayerUID player != _uid && _playerData find _uid == -1) then  
         {  
          _index = lbAdd [15666, name _x];  
          _data = lbSetData [15666, _index, _uid];  
          lbSetTooltip [15666, _index, name _x];  
          _playerData pushBack _uid; 
        };  
    }forEach squadPlayers; 
   sleep 2; 
  };  
  _playerData = []; 
};
};