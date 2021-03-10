life_fnc_moveIn = {
_unit moveInCargo (_this select 0);
};

FREDDY_FNC_SPAWNITEMSPLAYER = {
_unit = player;
_uniformArray = ["U_Competitor", "U_Rangemaster", "U_C_Poloshirt_redwhite", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_salmon", "U_C_Poloshirt_stripped", "U_C_Poloshirt_blue", "U_C_Poloshirt_tricolour"] call BIS_fnc_selectRandom;
_headgearArray = ["H_Cap_oli", "H_Cap_tan", "H_Construction_basic_orange_F", "H_Bandanna_mcamo", "H_Bandanna_cbr", "H_Bandanna_camo", "H_Bandanna_sand", "H_Bandanna_sgg", "H_Bandanna_surfer", "H_Bandanna_surfer_grn", "H_Bandanna_surfer_blk", "H_Cap_red", "H_StrawHat_dark", "H_Hat_blue"] call BIS_fnc_selectRandom;
_glassesArray = ["G_Squares", "G_Spectacles", "G_Aviator", "G_Lowprofile", "G_Sport_Blackred", "G_Sport_Greenblack", "G_Sport_Red"] call BIS_fnc_selectRandom;

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

_unit forceAddUniform _uniformArray;
_unit addHeadgear _headgearArray;
_unit addGoggles _glassesArray;

_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "ItemRadio";
_unit linkItem "ItemGPS";
};

Freddy_Fnc_SpawnPlayer = { 
switch (playerSide) do { 
	case (WEST) : {closeDialog 0; call FREDDY_FNC_SPAWNITEMSPLAYER; player SetPos getMarkerPos "kavallamrk";}; 
	case (EAST) : {closeDialog 0; call FREDDY_FNC_SPAWNITEMSPLAYER; player SetPos getMarkerPos "atiramrk";};
	case (independent) : {closeDialog 0; call FREDDY_FNC_SPAWNITEMSPLAYER; player SetPos getMarkerPos "pyrgosmrk";};   
	};
};