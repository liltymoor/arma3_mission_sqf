 FREDDT_FNC_LOADWEPARRAY = {
 [] spawn {
 _wepArray = ["arifle_mas_ak_74m_sf", "30Rnd_mas_545x39_mag", "", "SMG_03_khaki", "SMG_03_TR_khaki", "SMG_03C_TR_khaki", "50Rnd_570x28_SMG_03", "", "SMG_01_F", "30Rnd_45ACP_Mag_SMG_01", "", "LMG_Mk200_F", "200Rnd_65x39_cased_Box", "", "LMG_mas_M249_F", "200Rnd_mas_556x45_Stanag", "", "LMG_03_F", "200Rnd_556x45_Box_F", "", "arifle_MSBS65_sand_F", "arifle_MSBS65_Mark_sand_F", "30Rnd_65x39_caseless_msbs_mag", "", "arifle_MXM_Black_F", "arifle_MX_SW_Black_F", "arifle_MX_Black_F", "arifle_MXC_Black_F", "100Rnd_65x39_caseless_black_mag", "30Rnd_65x39_caseless_black_mag", "", "srifle_DMR_07_blk_F", "arifle_CTARS_blk_F", "arifle_CTAR_blk_F", "100Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "20Rnd_650x39_Cased_Mag_F", "", "arifle_SPAR_03_blk_F", "arifle_SPAR_02_blk_F", "arifle_SPAR_01_blk_F", "150Rnd_556x45_Drum_Mag_F", "30Rnd_556x45_Stanag", "20Rnd_762x51_Mag", "", "arifle_RPK12_F", "arifle_AK12_F", "arifle_AK12U_F", "arifle_AKM_F", "75rnd_762x39_AK12_Mag_F", "30Rnd_762x39_AK12_Mag_F", "30Rnd_762x39_Mag_F", "", "arifle_ARX_blk_F", "30Rnd_65x39_caseless_green", "", "srifle_DMR_03_khaki_F", "20Rnd_762x51_Mag", "", "srifle_EBR_F", "20Rnd_762x51_Mag", "", "srifle_DMR_06_olive_F", "20Rnd_762x51_Mag", "", "Launch_RPG7V", "RPG7_PG7V", "RPG7_PG7VR"];
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
 _opforArray = ["G_AirPurifyingRespirator_02_black_F", "G_AirPurifyingRespirator_01_F", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_TI_G_blk_F", "G_Balaclava_TI_blk_F", "G_Respirator_white_F", "G_RegulatorMask_F", "mex_balaclava", "", "mex_beret", "mex_booniehat", "mex_cap", "mex_heli", "mex_HelmetLight", "mex_HelmetCanvas", "mex_HelmetAssault", "mex_HelmetBallistic", "mex_Helmet", "", "mex_soldier1", "mex_soldier2", "mex_ghillie", "", "mex_platevest", "mex_platevest_2", "mex_platevest_ctrg_1", "mex_platevest_ctrg_2", "", "mex_Backpack_Fast", "mex_Viper"];
 _bluforArray = ["G_AirPurifyingRespirator_02_black_F", "G_AirPurifyingRespirator_01_F", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_TI_G_blk_F", "G_Balaclava_TI_blk_F", "G_Respirator_white_F", "G_RegulatorMask_F", "jp_balaclava", "", "jp_beret", "jp_booniehat", "jp_cap", "jp_heli", "jp_HelmetLight", "jp_HelmetCanvas", "jp_HelmetAssault", "jp_HelmetBallistic", "jp_Helmet", "", "jp_soldier1", "jp_soldier2", "jp_ghillie", "", "jp_platevest", "jp_platevest_2", "jp_platevest_ctrg_1", "jp_platevest_ctrg_2", "", "jp_Backpack_Fast", "jp_Viper"];
 _independentArray = ["G_AirPurifyingRespirator_02_black_F", "G_AirPurifyingRespirator_01_F", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_TI_G_blk_F", "G_Balaclava_TI_blk_F", "G_Respirator_white_F", "G_RegulatorMask_F", "fr_balaclava", "", "fr_beret", "fr_booniehat", "fr_cap", "fr_heli", "fr_HelmetLight", "fr_HelmetCanvas", "fr_HelmetAssault", "fr_HelmetBallistic", "fr_Helmet", "", "fr_soldier1", "fr_soldier2", "fr_ghillie", "", "fr_platevest", "fr_platevest_2", "fr_platevest_ctrg_1", "fr_platevest_ctrg_2", "", "fr_Backpack_Fast", "fr_Viper"];
 _defArray = ["G_AirPurifyingRespirator_02_black_F", "G_AirPurifyingRespirator_01_F", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_TI_G_blk_F", "G_Balaclava_TI_blk_F", "G_Respirator_white_F", "G_RegulatorMask_F", "kitty_balaclava", "", "kitty_beret", "kitty_booniehat", "kitty_cap", "kitty_heli", "kitty_HelmetLight", "kitty_HelmetCanvas", "kitty_HelmetAssault", "kitty_HelmetBallistic", "kitty_Helmet", "", "kitty_soldier1", "kitty_soldier2", "kitty_ghillie", "", "kitty_platevest", "kitty_platevest_2", "kitty_platevest_ctrg_1", "kitty_platevest_ctrg_2", "", "kitty_Backpack_Fast", "kitty_Viper"];
 _atArray = ["G_AirPurifyingRespirator_02_black_F", "G_AirPurifyingRespirator_01_F", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_TI_G_blk_F", "G_Balaclava_TI_blk_F", "G_Respirator_white_F", "G_RegulatorMask_F", "def_balaclava", "", "def_beret", "def_booniehat", "def_cap", "def_heli", "def_HelmetLight", "def_HelmetCanvas", "def_HelmetAssault", "def_HelmetBallistic", "def_Helmet", "", "def_soldier1", "def_soldier2", "def_ghillie", "", "def_platevest", "def_platevest_2", "def_platevest_ctrg_1", "def_platevest_ctrg_2", "", "def_Backpack_Fast", "def_Viper"];
 _finalArray = [];
 switch (true) do {
  case (player getVariable ["Defender", false] == true): {_finalArray = + _defArray;};
  case (player getVariable ["Attacker", false] == true): {_finalArray = + _atArray;};
 	case (side group player == east): {_finalArray = + _opforArray;};
    case (side group player == west): {_finalArray = + _bluforArray;};
    case (side group player == independent): {_finalArray = + _independentArray;};
};

{
	_wepName = getText (configFile >> "CfgWeapons" >> _x >> "displayname") + getText (configFile >> "CfgVehicles" >> _x >> "displayname") + getText (configFile >> "CfgGlasses" >> _x >> "displayname");
	lbAdd [3615, _wepName];
	lbSetData [3615, _forEachIndex, _x];
} forEach  _finalArray;
	};
};

 FREDDT_FNC_LOADACCESORIESARRAY = {
 [] spawn {
 _wepArray = ["optic_ACO_grn", "optic_Aco", "optic_ACO_grn_smg", "optic_Aco_smg", "optic_Holosight", "optic_Holosight_smg", "optic_mas_aim", "optic_Yorris", "", "acc_pointer_IR", "acc_flashlight", "", "NVGoggles", "NVGoggles_INDEP", "NVGoggles_OPFOR", "O_NVGoggles_grn_F", "", "ItemGPS", "ItemCompass", "ItemWatch", "Binocular", "Rangefinder", "", "RedBull", "Buffout", "epenephrine"];
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
    case (isNumber(configFile >> "cfgVehicles" >> _weapon >> "isBackpack")) : {"addBackpack"};
    case (_weapon isKindOf ["H_HelmetB", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_HelmetB_plain_mcamo", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_Beret_02", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_Booniehat_mcamo", configFile >> "CfgWeapons"] || _weapon isKindOf ["H_MilCap_mcamo", configFile >> "CfgWeapons"]) : {"addHeadgear"};
    case (_weapon isKindOf ["Vest_NoCamo_Base", configFile >> "CfgWeapons"] || _weapon isKindOf ["Vest_Camo_Base", configFile >> "CfgWeapons"] || _weapon isKindOf ["V_PlateCarrier2_rgr", configFile >> "CfgWeapons"]) : {"addVest"};
    case (_weapon isKindOf ["Uniform_Base", configFile >> "CfgWeapons"]) : {"forceAddUniform"};
    case (_weapon isKindOf ["G_balaclava_blk", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_RegulatorMask_F", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_Balaclava_TI_G_blk_F", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_Balaclava_TI_blk_F", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_Balaclava_combat", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_Respirator_white_F", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_AirPurifyingRespirator_02_black_F", configFile >> "CfgGlasses"] || _weapon isKindOf ["G_AirPurifyingRespirator_01_F", configFile >> "CfgGlasses"]) : {"addGoggles"};
    case (_weapon isKindOf ["ItemGPS", configFile >> "CfgWeapons"] || _weapon isKindOf ["ItemCompass", configFile >> "CfgWeapons"] || _weapon isKindOf ["ItemWatch", configFile >> "CfgWeapons"] || _weapon isKindOf ["NVGoggles", configFile >> "CfgWeapons"]) : {"linkItem"};
    default {"addItem"}; 
};
[player,_weapon] call compile ("(_this # 0) " + _command + " (_this # 1)");
};