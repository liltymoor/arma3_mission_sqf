#include "CustomControlClasses.h"
class SettingsDialog
{
	idd = -1;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 21)) then {true};""];_this call FRAME_01_Load;";
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.19335938;
			y = safeZoneY + safeZoneH * -0.04340277;
			w = safeZoneW * 0.61230469;
			h = safeZoneH * 1.03645834;
			style = 48;
			text = "images\tabletempty.paa";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Control1821713451
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4375;
			y = safeZoneY + safeZoneH * 0.39555556;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Дистанция прорисовки";
			colorBackground[] = {0.3098,0.6196,0.4745,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class ButtonPlus
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4375;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "+500";
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
			action = "call FREDDY_FNC_CHANGEVIEWDISTANCEPlus;";
		};
		class ButtonMinus
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "-500";
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
			action = "call FREDDY_FNC_CHANGEVIEWDISTANCEMinus;";
		};
		
	};
	
};
