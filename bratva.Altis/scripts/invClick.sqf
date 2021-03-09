private ["_unit","_item"];
if (isdedicated) exitwith {};

handle = [] spawn {    
fnc_dbl = {   
_idc = ctrlIDC (_this select 0);          
_selectedIndex = _this select 1;         
_unit = player;
_item = lbData [_idc, _selectedIndex];
			
switch (true) do { 
	case (_item == "RedBull") : {[_unit, _item] remoteExec ["Freddy_fnc_redbull", _unit, false];}; 
	case (_item == "Buffout") : {[_unit, _item] remoteExec ["Freddy_fnc_Buffout", _unit, false];}; 
};
//if (_item == "RedBull" OR _item == "epenephrine" OR _item == "Buffout") then {[_unit, _item] remoteExec ["Freddy_fnc_redbull", _unit, false];};
false      
};      

while {true} do {  
waituntil {!(isnull (finddisplay 602))};               
((findDisplay 602) displayCtrl 638) ctrlSetEventHandler ["LBDblClick", "_this call fnc_dbl"];  
((findDisplay 602) displayCtrl 633) ctrlSetEventHandler ["LBDblClick", " _this call fnc_dbl"];  
((findDisplay 602) displayCtrl 619) ctrlSetEventHandler ["LBDblClick", "_this call fnc_dbl"];    		
waituntil {isnull (finddisplay 602)};      
};  
};  

