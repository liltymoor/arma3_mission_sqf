groupIndex = [];


PENA_RAID_LOBBY_CHECKER = {
[] spawn  
 { 
  waitUntil {!isNull findDisplay 15000};  
  _playerData = []; 
  while {!isNull findDisplay 15000} do  
  {  
    { 
     _uid = getPlayerUID _x;  
         if (isPlayer _x && alive _x && getPlayerUID player != _uid && _playerData find _uid == -1 && !isNull group _x) then  
         {  
          _index = lbAdd [15666, name _x];  
          _data = lbSetData [15666, _index, _uid];  
          lbSetTooltip [15666, _index, name _x];  
          _playerData pushBack _uid; 
        };  
    }forEach allplayers; 
   sleep 2; 
  }; 
  _playerData = []; 
 };
};


PENA_SEND_INVITE = {
[]spawn {


waitUntil {!isNull findDisplay 16000};

if ((player getVariable ["groupState", false]) == false) then {
  hint "Чтобы пригласить кого-либо - создайте группу";
} else { 
  _index = lbCurSel 16666; 
  _target1 = lbdata [16666, _index] call BIS_fnc_getUnitByUID;
  if ((_target1 getVariable ["PendingInvite", false]) == false && (_target1 getVariable ["groupState", false]) != true) then {
  _nameSender = name player;
  [player]remoteExec["PENA_Group_Handler", _target1, false];
  [parseText format ["<t size='1' color='#80ff80'>%1</t> приглашает вас в группу. <br></br><t>Нажмите [<t size='1' color='#80ff80'> U </t>], чтобы принять приглашение. Через 20 секунд приглашение будет не актуально.</t>", _nameSender]]remoteExec["hint", _target1, false];
      } else {
      hint "Игрок в группе или уже имеет приглашение. Подождите немного!";
    };
    };
  };
};


PENA_PARTY_LEAVE = { 
[]spawn { 
  if ((player getVariable ["groupState", false]) == true) then { 
      if (!isNull findDisplay 16000 && count groupIndex != 0) then {
      lbClear 16003;
      [groupIndex, player]remoteExec["PENA_LEAVE_HELPER_GRP", units group player, false];
      [player] joinSilent grpNull; 
      player setVariable ["groupState", false, true]; 
      } else {
      closeDialog 0;
      createDialog "SquadDialog";
    };
} else { 
  hint "Вы не в группе"; 
}; 
}; 
}; 



 
PENA_PARTY_ONLOAD = {  
[]spawn {


if ((player getVariable ["groupState", false]) == true) then { 
_playerData = [];  
 while {!isNull findDisplay 16000} do   //ГРУППА 
  {     
    {   
     _uid = getPlayerUID _x;     
         if (isPlayer _x && _playerData find _uid == -1) then     
         {     
          _index = lbAdd [16003, name _x];     
          _data = lbSetData [16003, _index, _uid];     
          lbSetTooltip [16003, _index, name _x];
          if (_x == player) then {groupIndex = [16003, _index]};   
          _playerData pushBack _uid;    
        };     
    }forEach units group player;   
   sleep 1;    
  };     
  _playerData = [];   
}; 
}; 
[]spawn { 
_sidePlayers = [];
for "_i" from 0 to count allPlayers do {
if (side(allPlayers # _i) == playerSide) then {_sidePlayers pushBack allPlayers # _i;
};
};
 _playerData = [];    
   while {!isNull findDisplay 16000} do   //ЛЮДИ ДЛЯ ИНВАЙТА  
  {     
    {   
     _uid = getPlayerUID _x;     
         if (isPlayer _x && alive _x && _playerData find _uid == -1 && !isNull group _x && _uid != getPlayerUID player) then     
         {     
          _index = lbAdd [16666, name _x];     
          _data = lbSetData [16666, _index, _uid];     
          lbSetTooltip [16666, _index, name _x];
          _playerData pushBack _uid;    
        };     
    }forEach _sidePlayers;  
   sleep 1;    
  };  
  _playerData = []; 
};  
};  




PENA_CREATE_PARTY = { 
[]spawn { 
  _idc = (_this # 0);
  //_groupName = name player + "_" + parseText([random[0, 500, 999], 0] call BIS_fnc_cutDecimals); 
  if (player getVariable["groupState", false] == false) then {
  _groupName = createGroup side player;
  _groupName deleteGroupWhenEmpty true;
  player setVariable ["groupState", true, true];
  hint parseText format ["Группа [ <t size='1' color='#80ff80'>%1</t> ] создана!<br></br><t>Теперь вы можете<t size='1' color='#80ff80'> пригласить </t>кого-нибудь.</t>", str _groupName];
  _playerData = [];  
   while {!isNull findDisplay 16000} do   
  {   
    {
      if (isNull findDisplay 16000) exitWith {}; 
     _uid = getPlayerUID _x;   
         if (isPlayer _x && alive _x && _playerData find _uid == -1) then   
         {   
          _index = lbAdd [16003, name _x];   
          _data = lbSetData [16003, _index, _uid];   
          lbSetTooltip [16003, _index, name _x];   
          _playerData pushBack _uid;  
        };   
    }forEach units group player;  
   sleep 2;  
  };   
  _playerData = [];
} else {
  hint "Вы уже в группе";
};
};

};


PENA_LEAVE_HELPER_GRP = {
 if ((_this # 0 # 0) == 16003) then {hint parseText format ["Игрок [ <t size='1' color='#80ff80'>%1</t> ] вышел из группы", name (_this # 1)];};
   if (!isNull findDisplay 16000) then {
     if ((_this # 0 # 0) == 16003) then {
        closeDialog 0;
        createDialog "SquadDialog";
      } else {
      lbDelete [(_this # 0 # 0), (_this # 0 # 1)];
      };
    };
};

PENA_SOMEONE_LEAVES = {
  if (!isNull findDisplay 16000) then {
    closeDialog 0;
    createDialog "SquadDialog";
  };
};
