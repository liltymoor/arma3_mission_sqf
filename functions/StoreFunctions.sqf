 FREDDT_FNC_LOADWEPARRAY = {
 [] spawn {
 _wepArray = ["arifle_mas_ak_74m_sf", "30Rnd_mas_545x39_mag", "", "LMG_mas_M249_F", "200Rnd_mas_556x45_Stanag", "", "arifle_MX_SW_Black_F", "100Rnd_65x39_caseless_black_mag", "", "arifle_CTARS_blk_F", "100Rnd_580x42_Mag_F", "", "arifle_SPAR_02_blk_F", "150Rnd_556x45_Drum_Mag_F", "", "arifle_AK12_F", "30Rnd_762x39_AK12_Mag_F", "", "srifle_DMR_03_khaki_F", "20Rnd_762x51_Mag", "", "srifle_EBR_F", "20Rnd_762x51_Mag", "", "Launch_RPG7V", "RPG7_PG7V", "RPG7_PG7VR"];
{
	_wepName = getText (configFile >> "CfgWeapons" >> _x >> "displayname") + getText (configFile >> "CfgMagazines" >> _x >> "displayname");		
	lbAdd [3615, _wepName];
	lbSetData [3615, _forEachIndex, _x];
} forEach  _wepArray;

while {!IsNull (FindDisplay 123438)} do {
  _index = lbCurSel 3615;
  _weapon = lbData [3615, _index];
  sleep 0.1;
		};
	};
};

 FREDDT_FNC_LOADCLOTHARRAY = {
 [] spawn {
 _opforArray = ["mex_beret", "mex_booniehat", "mex_cap", "mex_heli", "mex_HelmetLight", "mex_HelmetCanvas", "mex_HelmetAssault", "mex_HelmetBallistic", "mex_Helmet", "", "mex_soldier1", "mex_soldier2", "mex_ghillie", "", "mex_platevest", "mex_platevest_2", "mex_platevest_ctrg_1", "mex_platevest_ctrg_2", "", "mex_Backpack_Fast", "mex_Viper"];
 //_bluforArray = ["ru_Helmet", "ru_HelmetHBK", "ru_cap", "ru_booniehat", "ru_beret", "", "ru_soldier", "ru_ghillie", "ru_bandit_tshirt", "ru_bandit_undershirt", "ru_polo", "", "ru_platevest_ctrg_1", "ru_platevest_ctrg_2", "ru_platevest_2", "ru_platevest", "", "ru_Backpack_Fast", "ru_Messenger", "ru_Viper"];
 _bluforArray = ["jp_beret", "jp_booniehat", "jp_cap", "jp_heli", "jp_HelmetLight", "jp_HelmetCanvas", "jp_HelmetAssault", "jp_HelmetBallistic", "jp_Helmet", "", "jp_soldier1", "jp_soldier2", "jp_ghillie", "", "jp_platevest", "jp_platevest_2", "jp_platevest_ctrg_1", "jp_platevest_ctrg_2", "", "jp_Backpack_Fast", "jp_Messenger", "jp_Viper"];
 //_independentArray = ["msf_beret", "msf_cap", "msf_booniehat", "msf_helmet", "msf_uniform_3", "msf_uniform_4", "msf_uniform_5", "msf_uniform_1", "msf_uniform_2", "msf_vest_2", "msf_vest", "msf_backpack_fast"];
 _independentArray = ["fr_beret", "fr_booniehat", "fr_cap", "fr_heli", "fr_HelmetLight", "fr_HelmetCanvas", "fr_HelmetAssault", "fr_HelmetBallistic", "fr_Helmet", "", "fr_soldier1", "fr_soldier2", "fr_ghillie", "", "fr_platevest", "fr_platevest_2", "fr_platevest_ctrg_1", "fr_platevest_ctrg_2", "", "fr_Backpack_Fast", "fr_Messenger", "fr_Viper"];
 _finalArray = [];
 switch (side player) do {
 	case east: {_finalArray = + _opforArray;};
    case west: {_finalArray = + _bluforArray;};
    case independent: {_finalArray = + _independentArray;};
};

{
	_wepName = getText (configFile >> "CfgWeapons" >> _x >> "displayname") + getText (configFile >> "CfgVehicles" >> _x >> "displayname");
	lbAdd [3615, _wepName];
	lbSetData [3615, _forEachIndex, _x];
} forEach  _finalArray;
	};
};

 FREDDT_FNC_LOADACCESORIESARRAY = {
 [] spawn {
 _wepArray = ["optic_ACO_grn", "optic_Aco", "optic_ACO_grn_smg", "optic_Aco_smg", "optic_Holosight", "optic_mas_aim", "NVGoggles", "ItemGPS", "ItemCompass", "ItemWatch", "Binocular", "RedBull", "Buffout"];
{
	_wepName = getText (configFile >> "CfgWeapons" >> _x >> "displayname") + getText (configFile >> "CfgMagazines" >> _x >> "displayname");
	lbAdd [3615, _wepName];
	lbSetData [3615, _forEachIndex, _x];
} forEach  _wepArray;
	};
};

Freddy_fnc_takewep = {
  _index = lbCurSel 3615;
  _weapon = lbData [3615, _index];
_command = switch (true) do {
    case (_weapon isKindOf ["Rifle", configFile >> "CfgWeapons"] || _weapon isKindOf ["Launcher", configFile >> "CfgWeapons"]) : {"addWeapon"};
    case (isNumber(configFile >> "cfgVehicles" >> _weapon >> "isBackpack") && _weapon isKindOf ["mgs_GhillieSuit", configFile >> "CfgWeapons"] || _weapon isKindOf ["mgs_new_OfficerUniform", configFile >> "CfgWeapons"] || _weapon isKindOf ["mgs_new_Uniform", configFile >> "CfgWeapons"] || _weapon isKindOf ["msf_uniform_3", configFile >> "CfgWeapons"] || _weapon isKindOf ["msf_uniform_4", configFile >> "CfgWeapons"] || _weapon isKindOf ["msf_uniform_5", configFile >> "CfgWeapons"] || _weapon isKindOf ["msf_uniform_1", configFile >> "CfgWeapons"] || _weapon isKindOf ["msf_uniform_2", configFile >> "CfgWeapons"]) : {"forceAddUniform"};
    case (isNumber(configFile >> "cfgVehicles" >> _weapon >> "isBackpack")) : {"addBackpack"};
    case (_weapon isKindOf ["H_HelmetB", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_HelmetB_plain_mcamo", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_mas_rus_Cap_headphones_q", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_Beret_02", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_Booniehat_mcamo", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_MilCap_mcamo", configFile >> "CfgWeapons"]) : {"addHeadgear"};
    case (_weapon isKindOf ["Vest_NoCamo_Base", configFile >> "CfgWeapons"] || _weapon isKindOf ["Vest_Camo_Base", configFile >> "CfgWeapons"] || _weapon isKindOf ["V_PlateCarrier2_rgr", configFile >> "CfgWeapons"]) : {"addVest"};
    case (_weapon isKindOf ["Uniform_Base", configFile >> "CfgWeapons"]) : {"forceAddUniform"};
    case (_weapon isKindOf ["ItemGPS", configFile >> "CfgWeapons"] || _weapon isKindOf ["ItemCompass", configFile >> "CfgWeapons"] || _weapon isKindOf ["ItemWatch", configFile >> "CfgWeapons"] || _weapon isKindOf ["NVGoggles", configFile >> "CfgWeapons"]) : {"linkItem"};
    default {"addItem"}; 
};

[player,_weapon] call compile ("(_this # 0) " + _command + " (_this # 1)");
};