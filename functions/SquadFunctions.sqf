
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