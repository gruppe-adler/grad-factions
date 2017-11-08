class BWOld {
	class AllUnits {
		uniform = "LOP_U_TKA_Fatigue_02";
		vest = "LOP_V_6B23_6Sh92_OLV";
		backpack = "";
		headgear = "rhsgref_helmet_M1_bare";
		primaryWeapon = "hlc_rifle_g3a3";
        primaryWeaponMagazine = "hlc_20rnd_762x51_T_G3";
		primaryWeaponOptics = "";
		primaryWeaponPointer = "";
		primaryWeaponMuzzle = "";
        primaryWeaponUnderbarrel = "";
		primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
		handgunWeapon = "";
        handgunWeaponMagazine = "";
		binoculars = "";
		map = "ItemMap";
		compass = "ItemCompass";
		watch = "ItemWatch";
		gps = "";
		radio = "";
		nvgoggles = "";
    };
    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToUniform[] = {
                LIST_1("ACE_MapTools"),
				LIST_1("ACE_EntrenchingTool"),

                LIST_4("ACE_packingBandage"),
                LIST_4("ACE_elasticBandage"),
                LIST_4("ACE_quikclot"),
                LIST_4("ACE_tourniquet"),
                LIST_2("ACE_morphine"),
                LIST_2("ACE_epinephrine")
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_f1"),
                LIST_2("rhs_mag_an_m8hc"),
                LIST_7("hlc_20rnd_762x51_T_G3")
            };
        };

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
            backpack = "B_FieldPack_oli";
            addItemsToBackpack[] = {
                LIST_4("hlc_100Rnd_762x51_T_MG3")
            };
        };

        //Asst. Missile Specialist (AT)
        class soldier_AAT_F: Soldier_F {
            backpack = "B_FieldPack_oli";
            addItemsToBackpack[] = {
                LIST_2("rhs_mag_maaws_HEAT")
            };
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
            primaryWeapon = "hlc_lmg_MG3";
            primaryWeaponMagazine = "hlc_100Rnd_762x51_T_MG3";
            handgunWeapon = "";
            handgunWeaponMagazine = "";
            backpack = "B_FieldPack_oli";
            addItemsToVest[] = {
                LIST_2("rhs_mag_an_m8hc")
            };
			addItemsToBackpack[] = {
                LIST_4("hlc_100Rnd_762x51_T_MG3")
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
					backpack = "B_FieldPack_oli";
            class Rank {
                class SERGEANT {
                    GRAD_FACTIONS_MEDICITEMS_SQ
                };
                class LIEUTENANT {
                    GRAD_FACTIONS_MEDICITEMS_PT
                };
            };
        };

        //Marksman
        class soldier_M_F: Soldier_F {
            primaryWeaponOptics ="HLC_Optic_ZFSG1";
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
          secondaryWeapon = "rhs_weap_maaws";
          secondaryWeaponMagazine = "rhs_mag_maaws_HEAT";
          backpack = "B_FieldPack_oli";
          addItemsToBackpack[] = {
              LIST_2("rhs_mag_maaws_HEAT")
          };
        };

				class crew_F {
					uniform = "LOP_U_TKA_Fatigue_02";
					vest = "";
					backpack = "";
					headgear = "rhs_tsh4";
					primaryWeapon = "";
							primaryWeaponMagazine = "";
					primaryWeaponOptics = "";
					primaryWeaponPointer = "";
					primaryWeaponMuzzle = "";
							primaryWeaponUnderbarrel = "";
					primaryWeaponUnderbarrelMagazine = "";
							secondaryWeapon = "";
							secondaryWeaponMagazine = "";
					handgunWeapon = "";
							handgunWeaponMagazine = "";
					binoculars = "";
					map = "ItemMap";
					compass = "ItemCompass";
					watch = "ItemWatch";
					gps = "";
					radio = "";
					nvgoggles = "";
					addItemsToUniform[] = {
							LIST_1("ACE_MapTools"),

							LIST_4("ACE_packingBandage"),
							LIST_4("ACE_elasticBandage"),
							LIST_4("ACE_quikclot"),
							LIST_4("ACE_tourniquet"),
							LIST_2("ACE_morphine"),
							LIST_2("ACE_epinephrine")
					};
				};

				class Helipilot_F {
					uniform = "U_I_pilotCoveralls";
					vest = "";
					backpack = "";
					headgear = "rhsusf_hgu56p";
					primaryWeapon = "";
							primaryWeaponMagazine = "";
					primaryWeaponOptics = "";
					primaryWeaponPointer = "";
					primaryWeaponMuzzle = "";
							primaryWeaponUnderbarrel = "";
					primaryWeaponUnderbarrelMagazine = "";
							secondaryWeapon = "";
							secondaryWeaponMagazine = "";
					handgunWeapon = "";
							handgunWeaponMagazine = "";
					binoculars = "";
					map = "ItemMap";
					compass = "ItemCompass";
					watch = "ItemWatch";
					gps = "";
					radio = "";
					nvgoggles = "";
					addItemsToUniform[] = {
							LIST_1("ACE_MapTools"),

							LIST_4("ACE_packingBandage"),
							LIST_4("ACE_elasticBandage"),
							LIST_4("ACE_quikclot"),
							LIST_4("ACE_tourniquet"),
							LIST_2("ACE_morphine"),
							LIST_2("ACE_epinephrine")
					};
				};

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
            backpack = "TFAR_bussole";
            addItemsToBackpack[] = {
                LIST_2("SmokeShellGreen"),
                LIST_2("SmokeShellRed"),
                LIST_2("rhs_mag_an_m8hc")
            };
        };

        //Team Leader
        class Soldier_TL_F: Soldier_F {
            addItemsToVest[] = {
                LIST_2("rhs_mag_f1"),
                LIST_2("rhs_mag_an_m8hc"),
                LIST_8("hlc_20rnd_762x51_T_G3"),
            };
        };
    };
};
