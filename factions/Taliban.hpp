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
#endif

#ifdef SUPPRESSORS
  #define SUPPRESSORITEM "rhs_acc_tgpa"
#else
  #define SUPPRESSORITEM "rhs_acc_dtk"
#endif

class Taliban {
	  class AllUnits {
      uniform = "LOP_U_AM_Fatigue_01";
      vest = "V_BandollierB_khk";
      backpack = "";
      headgear = "LOP_H_Turban";
      primaryWeapon = "rhs_weap_ak74m";
      primaryWeaponMagazine = "rhs_30Rnd_545x39_AK";
      primaryWeaponMuzzle = SUPPRESSORITEM;
      primaryWeaponPointer = LLITEM;
      primaryWeaponOptics = "rhs_acc_pkas";
      primaryWeaponUnderbarrel = "";
		   primaryWeaponUnderbarrelMagazine = "";
      secondaryWeapon = "";
      secondaryWeaponMagazine = "";
      handgunWeapon = "rhs_weap_makarov_pm";
      handgunWeaponMagazine = "rhs_mag_9x18_8_57N181S";
      binoculars = "";
      map = "ItemMap";
      compass = "ItemCompass";
      watch = "";
      gps = "";
      radio = "";
      nvgoggles = "";
    };
    class Type {
        //Rifleman
        class Soldier_F {
          uniform = "LOP_U_AM_Fatigue_02";
            addItemsToUniform[] = {
                LIST_2("rhs_mag_9x18_8_57N181S"),

                LIST_4("ACE_packingBandage"),
                LIST_4("ACE_elasticBandage"),
                LIST_4("ACE_quikclot"),
                LIST_4("ACE_tourniquet"),
                LIST_2("ACE_morphine"),
                LIST_2("ACE_epinephrine")
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_rgd5"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_7("rhs_30Rnd_545x39_AK")
            };
        };
        //Asst. Autorifleman
        class Soldier_AAR_F: Soldier_F {
          uniform = "LOP_U_AM_Fatigue_03";
          primaryWeapon = "LOP_Weap_LeeEnfield";
          primaryWeaponMagazine = "LOP_10rnd_77mm_mag";
          backpack = "rhs_sidor";
          addItemsToVest[] = {
              LIST_2("rhs_mag_rgd5"),
              LIST_2("rhs_mag_rdg2_white"),
              LIST_15("LOP_10rnd_77mm_mag")
          };
          addItemsToBackpack[] = {
              LIST_3("rhs_100Rnd_762x54mmR_green")
          };
        };
        //Asst. Gunner (HMG/GMG)
        class support_AMG_F: Soldier_AAR_F {};
        //Asst. Missile Specialist (AA)
        class Soldier_AAA_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_03";
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_9k38_rocket")
            };
        };
        //Asst. Missile Specialist (AT)
        class Soldier_AAT_F: Soldier_F {
          uniform = "LOP_U_AM_Fatigue_04";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_2("rhs_rpg7_PG7VL_mag")
            };
        };
        //Autorifleman
        class Soldier_AR_F: Soldier_F {
          uniform = "LOP_U_AM_Fatigue_03";
            primaryWeapon = "rhs_weap_pkp";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_7N26";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR_green")
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_rgd5"),
                LIST_2("rhs_mag_rdg2_white")
            };
        };
        //Combat Life Saver
        class medic_F: Soldier_F {
          uniform = "LOP_U_AM_Fatigue_02";
            handgunWeapon = "";
            handgunWeaponMagazine = "";
            backpack = "rhs_sidor";
            addItemsToUniform[] = {
                "ACE_MapTools",
                LIST_2("ACE_CableTie"),
                "ACE_Flashlight_KSF1"
            };
            class Rank {
                class PRIVATE {
                    GRAD_FACTIONS_MEDICITEMS_CFR
                };
                class CORPORAL {
                    GRAD_FACTIONS_MEDICITEMS_SQ
                };
                class SERGEANT {
                    GRAD_FACTIONS_MEDICITEMS_PT
                };
            };
        };
        //Explosive Specialist
        class soldier_exp_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_01";
            backpack = "rhs_assault_umbts_engineer_empty";
            addItemsToBackpack[] = {
                "IEDLandBig_Remote_Mag",
                LIST_2("IEDLandSmall_Remote_Mag")
            };
            addItemsToVest[] = {
                "ACE_Cellphone",
                "rhs_mag_rgd5"
            };
        };

        //Grenadier
        class Soldier_GL_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_04";
            primaryWeapon = "rhs_weap_akm_gp25";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_rgd5"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_10("rhs_VOG25"),
                LIST_2("rhs_VG40MD_White"),
                LIST_2("rhs_VG40MD_Green"),
                LIST_2("rhs_VG40MD_Red")
            };
            addItemsToVest[] = {
                LIST_4("rhs_30Rnd_762x39mm"),
                LIST_5("rhs_mag_rgd5")
            };
        };

        //Heavy Gunner
        class HeavyGunner_F: Soldier_F {

        };

        //Marksman
        class soldier_M_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_01";
            primaryWeapon = "rhs_weap_svdp";
            primaryWeaponMagazine = "rhs_10Rnd_762x54mmR_7N1";
            primaryWeaponAttachments[] = {"rhs_acc_pso1m21"};
            addItemsToVest[] = {
                LIST_2("rhs_mag_rgd5"),
                LIST_10("rhs_10Rnd_762x54mmR_7N1")
            };
        };

        //Missile Specialist (AA)
        class soldier_AA_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_02";
            secondaryWeapon = "rhs_weap_igla";
            secondaryWeaponMagazine = "rhs_mag_9k38_rocket";
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                "rhs_mag_9k38_rocket"
            };
        };

        //Missile Specialist (AT)
        class soldier_AT_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_03";
            secondaryWeapon = "rhs_weap_rpg7";
            secondaryWeaponMagazine = "rhs_rpg7_PG7VR_mag";
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_2("rhs_rpg7_PG7VR_mag")
            };
        };

        //Repair Specialist
        class soldier_repair_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_02";
            backpack = "rhs_assault_umbts_engineer_empty";
            addItemsToBackpack[] = {
                "ToolKit",
                "ACE_wirecutter"
            };
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_04";
            secondaryWeapon = "rhs_weap_rpg26";
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_01";
            primaryWeapon = "rhs_weap_akms_gp25";
            backpack = "rhs_sidor";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_rdg2_white"),
                LIST_4("rhs_VG40MD_Green"),
                LIST_4("rhs_VG40MD_Red"),
                LIST_4("rhs_VG40MD_White")
            };
          addItemsToVest[] = {
                LIST_6("rhs_30Rnd_762x39mm"),
                LIST_2("rhs_mag_rgd5")
            };
        };

        //Team Leader
        class Soldier_TL_F: Soldier_F {
            uniform = "LOP_U_AM_Fatigue_04";
            primaryWeapon = "rhs_weap_akms_gp25";
            backpack = "B_Carryall_khk";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_VG40MD_Green"),
                LIST_2("rhs_VG40MD_Red"),
                LIST_2("rhs_VG40MD_White"),
                LIST_4("rhs_VOG25")
            };
        };
    };

    class Rank {
        class LIEUTENANT {
            headgear = "";
        };
    };
};
