#include "CustomControlClasses.h"
class RaidGarageMenu
{
	idd = 123438999;
	
	class ControlsBackground
	{
		class Control2778065
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.55;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,1};
			colorText[] = {0.4588,0.6235,0.8157,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Control28222299
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.502,0.6,1,1};
			colorText[] = {0.502,0.6,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};

		class Control1951215897
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.545625;
			y = safeZoneY + safeZoneH * 0.68777778;
			w = safeZoneW * 0.03875;
			h = safeZoneH * 0.03777778;
			style = 0;
			text = "Жизней:";
			colorBackground[] = {0.302,0.302,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class Control17867719
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.68888889;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Получить";
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
			action = "call Freddy_fnc_createveh; closeDialog 0;";
			
		};
		class Control12420663
		{
			type = 5;
			idc = 3614;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.1875;
			h = safeZoneH * 0.34888889;
			style = 16;
			colorBackground[] = {0.302,0.302,0.302,1};
			colorDisabled[] = {0.302,0.302,0.302,1};
			colorSelect[] = {0.902,0.902,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			onLoad = call FREDDT_FNC_LOADLIGHTVEHARRAY;
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class Control23319650
		{
			type = 1;
			idc = 14141;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Легковая техника";
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
			action = "lbClear 3614; call FREDDT_FNC_LOADLIGHTVEHARRAY; ctrlEnable [14141, false]; ctrlEnable [14142, true]; ctrlEnable [14143, true]; ctrlEnable [14144, true];"
		};
		class Control14349787
		{
			type = 1;
			idc = 14142;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.39555556;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Грузовая техника";
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
			action = "lbClear 3614; call FREDDT_FNC_TRUCKVEHARRAY; ctrlEnable [14141, true]; ctrlEnable [14142, false]; ctrlEnable [14143, true]; ctrlEnable [14144, true];"
		};
		class Control757064
		{
			type = 1;
			idc = 14143;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Бронированная техника";
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
			action = "lbClear 3614; call PENA_FNC_PREVEHARRAY; ctrlEnable [14141, true]; ctrlEnable [14142, true]; ctrlEnable [14143, false]; ctrlEnable [14144, true];"
		};
		class Control24773411
		{
			type = 1;
			idc = 14144;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Воздушная техника";
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
			action = "lbClear 3614; call PENA_FNC_PREHELIARRAY; ctrlEnable [14141, true]; ctrlEnable [14142, true]; ctrlEnable [14143, true]; ctrlEnable [14144, false];"
		};
			class LifesCount
		{
			type = 13;
			idc = 131214;
			x = safeZoneX + safeZoneW * 0.5825;
			y = safeZoneY + safeZoneH * 0.69777778;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "0";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};
			class Attributes
			{
			font = "PuristaMedium";
    		color = "#ffffff";
    		align = "left";
    		valign = "middle";
    		size = "0.9";		
			};
		
		};
	};
	
};
