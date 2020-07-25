// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class BW_Mod_Custom
	{
		units[] = {
			"BW_m4_body_co",
			"BW_akm_neon_co",
			"BW_PCU5Jacket_bwblackcamo_co",
			"BW_PCU5Jacket_nopatches_bwpunisher_co",
			"BW_PCU5Jacket_nopatches_bwcro_co",
			"BW_PCU5Jacket_nopatches_bwbih_co",
			"BW_PCU5Jacket_bwcamo_co",
			"BW_balaklava_3holes_dpool_co",
			"BW_tshirt_white_bwporno_co",
			"BW_tshirt_white_bwcamo_co",
			"BW_tshirt_white_bwpunisher_co",
			"BW_M65_Jacket_bwcamo_co",
			"BW_M65Custom",
			"BW_riders_jacket_bwironmaiden_co",
			"BW_Hoodie_FU_co",
			"BW_athleticShoes_bwnb_co",
			"BW_zatvorenik_top_co",
			"BW_zatvorenik_pants_co",
			"BW_Camo_MilitaryBoots_co",
			"BW_cargoPants_co",
			"BW_balaclava_camoskull_co",
			"BW_BoonieHat_camo_co",
			"BW_alicebackpack_co",
			"Billboard_Custom_Color",
			"BW_Plakat_Survivor_City",
			"BW_Plakat_Balkan_Warlords"

		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters",
			"DZ_Characters_Heads",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Characters_Tops",
			"DZ_Characters_Masks",
			"DZ_Characters_Headgear",
			"DZ_Gear_Camping",
			"DZ_Gear_Crafting",
			"DZ_Gear_Tools",
			"DZ_Gear_Containers",
			"DZ_Gear_Consumables",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Firearms",
			"DZ_Pistols",
			"DZ_Data",
			"DZ_Gear_Navigation",
			"DZ_Weapons_Melee_Blade",
			"DZ_Characters_Belts",
			"DZ_Structures_Residential",
			"DZ_Radio",
			"DZ_Scripts",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"

		};
	};
};
class cfgMods
{
	class BW_Gear_Pack_Mod
	{
		dir = "BW_Gear_Pack_Mod";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Balkan Warlords Mod";
		credits = "Svetistrpo, Killarth, Tkelch";
		author = "Svetistrpo, Killarth, Tkelch";
		//authorID="0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] =
		{
			"World",
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = { "BW_Gear_Pack_Mod/scripts/3_Game" };
			};
			class imageSets
			{
				files[] = { "BW_Gear_Pack_Mod/GUI/HUD/logo.imageset" };
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "BW_Gear_Pack_Mod/scripts/4_World" };
			};
			class missionScriptModule
			{
				value = "";
				files[] = { "BW_Gear_Pack_Mod/scripts/5_Mission" };
			};
		};
	};
};
class CfgAddons
{
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class DayZ
		{
			list[] =
			{
				"DZ_A_Airport",
				"DZ_Animals",
				"DZ_Animals_AnimConfig",
				"DZ_Animals_Birds",
				"DZ_Animals_Birds_Chicken",
				"DZ_Animals_Birds_Cock",
				"DZ_Animals_Birds_Crow",
				"DZ_Animals_Birds_hawk",
				"DZ_Animals_Birds_Seagull",
				"DZ_Animals_Cow",
				"DZ_Animals_Deer",
				"DZ_Animals_Dogs_Fin",
				"DZ_Animals_Dogs_Pastor",
				"DZ_Animals_Goat",
				"DZ_Animals_Insect",
				"DZ_Animals_Rabbit",
				"DZ_Animals_Rat",
				"DZ_Animals_Sheep",
				"DZ_Animals_WildBoar",
				"DZ_Anims",
				"DZ_Anims_Config_Sdr",
				"DZ_Anims_Config_Wmn",
				"DZ_Anims_Config_Zmb",
				"DZ_Buildings",
				"DZ_Buildings2",
				"DZ_Buildings2_A_Crane_02",
				"DZ_Buildings2_A_GENERALSTORE_01",
				"DZ_Buildings2_A_Pub",
				"DZ_Buildings2_A_Statue",
				"DZ_Buildings2_Barn_Metal",
				"DZ_Buildings2_BuildingParts",
				"DZ_Buildings2_BuildingParts_Signs",
				"DZ_Buildings2_BuildingParts_Signs_TEC",
				"DZ_Buildings2_Church_01",
				"DZ_Buildings2_Farm_Cowshed",
				"DZ_Buildings2_Farm_WTower",
				"DZ_Buildings2_HouseBlocks_HouseBlock_A",
				"DZ_Buildings2_HouseBlocks_HouseBlock_B",
				"DZ_Buildings2_HouseBlocks_HouseBlock_C",
				"DZ_Buildings2_HouseBlocks_HouseBlock_D",
				"DZ_Buildings2_Ind_CementWorks_Ind_Dopravnik",
				"DZ_Buildings2_Ind_CementWorks_Ind_Expedice",
				"DZ_Buildings2_Ind_CementWorks_Ind_MalyKomin",
				"DZ_Buildings2_Ind_CementWorks_Ind_Mlyn",
				"DZ_Buildings2_Ind_CementWorks_Ind_Pec",
				"DZ_Buildings2_Ind_CementWorks_Ind_SiloMale",
				"DZ_Buildings2_Ind_CementWorks_Ind_SiloVelke",
				"DZ_Buildings2_Ind_CementWorks_Ind_Vysypka",
				"DZ_Buildings2_Ind_Garage01",
				"DZ_Buildings2_Ind_Pipeline_IndPipe2",
				"DZ_Buildings2_Ind_Shed_01",
				"DZ_Buildings2_Ind_Shed_02",
				"DZ_Buildings2_Ind_Tank",
				"DZ_Buildings2_Ind_Workshop01",
				"DZ_Buildings2_Misc_Cargo",
				"DZ_Buildings2_Misc_PowerStation",
				"DZ_Buildings2_Misc_WaterStation",
				"DZ_Buildings2_Rail_House_01",
				"DZ_Buildings2_Shed_small",
				"DZ_Buildings2_Shed_wooden",
				"DZ_Characters",
				"DZ_Characters_Backpacks",
				"DZ_Characters_Glasses",
				"DZ_Characters_Gloves",
				"DZ_Characters_Headgear",
				"DZ_Characters_Heads",
				"DZ_Characters_Pants",
				"DZ_Characters_Masks",
				"DZ_Characters_Shoes",
				"DZ_Characters_Tops",
				"DZ_Characters_Vests",
				"DZ_Code",
				"DZ_Data",
				"DZ_Data_Data_ParticleEffects",
				"DZ_Functions",
				"DZ_Gear_Crafting",
				"DZ_Gear_Cooking",
				"DZ_Gear_Consumables",
				"DZ_Gear_Containers",
				"DZ_Gear_Drinks",
				"DZ_Gead_Food",
				"DZ_Gear_Medical",
				"DZ_Gear_Navigation",
				"DZ_Gear_Optics",
				"DZ_Gear_Tools",
				"DZ_Gear_Traps",
				"DZ_Items",
				"DZ_Items_Drinks",
				"DZ_Items_Food",
				"DZ_Items_Medical",
				"DZ_Items_Misc",
				"DZ_Items_Trash",
				"DZ_Items_Weapons",
				"DZ_Misc",
				"DZ_Misc2",
				"DZ_Misc2_Samsite",
				"DZ_Misc3",
				"DZ_Modules",
				"DZ_Roads2",
				"DZ_Roads2_Bridge",
				"DZ_Roads2_Dam",
				"DZ_Rocks2",
				"DZ_Rocks3",
				"DZ_Signs2",
				"DZ_Server_Data",
				"DZ_Spawn_Proxies",
				"DZ_Sounds_Arma2",
				"DZ_Sounds_Mod",
				"DZ_Sounds_Effects",
				"DZ_Structures",
				"DZ_Structures_A_BuildingWIP",
				"DZ_Structures_A_CraneCon",
				"DZ_Structures_A_MunicipalOffice",
				"DZ_Structures_A_TVTower",
				"DZ_Structures_Barn_W",
				"DZ_Structures_Castle",
				"DZ_Structures_Furniture",
				"DZ_Structures_Houses",
				"DZ_Structures_House_A_FuelStation",
				"DZ_Structures_House_A_Hospital",
				"DZ_Structures_House_A_Office01",
				"DZ_Structures_House_A_Office02",
				"DZ_Structures_House_A_StationHouse",
				"DZ_Structures_House_Church_02",
				"DZ_Structures_House_Church_03",
				"DZ_Structures_House_Church_05R",
				"DZ_Structures_House_HouseBT",
				"DZ_Structures_House_HouseV",
				"DZ_Structures_House_HouseV2",
				"DZ_Structures_House_Street_Booth",
				"DZ_Structures_Ind",
				"DZ_Structures_Ind_Pipeline_IndPipe1",
				"DZ_Structures_Ind_Quarry",
				"DZ_Structures_Ind_SawMill",
				"DZ_Structures_Mil",
				"DZ_Structures_Misc",
				"DZ_Structures_Misc_Powerlines",
				"DZ_Structures_NAV",
				"DZ_Structures_Nav_Boathouse",
				"DZ_Structures_Nav_Pier",
				"DZ_Structures_Pond",
				"DZ_Structures_Rail",
				"DZ_Structures_Rail_Rail_Station_big",
				"DZ_Structures_Rail_Railway",
				"DZ_Structures_Ruins",
				"DZ_Structures_Shed_Ind",
				"DZ_Structures_Shed_Shed_Small",
				"DZ_Structures_Tenement",
				"DZ_Structures_Wall",
				"DZ_Structures_Ship_Wreck",
				"DZ_UI",
				"DZ_UIFonts",
				"DZ_UIFonts_CoreConfigOverwrite",
				"DZ_Vehicles_Tracked",
				"DZ_Vehicles_Wheeled",
				"DZ_Vehicles_Wheeled_Datsun_Armed",
				"DZ_Vehicles_Wheeled_Hilux_Armed",
				"DZ_Vehicles_Wrecks",
				"DZ_Weapons_Magazines",
				"DZ_Weapons_Lights",
				"DZ_Weapons_Muzzles",
				"DZ_Weapons_Optics",
				"DZ_Weapons_Supports",
				"DZ_Weapons_Animations",
				"DZ_Weapons_Ammunition",
				"DZ_Weapons_Firearms",
				"DZ_Weapons_Firearms_Winchester70",
				"DZ_Weapons_Firearms_SVD",
				"DZ_Weapons_Melee",
				"DZ_Weapons_Melee_Blunt",
				"DZ_Weapons_Melee_Blade",
				"DZ_Weapons_Melee_Powered",
				"DZ_Weapons_Misc",
				"DZ_Weapons_Explosives",
				"DZ_Weapons_Firearms_aug",
				"DZ_Weapons_Firearms_M4",
				"DZ_Weapons_Firearms_MosinNagant",
				"DZ_Weapons_Firearms_SKS",
				"DZ_Weapons_Firearms_Ruger1022",
				"DZ_Weapons_Pistols_1911",
				"DZ_Weapons_Pistols_Cz75",
				"DZ_Weapons_Pistols_Fnx45",
				"DZ_Weapons_Pistols_Magnum",
				"DZ_Weapons_Pistols_Mkii",
				"DZ_Weapons_Projectiles",
				"DZ_Weapons_Shotguns",
				"DZ_Worlds_Chernarusplus_World",
				"DZ_Worlds_Test_Terrain",
				"JM_CF_Scripts"
			};
		};
	};
};
class CfgLanguages
{
	class Hrvatski
	{
		name = "#options_language_HR";
	};
};
//////////////////////////////////////////////////////////////////////
//	Topljenje
//	
//	Tranzicije iz sirovog u topljeno
// cooking metod za kovanice = 1 (Direkt slot na peći)
// cooking metod za barove = 2 (Lonac napunjen benzinom)
// BUG sa rukama je samo u offline modu/na serveru radi normalno
//////////////////////////////////////////////////////////////////////

class BaseMetalStageTransitions  // BaseFoodStageTransitions
{
	class Ruda  // Raw
	{
		class RoughMelting	//ToBaked
		{
			transition_to = 2;
			cooking_method = 1;
		};
		class FineMelting	//ToBoiled
		{
			transition_to = 3;
			cooking_method = 2;
		};
	//		class ToDried
	//		{
	//			transition_to = 4;
	//			cooking_method = 3;
	//		};
	//		class ToBurned
	//		{
	//			transition_to = 5;
	//			cooking_method = 3;
	//		};
	//		class ToRotten
	//		{
	//			transition_to = 6;
	//			cooking_method = 4;
	//		};
	};


	//class Rotten
	//{
	//	class ToBurned
	//	{
	//		transition_to = 5;
	//		cooking_method = 1;
	//	};
	//};

	//class Baked				// Ako je RoughtMelt onda mu ne treba cooked to burnt state
	//{
	//	class ToBurned
	//	{
	//		transition_to = 5;
	//		cooking_method = 1;
	//	};
	//	class ToRotten
	//	{
	//		transition_to = 6;
	//		cooking_method = 4;
	//	};
	//};

	//class Boiled				// Ako je FineMelt onda mu ne treba cooked to burnt state
	//{
	//	class ToBaked
	//	{
	//		transition_to = 2;
	//		cooking_method = 1;
	//	};
	//	class ToRotten
	//	{
	//		transition_to = 6;
	//		cooking_method = 4;
	//	};
	//};

	//class Dried
	//{
	//	class ToBaked
	//	{
	//		transition_to = 5;
	//		cooking_method = 1;
	//	};
	//	class ToBoiled
	//	{
	//		transition_to = 3;
	//		cooking_method = 2;
	//	};
	//	class ToBurned
	//	{
	//		transition_to = 5;
	//		cooking_method = 3;
	//	};
	//};

	//class Burned
	//{
	//};
};
//class NotCookable
//{
//	class Raw
//	{
//		class ToRotten
//		{
//			transition_to = 6;
//			cooking_method = 4;
//		};
//	};
//};
class MetalStageTransitions : BaseMetalStageTransitions
{
};
//class FruitStageTransitions : BaseFoodStageTransitions
//{
//};
//class AnimalCorpsesStageTransitions : BaseFoodStageTransitions
//{
//};
//class MushroomsStageTransitions : BaseFoodStageTransitions
//{
//};
class FoodAnimationSources
{
	class CS_Raw  //CS_Raw
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Baked	//CS_Baked
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
	class CS_Boiled //CS_Boiled
	{
		source = "user";
		animPeriod = 0.0099999998;
		initPhase = 1;
	};
};
//////////////////////////////////////////////////////////////////////
// Kraj topljenje
//////////////////////////////////////////////////////////////////////
class cfgVehicles
{
	// Jakne
	class TacticalShirt_ColorBase;
	class TShirt_ColorBase;
	class Hoodie_ColorBase;
	class M65Jacket_ColorBase;
	class RidersJacket_ColorBase;
	class PrisonUniformJacket;
	// Obuća
	class AthleticShoes_ColorBase;
	class MilitaryBoots_ColorBase;
	// Kape
	class MilitaryBeret_ColorBase;
	class Balaclava3Holes_ColorBase;
	class BalaclavaMask_ColorBase;
	class RadarCap_ColorBase;
	class BoonieHat_ColorBase;
	class Kaciga_ColorBase;
	class Mich2001Helmet;
	// Hlaće
	class CargoPants_ColorBase;
	class PrisonUniformPants;
	// Torbe
	class AliceBag_ColorBase;
	// Billboard
	class Billboard_Custom_Color;
	class Billboard_CustomDouble_Color;

	class BakedBeansCan;
	class BakedBeansCan_Opened;
	class BoxCerealCrunchin;
	class Rice;
	class Edible_Base;
	class Marmalade;
	// Pice
	class SodaCan_ColorBase;
	class Canteen;
	class Vodka;
	class Bottle_Base;
	class WaterBottle;
	class HighCapacityVest_ColorBase;
	// tent
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class LargeTent;

	// Vozila
	class CarScript;
	class Clothing;

	class HatchbackDoors_Driver;
	class HatchbackDoors_CoDriver;
	class HatchbackHood;
	class HatchbackTrunk;
	class OffroadHatchback;
	class DamageSystem;
	class DamageZones;
	class Chassis;
	class Reflector_1_1;
	class Reflector_2_1;
	class WindowFront;
	class Engine;
	class Roof;
	class Front;
	class Back;
	class Fender_1_1;
	class Fender_1_2;
	class Fender_2_1;
	class Fender_2_2;
	class FuelTank;
	class Health;
	class GlobalHealth;
	class Window;
	class Doors;
	class CarDoor;
	class DC_BankingATM;
	class BarrelHoles_ColorBase;
		
///////////////////////////////////////////////////////////////
// *********Barrel za kraftanje/topljenje zlata***********
//
//		7x7 inventory size
//		10x30 (300) slotova
//		Weight sa 10000 smanjena na 1000
//////////////////////////////////////////////////////////////
		class BW_Topionica : BarrelHoles_ColorBase
			{
			displayName = "Peć / Topionica";
			descriptionShort = "Peć / Topionica - Peć za topljenje plemenitih metala | ENG: Furnace";
			lootCategory = "Crafted";
			itemSize[] = { 7,7 };
			weight = 10;

			class Cargo
			{
				itemsCargoSize[] = { 10,30 };
				openable = 0;
				allowOwnedCargoManipulation = 1;
			};
		
		};

		class BW_Pec : BW_Topionica
		{
			scope = 2;
			hiddenSelectionsTextures[] =
			{
				"\dz\gear\cooking\data\stoneground_co.paa",
				"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Objekti\BW_Pec_co.paa",
				"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Objekti\BW_Pec_co.paa"
			};
		};
///////////////////////////////////////////////////////////////
// *********Barrel za kraftanje/topljenje zlata kraj*********
//////////////////////////////////////////////////////////////
	
///////////////////////////////////////////////////////////////
// Bankomat - @Banking
//////////////////////////////////////////////////////////////
		class BW_Bankomat : DC_BankingATM
		{
			scope = 1;
			hiddenSelectionsTextures[] =
			{
				"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Bankomat_co.paa"
			};
		};

//////////////////////////////////////////////////////////////////
// Novo
/////////////////////////////////////////////////////////////////
	class BW_Cedevita_co : Rice
	{
		scope = 2;
		displayName = "Cedevita";
		descriptionShort = "Cedevita";
		model = "\dz\gear\food\Rice.p3d";
		weight = 0;
		class Nutrition
		{
			fullnessIndex = 5;
			energy = 600;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		hiddenSelections[] =
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Cedevita_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Cedevita_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Cedevita_co.paa"
		};
	};
//////////////////////////////////////////////////////////////////
// Kacige
/////////////////////////////////////////////////////////////////
	class BW_Kaciga_BiH : Mich2001Helmet
	{
		displayName = "Kaciga BiH / Helmet BIH";
		descriptionShort = "Kaciga Bosne i Hercegovine / Helmet of Bosnia and Hercegovina";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_BiH.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_BiH.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_BiH.paa"
		};
	};
	class BW_Kaciga_HRV2 : Mich2001Helmet
	{
		displayName = "Kaciga HRV / CRO helmet";
		descriptionShort = "Kaciga HRV / Croatian army helmet";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_HRV2.paa"
		};
	};
	class BW_Kaciga_HRV : Mich2001Helmet
	{
		displayName = "Kaciga HRV / CRO helmet";
		descriptionShort = "Kaciga HRV / Croatian army helmet";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_HRV.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_HRV.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_HRV.paa"
		};
	};
	class BW_Kaciga_SRB : Mich2001Helmet
	{
		displayName = "Kaciga SRB / helmet SRB";
		descriptionShort = "Kaciga Srbija / Serbian army helmet";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_SRB.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_SRB.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_SRB.paa"
		};
	};
	class BW_Kaciga_Camo : Mich2001Helmet
	{
		displayName = "Kaciga Maskirna ";
		descriptionShort = "Kaciga Maskirna / Camo helmet";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_Camo.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_Camo.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_Camo.paa"
		};
	};
	class BW_Kaciga_Camo2 : Mich2001Helmet
	{
		displayName = "Kaciga Maskirna ";
		descriptionShort = "Kaciga Maskirna / Camo helmet";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_Camo2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_Camo2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Kaciga_Camo2.paa"
		};
	};
	////////////////////////////////////////////////////////////
	// Plakati
	////////////////////////////////////////////////////////////
	class BW_Plakat_Campfire : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Campfire";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Campfire.paa"
		};
	};
	class BW_Plakat_Donor : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Campfire";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Donor.paa"
		};
	};
	class BW_Plakat_Pivo : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Pivo";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Pivo.paa"
		};
	};
	class BW_Plakat_Info : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Pivo";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Info.paa"
		};
	};
	class BW_Plakat_Info_Panel : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Pivo";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Info_Panel.paa"
		};
	};
	class BW_Plakat_PijacBW : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Pivo";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_PijacBW.paa"
		};
	};
	class BW_Plakat_PijacZ : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Croatia";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_PijacZ.paa"
		};
	};
	class BW_Plakat_Pivo_Sar : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Pivo Sarajevsko";
		hiddenSelectionsTextures[] =
		{
			"\BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Pivo_Sar.paa"
		};
	};
	class BW_Plakat_Survivor_City : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat";
		descriptionShort = "Survivor City";
		hiddenSelectionsTextures[] = { "BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Survivor_City.paa" };
	};
	class BW_Plakat_Balkan_Warlords : Billboard_Custom_Color
	{
		scope = 2;
		displayName = "BW Plakat 2";
		descriptionShort = "Balkan Warlords";
		hiddenSelectionsTextures[] = { "BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Plakati\BW_Plakat_Balkan_Warlords.paa" };
	};
	////////////////////////////////////////////////////////////////////////
	//Roba
	///////////////////////////////////////////////////////////////////////
	class BW_Torba_HRV2 : AliceBag_ColorBase
	{
		displayName = "Maskirna Torba HRV";
		descriptionShort = "Maskirna HRV Torba / Croatian camo bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_HRV2.paa"
		};
	};
	class BW_Alice_Torba : AliceBag_ColorBase
	{
		displayName = "Maskirna Alice Torba";
		descriptionShort = "BW Maskirna Alice Torba / BW camo Alice bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_alicebackpack_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_alicebackpack_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_alicebackpack_co.paa"
		};
	};
	class BW_Torba_Camo2 : AliceBag_ColorBase
	{
		displayName = "Maskirna Alice Torba";
		descriptionShort = "BW Maskirna Alice Torba / BW camo Alice bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Camo2_co.paa"
		};
	};
	class BW_Torba_Armija_BiH : AliceBag_ColorBase
	{
		displayName = "Maskirna Alice Torba BiH";
		descriptionShort = "BW Maskirna Alice Torba BIH / Camo Bosnia and Hercegovina bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Armija_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Armija_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Armija_BiH_co.paa"
		};
	};
	class BW_Torba_Camo1 : AliceBag_ColorBase
	{
		displayName = "Maskirna Alice Torba";
		descriptionShort = "BW Maskirna Alice Torba / BW camo Alice bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Camo1_co.paa"
		};
	};
	class BW_Torba_Vojska_HRV : AliceBag_ColorBase
	{
		displayName = "Maskirna Alice Torba HRV";
		descriptionShort = "BW Maskirna Alice Torba HRV / BW Croatia camo bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Vojska_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Vojska_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_Vojska_HRV_co.paa"
		};
	};
	class BW_Torba_SRB : AliceBag_ColorBase
	{
		displayName = "Maskirna Torba SRB";
		descriptionShort = "BW Maskirna Alice Torba Srbija / BW Serbian Alice camo bag";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Torba_SRB_co.paa"
		};
	};

	class BW_Sesiric_Camo : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni";
		descriptionShort = "BW Šeširić Maskirni / BW Camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_BoonieHat_camo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_BoonieHat_camo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_BoonieHat_camo_co.paa"
		};
	};
	class BW_Sesiric_HRV2 : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni HRV";
		descriptionShort = "HRV Šeširić Maskirni / Croatian camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_HRV2.paa"
		};
	};
	class BW_Sesiric_SRB : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni SRB";
		descriptionShort = "Šeširić Maskirni Srbija / Serbian camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_SRB_co.paa"
		};
	};
	class BW_Sesiric_Camo2 : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni";
		descriptionShort = "BW Šeširić Maskirni / BW camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Camo2_co.paa"
		};
	};
	class BW_Sesiric_Armija_BiH : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni BiH";
		descriptionShort = "BW Šeširić Maskirni Bosne i Hercegovine / BW Bosnia and Hercegovina camo hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Armija_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Armija_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Armija_BiH_co.paa"
		};
	};
	class BW_Sesiric_Camo1 : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni";
		descriptionShort = "BW Šeširić Maskirni / BW camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Camo1_co.paa"
		};
	};
	class BW_Sesiric_Vojska_HRV : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni HRV";
		descriptionShort = "BW Šeširić Maskirni Hrvatska / BW Croatian camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Vojska_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Vojska_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_Vojska_HRV_co.paa"
		};
	};
	class BW_Sesiric_CrnoCrveni : BoonieHat_ColorBase
	{
		displayName = "Šeširić Maskirni";
		descriptionShort = "BW Šeširić Maskirni / BW camo boonie hat";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_CrnoCrveni.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_CrnoCrveni.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Sesiric_CrnoCrveni.paa"
		};
	};

	class BW_Balaclava_CamoSkull : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava Maskirna Kostur";
		descriptionShort = "BW Balaclava Maskirna Kostur / BW Camo balaclava skull";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_balaclava_camoskull_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_balaclava_camoskull_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_balaclava_camoskull_co.paa"
		};
	};
	class BW_Balaklava_HRV2 : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava Maskirna";
		descriptionShort = "Balaclava Maskirna / Camo balaclava";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaklava_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaklava_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaklava_HRV2.paa"
		};
	};

	class BW_Balaclava_BiH : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava BiH";
		descriptionShort = "BW Balaclava Bosne i Hercegovine / BW Bosnia and Hercegovina balaclava";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_BiH.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_BiH.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_BiH.paa"
		};
	};
	class BW_Balaclava_HRV : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava HRV";
		descriptionShort = "BW Balaclava Hrvatska / BW Balaclava Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_HRV.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_HRV.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_HRV.paa"
		};
	};
	class BW_Balaclava_SRB : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava SRB";
		descriptionShort = "BW Balaclava Srbija / BW Balaclava Serbia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_SRB.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_SRB.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_SRB.paa"
		};
	};
	class BW_Balaclava_Camo : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava Maskirna";
		descriptionShort = "BW Balaclava Maskirna / BW Camo balaclava";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Camo.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Camo.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Camo.paa"
		};
	};
	class BW_Balaclava_Camo2 : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava Maskirna";
		descriptionShort = "BW Balaclava Maskirna / BW Camo balaclava";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Camo2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Camo2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Camo2.paa"
		};
	};

	class BW_Hlace_Camo : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače";
		descriptionShort = "BW Maskirne Hlače / BW Camo cargo pants ";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_cargoPants_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_cargoPants_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_cargoPants_co.paa"
		};
	};
	class BW_Hlace_HRV2 : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače";
		descriptionShort = "BW Maskirne Hlače / BW Camo cargo pants";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_HRV2.paa"
		};
	};
	class BW_Hlace_SRB : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače SRB";
		descriptionShort = "Maskirne Hlače Srbija / Camo cargo pants Serbia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_SRB_co.paa"
		};
	};
	class BW_Hlace_Camo2 : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače";
		descriptionShort = "BW Maskirne Hlače / BW camo cargo pants ";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Camo2_co.paa"
		};
	};
	class BW_Hlace_Armija_BiH : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače BiH";
		descriptionShort = "BW Maskirne Hlaće Bosne i Hercegovine / BW Camo pants Bosnia and Hercegovina";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Armija_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Armija_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Armija_BiH_co.paa"
		};
	};
	class BW_Hlace_Camo1 : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače";
		descriptionShort = "BW Maskirne Hlače / BW camo pants";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Camo1_co.paa"
		};
	};
	class BW_Hlace_Vojska_HRV : CargoPants_ColorBase
	{
		displayName = "Maskirne Hlače HRV";
		descriptionShort = "BW Maskirne Hlaće Hrvatska / BW Camo pants Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Vojska_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Vojska_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_Vojska_HRV_co.paa"
		};
	};
	class BW_Hlace_CrnoCrvena : CargoPants_ColorBase
	{
		displayName = "Crno Crvene Hlače";
		descriptionShort = "Crno Crvene Hlače / Black and red cargo pants";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_CrnoCrvena.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_CrnoCrvena.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hlace_CrnoCrvena.paa"
		};
	};
	class BW_Cizme_HRV2 : MilitaryBoots_ColorBase
	{
		displayName = "HRV Čizme";
		descriptionShort = "Čizme HRV / Boots Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Cizme_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Cizme_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Cizme_HRV2.paa"
		};
	};
	class BW_Camo_Cizme : MilitaryBoots_ColorBase
	{
		displayName = "Maskirne Čizme";
		descriptionShort = "BW Maskirne Čizme / BW Camo boots";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Camo_MilitaryBoots_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Camo_MilitaryBoots_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Camo_MilitaryBoots_co.paa"
		};
	};

	class BW_Zatvorenik_Hlace : PrisonUniformPants
	{
		displayName = "Hlače zatvorenika";
		descriptionShort = "Hlače zatvorenika / Prisoner uniform pants";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_zatvorenik_pants_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_zatvorenik_pants_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_zatvorenik_pants_co.paa"
		};
	};
	class BW_Zatvorenik_Kosulja : PrisonUniformJacket
	{
		displayName = "Košulja zatvorenika";
		descriptionShort = "Košulja zatvorenika / Prisoner uniform jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_zatvorenik_top_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_zatvorenik_top_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_zatvorenik_top_co.paa"
		};
	};

	class BW_Patike_Bijele : AthleticShoes_ColorBase
	{
		displayName = "Bijele Patike";
		descriptionShort = "Bijele Patike / White sneakers";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_athleticShoes_bwnb_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_athleticShoes_bwnb_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_athleticShoes_bwnb_co.paa"
		};
	};

	class BW_Duksa_FU : Hoodie_ColorBase
	{
		displayName = "F You Duksa";
		descriptionShort = "Duksa by Killarth";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hoodie_FU_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hoodie_FU_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hoodie_FU_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Hoodie_FU_co.paa"
		};
	};
	class BW_Kozna_Jakna_IronMaiden : RidersJacket_ColorBase
	{
		displayName = "Kožna Jakna";
		descriptionShort = "BW Kožna Jakna Iron Maiden / BW Iron Maiden leather jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_riders_jacket_bwironmaiden_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_riders_jacket_bwironmaiden_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_riders_jacket_bwironmaiden_co.paa"
		};
	};
	class BW_RidersJacket_MCInfected : RidersJacket_ColorBase
	{
		displayName = "Kožna Jakna MC Infected";
		descriptionShort = "Kožna Jakna MC Infected by Kilarth";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_RidersJacket_MCInfected_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_RidersJacket_MCInfected_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_RidersJacket_MCInfected_co.paa"
		};
	};
	class BW_M65_Jakna_Skull : M65Jacket_ColorBase
	{
		displayName = "M65 Skull";
		descriptionShort = "Created By Killarth - Balkan Warlords Team";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Custom_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Custom_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Custom_co.paa"
		};
	};
	class BW_M65_Jakna_HRV2 : M65Jacket_ColorBase
	{
		displayName = "M65 Jakna HRV";
		descriptionShort = "M65 Jakna HRV / M65 Jacket Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Jakna_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Jakna_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Jakna_HRV2.paa"
		};
	};
	class BW_M65_Jakna_Camo : M65Jacket_ColorBase
	{
		displayName = "Vojna Jakna";
		descriptionShort = "M65 Jakna Maskirna / M65 Camo jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Jacket_bwcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Jacket_bwcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M65_Jacket_bwcamo_co.paa"
		};
	};

	class BW_Majica_Bijela_Punisher : TShirt_ColorBase
	{
		displayName = "Punisher Majica";
		descriptionShort = "Punisher Majica / Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwpunisher_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwpunisher_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwpunisher_co.paa"
		};
	};
	class BW_Majica_Jebivetar : TShirt_ColorBase
	{
		displayName = "Jebivjetar Majica";
		descriptionShort = "Jebivjetar Majica / FCUK Wind Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Jebivetar_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Jebivetar_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Jebivetar_co.paa"
		};
	};
	class BW_Majica_Betmen : TShirt_ColorBase
	{
		displayName = "Batman Majica";
		descriptionShort = "Batman Majica / Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Betmen_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Betmen_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Betmen_co.paa"
		};
	};
	class BW_Majica_Superman : TShirt_ColorBase
	{
		displayName = "Superman Majica";
		descriptionShort = "Superman Majica / Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Superman.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Superman.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Superman.paa"
		};
	};
	class BW_Majica_Osjecajno : TShirt_ColorBase
	{
		displayName = "Majica Osječajno";
		descriptionShort = "Reklamna majica Osječajnog piva / Osječajno beer Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Osjecajno.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Osjecajno.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_Osjecajno.paa"
		};
	};
	class BW_Majica_F : TShirt_ColorBase
	{
		displayName = "I'm Badass Girl";
		descriptionShort = "Majica s kratkim rukavima / Badass TShirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_F_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_F_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Majica_F_co.paa"
		};
	};

	class BW_Majica_Camo : TShirt_ColorBase
	{
		displayName = "Maskirna Majica";
		descriptionShort = "BW Maskirna Majica / BW Camo Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwcamo_co.paa"
		};
	};

	class BW_Majica_Porno : TShirt_ColorBase
	{
		displayName = "Porno Star Majica";
		descriptionShort = "Porno Star Majica / Porn star Tshirt";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwporno_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwporno_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_tshirt_white_bwporno_co.paa"
		};
	};

	class BW_Balaclava_Death : BalaclavaMask_ColorBase
	{
		displayName = "Balaclava Death";
		descriptionShort = "Created By Killarth - Balkan Warlords Team";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Death_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Death_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Balaclava_Death_co.paa"
		};
	};
	class BW_Balaklava_3Rupe_DP : Balaclava3Holes_ColorBase
	{
		displayName = "DeadPool Balaklava";
		descriptionShort = "Balaklava za ozbiljne ljude / Balaclava for serious dudes";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_balaklava_3holes_dpool_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_balaklava_3holes_dpool_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_balaklava_3holes_dpool_co.paa"
		};
	};

	class BW_Jakna_Camo : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna";
		descriptionShort = "Balkan Warlords Jakna Maskirna / BW Camo jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_bwcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_bwcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_bwcamo_co.paa"
		};
	};
	class BW_Jakna_HRV2 : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna HRV";
		descriptionShort = "Jakna Maskirna HRV / Camo jacket Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_HRV2.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_HRV2.paa"
		};
	};
	class BW_Jakna_SRB : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna SRB";
		descriptionShort = "Jakna Maskirna Srbija / Camo jacket Serbia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_SRB_co.paa"
		};
	};
	class BW_Armija_BiH_Jakna : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna BiH";
		descriptionShort = "Balkan Warlords Jakna Maskirna BIH / BW Camo jacket Bosnia and Hercegovina";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Armija_BiH_Jakna_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Armija_BiH_Jakna_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Armija_BiH_Jakna_co.paa"
		};
	};
	class BW_Camo1_Jakna : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna";
		descriptionShort = "Balkan Warlords Jakna Maskirna / BW Camo jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Camo1_Jakna_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Camo1_Jakna_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Camo1_Jakna_co.paa"
		};
	};
	class BW_Vojska_HRV_Jakna : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna HRV";
		descriptionShort = "Balkan Warlords Jakna Maskirna Hrvatska / BW Camo jacket Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Vojska_HRV_Jakna_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Vojska_HRV_Jakna_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Vojska_HRV_Jakna_co.paa"
		};
	};
	class BW_Jakna_Crna_BiH : TacticalShirt_ColorBase
	{
		displayName = "BW Jakna Bosna";
		descriptionShort = "Balkan Warlords Jakna BIH / BW Jacket Bosnia and Hercegovina";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwbih_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwbih_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwbih_co.paa"
		};
	};

	class BW_Jakna_Crna_HRV : TacticalShirt_ColorBase
	{
		displayName = "BW Jakna Hrvatska";
		descriptionShort = "Balkan Warlords Jakna Hrvatske / BW Jacket Croatia";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwcro_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwcro_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwcro_co.paa"
		};
	};
	class BW_Jakna_Crna_Punisher : TacticalShirt_ColorBase
	{
		displayName = "Jakna Punisher";
		descriptionShort = "Balkan Warlords Jakna Punisher / BW Jacket Punisher";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwpunisher_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwpunisher_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_nopatches_bwpunisher_co.paa"
		};
	};
	class BW_Jakna_Crna_Camo : TacticalShirt_ColorBase
	{
		displayName = "Maskirno-Crna Jakna";
		descriptionShort = "Balkan Warlords Jakna Maskirno-Crna / BW Camo black jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_bwblackcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_bwblackcamo_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_PCU5Jacket_bwblackcamo_co.paa"
		};
	};
	class BW_Jakna_Camo2 : TacticalShirt_ColorBase
	{
		displayName = "Maskirna Jakna";
		descriptionShort = "Balkan Warlords Jakna Maskirna / BW Camo jacket";
		scope = 2;
		hiddenSelectionsTextures[] =
		{

			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Jakna_Camo2_co.paa"
		};
	};
	class BW_Prsluk_BiH : HighCapacityVest_ColorBase
	{
		displayName = "Prsluk Maskirni BiH";
		descriptionShort = "Prsluk Maskirni BIH / Camo vest Bosnia and Hercegovina";
		scope = 2;
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_BiH_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_BiH_co.paa"
		};
	};
	class BW_Prsluk_HRV2 : HighCapacityVest_ColorBase
	{
		displayName = "Prsluk Maskirni HRV";
		descriptionShort = "Prsluk Maskirni HRV / Camo vest Croatia";
		scope = 2;
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_HRV2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_HRV2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_HRV2_co.paa"
		};
	};
	class BW_Vesta_SRB : HighCapacityVest_ColorBase
	{
		displayName = "Prsluk Maskirni SRB ";
		descriptionShort = "Prsluk Maskirni Srbija / Camo vest Serbia";
		scope = 2;
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Vesta_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Vesta_SRB_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Vesta_SRB_co.paa"
		};
	};
	class BW_Prsluk_Camo1 : HighCapacityVest_ColorBase
	{
		displayName = "Prsluk Maskirni";
		descriptionShort = "Prsluk Maskirni / Camo vest";
		scope = 2;
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_Camo1_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_Camo1_co.paa"
		};
	};
	class BW_Prsluk_HRV : HighCapacityVest_ColorBase
	{
		displayName = "Prsluk Maskirni HRV";
		descriptionShort = "Prsluk Maskirni Hrvatska / Camo vest Croatia";
		scope = 2;
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_HRV_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_HRV_co.paa"
		};
	};
	class BW_Prsluk_Camo2 : HighCapacityVest_ColorBase
	{
		displayName = "Prsluk Maskirni HRV";
		descriptionShort = "Prsluk Maskirni Hrvatska / Camo vest Croatia";
		scope = 2;
		visibilityModifier = 0.69999999;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_Camo2_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Prsluk_Camo2_co.paa"
		};
	};

	class BW_Krastavci : Marmalade
	{
		scope = 2;
		displayName = "Kiseli krastavci";
		descriptionShort = "Kiseli krastavci / Pickles";
		model = "\dz\gear\food\Marmalade.p3d";
		weight = 0;
		itemSize[] = { 1,1 };
		varQuantityInit = 340;
		varQuantityMin = 0;
		varQuantityMax = 340;
		absorbency = 0.89999998;
		hiddenSelections[] =
		{
			"camoGround",
			//"camoMale",
			//"camoFemale"
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Krastavci.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Krastavci.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Krastavci.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\marmalade_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 280;
			water = 30;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class BW_Majoneza : Marmalade
	{
		scope = 2;
		displayName = "Majoneza";
		descriptionShort = "Majoneza / Egg mayo .";
		model = "\dz\gear\food\Marmalade.p3d";
		weight = 0;
		itemSize[] = { 1,1 };
		varQuantityInit = 340;
		varQuantityMin = 0;
		varQuantityMax = 340;
		absorbency = 0.89999998;
		hiddenSelections[] =
		{
			"camoGround",
			//"camoMale",
			//"camoFemale"
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Majoneza.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Majoneza.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Majoneza.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\marmalade_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 280;
			water = 30;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class BW_Votka : Bottle_Base
	{
		scope = 0;
		displayName = "Votka";
		descriptionShort = "Votka Ruska, na crno uvezeno, pravi otrov / Russian killer vodka - Do not drink and drive";
		model = "\dz\gear\drinks\VodkaBottles.p3d";
		weight = 50;
		itemSize[] = { 1,2 };
		SingleUseActions[] =
		{
			507,
			"AT_WASH_HANDS",
			505,
			544
		};
		ContinuousActions[] = { 182,176,169,189,160,108,225,226,234,106 };
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Rakija.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Rakija.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Rakija.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "GlassBottle_in_B_SoundSet";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "GlassBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};

	class BW_Plasticna_boca : WaterBottle
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_WaterBottle0";
		descriptionShort = "$STR_CfgVehicles_WaterBottle1";
		model = "\dz\gear\drinks\WaterBottle.p3d";
		weight = 50;
		itemSize[] = { 1,2 };
		SingleUseActions[] =
		{
			507,
			"AT_WASH_HANDS",
			505,
			544
		};
		ContinuousActions[] = { 182,176,169,189,160,108,225,226,234,106 };
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"zbytek"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterBottle_in_A
				{
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle
				{
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WaterBottle_out_C
				{
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_empty_open
				{
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				class WaterBottle_empty_close
				{
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				class WaterBottle_empty_start
				{
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				class WaterBottle_empty_loop
				{
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				class WaterBottle_empty_end
				{
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	class BW_Rakija_Plasticna : BW_Plasticna_boca
	{
		scope = 2;
		displayName = "Rakija";
		descriptionShort = "Rakija šljivovica / Homemade drink and medecine - Do not drink and drive";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Rakija_Plastic.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterBottle_in_A
				{
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle
				{
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WaterBottle_out_C
				{
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_empty_open
				{
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				class WaterBottle_empty_close
				{
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				class WaterBottle_empty_start
				{
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				class WaterBottle_empty_loop
				{
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				class WaterBottle_empty_end
				{
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};


	class BW_Sok_Jabuka : BW_Plasticna_boca
	{
		scope = 2;
		displayName = "Sok od jabuke";
		descriptionShort = "Negazirani sok od jabuke / Apple fresh juice";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Sok_jabuka.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterBottle_in_A
				{
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle
				{
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WaterBottle_out_C
				{
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_empty_open
				{
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				class WaterBottle_empty_close
				{
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				class WaterBottle_empty_start
				{
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				class WaterBottle_empty_loop
				{
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				class WaterBottle_empty_end
				{
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	class BW_Studenac : BW_Plasticna_boca
	{
		scope = 2;
		displayName = "Studenac";
		descriptionShort = "Gazirana voda, dobra za probavu / Sparkling water";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Studenac.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterBottle_in_A
				{
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle
				{
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WaterBottle_out_C
				{
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_empty_open
				{
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				class WaterBottle_empty_close
				{
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				class WaterBottle_empty_start
				{
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				class WaterBottle_empty_loop
				{
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				class WaterBottle_empty_end
				{
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};

	class BW_Kruskovac : BW_Plasticna_boca
	{
		scope = 2;
		displayName = "Kruškovac";
		descriptionShort = "Kruškovac / Alcoholic Drink";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Kruskovac.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterBottle_in_A
				{
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle
				{
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WaterBottle_out_C
				{
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_empty_open
				{
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				class WaterBottle_empty_close
				{
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				class WaterBottle_empty_start
				{
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				class WaterBottle_empty_loop
				{
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				class WaterBottle_empty_end
				{
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	/////////////////////////////////////////////////////////////////
	class Black_Soda_ColorBase : SodaCan_ColorBase
	{
		model = "\dz\gear\drinks\SodaCan.p3d";
		stackedRandom = 0;
		itemSize[] = { 1,1 };
		SingleUseActions[] = { 507,505,544 };
		ContinuousActions[] = { 108,215 };
		InteractActions[] = {};
		weight = 15;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 43.5;
			water = 89;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class BW_Osjecajno : Black_Soda_ColorBase
	{
		scope = 2;
		displayName = "Osječajno Radler Pivo";
		descriptionShort = "Osječajno Radler Pivo s okusom limuna / Lemon flavoured local beer";
		weight = 0;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Osjecajno_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	class BW_Hell : Black_Soda_ColorBase
	{
		scope = 2;
		displayName = "Hell Energetsko piće";
		descriptionShort = "Hell Energetsko piće / Hell energy drink";
		weight = 0;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Pice_Hell.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	class BW_Sarajevsko : Black_Soda_ColorBase
	{
		scope = 2;
		displayName = "Sarajevsko Pivo";
		descriptionShort = "Sarajevsko Pivo je sreća ispod čepa / Sarajevo beer, bottled happiness";
		weight = 0;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Pice\BW_Sarajevsko_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	/////////////////////////////////////////////////////////
	//Hrana - BW_spageti_co
	////////////////////////////////////////////////////////
	class BW_Cevapi : BoxCerealCrunchin
	{
		scope = 2;
		displayName = "Sarajevski Čevapi";
		descriptionShort = "Sarajevski čevapi, spremni za jelo. Samo ih malo podgrij i nareži luka / Ćevapi is a grilled dish of minced meat like no other. Add freshly cut onions for extra social distancing";
		model = "\dz\gear\food\BoxCereal.p3d";
		rotationFlags = 17;
		weight = 0;
		itemSize[] = { 2,2 };
		varQuantityInit = 255;
		varQuantityMin = 0;
		varQuantityMax = 255;
		absorbency = 0.69999999;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Cevapi_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\Cereal_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 300;
			water = 20;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
					id = 797;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	class BW_Cokolino_co : BoxCerealCrunchin
	{
		scope = 2;
		displayName = "Čokolino";
		descriptionShort = "Čokolino / Food for kids";
		model = "\dz\gear\food\BoxCereal.p3d";
		rotationFlags = 17;
		weight = 0;
		itemSize[] = { 2,2 };
		varQuantityInit = 255;
		varQuantityMin = 0;
		varQuantityMax = 255;
		absorbency = 0.69999999;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Cokolino_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\Cereal_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 300;
			water = 20;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
					id = 797;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	// Grah
	class BW_Grah_Opaki : BakedBeansCan
	{
		scope = 2;
		displayName = "Grah s kobasicom";
		descriptionShort = "Slavonski grah s kobasicom. Upozorenje, izaziva promaju! / Beans with sausages from Slavonia region. Some after effects";
		model = "\dz\gear\food\food_can.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 63;
		itemSize[] = { 1,1 };
		weight = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Grah_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BW_Grah_Opaki_Opened : BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Grah s kobasicom";
		descriptionShort = "Slavonski grah s kobasicom. Upozorenje, izaziva promaju! / Beans with sausages from Slavonia region. Some after effects";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = { 1,1 };
		weight = 0;
		ContinuousActions[] = { 187,186 };
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Grah_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 123;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	//kompot
	class BW_Kompot : BakedBeansCan
	{
		scope = 2;
		displayName = "Kompot od breskve";
		descriptionShort = "Kompot od breskve / Can of peaches ";
		model = "\dz\gear\food\food_can.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 63;
		itemSize[] = { 1,1 };
		weight = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Kompot_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BW_Kompot_Opened : BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Kompot od breskve";
		descriptionShort = "Kompot od breskve / Can of peaches";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = { 1,1 };
		weight = 0;
		ContinuousActions[] = { 187,186 };
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Kompot_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 123;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	// spageti
	class BW_Spageti : BakedBeansCan
	{
		scope = 2;
		displayName = "Špageti";
		descriptionShort = "Špageti u umaku od rajčice / Mama's Best Ever Spagetti";
		model = "\dz\gear\food\food_can.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 63;
		itemSize[] = { 1,1 };
		weight = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_spageti_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BW_Spageti_Opened : BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Špageti";
		descriptionShort = "Špageti u umaku od rajčice / Mama's Best Ever Spagetti";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = { 1,1 };
		weight = 0;
		ContinuousActions[] = { 187,186 };
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_spageti_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 123;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	//sarma
	class BW_Sarma : BakedBeansCan
	{
		scope = 2;
		displayName = "Sarma";
		descriptionShort = "Balkanska sarma / Sarma minced meat stuffed cabbage rolls";
		model = "\dz\gear\food\food_can.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 63;
		itemSize[] = { 1,1 };
		weight = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Sarma.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BW_Sarma_Opened : BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Sarma";
		descriptionShort = "Balkanska sarma / Sarma minced meat stuffed cabbage rolls";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = { 1,1 };
		weight = 0;
		ContinuousActions[] = { 187,186 };
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Sarma.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 123;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	//Paprika
	class BW_Paprika : BakedBeansCan
	{
		scope = 2;
		displayName = "Punjena paprika";
		descriptionShort = "Punjena paprika je već tradicionalno hrvatsko jelo, najbolje  uz njih paše topli pire krumpir / Croatian stuffed green peppers";
		model = "\dz\gear\food\food_can.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 63;
		itemSize[] = { 1,1 };
		weight = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Paprika.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BW_Paprika_Opened : BakedBeansCan_Opened
	{
		scope = 2;
		displayName = "Punjena paprika";
		descriptionShort = "Punjena paprika je već tradicionalno hrvatsko jelo, najbolje  uz njih paše topli pire krumpir / Croatian stuffed green peppers";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = { 1,1 };
		weight = 0;
		ContinuousActions[] = { 187,186 };
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\Hrana\BW_Paprika.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 123;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_Fruit1
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 890;
				};
				class Eating_Fruit2
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 891;
				};
				class Eating_Fruit3
				{
					soundSet = "Eating_Fruit_Soundset";
					id = 892;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};

	class BW_LargeTent : LargeTent
	{
		scope = 2;
		displayName = "Šator Vojni";
		descriptionShort = "Šator Vojni 1000 mjesta za stvari / Military tent with 1000 slots";
		model = "\DZ\gear\camping\LargeTent.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		slopeTolerance = 0.34999999;
		hiddenSelections[] =
		{
			"xlights_glass_r",
			"xlights_glass_g",
			"xlights_glass_b",
			"xlights_glass_y"
		};
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_LargeTent_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_LargeTent_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_LargeTent_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_LargeTent_co.paa"
		};
		hiddenSelectionsMaterials[] = {};
		openable = 0;
		carveNavmesh = 1;
		weight = 100;
		itemSize[] = { 10,3 };
		itemsCargoSize[] = { 10,100 };
		itemBehaviour = 2;
		lootCategory = "Tents";
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
		repairableWithKits[] = { 5,2 };
		repairCosts[] = { 30,25 };
		attachments[] =
		{
			"CamoNet",
			"Lights"
		};
		SingleUseActions[] = { 527 };
		InteractActions[] = { 1021,1022 };
		ContinuousActions[] = { 231 };
		minPlacingDist = 10;
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\camping\data\large_tent.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\camping\data\large_tent.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\camping\data\large_tent_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\camping\data\large_tent_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\camping\data\large_tent_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = { 1,1,1,0.050000001 };
				ambient[] = { 0.0099999998,0.0099999998,0.0099999998,0.0099999998 };
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0;
				heatHazePower = 0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class CamoNet
			{
				name = "$STR_attachment_camonet0";
				description = "";
				attachmentSlots[] =
				{
					"CamoNet"
				};
				icon = "cat_camonet";
				view_index = 1;
			};
			class XmasLights
			{
				name = "$STR_attachment_XmasLights0";
				description = "";
				attachmentSlots[] =
				{
					"Lights"
				};
				icon = "cat_christmaslights";
				view_index = 1;
			};
		};
		class AnimationSources
		{
			class Body
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class CamoNet
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Inventory
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class EntranceO
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class EntranceC
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window1O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window2O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window3O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window4O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window5O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window6O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window7O
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window1C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window2C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window3C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window4C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window5C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window6C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Window7C
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
			class Xlights
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Xlights_glass_r
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Xlights_glass_g
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Xlights_glass_b
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Xlights_glass_y
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Cord_folded
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Cord_plugged
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
			class Pack
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.0099999998;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement_walk
				{
					soundSet = "mediumtent_movement_walk_SoundSet";
					id = 1;
				};
				class movement_run
				{
					soundSet = "mediumtent_movement_run_SoundSet";
					id = 3;
				};
				class movement_sprint
				{
					soundSet = "mediumtent_movement_sprint_SoundSet";
					id = 5;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpTentLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpTent_SoundSet";
					id = 797;
				};
				class mediumtent_drop
				{
					soundset = "mediumtent_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class BW_LargeTentPlacing : BW_LargeTent
	{
		model = "\DZ\gear\camping\LargeTentPlacing.p3d";
		storageCategory = 10;
		hiddenSelections[] =
		{
			"placing"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\camping\data\large_tent_co.tga"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\camping\data\large_tent.rvmat"
		};
		hologramMaterial = "large_tent";
		hologramMaterialPath = "dz\gear\camping\data";
		class AnimationSources
		{
			class Placing
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
		};
	};
	class BW_LargeTentClutterCutter : Static
	{
		scope = 1;
		model = "\DZ\gear\camping\LargeTentClutterCutter.p3d";
		displayName = "$STR_CfgVehicles_ClutterCutter6x60";
		icon = "";
		simulation = "thing";
		nameSound = "";
		vehicleClass = "Misc";
		mapSize = 0.69999999;
		accuracy = 0.2;
		destrType = "DestructNo";
	};
	class BW_LargeTent_Camo : BW_LargeTent
	{
		displayName = "Šator Vojni";
		descriptionShort = "Šator Vojni - 1000 mjesta za stvari";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_LargeTent_co.paa",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_LargeTent_co.paa"
		};
	};
	class BW_LargeTent_CamoPlacing : BW_LargeTent_Camo
	{
		model = "\DZ\gear\camping\LargeTentPlacing.p3d";
		storageCategory = 10;
		hiddenSelections[] =
		{
			"placing"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\camping\data\large_tent_co.tga"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\gear\camping\data\large_tent.rvmat"
		};
		hologramMaterial = "large_tent";
		hologramMaterialPath = "dz\gear\camping\data";
		class AnimationSources
		{
			class Placing
			{
				source = "user";
				animPeriod = 0.0099999998;
				initPhase = 1;
			};
		};
	};
	class BW_LargeTent_CamoClutterCutter : Static
	{
		scope = 1;
		model = "\DZ\gear\camping\LargeTentClutterCutter.p3d";
		displayName = "$STR_CfgVehicles_ClutterCutter6x60";
		icon = "";
		simulation = "thing";
		nameSound = "";
		vehicleClass = "Misc";
		mapSize = 0.69999999;
		accuracy = 0.2;
		destrType = "DestructNo";
	};
	//////////////////////////////////////////////////////////////////
	// Vozila
	/////////////////////////////////////////////////////////////////
	// Offroad Hatchback - Lada Niva
	class OffroadHatchback_Camo : OffroadHatchback
	{
		hiddenSelectionsMaterials[] =
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat",
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class DamageZones : DamageZones
			{
				class Chassis : Chassis
				{
					class Health : Health
					{
					};
				};
				class Reflector_1_1 : Reflector_1_1
				{
					class Health : Health
					{
					};
				};
				class Reflector_2_1 : Reflector_2_1
				{
					class Health : Health
					{
					};
				};
				class WindowFront : WindowFront
				{
					class Health : Health
					{
					};
				};
				class Engine : Engine
				{
					class Health : Health
					{
					};
				};
				class Roof : Roof
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Front : Front
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Back : Back
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1 : Fender_1_1
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2 : Fender_1_2
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1 : Fender_2_1
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2 : Fender_2_2
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class FuelTank : FuelTank
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackDoors_Driver_Camo : HatchbackDoors_Driver
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
			};
			class DamageZones : DamageZones
			{
				class Window : Window
				{
					class Health : Health
					{
					};
				};
				class Doors : Doors
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackDoors_CoDriver_Camo : HatchbackDoors_CoDriver
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
			};
			class DamageZones : DamageZones
			{
				class Window : Window
				{
					class Health : Health
					{
					};
				};
				class Doors : Doors
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackHood_Camo : HatchbackHood
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
				class Health : Health
				{
					RefTexsMats[] =
					{
						"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood.rvmat"
					};
					healthLevels[] =
					{

						{
							1,

							{
								"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood.rvmat"
							}
						},

						{
							0.69999999,

							{
								"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood.rvmat"
							}
						},

						{
							0.5,

							{
								"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood_damage.rvmat"
							}
						},

						{
							0,

							{
								"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class HatchbackTrunk_Camo : HatchbackTrunk
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
			};
			class DamageZones : DamageZones
			{
				class Window : Window
				{
					class Health : Health
					{
					};
				};
				class Doors : Doors
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\offroadhatchback\data\camo\niva_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
};

/////////////////////////////////////////////////////////////////////////////////
class CfgWeapons
{
	class AKM;
	class M4A1;
	class Winchester70;
	class UMP45;
	class SKS;

	class BW_Winchester_Camo : Winchester70
	{
		scope = 2;
		displayName = "Winchester 70 - Deadly Widow";
		descriptionShort = "Koristi municiju:[.308] Model 70 / Chambered in [.308] ammo ";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Winchester_Camo.paa"
		};
	};
	class BW_Winchester_Punisher : Winchester70
	{
		scope = 2;
		displayName = "Winchester 70 - Punisher";
		descriptionShort = "Koristi municiju:[.308] / Chambered in [.308] ammo ";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_Winchester_Punisher.paa"
		};
	};
	class BW_AKM_Neon : AKM
	{
		displayName = "Neon AKM";
		descriptionShort = "Koristi municiju:[7.62x39] AKM  / Chambered in 7.62x39 AK rifle";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_AKM_Neon.paa"
		};
	};
	class BW_AKM_Camo : AKM
	{
		displayName = "Maskirni AKM";
		descriptionShort = "Koristi municiju:[7.62x39] AKM  / Chambered in 7.62x39 AK rifle";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_AKM_Camo_co.paa"
		};
	};
	class BW_M4_Camo : M4A1
	{
		displayName = "M4 Maskirni";
		descriptionShort = "Koristi municiju:[5.56x45] / Camo M4A1 chambered in 5.56x45 ammo ";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_m4_body_co.paa"
		};
	};
	class BW_M4_Carbon_Bijeli : M4A1
	{
		displayName = "M4 Bijeli";
		descriptionShort = "Koristi municiju:[5.56x45] / White M4A1 chambered in 5.56x45 ammo";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M4_Carbon_Bijeli.paa"
		};
	};
	class BW_M4_Carbon_Crni : M4A1
	{
		displayName = "M4 Carbon";
		descriptionShort = "Koristi municiju:[5.56x45] / Black M4A1 chambered in 5.56x45 ammo";
		scope = 2;
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_M4_Carbon_Crni.paa"
		};
	};
	class BW_UMP_Orange : UMP45
	{
		scope = 2;
		displayName = "UMP45 - Spider Web";
		descriptionShort = "Koristi municiju:[ACP45] UMP Universale Maschinenpistole / German UMP chambered in ACP45  ";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_UMP_Orange.paa"
		};
	};
	class BW_SKS_Camo2 : SKS
	{
		scope = 2;
		displayName = "Papovka SKS";
		descriptionShort = "Koristi municiju:[7.62x39] Zastava M59/66 / Yugoslav semi automatic rifle chambered in 7.62x39.  ";
		hiddenSelectionsTextures[] =
		{
			"BW_Gear_Pack_Mod\Data\BalkanWarlordsMod\BW_SKS_Camo2.paa"
		};
	};
};
