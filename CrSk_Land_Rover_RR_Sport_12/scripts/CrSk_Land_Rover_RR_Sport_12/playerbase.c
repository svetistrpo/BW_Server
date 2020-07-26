modded class ModItemRegisterCallbacks
{
	override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterHeavy( pType, pBehavior )	
			pType.AddItemInHandsProfileIK("RR_Sport_12_koleso", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_koleso_Ruined", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_wheel.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_dver_1_1", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_dver_2_1", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_dver_1_2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_dver_2_2", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,					"dz/anims/anm/player/ik/vehicles/hatchback_02/Hatchback_02_Door_driver.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_kapot", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			"dz/anims/anm/player/ik/vehicles/hatchback/hatchback_hood.anm");
			pType.AddItemInHandsProfileIK("RR_Sport_12_bagazhnik", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,			"dz/anims/anm/player/ik/vehicles/hatchback/hatchback_trunk.anm");
    }
}