/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 20000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 15000, -1 },
            { "hgun_ACPC2_F", "", 25000, 200 },
			{ "hgun_Pistol_heavy_02_F", 30000, 500},
            { "hgun_PDW2000_F", "", 50000, -1 },
            { "optic_ACO_grn_smg", "", 2000, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Viral's Dodgy Business";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 70000, 2500 },
            { "arifle_Katiba_F", "", 90000, 500 },
            { "srifle_DMR_01_F", "", 300000, -1 },
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Hamr", "", 7500, -1 },
            { "acc_flashlight", "", 1000, 100 },
			{ "LMG_Mk200_F", "", 300000, 5000 },
			{ "hgun_ACPC2_F", "", 20000, 200 },
			{ "hgun_Pistol_heavy_01_F", "", 20000, 150 },
			{ "hgun_Pistol_heavy_02_F", "", 20000, 300 },
			{ "hgun_Rook40_F", "", 20000, 150 },
			{ "arifle_Mk20_F", 75000, 100 },
			{ "arifle_MXC_F", 130000, 300 },
			{ "arifle_MX_SW_F", "", 150000, 250},
			{ "arifle_MXM_F", "", 140000, 200 },
			{ "hgun_PDW2000_F", "", 40000, 100 },
			{ "SMG_01_F", "", 65000, 150 },
			{ "srifle_GM6_camo_F", "", 340000, 200 },
			{ "srifle_EBR_F", "", 170000, 250 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 1000 },
            { "30Rnd_65x39_caseless_green", "", 1300 },
            { "10Rnd_762x54_Mag", "", 3000 },
            { "20Rnd_556x45_UW_mag", "", 25000 },
			{ "5Rnd_127x108_Mag", "", 1300 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 400 },
			{ "200Rnd_65x39_Belt", "", 5000 },
			{ "200Rnd_65x39_Belt_Tracer_Red", "", 500 },
			{ "10Rnd_762x54_Mag", "", 750 },
			{ "10Rnd_338_Mag", "", 2300 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_Katiba_F", "", 100000, 500 },
            { "arifle_TRG20_F", "", 75000, 2500 },
            { "optic_ACO_grn", "", 4000, 350 },
            { "optic_Holosight", "", 4000, 275 },
            { "acc_flashlight", "", 1000, 100 },
			{ "hgun_ACPC2_F", "", 25000, 200 },
			{ "hgun_Pistol_heavy_01_F", "", 25000, 150 },
			{ "hgun_Pistol_heavy_02_F", "", 25000, 300 },
			{ "hgun_Rook40_F", "", 25000, 150 },
			{ "arifle_Mk20_F", 85000, 100 },
			{ "arifle_MXC_F", 130000, 300 },
			{ "arifle_MX_SW_F", "", 180000, 250 },
			{ "arifle_MXM_F", "", 170000, 200 },
			{ "hgun_PDW2000_F", "", 60000, 100 },
			{ "SMG_01_F", "", 80000, 150 },
			{ "srifle_EBR_F", "", 200000 }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 500 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 400},
			{ "30Rnd_65x39_caseless_mag", "", 900},
			{ "30Rnd_65x39_caseless_green", "", 750},
			{ "20Rnd_762x51_Mag", "", 1300 },
			{ "5Rnd_127x108_Mag", "", 1500 },
			{ "100Rnd_65x39_caseless_mag", "", 3000 },
			{ "100Rnd_65x39_caseless_mag_Tracer	", "", 900 },
			{ "10Rnd_762x54_Mag", "", 2000 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 500, -1 },
            { "ItemGPS", "", 200, 45 },
            { "ItemMap", "", 100, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 300, 75 },
            { "FirstAidKit", "", 2000, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 },
			{ "Rangefinder", "", 1500, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 },
			{ "Rangefinder", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 500, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_Mk20_plain_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_M", "", 2750, -1 },
			{ "NVGoggles", "", 2000, 980 },
            { "Medikit", "", 500, 450 }, 
			{ "optic_Holosight", "", 300, -1 }
			
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 250 },
			{ "9mm 30Rnd Mag", "", 100 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },//
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 70000, 3000 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "arifle_MX_F", "", 50000, 2000 },
			{ "NVGoggles", "", 2000, 980 },
            { "Medikit", "", 500, 450 },
			{ "muzzle_snds_H", "", 1000, 100 },
			{ "optic_Aco", "", 250, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
			{ "9mm 30Rnd Mag", "", 200 },
			{ "optic_Holosight", "", 300, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 },
			{ "Rangefinder", "", 1500, 50 }
        };
        mags[] = {};
    };
};
