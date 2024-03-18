/*
    File: fn_tr_selectTeam_init.sqf
    Author: Savage Game Design
    Public: No
    
    Description:
        Called in onLoad section of the Display.
        Set's the text for the currently active Team in the Team-selection dialog.
    
    Parameter(s): none
    
    Returns: nothing
    
    Example(s):
        [] call vn_mf_fnc_tr_selectTeam_init;
*/

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"


VN_TR_SELECTTEAM_TEAM_LOGO_CTRL ctrlSetText "";

// _text = composeText ["Welcome to the Bro-Nation Training Center", lineBreak, "Utilize the BNTC to hone your skills for the battlefield."];
VN_TR_SELECTTEAM_TEAM_DESC_CTRL ctrlSetStructuredText parseText "TRAINING INFORMATION</t>";

_text = "
Welcome to the Bro-Nation Training Center. Utilize the BNTC to hone your skills for the battlefield.<br/><br/>All roads lead from MACV; Most ranges can be accessed from MACV teleporters.<br/>
For more information on Bro-Nation and Whitelisted units, join our Discord at https://discord.gg/bro-nation!<br/>
<br/>
TRAINING SERVER RULES
- When using any training range, active AO, or your own bespoke training area, you must mark your training location with a red box and 'RANGE IS HOT - TRAINING IN PROGRESS'. Put in side chat with what range is in use (ex: 'TANK RANGE 2 IS HOT - TRAINING IN PROGRESS').<br/>
- When finished, clean up your map marks and mark in side chat that range is cold.<br/>
- If using the various ranges for personal use, you MUST make way for any organized trainings.<br/>
- Utilize proper channels to communicate with other groups during training to avoid incidents.<br/>
";

VN_TR_SELECTTEAM_TEAM_TEXT_CTRL ctrlSetStructuredText parseText _text;