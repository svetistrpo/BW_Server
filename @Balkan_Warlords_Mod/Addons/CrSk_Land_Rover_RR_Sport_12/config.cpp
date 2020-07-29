class CfgSoundShaders
{
	class baseEngineeuropean_v8_SoundShader
	{
		range=80;
	};
	class european_v8_Engine_Ext_Rpm0_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Rpm0",
				1
			}
		};
		frequency="1 * ((850 + ((rpm - 850)/(8000/5600))) max 850) / 850";
		volume="0.6 * 1 * engineOn * 0.4 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) + 2.5*50),(((850+1200)/2) - 50)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Ext_Rpm1_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Rpm1",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.6 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Offload_Ext_Rpm1_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Offload_Rpm1",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.6 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Ext_Rpm2_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Rpm2",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.6 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Offload_Ext_Rpm2_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Offload_Rpm2",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.6 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Ext_Rpm3_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Rpm3",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.6 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) + 2.5*200),(((2300+3150)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Offload_Ext_Rpm3_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Offload_Rpm3",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.6 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) + 2.5*200),(((2300+3150)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Ext_Rpm4_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Rpm4",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 3150";
		volume="0.6 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) - 2.5*200),(((2300+3150)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) + 2.5*200),(((3150+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Offload_Ext_Rpm4_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Offload_Rpm4",
				2
			}
		};
		frequency="1 * (850 + ((rpm - 850)/(8000/5600))) / 3150";
		volume="0.6 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3150)/2) - 2.5*200),(((2300+3150)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) + 2.5*200),(((3150+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Ext_Rpm5_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Rpm5",
				2
			}
		};
		frequency="(1 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.6 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) - 2.5*200),(((3150+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Offload_Ext_Rpm5_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Offload_Rpm5",
				2
			}
		};
		frequency="(1 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.6 * 1 * (thrust factor[0.6,0.2]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) - 2.5*200),(((3150+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class european_v8_Engine_Ext_Broken_SoundShader: baseEngineeuropean_v8_SoundShader
	{
		samples[]=
		{
			
			{
				"BW_Gear_Pack_Mod\sounds\european_v8_Engine_Ext_Broken",
				2
			}
		};
		frequency=0.89999998;
		volume="0.6 * 1 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3150+4400)/2) - 2.5*200),(((3150+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos) * (rpm factor[4800,6200])";
	};
};
class CfgSoundSets
{
	class baseEngine_EXT_SoundSet
	{
		sound3DProcessingType="Vehicle_Ext_3DProcessingType";
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve="vehicleEngineAttenuationCurve";
		volumeFactor=1;
		spatial=1;
		loop=1;
	};
	class european_v8_Engine_Ext_Rpm0_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Rpm0_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Offload_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Offload_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Offload_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Offload_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Offload_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Offload_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Offload_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Offload_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Offload_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Offload_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1;
	};
	class european_v8_Engine_Ext_Broken_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"european_v8_Engine_Ext_Broken_SoundShader"
		};
		volumeFactor=1;
	};
};

class CfgPatches
{
	class CrSk_Land_Rover_RR_Sport_12
	{
		units[]=
		{
			"RR_Sport_12_koleso",
			"RR_Sport_12_koleso_Ruined",
			"RR_Sport_12_dver_1_1",
			"RR_Sport_12_dver_2_1",
			"RR_Sport_12_dver_1_2",
			"RR_Sport_12_dver_2_2",
			"RR_Sport_12_kapot",
			"RR_Sport_12_bagazhnik",
			"RR_Sport_12_dver_1_1_Black",
			"RR_Sport_12_dver_2_1_Black",
			"RR_Sport_12_dver_1_2_Black",
			"RR_Sport_12_dver_2_2_Black",
			"RR_Sport_12_kapot_Black",
			"RR_Sport_12_bagazhnik_Black",
			"RR_Sport_12_kapot_MVP",
			"RR_Sport_12_bagazhnik_MVP",
			"CrSk_Land_Rover_RR_Sport_12",
			"CrSk_Land_Rover_RR_Sport_12_Black",
			"CrSk_Land_Rover_RR_Sport_12_MVP"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DZ_Sounds_Effects",
			"DZ_Data"
		};
	};
};
class CfgSlots
{
	class Slot_RR_Sport_12_koleso_1_1
	{
		name="RR_Sport_12_koleso_1_1";
		displayName="Toèak";
		selection="wheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_RR_Sport_12_koleso_1_2
	{
		name="RR_Sport_12_koleso_1_2";
		displayName = "Toèak";
		selection="wheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_RR_Sport_12_koleso_2_1
	{
		name="RR_Sport_12_koleso_2_1";
		displayName = "Toèak";
		selection="wheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_RR_Sport_12_koleso_2_2
	{
		name="RR_Sport_12_koleso_2_2";
		displayName = "Toèak";
		selection="wheel_2_2";
		ghostIcon="wheel";
	};
	class Slot_RR_Sport_12_koleso_spare_1
	{
		name="RR_Sport_12_koleso_spare_1";
		displayName = "Rezervni Toèak";
		selection="wheel_spare_1";
		ghostIcon="wheel";
	};
	class Slot_RR_Sport_12_dver_1_1
	{
		name="RR_Sport_12_dver_1_1";
		displayName="Vrata";
		selection="doors_driver";
		ghostIcon="doorfront";
	};
	class Slot_RR_Sport_12_dver_2_1
	{
		name="RR_Sport_12_dver_2_1";
		displayName = "Vrata";
		selection="doors_codriver";
		ghostIcon="doorfront";
	};
	class Slot_RR_Sport_12_dver_1_2
	{
		name="RR_Sport_12_dver_1_2";
		displayName = "Vrata";
		selection="doors_cargo1";
		ghostIcon="doorrear";
	};
	class Slot_RR_Sport_12_dver_2_2
	{
		name="RR_Sport_12_dver_2_2";
		displayName = "Vrata";
		selection="doors_cargo2";
		ghostIcon="doorrear";
	};
	class Slot_RR_Sport_12_kapot
	{
		name="RR_Sport_12_kapot";
		displayName="Hauba";
		selection="doors_Hood";
		ghostIcon="hood";
	};
	class Slot_RR_Sport_12_bagazhnik
	{
		name="RR_Sport_12_bagazhnik";
		displayName="Gepek";
		selection="doors_Trunk";
		ghostIcon="trunk";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
};
class CfgVehicles
{
	class Bottle_Base;
	class CanisterGasoline: Bottle_Base
	{
		inventorySlot="CanisterGasoline";
	};
	class Inventory_Base;
	class CarWheel: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={6,6};
		weight=12000;
		repairableWithKits[]={6};
		repairCosts[]={25};
		simulation="carwheel";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="hatchbackwheel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarDoor: Inventory_Base
	{
		scope=1;
		itemBehaviour=0;
		physLayer="item_large";
		itemSize[]={10,10};
		weight=20000;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_window"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Doors
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									""
								}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_doors"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackdoors_driver_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Car;
	class CarScript: Car
	{
		rotationFlags=64;
		storageCategory=4;
		insideSoundCoef=0.89999998;
		fuelCapacity=50;
		brakeFluidCapacity=1;
		oilCapacity=4;
		coolantCapacity=6;
		brakeFluidLeakDebit[]={0,0};
		oilLeakDebit[]={0,0};
		coolantLeakDebit[]={0,0};
		brakeFluidForceCoef[]={0,1,1,1};
		damageFromOil[]={0,0,1,0};
		damageFromCoolant[]={0,0,1,0};
		engineBeltSlot="EngineBelt";
		batterySlot="CarBattery";
		electricPowerResName="power";
		electricConsumptionIgnition=3001;
		electricConsumptionEngine=0;
		electricConsumptionLights=0;
		electricOutputEngine=5;
		selectionDashboard="light_dashboard";
		selectionLightFrontL="light_left";
		selectionLightFrontR="light_right";
		selectionBrakeLights="light_break";
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_coDriver";
				proxyPos="crewCoDriver";
				getInPos="pos_coDriver";
				getInDir="pos_coDriver_dir";
			};
		};
		class SimulationModule
		{
			class Axles
			{
				class Front
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							animDamper="damperfrontleft";
							wheelHub="wheel_1_1_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							animDamper="damperfrontright";
							wheelHub="wheel_2_1_damper_land";
						};
					};
				};
				class Rear
				{
					class Wheels
					{
						class Left
						{
							inventorySlot="";
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							animDamper="damperbackleft";
							wheelHub="wheel_1_2_damper_land";
						};
						class Right
						{
							inventorySlot="";
							animTurn="turnbacktright";
							animRotation="wheelbackright";
							animDamper="damperbackright";
							wheelHub="wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1"
		};
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
		class AnimationSources
		{
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class DoorsCargo1: DoorsDriver
			{
			};
			class DoorsCargo2: DoorsDriver
			{
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
		};
	};
	class RR_Sport_12_koleso: CarWheel
	{
		scope=2;
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_koleso.p3d";
		displayName="Toèak";
		descriptionShort="Toèak za Land Rover Sport '12";
		itemSize[]={6,6};
		weight=12000;
		physLayer="item_large";
		rotationFlags=8;
		inventorySlot[]=
		{
			"RR_Sport_12_koleso_1_1",
			"RR_Sport_12_koleso_1_2",
			"RR_Sport_12_koleso_2_1",
			"RR_Sport_12_koleso_2_2",
			"RR_Sport_12_koleso_spare_1"
		};
		radiusByDamage[]={0,0.30000001,0.26000002,0.26000002,0.99980003,0.25,0.99989998,0.26800001};
		radius=0.398;
		friction=1;
		width=0.27000001;
		tyreRollResistance=0.0049999999;
		tyreTread=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
								"BW_Gear_Pack_Mod\data\shina_michelin.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
								"BW_Gear_Pack_Mod\data\shina_michelin.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BW_Gear_Pack_Mod\data\disk_damage.rvmat",
								"BW_Gear_Pack_Mod\data\shina_michelin_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BW_Gear_Pack_Mod\data\disk_damage.rvmat",
								"BW_Gear_Pack_Mod\data\shina_michelin_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BW_Gear_Pack_Mod\data\disk_destruct.rvmat",
								"BW_Gear_Pack_Mod\data\shina_michelin_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class RR_Sport_12_koleso_Ruined: RR_Sport_12_koleso
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_koleso_Ruined.p3d";
		radius=0.32499999;
		width=0.2;
		tyreRollResistance=1;
		tyreRollDrag=75;
		tyreRoughness=1.2;
		tyreTread=0.5;
	};
	class RR_Sport_12_dver_1_1: CarDoor
	{
		scope=2;
		displayName="Prednja Lijeva Vrata";
		descriptionShort="Land Rover Sport '12";
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_1_1.p3d";
		weight=15000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="RR_Sport_12_dver_1_1";
		rotationFlags=8;
		physLayer="item_large";
		hiddenSelections[]=
		{
			"camo_kraska",
			"camo_nomer"
		};
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_int.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class RR_Sport_12_dver_2_1: RR_Sport_12_dver_1_1
	{
		displayName = "Prednja Desna Vrata";
		descriptionShort = "Land Rover Sport '12";
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_2_1.p3d";
		inventorySlot="RR_Sport_12_dver_2_1";
		rotationFlags=4;
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
	};
	class RR_Sport_12_dver_1_2: RR_Sport_12_dver_1_1
	{
		displayName = "Zadnja Lijeva Vrata";
		descriptionShort = "Land Rover Sport '12";
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_1_2.p3d";
		inventorySlot="RR_Sport_12_dver_1_2";
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
	};
	class RR_Sport_12_dver_2_2: RR_Sport_12_dver_1_1
	{
		displayName = "Zadnja Desna Vrata";
		descriptionShort = "Land Rover Sport '12";
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_2_2.p3d";
		inventorySlot="RR_Sport_12_dver_2_2";
		rotationFlags=4;
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
	};
	class RR_Sport_12_kapot: RR_Sport_12_dver_1_1
	{
		scope=2;
		displayName = "Hauba";
		descriptionShort = "Land Rover Sport '12";
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_kapot.p3d";
		weight=10000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="RR_Sport_12_kapot";
		rotationFlags=2;
		physLayer="item_large";
		hiddenSelections[]=
		{
			"camo_kraska",
			"camo_nomer"
		};
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
								"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
								"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
								"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
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
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackhood_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class RR_Sport_12_bagazhnik: RR_Sport_12_dver_1_1
	{
		scope=2;
		displayName = "Gepek";
		descriptionShort = "Land Rover Sport '12";
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_bagazhnik.p3d";
		weight=10000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="RR_Sport_12_bagazhnik";
		rotationFlags=1;
		physLayer="item_large";
		hiddenSelections[]=
		{
			"camo_kraska",
			"camo_nomer"
		};
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_int.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class RR_Sport_12_dver_1_1_Black: RR_Sport_12_dver_1_1
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_dver_2_1_Black: RR_Sport_12_dver_2_1
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_dver_1_2_Black: RR_Sport_12_dver_1_2
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_dver_2_2_Black: RR_Sport_12_dver_2_2
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_kapot_Black: RR_Sport_12_kapot
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_bagazhnik_Black: RR_Sport_12_bagazhnik
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_kapot_MVP: RR_Sport_12_kapot
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_kapot_MVP.p3d";
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class RR_Sport_12_bagazhnik_MVP: RR_Sport_12_bagazhnik
	{
		hiddenSelectionsTextures[]=
		{
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer_mvp.paa"
		};
	};
	class CrSk_Land_Rover_RR_Sport_12: CarScript
	{
		scope=2;
		displayname="BW Land Rover";
		descriptionShort="Balkan Warlords Land Rover,Bijeli, Registracija: BiH, 1000 Slotova Gepek";
		Model="\BW_Gear_Pack_Mod\CrSk_Land_Rover_RR_Sport_12.p3d";
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"RR_Sport_12_koleso_1_1",
			"RR_Sport_12_koleso_1_2",
			"RR_Sport_12_koleso_2_1",
			"RR_Sport_12_koleso_2_2",
			"RR_Sport_12_koleso_spare_1",
			"RR_Sport_12_dver_1_1",
			"RR_Sport_12_dver_2_1",
			"RR_Sport_12_dver_1_2",
			"RR_Sport_12_dver_2_2",
			"RR_Sport_12_bagazhnik",
			"RR_Sport_12_kapot",
			"CanisterGasoline"
		};
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo_kraska",
			"camo_nomer"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"BW_Gear_Pack_Mod\data\shared\white.paa",
			"BW_Gear_Pack_Mod\data\nomer.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat"
		};
		dashboardMatOn="BW_Gear_Pack_Mod\data\car_panels.rvmat";
		dashboardMatOff="BW_Gear_Pack_Mod\data\shared\default2.rvmat";
		frontReflectorMatOn="BW_Gear_Pack_Mod\data\car_headlight.rvmat";
		frontReflectorMatOff="BW_Gear_Pack_Mod\data\fary.rvmat";
		brakeReflectorMatOn="BW_Gear_Pack_Mod\data\car_brakelight.rvmat";
		brakeReflectorMatOff="BW_Gear_Pack_Mod\data\fary.rvmat";
		ReverseReflectorMatOn="BW_Gear_Pack_Mod\data\car_reverse.rvmat";
		ReverseReflectorMatOff="BW_Gear_Pack_Mod\data\fary.rvmat";
		TailReflectorMatOn="BW_Gear_Pack_Mod\data\car_rearlight.rvmat";
		TailReflectorMatOff="BW_Gear_Pack_Mod\data\fary.rvmat";
		fuelCapacity=87;
		fuelConsumption=30;
		class Sounds
		{
			thrust=0.60000002;
			thrustTurbo=1;
			thrustGentle=0.30000001;
			thrustSmoothCoef=0.1;
			camposSmoothCoef=0.029999999;
			soundSetsFilter[]=
			{
				"european_v8_Engine_Offload_Ext_Rpm1_SoundSet",
				"european_v8_Engine_Offload_Ext_Rpm2_SoundSet",
				"european_v8_Engine_Offload_Ext_Rpm3_SoundSet",
				"european_v8_Engine_Offload_Ext_Rpm4_SoundSet",
				"european_v8_Engine_Offload_Ext_Rpm5_SoundSet",
				"european_v8_Engine_Ext_Rpm0_SoundSet",
				"european_v8_Engine_Ext_Rpm1_SoundSet",
				"european_v8_Engine_Ext_Rpm2_SoundSet",
				"european_v8_Engine_Ext_Rpm3_SoundSet",
				"european_v8_Engine_Ext_Rpm4_SoundSet",
				"european_v8_Engine_Ext_Rpm5_SoundSet",
				"european_v8_Engine_Ext_Broken_SoundSet",
				"offroad_Tires_rock_slow_Ext_SoundSet",
				"offroad_Tires_rock_fast_Ext_SoundSet",
				"offroad_Tires_grass_slow_Ext_SoundSet",
				"offroad_Tires_grass_fast_Ext_SoundSet",
				"offroad_Tires_gravel_slow_Ext_SoundSet",
				"offroad_Tires_gravel_fast_Ext_SoundSet",
				"offroad_Tires_asphalt_slow_Ext_SoundSet",
				"offroad_Tires_asphalt_fast_Ext_SoundSet",
				"offroad_Tires_water_slow_Ext_SoundSet",
				"offroad_Tires_water_fast_Ext_SoundSet",
				"offroad_skid_dirt_SoundSet",
				"offroad_dirt_turn_SoundSet",
				"offroad_Rain_Ext_SoundSet"
			};
			soundSetsInt[]=
			{
				"offroad_Tires_Asphalt_Slow_General_Int_SoundSet",
				"offroad_Tires_Asphalt_Fast_General_Int_SoundSet",
				"offroad_Wind_SoundSet"
			};
		};
		class Crew: Crew
		{
			class Driver: Driver
			{
			};
			class CoDriver: CoDriver
			{
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
				getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			drive="DRIVE_AWD";
			airDragCoefficient=0.85000002;
			class Steering
			{
				increaseSpeed[]={0,45,60,25,100,15};
				decreaseSpeed[]={0,90,60,45,100,15};
				centeringSpeed[]={0,0,15,28,60,45,100,60};
			};
			class Throttle
			{
				reactionTime=1;
				defaultThrust=0.95000005;
				gentleThrust=0.69999999;
				turboCoef=2.5;
				gentleCoef=0.75;
			};
			braking[]={0,0.1,1,0.80000001,2.5,0.89999998,3,1};
			class Engine
			{
				inertia=0.15000001;
				torqueMax=405;
				torqueRpm=4700;
				powerMax=200;
				powerRpm=6000;
				rpmIdle=850;
				rpmMin=900;
				rpmClutch=1500;
				rpmRedline=7000;
				rpmMax=9000;
			};
			class Gearbox
			{
				reverse=3.46;
				ratios[]={3.73,2.25,1.5,1.2,0.94999999};
				timeToUncoupleClutch=0.15000001;
				timeToCoupleClutch=0.20999999;
				maxClutchTorque=355;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle=35;
					finalRatio=4.0999999;
					brakeBias=0.15000001;
					brakeForce=10000;
					wheelHubMass=5;
					wheelHubRadius=0.215;
					class Suspension
					{
						swayBar=21500;
						stiffness=34000;
						compression=3350;
						damping=8400;
						travelMaxUp=0.16;
						travelMaxDown=0.16;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="RR_Sport_12_koleso_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="RR_Sport_12_koleso_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle=0;
					finalRatio=4.0999999;
					brakeBias=0.15000001;
					brakeForce=15000;
					wheelHubMass=5;
					wheelHubRadius=0.215;
					class Suspension
					{
						swayBar=21500;
						stiffness=37000;
						compression=3350;
						damping=8400;
						travelMaxUp=0.16;
						travelMaxDown=0.16;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_2";
							inventorySlot="RR_Sport_12_koleso_1_2";
						};
						class Right: Right
						{
							animDamper="damper_2_2";
							inventorySlot="RR_Sport_12_koleso_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,70};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3500;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					class Health
					{
						hitpoints=4000;
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Front
				{
					class Health
					{
						hitpoints=3500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_1",
						"Fender_2_1",
						"Engine",
						"Reflector_1_1",
						"Reflector_2_1",
						"WindowFront"
					};
					transferToZonesThreshold[]={0.80000001,0.80000001,0.5,1,1,0.5};
					transferToZonesCoefs[]={0.60000002,0.60000002,0.60000002,0.050000001,0.050000001};
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={0.15000001,0.30000001};
					inventorySlots[]=
					{
						"CarRadiator",
						"RR_Sport_12_kapot"
					};
				};
				class Reflector_1_1
				{
					class Health
					{
						hitpoints=10;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1",
						"Engine"
					};
					transferToZonesCoefs[]={1,1,1};
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={1,0.30000001,0.30000001};
					inventorySlots[]=
					{
						"Reflector_1_1"
					};
				};
				class Reflector_2_1: Reflector_1_1
				{
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={1,1,1};
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					inventorySlotsCoefs[]={1,0.30000001,0.30000001};
					inventorySlots[]=
					{
						"Reflector_2_1"
					};
				};
				class Back
				{
					class Health
					{
						hitpoints=4000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_2",
						"Fender_2_2"
					};
					transferToZonesCoefs[]={0.30000001,0.30000001};
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={0.30000001};
					inventorySlots[]=
					{
						"RR_Sport_12_bagazhnik"
					};
				};
				class Roof
				{
					class Health
					{
						hitpoints=4000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					class Health
					{
						hitpoints=3500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							},
							
							{
								0,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glossy.rvmat",
									"BW_Gear_Pack_Mod\data\shared\chrome_dayz.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Engine",
						"Reflector_1_1"
					};
					transferToZonesThreshold[]={0.2,0.5,0.89999998};
					transferToZonesCoefs[]={0.30000001,0.60000002,0.60000002};
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					fatalInjuryCoef=-1;
					inventorySlotsCoefs[]={0.30000001,0.30000001,0.30000001};
					inventorySlots[]=
					{
						""
					};
				};
				class Fender_2_1: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Front",
						"Engine",
						"Reflector_2_1"
					};
					transferToZonesThreshold[]={0.2,0.5,0.89999998};
					transferToZonesCoefs[]={0.30000001,0.60000002,0.60000002};
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					inventorySlotsCoefs[]={0.30000001,0.2,31};
					inventorySlots[]=
					{
						""
					};
				};
				class Fender_1_2: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank",
						"WindowBack",
						"WindowSides"
					};
					transferToZonesThreshold[]={0.2,0.2,0.2};
					transferToZonesCoefs[]={0.30000001,0.2,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					inventorySlotsCoefs[]={0.30000001};
					inventorySlots[]=
					{
						"RR_Sport_12_bagazhnik"
					};
				};
				class Fender_2_2: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank",
						"WindowBack",
						"WindowSides"
					};
					transferToZonesThreshold[]={0.2,0.2,0.2};
					transferToZonesCoefs[]={0.30000001,0.2,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					inventorySlotsCoefs[]={0.30000001};
					inventorySlots[]=
					{
						"RR_Sport_12_bagazhnik"
					};
				};
				class WindowFront
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_int.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_windowFront"
					};
					componentNames[]=
					{
						"dmgZone_windowFront"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class WindowBack
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_int.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_WindowBack"
					};
					componentNames[]=
					{
						"dmgZone_WindowBack"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class WindowSides
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_int.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat",
									"BW_Gear_Pack_Mod\data\shared\glass_veh_destruct.rvmat"
								}
							},
							
							{
								0,
								"hidden",
								"hidden"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_WindowSides"
					};
					componentNames[]=
					{
						"dmgZone_WindowSides"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Engine
				{
					class Health
					{
						hitpoints=4000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					fatalInjuryCoef=0.0020000001;
					inventorySlotsCoefs[]={0.2,0.2,0.0099999998,0.40000001};
					inventorySlots[]={};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints=600;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Battery
				{
					class Health
					{
						hitpoints=600;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					componentNames[]=
					{
						"dmgZone_battery"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"CarBattery"
					};
				};
			};
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Motor: V8 Supercharged";
				description="";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug"
				};
				icon="cat_vehicle_engine";
			};
			class Body
			{
				name="BW Range Rover Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1",
					"Reflector_2_1",
					"RR_Sport_12_dver_1_1",
					"RR_Sport_12_dver_2_1",
					"RR_Sport_12_dver_1_2",
					"RR_Sport_12_dver_2_2",
					"RR_Sport_12_bagazhnik",
					"RR_Sport_12_kapot"
				};
				icon="cat_vehicle_body";
			};
			class Chassis
			{
				name="BW Range Rover Kotaèi";
				description="";
				attachmentSlots[]=
				{
					"RR_Sport_12_koleso_1_1",
					"RR_Sport_12_koleso_1_2",
					"RR_Sport_12_koleso_2_1",
					"RR_Sport_12_koleso_2_2"
				};
				icon="cat_vehicle_chassis";
			};
			class Base
			{
				name="Gepek";
				description="";
				attachmentSlots[]=
				{
					"RR_Sport_12_koleso_spare_1",
					"CanisterGasoline"
				};
				icon="missing";
			};
		};
	};
	class CrSk_Land_Rover_RR_Sport_12_Black: CrSk_Land_Rover_RR_Sport_12
	{
		displayname="Land Rover Sport";
		descriptionShort = "Balkan Warlords Land Rover, Crni, Registracija: SRB, 1000 Slotova Gepek";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer2.paa"
		};
	};
	class CrSk_Land_Rover_RR_Sport_12_MVP: CrSk_Land_Rover_RR_Sport_12
	{
		displayname="BW Range Rover";
		escriptionShort = "Balkan Warlords Land Rover, Crni, Registracija: HRV, 1000 Slotova Gepek";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"BW_Gear_Pack_Mod\data\shared\kraska_b.paa",
			"BW_Gear_Pack_Mod\data\nomer_mvp.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyVehiclePart: ProxyAttachment
	{
		scope=2;
		simulation="ProxyInventory";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=0;
	};
	class ProxyRR_Sport_12_koleso: ProxyVehiclePart
	{
		model="BW_Gear_Pack_Mod\proxy\RR_Sport_12_koleso.p3d";
		inventorySlot[]=
		{
			"RR_Sport_12_koleso_1_1",
			"RR_Sport_12_koleso_1_2",
			"RR_Sport_12_koleso_2_1",
			"RR_Sport_12_koleso_2_2",
			"RR_Sport_12_koleso_spare_1"
		};
	};
	class ProxyRR_Sport_12_koleso_Ruined: ProxyVehiclePart
	{
		model="BW_Gear_Pack_Mod\proxy\RR_Sport_12_koleso_Ruined.p3d";
		inventorySlot[]=
		{
			"RR_Sport_12_koleso_1_1",
			"RR_Sport_12_koleso_1_2",
			"RR_Sport_12_koleso_2_1",
			"RR_Sport_12_koleso_2_2",
			"RR_Sport_12_koleso_spare_1"
		};
	};
	class ProxyRR_Sport_12_dver_1_1: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_1_1.p3d";
		inventorySlot="RR_Sport_12_dver_1_1";
	};
	class ProxyRR_Sport_12_dver_2_1: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_2_1.p3d";
		inventorySlot="RR_Sport_12_dver_2_1";
	};
	class ProxyRR_Sport_12_dver_1_2: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_1_2.p3d";
		inventorySlot="RR_Sport_12_dver_1_2";
	};
	class ProxyRR_Sport_12_dver_2_2: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_dver_2_2.p3d";
		inventorySlot="RR_Sport_12_dver_2_2";
	};
	class ProxyRR_Sport_12_kapot: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_kapot.p3d";
		inventorySlot="RR_Sport_12_kapot";
	};
	class ProxyRR_Sport_12_kapot_MVP: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_kapot_MVP.p3d";
		inventorySlot="RR_Sport_12_kapot";
	};
	class ProxyRR_Sport_12_bagazhnik: ProxyVehiclePart
	{
		model="\BW_Gear_Pack_Mod\proxy\RR_Sport_12_bagazhnik.p3d";
		inventorySlot="RR_Sport_12_bagazhnik";
	};
	class ProxyJerryCan: ProxyVehiclePart
	{
		model="\dz\vehicles\parts\JerryCan.p3d";
		inventorySlot="CanisterGasoline";
	};
	class ProxyPart
	{
		scope=2;
		simulation="ProxyInventory";
		model="";
		inventorySlot="";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=1;
	};
};
