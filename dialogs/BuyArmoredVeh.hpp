#include "CustomControlClasses.h"
class BuyArmoredVeh
{
	idd = 12343891;
	class ControlsBackground
	{
		class Control381056932
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
		class Control1290560403
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.411875;
			h = safeZoneH * 0.03777778;
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
		class Control1250048471
		{
			type = 5;
			idc = 3615;
			x = safeZoneX + safeZoneW * 0.31835938;
			y = safeZoneY + safeZoneH * 0.29861112;
			w = safeZoneW * 0.19238282;
			h = safeZoneH * 0.34722223;
			style = 16;
			colorBackground[] = {0.302,0.302,0.302,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.902,0.902,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			onLoad = call FREDDT_FNC_LOADARMOREDLANDVEH;
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class Buy
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34277344;
			y = safeZoneY + safeZoneH * 0.6875;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Купить";
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
			action = "call Freddy_fnc_checkArmoredveh; closeDialog 0;";
		};
		class Air
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.53808594;
			y = safeZoneY + safeZoneH * 0.6875;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.03819445;
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
			action = "lbClear 3615; call FREDDT_FNC_LOADARMOREDAIRVEH;";
		};
		class Land
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.53808594;
			y = safeZoneY + safeZoneH * 0.61458334;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.03819445;
			style = 0+2;
			text = "Наземная техника";
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
			action = "lbClear 3615; call FREDDT_FNC_LOADARMOREDLANDVEH;";
		};
		class Cost
		{
			type = 13;
			idc = 7777;
			x = safeZoneX + safeZoneW * 0.565;
			y = safeZoneY + safeZoneH * 0.56777778;
			w = safeZoneW * 0.09;
			h = safeZoneH * 0.03777778;
			style = 0;
			text = "";
			size = (((((safezoneW / safezoneH) min 1) / 1) / 25) * 1.2);
			access = 2;
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
		class Control1431894219
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.5375;
			y = safeZoneY + safeZoneH * 0.56222223;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "Цена:";
			colorBackground[] = {0.8863,0.4627,0.8314,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			access = 2;
			
		};

		class img
		{
			type = 13;
			idc = 777;
			x = safeZoneX + safeZoneW * 0.52539063;
			y = safeZoneY + safeZoneH * 0.39583334;
			w = safeZoneW * 0.16308594;
			h = safeZoneH * 0.15972223;
			style = 0;
			text = "";
			size = (((((safezoneW / safezoneH) min 1) / 1) / 25) * 1.2);
			access = 2;
			colorBackground[] = {1,1,1,0};
			class Attributes
			{
    		color = "#ffffff";	
			};
			
		};
		
	};
	
};
