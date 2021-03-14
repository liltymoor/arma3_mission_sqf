//Ник
addMissionEventHandler [  
 "Draw3D",   
 {  
   _units = player nearEntities [["CAManBase"], 10];  
  _units = _units - [player];   
  {   
   drawIcon3D [   
    "",   
    [1,1,1,1],   
    [visiblePosition _x select 0,visiblePosition  _x select 1, (visiblePosition _x select 2) +((_x ModelToWorld (_x selectionPosition "pelvis")) select 2)+ 1.2],   
    1,   
    1,   
    0,   
    name _x,   
    2,   
    0.035,   
    "PuristaSemiBold"   
   ];   
  } forEach (_units select { (side group _x) == playerSide;}); 
 }   
];

//Синяя метка на своего
addMissionEventHandler [     
 "Draw3D",      
 {     
 _units = (allUnits select { (side group _x) == playerSide && _x distance player < 500;}) - [player];      
  {      
   drawIcon3D [      
    "\A3\ui_f\data\Map\MapControl\bush_ca.paa",      
    [0,0.7,1,1],      
    getPosATLVisual _x vectorAdd [0,0,1],      
    1,      
    1,      
    0,      
    "",      
    2,      
    0.035,      
    "PuristaSemiBold"      
   ];      
  } forEach _units;     
 }      
];

//Зеленая метка на своего
addMissionEventHandler [     
 "Draw3D",      
 {     
  _units = (allUnits select {group _x == group player && _x distance player < 500;}) - [player];         
  {      
   drawIcon3D [      
    "\A3\ui_f\data\Map\MapControl\bush_ca.paa",      
    [0,1,0,1],      
    getPosATLVisual _x vectorAdd [0,0,1],      
    1,      
    1,      
    0,      
    "",      
    2,      
    0.035,      
    "PuristaSemiBold"      
   ];      
  } forEach _units;     
 }      
];

//Теги
addMissionEventHandler ["Draw3D", 
{       
  _units = (allPlayers select {_x distance player < 10 && _x getVariable ["Terpila", false] && isNull objectParent _x;}) - [player];
  _minSize = 1.5;
  _furthestDistance = 1;
  _iconSize = {linearConversion[ 0, _furthestDistance, player distance2D _x, 1, _minSize, true ]} forEach _units;            
  {
  if (([player,"view", _x] checkVisibility [AGLToASL positionCameraToWorld[0,0,0],getPosASL vehicle _x])>0) then {        
   drawIcon3D [        
    MISSION_ROOT + "images\icons\pickaxe.paa",    
    [1,1,1,1],        
    [visiblePosition _x select 0,visiblePosition  _x select 1, (visiblePosition _x select 2) +((_x ModelToWorld (_x selectionPosition "pelvis")) select 2)+ 1.5],        
    _iconSize,        
    _iconSize,        
    0,        
    "Потерпевший",        
    2,        
    0.035,        
    "PuristaSemiBold"        
   ];        
  };        
 } forEach _units;       
}];

addMissionEventHandler ["Draw3D", 
{       
  _units = (allPlayers select {_x distance player < 10 && _x getVariable ["Clown", false] && isNull objectParent _x;}) - [player];
  _minSize = 1.5;
  _furthestDistance = 1;
  _iconSize = {linearConversion[ 0, _furthestDistance, player distance2D _x, 1, _minSize, true ]} forEach _units;             
  {
  if (([player,"view", _x] checkVisibility [AGLToASL positionCameraToWorld[0,0,0],getPosASL vehicle _x])>0) then {        
   drawIcon3D [        
    MISSION_ROOT + "images\icons\clown.paa",    
    [1,1,1,1],        
    [visiblePosition _x select 0,visiblePosition  _x select 1, (visiblePosition _x select 2) +((_x ModelToWorld (_x selectionPosition "pelvis")) select 2)+ 1.5],        
    _iconSize,        
    _iconSize,        
    0,        
    "Клоун",        
    2,        
    0.035,        
    "PuristaSemiBold"        
   ];        
  };        
 } forEach _units;       
}];

addMissionEventHandler ["Draw3D", 
{       
  _units = (allPlayers select {_x distance player < 10 && _x getVariable ["Nigger", false] && isNull objectParent _x;}) - [player];
  _minSize = 1.5;
  _furthestDistance = 1;
  _iconSize = {linearConversion[ 0, _furthestDistance, player distance2D _x, 1, _minSize, true ]} forEach _units;             
  {
  if (([player,"view", _x] checkVisibility [AGLToASL positionCameraToWorld[0,0,0],getPosASL vehicle _x])>0) then {        
   drawIcon3D [        
    MISSION_ROOT + "images\icons\wazzup.paa",    
    [1,1,1,1],        
    [visiblePosition _x select 0,visiblePosition  _x select 1, (visiblePosition _x select 2) +((_x ModelToWorld (_x selectionPosition "pelvis")) select 2)+ 1.5],        
    _iconSize,        
    _iconSize,        
    0,        
    "Хочу пиццы",        
    2,        
    0.035,        
    "PuristaSemiBold"        
   ];        
  };        
 } forEach _units;       
}];

addMissionEventHandler ["Draw3D", 
{       
  _units = (allPlayers select {_x distance player < 10 && _x getVariable ["doSvyazi", false] && isNull objectParent _x;}) - [player];
  _minSize = 1.5;
  _furthestDistance = 1;
  _iconSize = {linearConversion[ 0, _furthestDistance, player distance2D _x, 1, _minSize, true ]} forEach _units;             
  {
  if (([player,"view", _x] checkVisibility [AGLToASL positionCameraToWorld[0,0,0],getPosASL vehicle _x])>0) then {        
   drawIcon3D [        
    MISSION_ROOT + "images\icons\doSvyazi.paa",    
    [1,1,1,1],        
    [visiblePosition _x select 0,visiblePosition  _x select 1, (visiblePosition _x select 2) +((_x ModelToWorld (_x selectionPosition "pelvis")) select 2)+ 1.5],        
    _iconSize,        
    _iconSize,        
    0,        
    "До связи",        
    2,        
    0.035,        
    "PuristaSemiBold"        
   ];        
  };        
 } forEach _units;       
}];

addMissionEventHandler ["Draw3D", 
{       
  _units = (allPlayers select {_x distance player < 10 && _x getVariable ["arma3fun", false] && isNull objectParent _x;}) - [player];
  _minSize = 1.5;
  _furthestDistance = 1;
  _iconSize = {linearConversion[ 0, _furthestDistance, player distance2D _x, 1, _minSize, true ]} forEach _units;             
  {
  if (([player,"view", _x] checkVisibility [AGLToASL positionCameraToWorld[0,0,0],getPosASL vehicle _x])>0) then {        
   drawIcon3D [        
    MISSION_ROOT + "images\icons\arma3fun.paa",    
    [1,1,1,1],        
    [visiblePosition _x select 0,visiblePosition  _x select 1, (visiblePosition _x select 2) +((_x ModelToWorld (_x selectionPosition "pelvis")) select 2)+ 1.5],        
    _iconSize,        
    _iconSize,        
    0,        
    "Арма фан",        
    2,        
    0.035,        
    "PuristaSemiBold"        
   ];        
  };        
 } forEach _units;       
}];