class CrSk_Land_Rover_RR_Sport_12 extends CarScript
{
	void CrSk_Land_Rover_RR_Sport_12()
	{
		m_dmgContactCoef = 0.060;
	}
	
	override int GetAnimInstance()
	{
		return VehicleAnimInstances.SEDAN;
	}

	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		}

		return 0;
	}
	
	override CarLightBase CreateFrontLight()
	{
		return CarLightBase.Cast( ScriptedLightBase.CreateLight(RR_Sport_12FrontLight) );
	}
	
	override CarRearLightBase CreateRearLight()
	{
		return CarRearLightBase.Cast( ScriptedLightBase.CreateLight(RR_Sport_12RearLight) );
	}
	
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		string attType = attachment.GetType();
		
		switch( attType )
		{
			case "SparkPlug":
				if ( GetCarDoorsState("RR_Sport_12_kapot") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;

			case "CarRadiator":
				if ( GetCarDoorsState("RR_Sport_12_kapot") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			
			case "CarBattery":
				if ( GetCarDoorsState("RR_Sport_12_kapot") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			
			case "RR_Sport_12_koleso_spare_1": 
				if ( GetCarDoorsState("RR_Sport_12_bagazhnik") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			
			case "CanisterGasoline":
				if ( GetCarDoorsState("RR_Sport_12_bagazhnik") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
		}

		return true;
	}
	
	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )
			return CarDoorState.DOORS_MISSING;
	
		switch( slotType )
		{
			case "RR_Sport_12_dver_1_1":
				if ( GetAnimationPhase("DoorsDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "RR_Sport_12_dver_2_1":
				if ( GetAnimationPhase("DoorsCoDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "RR_Sport_12_dver_1_2":
				if ( GetAnimationPhase("DoorsCargo1") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "RR_Sport_12_dver_2_2":
				if ( GetAnimationPhase("DoorsCargo2") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
			case "RR_Sport_12_kapot":
				if ( GetAnimationPhase("DoorsHood") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
			
			case "RR_Sport_12_bagazhnik":
				if ( GetAnimationPhase("DoorsTrunk") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;

			break;
		}

		return CarDoorState.DOORS_MISSING;
	}
	

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
			case 0:
				if ( GetCarDoorsState( "RR_Sport_12_dver_1_1" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 1:
				if ( GetCarDoorsState( "RR_Sport_12_dver_2_1" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;

			case 2:
				if ( GetCarDoorsState( "RR_Sport_12_dver_1_2" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;

			case 3:
				if ( GetCarDoorsState( "RR_Sport_12_dver_2_2" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
		}

		return false;
	}

    override string GetDoorSelectionNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "doors_driver";
		break;
		case 1:
			return "doors_codriver";
		break;
		case 2:
			return "doors_cargo1";
		break;
		case 3:
			return "doors_cargo2";
		break;
		}
		
		return super.GetDoorSelectionNameFromSeatPos(posIdx);
	}

	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "RR_Sport_12_dver_1_1";
		break;
		case 1:
			return "RR_Sport_12_dver_2_1";
		break;
		case 2:
			return "RR_Sport_12_dver_1_2";
		break;
		case 3:
			return "RR_Sport_12_dver_2_2";
		break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}

	override float OnSound( CarSoundCtrl ctrl, float oldValue )
	{
		switch ( ctrl )
		{
			case CarSoundCtrl.DOORS:
				float newValue = 0;
				
				//-----
				if ( GetCarDoorsState( "RR_Sport_12_dver_1_1" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;

				//-----
				if ( GetCarDoorsState( "RR_Sport_12_dver_2_1" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
			
				//-----
				if ( GetCarDoorsState( "RR_Sport_12_dver_1_2" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;

				//-----
				if ( GetCarDoorsState( "RR_Sport_12_dver_2_2" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
			
				//-----
				if ( GetHealthLevel( "WindowFront") == GameConstants.STATE_RUINED )
					newValue -= 0.6;

				//-----
				if ( GetHealthLevel( "WindowBack") == GameConstants.STATE_RUINED )
					newValue -= 0.6;
			
				if ( newValue > 1 )
					newValue = 1;
			
				if ( newValue < 0 )
					newValue = 0;
			
				return newValue;
			break;
		}

		return oldValue;
	}
	
	override string GetAnimSourceFromSelection( string selection )
	{
		switch( selection )
		{
		case "doors_driver":
			return "DoorsDriver";
		case "doors_codriver":
			return "DoorsCoDriver";
		case "doors_cargo1":
			return "DoorsCargo1";
		case "doors_cargo2":
			return "DoorsCargo2";
		case "doors_hood":
			return "DoorsHood";
		case "doors_trunk":
			return "DoorsTrunk";
		}

		return "";
	}

	override bool IsVitalTruckBattery()
	{
		return false;
	}

	override bool IsVitalGlowPlug()
	{
		return false;
	}
	
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 )
				return true;
			break;
		case 1:
			if ( nextSeat == 0 )
				return true;
			break;
		case 2:
			if ( nextSeat == 3 )
				return true;
			break;
		case 3:
			if ( nextSeat == 2 )
				return true;
			break;
		}
		
		return false;
	}

	override bool CanReachDoorsFromSeat( string pDoorsSelection, int pCurrentSeat )
	{
		switch( pCurrentSeat )
		{
		case 0:
			if (pDoorsSelection == "DoorsDriver")
			{
				return true;
			}
		break;
		case 1:
			if (pDoorsSelection == "DoorsCoDriver")
			{
				return true;
			}
		break;
		case 2:
			if (pDoorsSelection == "DoorsCargo1")
			{
				return true;
			}
		break;
		case 3:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
		}
		
		return false;		
	}

	override void OnDebugSpawn()
	{
		EntityAI entity;
		
		if ( Class.CastTo(entity, this) )
		{

			entity.GetInventory().CreateInInventory( "CarBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_dver_1_1" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_dver_1_2" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_dver_2_1" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_dver_2_2" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_kapot" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_bagazhnik" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_koleso" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_koleso" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_koleso" );
			entity.GetInventory().CreateInInventory( "RR_Sport_12_koleso" );

			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );
		};

		Fill( CarFluid.FUEL, 200 );
		Fill( CarFluid.COOLANT, 6.0 );
		Fill( CarFluid.OIL, 4.0 );

	};
}