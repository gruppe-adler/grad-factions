#ifdef NIGHTVISION
    #define NVITEM "NVGoggles_OPFOR"
#else
    #define NVITEM ""
#endif

#ifdef LASERS
    #define LLITEM "rhs_acc_perst1ik"
#else
    #define LLITEM ""
#endif

#ifdef GUNLIGHTS
    #define LLITEM "rhs_acc_2dpZenit"
#else
    #define LLITEM ""
#endif

#ifdef SUPPRESSORS
    #define SUPPRESSORITEM "rhs_acc_tgpa"
#else
    #define SUPPRESSORITEM "rhs_acc_dtk"
#endif

class RUFloraSub {
    class AllUnits {
            uniform = "rhs_uniform_flora_patchless_alt";
            vest = "rhs_6b23_ML_6sh92";
            backpack = "";
            headgear = "rhs_6b27m_ml";
            primaryWeapon = "rhs_weap_ak74m";
            primaryWeaponMuzzle = SUPPRESSORITEM;
            primaryWeaponPointer = LLITEM;
            primaryWeaponOptics = "rhs_acc_pkas";
            handgunWeapon = "rhs_weap_makarov_pm";
            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "tf_fadak";
            nvgoggles = NVITEM;
    };

    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_EarPlugs",
                LIST_2("rhs_mag_9x18_8_57N181S"),
                LIST_2("ACE_CableTie"),
                LIST_8("ACE_fieldDressing"),
                LIST_4("ACE_morphine"),
                "ACE_epinephrine",
                "ACE_Flashlight_KSF1"
            };

            addItemsToVest[] = {
                LIST_2("rhs_mag_rgd5"),
                "rhs_mag_rdg2_white",
                LIST_8("rhs_30Rnd_545x39_AK")
            };
        };

        //Asst. Autorifleman
        class Soldier_AAR_F: Soldier_F {
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR_green")
            };
        };

        //Asst. Gunner (HMG/GMG)
        class support_AMG_F: Soldier_AAR_F {
            backpack = "rhs_assault_umbts";
        };

        //Asst. Missile Specialist (AA)
        class Soldier_AAA_F: Soldier_F {
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_9k38_rocket")
            };
        };

        //Asst. Missile Specialist (AT)
        class Soldier_AAT_F: Soldier_F {
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_2("RPG32_F")
            };
        };

        //Autorifleman
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_pkp";
            headgear = "rhs_6b27m_ml_ess";
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR_green")
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_rgd5"),
                LIST_2("rhs_mag_rdg2_white"),
                "rhs_100Rnd_762x54mmR_7N26"
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            vest = "rhs_6b23_ML_medic";
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_5("ACE_bloodIV"),
                LIST_15("ACE_epinephrine"),
                LIST_20("ACE_morphine"),
                LIST_20("ACE_fieldDressing"),
                LIST_20("ACE_fieldDressing"),
                LIST_6("rhs_mag_rdg2_white")
            };
        };

        //Explosive Specialist
        class Soldier_exp_F: Soldier_F {
            backpack = "rhs_assault_umbts_engineer_empty";
            addItemsToBackpack[] = {
                "ACE_Clacker",
                "ACE_M26_Clacker",
                "ACE_DefusalKit",
                "SatchelCharge_Remote_Mag",
                LIST_3("DemoCharge_Remote_Mag")
            };
        };

        //Grenadier
        class Soldier_GL_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_gp25";
            vest = "rhs_6b23_ML_6sh92_vog";
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_rgd5"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_6("rhs_VOG25"),
                LIST_2("rhs_VG40MD_White"),
                LIST_2("rhs_VG40MD_Green"),
                LIST_2("rhs_VG40MD_Red")
            };
        };

        //Heavy Gunner
        class HeavyGunner_F: Soldier_AR_F {
            backpack = "rhs_assault_umbts";
        };

        //Marksman
        class Soldier_M_F: Soldier_F {
            uniform = "U_I_FullGhillie_ard";
            vest = "rhs_6b23_ML_6sh92_radio";
            goggles = "rhs_balaclava";
            primaryWeapon = "rhs_weap_svdp";
            primaryWeaponAttachments[] = {"rhs_acc_pso1m21"};
            addItemsToVest[] = {
                LIST_2("rhs_mag_rgd5"),
                "rhs_mag_rdg2_white",
                LIST_11("rhs_10Rnd_762x54mmR_7N1")
            };
        };

        //Missile Specialist (AA)
        class Soldier_AA_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_camo";
            secondaryWeapon = "rhs_weap_igla";
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_9k38_rocket")
            };
        };

        //Missile Specialist (AT)
        class Soldier_AT_F: Soldier_F {
        	headgear = "rhs_6b27m_ml";
            primaryWeapon = "rhs_weap_ak74m_camo";
            secondaryWeapon = "rhs_weap_rpg7";
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_3("rhs_rpg7_PG7VL_mag"),
                "rhs_rpg7_OG7V_mag"
            };
        };

        //Repair Specialist
        class Soldier_repair_F: Soldier_F {
            primaryWeapon = "rhs_weap_ak74m_2mag";
            headgear = "rhs_6b26_ess";
            backpack = "rhs_assault_umbts_engineer_empty";
            addItemsToBackpack[] = {
                "ToolKit",
                "ACE_wirecutter"
            };
        };

        //Rifleman (AT)
        class Soldier_LAT_F: Soldier_F {
            headgear = "rhs_6b27m_ml_ess";
            secondaryWeapon = "rhs_weap_rpg26";
            backpack = "rhs_assault_umbts";
            addItemsToBackpack[] = {
                "rhs_rpg26_mag",
            };
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
            vest = "rhs_6b23_ML_6sh92_vog_headset";
            headgear = "rhs_6b27m_ml_ess_bala";
            primaryWeapon = "rhs_weap_ak74m_gp25";
            backpack = "tf_mr3000_rhs";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_rdg2_white"),
                LIST_4("rhs_VG40MD_Green"),
                LIST_4("rhs_VG40MD_Red"),
                LIST_4("rhs_VG40MD_White")
            };
        };

        //Team Leader
        class Soldier_TL_F: Soldier_SL_F {
            headgear = "rhs_6b27m_ml_bala";
            vest = "rhs_6b23_ML_6sh92_vog_headset";
            primaryWeapon = "rhs_weap_ak74m_gp25";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_VG40MD_Green"),
                LIST_2("rhs_VG40MD_Red"),
                LIST_2("rhs_VG40MD_White"),
                LIST_4("rhs_VOG25")
            };
        };

        //Spotter
        class Spotter_F: Soldier_SL_F {
        	uniform = "U_I_FullGhillie_ard";
        	goggles = "rhs_balaclava";
        	vest = "rhs_6b23_ML_6sh92_radio";
        };
    };
    class Rank {
        class LIEUTENANT {
        vest = "rhs_6b23_ML_crewofficer";
            headgear = "rhs_beret_milp";
        };
    };
};
