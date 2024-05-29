//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://localhost:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Reload current page", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type MinhYen in Username textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type ********** in Password passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Login button", "snapshot=Action_7.inf");

	return 0;
}
