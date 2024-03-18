// ADDED NEW STYLE CRATES TO SUPPLY OFFICER/ PICK UP-PLACE
//ADDED NEW VEHICLES TO LOGISTIC



class vn_logistics
{
    class vehicle_data
    {
	class vn_defaults_large
	{
		inventory_max_weight = 1500;
		inventory_max_size = 7.5;
	};
	class vn_defaults_medium
	{
		inventory_max_weight = 300;
		inventory_max_size = 5;
	};
	class vn_defaults_small
	{
		inventory_max_weight = 200;
		inventory_max_size = 3;
	};
	class vn_defaults_tiny
	{
		inventory_max_weight = 100;
		inventory_max_size = 1;
	};
	//MODERN HELICOPTERS
	class ej_UH60M_NATO : vn_defaults_small {};
	class CUP_B_UH60M_US : vn_defaults_small {};
	class ej_MH60L : vn_defaults_small {};
	class RHS_UH1Y_d : vn_defaults_medium {};
	
	//MODERN UTILITY GROUND
	class CUP_O_Hilux_unarmed_TK_CIV_White : vn_defaults_medium {};
	class CUP_B_TowingTractor_NATO : vn_defaults_small {};
	class B_LSV_01_unarmed_F : vn_defaults_small {};
	class rhsusf_M1230a1_usarmy_wd : vn_defaults_small {};
	class C_Van_02_medevac_F : vn_defaults_small {};
	class C_IDAP_Van_02_medevac_F : vn_defaults_small {};
	class C_Offroad_01_repair_F : vn_defaults_small {};
	class C_IDAP_Offroad_01_F : vn_defaults_small {};
	class C_Offroad_01_comms_F : vn_defaults_small {};
	class rhsusf_m998_w_2dr_fulltop : vn_defaults_small {};
	class rhsusf_m998_w_2dr : vn_defaults_small {};
	class rhsusf_m998_w_4dr : vn_defaults_small {};
	class C_Van_02_vehicle_F : vn_defaults_small {};
	class B_Quadbike_01_F : vn_defaults_small {};
	class CUP_B_BAF_Coyote_L2A1_D : vn_defaults_small {};
	class CUP_B_Wolfhound_LMG_GB_D : vn_defaults_small {};
	class CUP_B_Jackal2_GMG_GB_D : vn_defaults_small {};
	class ADF_APC_tracked_01_cannon_F : vn_defaults_small {};
	class ADF_LSV_01_armed_F : vn_defaults_small {};
	class ADF_MRAP_01_hmg_F : vn_defaults_small {};
	class CUP_B_M1126_ICV_M2_Desert : vn_defaults_small {};
	class CUP_B_MTVR_HIL : vn_defaults_small {};
	class CUP_B_M151_HIL : vn_defaults_small {};
	class CUP_B_M151_M2_HIL : vn_defaults_small {};
	class CUP_B_Boxer_HMG_HIL : vn_defaults_small {};
	class CUP_B_Boxer_GMG_HIL : vn_defaults_small {};
	class CUP_B_Boxer_Empty_HIL : vn_defaults_small {};
	class rhsusf_M142_usarmy_D : vn_defaults_small {};
	class rhsusf_stryker_m1132_m2_d : vn_defaults_small {};
	class RHS_M6 : vn_defaults_small {};
	class RHS_M2A3_BUSKIII : vn_defaults_small {};
	class rhsusf_m109d_usarmy : vn_defaults_small {};
	class CUP_B_M1A2C_TUSK_II_Desert_US_Army : vn_defaults_small {};
	class rhsusf_m1a2sep1tuskiid_usarmy : vn_defaults_small {};
	class CUP_B_M2A3Bradley_USA_D : vn_defaults_small {};
	class CUP_B_M7Bradley_USA_D : vn_defaults_small {};
	class rhsusf_m113d_usarmy_medical : vn_defaults_small {};
	class rhsusf_m113d_usarmy_M240 : vn_defaults_small {};
	class rhsusf_stryker_m1126_mk19_d : vn_defaults_small {};
	class rhsusf_stryker_m1126_m2_d : vn_defaults_small {};
	class CUP_B_AAV_USMC : vn_defaults_small {};
	class CUP_B_RG31_Mk19_USMC : vn_defaults_small {};
	class CUP_B_RG31E_M2_USMC : vn_defaults_small {};
	class CUP_B_nM1025_Mk19_USMC_DES : vn_defaults_small {};
	class CUP_B_M1151_Deploy_DSRT_USMC : vn_defaults_small {};
	class CUP_B_nM1025_M2_USMC_DES : vn_defaults_small {};
	class CUP_B_M1151_Mk19_DSRT_USMC : vn_defaults_small {};
	class CUP_B_LAV25_desert_USMC : vn_defaults_small {};
	class B_MRAP_01_gmg_F : vn_defaults_small {};
	class B_MRAP_01_hmg_F : vn_defaults_small {};
	class B_LSV_01_AT_F : vn_defaults_small {};
	class B_LSV_01_armed_F : vn_defaults_small {};
	class rhsgref_hidf_m998_4dr : vn_defaults_small {};
	class rhsgref_hidf_m1025_mk19 : vn_defaults_small {};
	class rhs_uh1h_hidf : vn_defaults_small {};
	class CUP_O_T72_CSAT : vn_defaults_small {};
	class CUP_O_T55_CSAT : vn_defaults_small {};
	class CUP_O_BMP2_CSAT : vn_defaults_small {};
	class CUP_O_BRDM2_HQ_CSAT : vn_defaults_small {};
	class CUP_O_BTR80A_CSAT : vn_defaults_small {};
	class O_MRAP_02_gmg_F : vn_defaults_small {};
	class CUP_O_UAZ_MG_CSAT : vn_defaults_small {};
	class CUP_O_UAZ_SPG9_CSAT : vn_defaults_small {};
	class O_LSV_02_armed_F : vn_defaults_small {};
	class O_LSV_02_AT_F : vn_defaults_small {};
	class B_G_Offroad_01_armed_F : vn_defaults_small {};
	class B_GEN_Van_02_vehicle_F : vn_defaults_small {};
	class CUP_B_M1030_USA : vn_defaults_tiny {};
	class rhsusf_M1220_M2_usarmy_d : vn_defaults_small {};
	class rhsusf_M1220_M153_M2_usarmy_d : vn_defaults_small {};
	class rhsusf_M1238A1_M2_socom_d : vn_defaults_small {};
	class rhsusf_mrzr4_d : vn_defaults_tiny {};
	class CUP_B_nM1025_SOV_M2_USMC_DES : vn_defaults_small {};
	class CUP_B_LAV25M240_desert_USMC : vn_defaults_small {};
	class rhsusf_m1240a1_m240_uik_usarmy_d : vn_defaults_small {};
	class rhsusf_m1240a1_m2_uik_usarmy_d : vn_defaults_small {};
	class rhsusf_M1237_M2_usarmy_d : vn_defaults_small {};
	
	
	//MODERN SHIPS AND BOATS
	class B_Boat_Armed_01_minigun_F : vn_defaults_small {};
	class B_Boat_Transport_01_F : vn_defaults_small {};
	class B_SDV_01_F : vn_defaults_small {};
	class CUP_B_RHIB2Turret_USMC : vn_defaults_small {};
	class CUP_B_RHIB_USMC : vn_defaults_small {};
	
	
	//LARGE SHIPS
	class CUP_B_LCU1600_USMC : vn_defaults_medium {};
	
	//MODERN URILITY AIR
	class CUP_C_Merlin_HC3_CIV_Lux : vn_defaults_medium {};
	class C_Heli_Light_01_civil_F : vn_defaults_small {};
	class CUP_C_412_Luxury : vn_defaults_small {};
	class RHS_MELB_AH6M : vn_defaults_small {};
	class RHS_UH60M_MEV : vn_defaults_medium {};
	class B_Heli_Transport_01_F : vn_defaults_small {};
	class CUP_B_MH6M_USA : vn_defaults_small {};
	class CUP_B_MH6M_OBS_USA : vn_defaults_small {};
	class CUP_C_412_Sheriff : vn_defaults_small {};
	class ADF_Heli_Transport_01_F : vn_defaults_small {};
	class B_Heli_Light_01_F : vn_defaults_small {};
	class CUP_B_Mi17_CDF : vn_defaults_medium {};
	class CUP_B_UH60S_USN : vn_defaults_medium {};
	class CUP_B_MH60S_USMC : vn_defaults_medium {};
	class CUP_B_Mi17_VIV_CDF : vn_defaults_medium {};
	class O_Heli_Transport_04_covered_F : vn_defaults_small {};
	class O_Heli_Attack_02_dynamicLoadout_F : vn_defaults_small {};
	class CUP_O_Ka60_GL_Hex_CSAT : vn_defaults_small {};
	class O_Heli_Light_02_dynamicLoadout_F : vn_defaults_small {};
	class CUP_B_MV22_USMC : vn_defaults_medium {};
	class ej_MH80 : vn_defaults_medium {};
	class RHS_MELB_MH6M : vn_defaults_medium {};
	class ej_MH60M : vn_defaults_medium {};
	class ghosthawk_CG_Blu : vn_defaults_medium {};
	class RHS_UH60M_MEV2_d : vn_defaults_medium {};
	class RHS_UH60M_d : vn_defaults_medium {};
	class MEF_USMC_Ghosthawk : vn_defaults_medium {};
	class mohawk_CG : vn_defaults_large {};
	
	//HEAVY GROUND TRANSPORT
	class rhsusf_M977A4_AMMO_BKIT_usarmy_wd : vn_defaults_medium {};
	class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd : vn_defaults_medium {};
	class B_T_Truck_01_fuel_F : vn_defaults_medium {};
	class rhsusf_stryker_m1134_wd : vn_defaults_medium {};
	class rhsusf_m113d_usarmy : vn_defaults_medium {};
	class B_Truck_01_box_F : vn_defaults_large {};
	class B_Truck_01_cargo_F : vn_defaults_large {};
	
	//HEAVY AIR LIFT
	class CUP_B_MH47E_USA : vn_defaults_large {};
	class ADF_Heli_Transport_02a_F : vn_defaults_large {};
	class CUP_B_CH47F_HIL : vn_defaults_large {};
	class RHS_CH_47F_cargo : vn_defaults_large {};
	class CUP_B_CH53E_USMC : vn_defaults_large {};
	class USAF_C130J : vn_defaults_large {};
	
	
	
	//Jeeps + Small Cars
	class vn_b_wheeled_m151_01 : vn_defaults_small {};
	class vn_b_wheeled_m151_01_mp : vn_defaults_small {};
	class vn_b_wheeled_m151_02_mp : vn_defaults_small {};
	class vn_b_wheeled_m151_02 : vn_defaults_small {};
	class vn_c_car_01_01 : vn_defaults_tiny {};
	class vn_c_car_02_01 : vn_defaults_tiny {};
	class vn_c_car_03_01 : vn_defaults_tiny {};
	class vn_c_car_04_01 : vn_defaults_small {};

	//Armed Jeeps
	class vn_b_wheeled_m151_mg_01 : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_02_mp : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_02 : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_03_mp : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_03 : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_04_mp : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_04 : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_05 : vn_defaults_tiny {};
	class vn_b_wheeled_m151_mg_06 : vn_defaults_tiny {};

	//APC
	class vn_b_armor_m113_01 : vn_defaults_medium {};
	class vn_b_armor_m113_acav_01 : vn_defaults_small {};
	class vn_b_armor_m113_acav_02 : vn_defaults_small {};
	class vn_b_armor_m113_acav_03 : vn_defaults_small {};
	class vn_b_armor_m113_acav_04 : vn_defaults_small {};
	class vn_b_armor_m113_acav_05 : vn_defaults_small {};
	class vn_b_armor_m113_acav_06 : vn_defaults_small {};

	//Transport trucks
	class vn_b_wheeled_m54_01 : vn_defaults_large {};
	class vn_b_wheeled_m54_01_airport : vn_defaults_large {};
	class vn_b_wheeled_m54_02 : vn_defaults_large {};
	//M109 Command Truck
	class vn_b_wheeled_m54_03 : vn_defaults_medium {};
	//Repair Truck
	class vn_b_wheeled_m54_repair : vn_defaults_medium {};
	class vn_b_wheeled_m54_repair_airport : vn_defaults_medium {};
	//Fuel trucks
	class vn_b_wheeled_m54_fuel : vn_defaults_medium {};
	class vn_b_wheeled_m54_fuel_airport : vn_defaults_medium {};
	//Ammo truck
	class vn_b_wheeled_m54_ammo : vn_defaults_medium {};
	//Gun trucks
	class vn_b_wheeled_m54_mg_01 : vn_defaults_small {};
	class vn_b_wheeled_m54_mg_02 : vn_defaults_small {};
	class vn_b_wheeled_m54_mg_03 : vn_defaults_small {};

	//Armor
	class vn_b_armor_m41_01_01 : vn_defaults_small {};
	class vn_o_armor_type63_01 : vn_defaults_small {};

	//Small VC boats
	class vn_o_boat_01_00 : vn_defaults_small {};
	class vn_o_boat_01_01 : vn_defaults_small {};
	class vn_o_boat_01_02 : vn_defaults_small {};
	class vn_o_boat_01_03 : vn_defaults_small {};
	class vn_o_boat_01_04 : vn_defaults_small {};

	class vn_o_boat_01_mg_00 : vn_defaults_tiny {};
	class vn_o_boat_01_mg_01 : vn_defaults_tiny {};
	class vn_o_boat_01_mg_02 : vn_defaults_tiny {};
	class vn_o_boat_01_mg_03 : vn_defaults_tiny {};
	class vn_o_boat_01_mg_04 : vn_defaults_tiny {};

	//Long VC Boats
	class vn_o_boat_02_00 : vn_defaults_medium {};
	class vn_o_boat_02_01 : vn_defaults_medium {};
	class vn_o_boat_02_02 : vn_defaults_medium {};
	class vn_o_boat_02_03 : vn_defaults_medium {};
	class vn_o_boat_02_04 : vn_defaults_medium {};

	class vn_o_boat_02_mg_00 : vn_defaults_small {};
	class vn_o_boat_02_mg_01 : vn_defaults_small {};
	class vn_o_boat_02_mg_02 : vn_defaults_small {};
	class vn_o_boat_02_mg_03 : vn_defaults_small {};
	class vn_o_boat_02_mg_04 : vn_defaults_small {};

	//US Boats
	class vn_b_boat_05_01 : vn_defaults_large {};
	class vn_b_boat_05_02 : vn_defaults_large {};
	class vn_b_boat_06_01 : vn_defaults_large {};
	class vn_b_boat_09_01 : vn_defaults_small {};
	class vn_b_boat_10_01 : vn_defaults_small {};
	class vn_b_boat_11_01 : vn_defaults_small {};
	class vn_b_boat_12_01 : vn_defaults_medium {};
	class vn_b_boat_13_01 : vn_defaults_medium {};

	//Air assets
	//Cobra Helicopter
	class vn_b_air_ah1g_01 : vn_defaults_tiny {};
	class vn_b_air_ah1g_02 : vn_defaults_tiny {};
	class vn_b_air_ah1g_03 : vn_defaults_tiny {};
	class vn_b_air_ah1g_04 : vn_defaults_tiny {};
	class vn_b_air_ah1g_05 : vn_defaults_tiny {};
	class vn_b_air_ah1g_06 : vn_defaults_tiny {};
	class vn_b_air_ah1g_07 : vn_defaults_tiny {};
	class vn_b_air_ah1g_08 : vn_defaults_tiny {};
	class vn_b_air_ah1g_09 : vn_defaults_tiny {};
	class vn_b_air_ah1g_10 : vn_defaults_tiny {};

	class vn_b_air_ah1g_01_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_02_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_03_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_04_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_05_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_06_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_07_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_08_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_09_usmc : vn_defaults_tiny {};
	class vn_b_air_ah1g_10_usmc : vn_defaults_tiny {};

	//UH1D - Dustoff
	class vn_b_air_uh1d_01_01 : vn_defaults_small {};
	class vn_b_air_uh1d_01_02 : vn_defaults_small {};
	class vn_b_air_uh1d_01_03 : vn_defaults_small {};
	class vn_b_air_uh1d_01_04 : vn_defaults_small {};
	class vn_b_air_uh1d_01_05 : vn_defaults_small {};
	class vn_b_air_uh1d_01_06 : vn_defaults_small {};
	class vn_b_air_uh1d_01_07 : vn_defaults_small {};

	//UH1D - Slick
	class vn_b_air_uh1d_02_01 : vn_defaults_small {};
	class vn_b_air_uh1d_02_02 : vn_defaults_small {};
	class vn_b_air_uh1d_02_03 : vn_defaults_small {};
	class vn_b_air_uh1d_02_04 : vn_defaults_small {};
	class vn_b_air_uh1d_02_05 : vn_defaults_small {};
	class vn_b_air_uh1d_02_06 : vn_defaults_small {};
	class vn_b_air_uh1d_02_07 : vn_defaults_small {};

	//UH1C - Hog
	class vn_b_air_uh1c_01_01 : vn_defaults_tiny {};
	class vn_b_air_uh1c_01_02 : vn_defaults_tiny {};
	class vn_b_air_uh1c_01_03 : vn_defaults_tiny {};
	class vn_b_air_uh1c_01_04 : vn_defaults_tiny {};
	class vn_b_air_uh1c_01_05 : vn_defaults_tiny {};
	class vn_b_air_uh1c_01_06 : vn_defaults_tiny {};
	class vn_b_air_uh1c_01_07 : vn_defaults_tiny {};

	//UH1C - Gunship
	class vn_b_air_uh1c_02_01 : vn_defaults_tiny {};
	class vn_b_air_uh1c_02_02 : vn_defaults_tiny {};
	class vn_b_air_uh1c_02_03 : vn_defaults_tiny {};
	class vn_b_air_uh1c_02_04 : vn_defaults_tiny {};
	class vn_b_air_uh1c_02_05 : vn_defaults_tiny {};
	class vn_b_air_uh1c_02_06 : vn_defaults_tiny {};
	class vn_b_air_uh1c_02_07 : vn_defaults_tiny {};

	//UH1C - Hornet
	class vn_b_air_uh1c_03_01 : vn_defaults_tiny {};
	class vn_b_air_uh1c_03_02 : vn_defaults_tiny {};
	class vn_b_air_uh1c_03_03 : vn_defaults_tiny {};
	class vn_b_air_uh1c_03_04 : vn_defaults_tiny {};
	class vn_b_air_uh1c_03_05 : vn_defaults_tiny {};
	class vn_b_air_uh1c_03_06 : vn_defaults_tiny {};
	class vn_b_air_uh1c_03_07 : vn_defaults_tiny {};

	//UH1C - Frog
	class vn_b_air_uh1c_04_01 : vn_defaults_tiny {};
	class vn_b_air_uh1c_04_02 : vn_defaults_tiny {};
	class vn_b_air_uh1c_04_03 : vn_defaults_tiny {};
	class vn_b_air_uh1c_04_04 : vn_defaults_tiny {};
	class vn_b_air_uh1c_04_05 : vn_defaults_tiny {};
	class vn_b_air_uh1c_04_06 : vn_defaults_tiny {};
	class vn_b_air_uh1c_04_07 : vn_defaults_tiny {};

	//UH1C - Heavy Hog
	class vn_b_air_uh1c_05_01 : vn_defaults_tiny {};
	class vn_b_air_uh1c_05_02 : vn_defaults_tiny {};
	class vn_b_air_uh1c_05_03 : vn_defaults_tiny {};
	class vn_b_air_uh1c_05_04 : vn_defaults_tiny {};
	class vn_b_air_uh1c_05_05 : vn_defaults_tiny {};
	class vn_b_air_uh1c_05_06 : vn_defaults_tiny {};
	class vn_b_air_uh1c_05_07 : vn_defaults_tiny {};

	//UH1C - ARA
	class vn_b_air_uh1c_06_01 : vn_defaults_tiny {};
	class vn_b_air_uh1c_06_02 : vn_defaults_tiny {};

	//UH1B - Slick
	class vn_b_air_uh1c_07_01 : vn_defaults_tiny {};

	//Choctaw - Transport
	class vn_b_air_ch34_01_01 : vn_defaults_small {};
	class vn_b_air_ch34_03_01 : vn_defaults_small {};
	//Choctaw - Armed (Stinger variants)
	class vn_b_air_ch34_04_01 : vn_defaults_tiny {};
	class vn_b_air_ch34_04_02 : vn_defaults_tiny {};
	class vn_b_air_ch34_04_03 : vn_defaults_tiny {};
	class vn_b_air_ch34_04_04 : vn_defaults_tiny {};

	//OH6
	class vn_b_air_oh6a_01 : vn_defaults_tiny {};
	class vn_b_air_oh6a_02 : vn_defaults_tiny {};
	class vn_b_air_oh6a_03 : vn_defaults_tiny {};
	class vn_b_air_oh6a_04 : vn_defaults_tiny {};
	class vn_b_air_oh6a_05 : vn_defaults_tiny {};
	class vn_b_air_oh6a_06 : vn_defaults_tiny {};
	class vn_b_air_oh6a_07 : vn_defaults_tiny {};

	//UH-1D Bushranger
	class vn_b_air_uh1d_03_06 : vn_defaults_tiny {};

	//UH1E - Heavy Gunship
	class vn_b_air_uh1e_02_04 : vn_defaults_tiny {};

	//UH1F - Slick
	class vn_b_air_uh1f_01_03 : vn_defaults_small {};

	
	//Dac Birds
	class vn_o_air_mi2_03_03 : vn_defaults_large {};
	class vn_o_air_mi2_03_05 : vn_defaults_large {};
	class vn_o_air_mi2_03_04 : vn_defaults_large {};
	class vn_o_air_mi2_04_03 : vn_defaults_large {};
	class vn_o_air_mi2_05_05 : vn_defaults_large {};
	class vn_o_air_mi2_04_06 : vn_defaults_large {};
	class vn_o_air_mi2_04_05 : vn_defaults_large {};
	class vn_o_air_mi2_04_04 : vn_defaults_large {};
	class vn_o_air_mi2_05_02 : vn_defaults_large {};
	class vn_o_air_mi2_05_01 : vn_defaults_large {};
	class vn_o_air_mi2_05_06 : vn_defaults_large {};

	//PF 1.3 Vehicles
	class vn_b_air_ach47_04_01 : vn_defaults_tiny {};

	class vn_b_wheeled_m274_02_03 : vn_defaults_tiny {};
	class vn_b_wheeled_m274_01_01 : vn_defaults_tiny {};
	class vn_b_wheeled_m274_02_01 : vn_defaults_tiny {};
	class vn_b_wheeled_m274_mg_01_01 : vn_defaults_tiny {};
	class vn_b_wheeled_m274_mg_02_01 : vn_defaults_tiny {};
	class vn_b_wheeled_m274_mg_03_01 : vn_defaults_tiny {};

	class vn_b_wheeled_lr2a_mg_02_nz_army : vn_defaults_tiny {};
	class vn_b_wheeled_lr2a_mg_01_nz_army : vn_defaults_tiny {};
	class vn_b_wheeled_lr2a_mg_03_nz_army : vn_defaults_tiny {};

	class vn_b_wheeled_lr2a_01_nz_army : vn_defaults_tiny {};
	class vn_b_wheeled_lr2a_02_nz_army : vn_defaults_tiny {};
	class vn_b_wheeled_lr2a_03_nz_army : vn_defaults_tiny {};

	class vn_b_usmc_static_m2_scoped_low : vn_defaults_tiny {};
	class vn_b_usmc_static_m2_scoped_high : vn_defaults_tiny {};

	class vn_b_armor_m48_01_01 : vn_defaults_small {};
	class vn_b_armor_m67_01_01 : vn_defaults_small {};
	class vn_i_armor_m48_01_01 : vn_defaults_small {};
	class vn_i_armor_m67_01_01 : vn_defaults_small {};

	class vn_b_armor_m125_01 : vn_defaults_small {};
	class vn_i_armor_m125_01 : vn_defaults_small {};
	class vn_b_armor_m132_01 : vn_defaults_small {};
	class vn_b_armor_m577_02 : vn_defaults_small {};
	class vn_b_armor_m577_01 : vn_defaults_small {};

	class vn_b_air_ch47_04_01 : vn_defaults_small {};
	class vn_b_air_ch47_03_01 : vn_defaults_large {};
	class vn_b_air_ch47_04_02 : vn_defaults_small {};
	class vn_b_air_ch47_03_02 : vn_defaults_large {};
	class vn_b_air_ch47_02_01 : vn_defaults_small {};
	class vn_i_air_ch47_02_01 : vn_defaults_small {};

	//////////////////
	////  UNSUNG  ////
	//////////////////
	class uns_willys : vn_defaults_small {};
	class uns_willys_2 : vn_defaults_small {};
	class uns_willysmg50 : vn_defaults_tiny {};
	class uns_willysm40 : vn_defaults_tiny {};
	class uns_willysmg : vn_defaults_tiny {};
	class uns_willys_2_usmp : vn_defaults_small {};
	class uns_willys_2_usmc : vn_defaults_small {};
	class uns_willys_2_m60 : vn_defaults_small {};
	class uns_willys_2_m1919 : vn_defaults_tiny {};

	//Armoured Cars
	class uns_xm706e1 : vn_defaults_small {};
	class uns_xm706e2 : vn_defaults_small {};

	//Huey
	class uns_UH1D_raaf_m60 : vn_defaults_tiny {};
	class uns_UH1C_M21_M200 : vn_defaults_tiny {};

	//Chinook
	class uns_ch47_m60_army : vn_defaults_medium {};

	//Boats
	class uns_pbr : vn_defaults_medium {};
	class uns_pbr_m10 : vn_defaults_small {};
	class uns_pbr_mk18 : vn_defaults_small {};

	//Trucks
	class uns_m37b1 : vn_defaults_medium {};
	class uns_m37b1_m1919 : vn_defaults_small {};
	class uns_M35A2 : vn_defaults_large {};
	class uns_M35A2_Open : vn_defaults_large {};
    };
    class item_data
    {
		//Building supplies crate
        class Box_NATO_AmmoVeh_F
        {
            item_weight = 200;
            item_size = 2.5;
            spawn_distance = 5;
            rotation_offset = 0;
        };

		//Building supplies container
		class Land_Cargo10_brick_red_F
		{
			item_weight = 600;
			item_size = 7.5;
			spawn_distance = 9;
			rotation_offset = 0;
		};

		//Small komex containers
		class vn_us_komex_small_01 : Land_Cargo10_brick_red_F {};
		class vn_us_komex_small_02 : Land_Cargo10_brick_red_F {};
		class vn_us_komex_small_03 : Land_Cargo10_brick_red_F {};

		//Workshop supplies
		class vn_b_ammobox_supply_06 {};

		//Sandbag supplies
		class vn_b_ammobox_supply_10 {};

		//Small US ammo
		class C_supplyCrate_F
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};
		//MODERN LOGISTICS/MEDICAL/AMMO BOXES
		class Box_NATO_Ammo_F
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};
		class B_CargoNet_01_ammo_F
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};
		class C_IDAP_supplyCrate_F
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};
		class rhsusf_mags_crate 
		{
			item_weight = 50;
			item_size = 5;
			spawn_distance = 2;
			rotation_offset = 0;
		};
		class HLC_SG510_ammobox : Box_NATO_Ammo_F {};
	
		//SOG ammo
		class vn_b_ammobox_sog // ammo
        {
            item_weight = 100;
            item_size = 2.5;
            spawn_distance = 3;
            rotation_offset = 0;
        };
		//US Ammo
		class vn_b_ammobox_supply_01 : Box_NATO_Ammo_F {};
		
		//Medical supplies
		class vn_b_ammobox_supply_03 : vn_b_ammobox_sog {};
		//Food supplies
		class vn_b_ammobox_supply_02 : vn_b_ammobox_supply_03 {};

		//Resupply Fuel/Repair/Ammo
		class vn_b_ammobox_supply_07
		{
				item_weight = 400;
				item_size = 10;
		};
		class vn_b_ammobox_supply_08 : vn_b_ammobox_supply_07 {};

		class vn_b_ammobox_supply_09 : vn_b_ammobox_supply_07 {};

		/* Huron cargo container used to package wrecked vehicles */
		class B_Slingload_01_Cargo_F
		{
			item_weight = 600;
			item_size = 7.5;
			spawn_distance = 8;
			rotiation_offset = 0;
		};

		//Medium komex containers
		class vn_us_komex_medium_01 : B_Slingload_01_Cargo_F {};
		class vn_us_komex_medium_02 : vn_us_komex_medium_01 {};
		class vn_us_komex_medium_03 : vn_us_komex_medium_01 {};
		class Land_MobileLandingPlatform_01_F : rhsusf_mags_crate {};

		///////////////////
		////  STATICS  ////
		///////////////////
		class vn_static_tiny
		{
			item_weight = 50;
			item_size = 1;
			spawn_distance = 2;
			rotation_offset = 0;
		};

		class vn_static_small
		{
			item_weight = 100;
			item_size = 2.5;
			spawn_distance = 3;
			rotation_offset = 0;
		};

		class vn_static_large
		{
			item_weight = 600;
			item_size = 7.5;
			spawn_distance = 4;
			rotation_offset = 0;
		};
		
		class RHS_M119_D : vn_static_large {};
		class vn_b_army_static_mortar_m2 : vn_static_tiny {};
		class vn_b_army_static_mortar_m29 : vn_static_tiny {};
		class vn_b_sf_static_mortar_m2 : vn_static_tiny {};
		class vn_b_sf_static_mortar_m29 : vn_static_tiny {};
		class vn_b_army_static_m1919a6 : vn_static_tiny {};
		class vn_b_sf_static_m1919a6 : vn_static_tiny {};
		class vn_b_army_static_m1919a4_low : vn_static_tiny {};
		class vn_b_army_static_m1919a4_high : vn_static_tiny {};
		class vn_b_sf_static_m1919a4_low : vn_static_tiny {};
		class vn_b_sf_static_m1919a4_high : vn_static_tiny {};
		class vn_b_army_static_m2_low : vn_static_tiny {};
		class vn_b_sf_static_m2_low : vn_static_tiny {};
		class vn_b_army_static_m2_high : vn_static_tiny {};
		class vn_b_sf_static_m2_high : vn_static_tiny {};
		class vn_b_army_static_m60_low : vn_static_tiny {};
		class vn_b_sf_static_m60_low : vn_static_tiny {};
		class vn_b_army_static_m60_high : vn_static_tiny {};
		class vn_b_sf_static_m60_high : vn_static_tiny {};
		class vn_b_sf_static_m40a1rr : vn_static_small {};
		//TODO - Bump these to large when slingloading is added to M45s
		class vn_b_army_static_m45 : vn_static_small {};
		class vn_b_sf_static_m45 : vn_static_small {};
		class vn_b_army_static_m101_01 : vn_static_large {};
		class vn_b_army_static_m101_02 : vn_static_large {};
		class vn_b_sf_static_m101_01 : vn_static_large {};
		class vn_b_sf_static_m101_02 : vn_static_large {}
		class vn_i_static_m101_01 : vn_static_large {};
		class vn_i_static_m101_02 : vn_static_large {};
		class vn_i_marines_static_m101_01 : vn_static_large {};
		class vn_i_marines_static_m101_02 : vn_static_large {};

		class vn_i_static_mortar_m2 : 	vn_b_army_static_mortar_m2 {};
		class vn_i_static_mortar_m29 : 	vn_b_army_static_mortar_m29 {};
		class vn_i_static_m1919a6 : 	vn_b_army_static_m1919a6 {};
		class vn_i_static_m1919a4_low : 	vn_b_army_static_m1919a4_low {};
		class vn_i_static_m1919a4_high :	vn_b_army_static_m1919a4_high {};
		class vn_i_static_m2_low : 	vn_b_army_static_m2_low {};
		class vn_i_static_m2_high : 	vn_b_army_static_m2_high {};
		class vn_i_static_m60_low : 	vn_b_army_static_m60_low {};
		class vn_i_static_m60_high : 	vn_b_army_static_m60_high {};
		class vn_i_army_static_m45 : 	vn_b_army_static_m45 {};

		class vn_o_nva_static_rpd_high : 	vn_static_tiny {};
		class vn_o_nva_static_dshkm_high_01 :	vn_static_tiny {};
		class vn_o_nva_static_dshkm_high_02 : 	vn_static_tiny {};
		class vn_o_nva_static_dshkm_low_01 :	vn_static_tiny {};
		class vn_o_nva_static_dshkm_low_02 :	vn_static_tiny {};
		class vn_o_nva_static_mortar_type53 : 	vn_static_tiny {};
		class vn_o_nva_static_mortar_type63 : 	vn_static_tiny {};

		class vn_o_nva_navy_static_rpd_high : 		vn_static_tiny {};
		class vn_o_nva_navy_static_dshkm_high_01 :	vn_static_tiny {};
		class vn_o_nva_navy_static_dshkm_high_02: 	vn_static_tiny {};
		class vn_o_nva_navy_static_dshkm_low_01 :	vn_static_tiny {};
		class vn_o_nva_navy_static_dshkm_low_02 :	vn_static_tiny {};
		class vn_o_nva_navy_static_mortar_type53 : 	vn_static_tiny {};
		class vn_o_nva_navy_static_mortar_type63 : 	vn_static_tiny {};

		class vn_o_vc_static_rpd_high : 		vn_static_tiny {};
		class vn_o_vc_static_dp28_high : 	vn_static_tiny {};
		class vn_o_vc_static_dshkm_high_01 :	vn_static_tiny {};
		class vn_o_vc_static_dshkm_high_02 : 	vn_static_tiny {};
		class vn_o_vc_static_dshkm_low_01 :	vn_static_tiny {};
		class vn_o_vc_static_dshkm_low_02 :	vn_static_tiny {};
		class vn_o_vc_static_mortar_type53 : 	vn_static_tiny {};
		class vn_o_vc_static_mortar_type63 : 	vn_static_tiny {};
		
		//MODERN
		class B_Boat_Transport_01_F : vn_static_large {};
		class B_SDV_01_F : vn_static_large {};
		class CUP_B_M1030_USA : vn_static_small {};
		class B_Quadbike_01_F : vn_static_small {};
	
		

    };
};
