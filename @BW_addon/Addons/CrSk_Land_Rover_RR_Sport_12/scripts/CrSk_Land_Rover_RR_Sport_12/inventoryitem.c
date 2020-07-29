class RR_Sport_12_koleso extends CarWheel {
    override void EEKilled(Object killer)
    {
        string newWheel = "";
		switch( GetType() )
		{
			case "RR_Sport_12_koleso":
				newWheel = "RR_Sport_12_koleso_Ruined";
			break;
		}
		if ( newWheel != "" )
        {
            ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
            lambda.SetTransferParams(true, true, true);
            GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
        }
        super.EEKilled( killer );
    }
}
class RR_Sport_12_koleso_Ruined extends ItemBase {};

class RR_Sport_12_dver_1_1 extends CarDoor {};
class RR_Sport_12_dver_2_1 extends CarDoor {};
class RR_Sport_12_dver_1_2 extends CarDoor {};
class RR_Sport_12_dver_2_2 extends CarDoor {};
class RR_Sport_12_kapot extends CarDoor {};
class RR_Sport_12_bagazhnik extends CarDoor {};

modded class CanisterGasoline extends Bottle_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};