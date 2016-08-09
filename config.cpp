class CfgXM8
{
	extraApps[] = {"scarCode"};
	
class scarCode
	{
		title = "Server Menu";
		controlID = 66000;					//IDC:66000 -> 66005 || These need to be unique and out of range from each other
		logo = "ExadClient\XM8\Apps\scarCODE_Info\Icon.paa";
		onLoad = "ExAdClient\XM8\Apps\scarCODE_Info\onLoad.sqf";
		onOpen = "ExAdClient\XM8\Apps\scarCODE_Info\onOpen.sqf";
		onClose = "ExAdClient\XM8\Apps\scarCODE_Info\onClose.sqf";
	};
}; 