/*
File: fn_copLoadout.sqf
Author: Bryan "Tonic" Boardwine
Edited: Viral
 
Description:
Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
 
if(FETCH_CONST(life_coplevel) == 0) then
{
player addUniform "U_BG_Guerilla2_1";
player addVest "V_Rangemaster_belt";
player addBackpack "B_Carryall_oli";
player addMagazines ["16Rnd_9x21_Mag", 5];
player addWeapon "hgun_P07_snds_F";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
mybackpack = unitBackpack player;
mybackpack addItem ["Toolkit", 2];
mybackpack addItem "Medikit";
};
 
if(FETCH_CONST(life_coplevel) == 1) then
{
player addUniform "U_BG_Guerilla2_1";
player addVest "V_Rangemaster_belt";
player addBackpack "B_Carryall_oli";
player addMagazines ["16Rnd_9x21_Mag", 5];
player addWeapon "hgun_P07_snds_F";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
mybackpack = unitBackpack player;
mybackpack addItem ["Toolkit", 2];
mybackpack addItem "Medikit";
};
 
if(FETCH_CONST(life_coplevel) == 2) then
{
player addUniform "U_Competitor";
player addVest "V_TacVest_blk_POLICE";
player addBackpack "B_Carryall_oli";
player addMagazines ["16Rnd_9x21_Mag", 5];
player addWeapon "SMG_01_Holo_pointer_snds_F";
player addMagazines ["30Rnd_45ACP_Mag_SMG_01", 2];
player addWeapon "hgun_P07_snds_F";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
mybackpack = unitBackpack player;
mybackpack addItem ["Toolkit", 2];
mybackpack addItem "Medikit";
};
 
if(FETCH_CONST(life_coplevel) == 3) then
{
player addUniform "U_Rangemaster";
player addVest "V_PlateCarrier3_rgr";
player addBackpack "B_Carryall_oli";
player addMagazines ["16Rnd_9x21_Mag", 5];
player addWeapon "hgun_P07_snds_F";
player addWeapon "arifle_Katiba_ACO_pointer_snds_F";
player addMagazines ["30Rnd_65x39_caseless_green", 3];
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
mybackpack = unitBackpack player;
mybackpack addItem ["Toolkit", 2];
mybackpack addItem "Medikit";
};
 
if(FETCH_CONST(life_coplevel) == 4) then
{
player addUniform "U_B_SpecopsUniform_sgg";
player addVest "V_PlateCarrierSpec_rgr";
player addBackpack "B_Carryall_oli";
player addMagazines ["16Rnd_9x21_Mag", 5];
player addWeapon "hgun_P07_snds_F";
player addWeapon "srifle_EBR_ARCO_pointer_snds_F";
player addMagazines ["20Rnd_762x51_Mag", 4];
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
mybackpack = unitBackpack player;
mybackpack addItem ["Toolkit", 2];
mybackpack addItem "Medikit";
};

#include <macro.h>