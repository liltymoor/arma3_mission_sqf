#include "CustomControlClasses.h"
class InteractionPlayerMenu
{
	idd = -1;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 219)) then {true};""];"
	class ControlsBackground
	{
		class Control13531712
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.55;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,1};
			colorText[] = {0.5059,0.8157,0.3059,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Control30060175
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.502,0.6,1,1};
			colorText[] = {0.502,0.6,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class Control22559799
		{
			type = 1;
			idc = 11;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Паспорт";
			borderSize = 0;
			colorBackground[] = {0.502,0.6,1,1};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0.502,0.6,1,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0.502,0.6,1,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "call FREDDY_FNC_CHECKPASS;";
		};
		class Control30846009
		{
			type = 1;
			idc = 12;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Тащить";
			borderSize = 0;
			colorBackground[] = {0.502,0.6,1,1};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0.502,0.6,1,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0.502,0.6,1,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "call FREDDY_FNC_DRAGBODY;";
		};
		class Control20623494
		{
			type = 1;
			idc = 13;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Раздеть";
			borderSize = 0;
			colorBackground[] = {0.502,0.6,1,1};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0.502,0.6,1,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0.502,0.6,1,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "ctrlEnable [13, false]; closeDialog 0; call FREDDY_FNC_UNDRESS;";
		};
		class Control2526668
		{
			type = 1;
			idc = 14;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.59111112;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "В технику";
			borderSize = 0;
			colorBackground[] = {0.502,0.6,1,1};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0.502,0.6,1,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0.502,0.6,1,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "remoteExecCall ['FREDDY_FNC_GETINVEH', 0, true];";
		};
		class Control19269507
		{
			type = 1;
			idc = 15;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Реанимировать";
			borderSize = 0;
			colorBackground[] = {0.502,0.6,1,1};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0.502,0.6,1,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0.502,0.6,1,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "if (player inArea 'RaidEllipse') then {call FREDDY_FNC_REVIVEONRAID;} else {call FREDDY_FNC_REVIVEINBATTLE;};"
		
		};
		
	};
	
};
