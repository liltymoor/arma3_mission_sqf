#include "CustomControlClasses.h"
class RaidLobby
{
	idd = 79;
	
	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.193125;
			y = safeZoneY + safeZoneH * -0.04333333;
			w = safeZoneW * 0.6125;
			h = safeZoneH * 1.03666667;
			style = 48;
			text = "C:\Dialog creator\staff\tabletempty.png";
			colorBackground[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class OcheredZachitiText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.294375;
			y = safeZoneY + safeZoneH * 0.45333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Очередь защиты";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class UchastnikiDefaText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.294375;
			y = safeZoneY + safeZoneH * 0.25777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Участники защиты";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class CountDefMembers
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.394375;
			y = safeZoneY + safeZoneH * 0.25777778;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "1";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class IgrokovUchastvuetText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.45333334;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Минимум игроков";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class UchastnikiAtakiText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.569375;
			y = safeZoneY + safeZoneH * 0.25777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Участники атаки";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class CountAttackMembers
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.669375;
			y = safeZoneY + safeZoneH * 0.25777778;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "1";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class OcheredAtakiText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.569375;
			y = safeZoneY + safeZoneH * 0.45333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Очередь Атаки";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class CountAttackQueue
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.669375;
			y = safeZoneY + safeZoneH * 0.45333334;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "1";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class CountDefQueue
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.394375;
			y = safeZoneY + safeZoneH * 0.45333334;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "1";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class YD
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.50222223;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Защита: 6";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class YA
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.55111112;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Атака: 8";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TimerTitle
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.25777778;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "До начала";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Timer
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.30666667;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.13444445;
			style = 2;
			text = "Тут будет время";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class RaidersListBox
		{
			type = 5;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.15333334;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {1,1,1,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,0.302,1};
			font = "TahomaB";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class RaidersQueue
		{
			type = 5;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.12888889;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {1,1,1,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,0.302,1};
			font = "TahomaB";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class DefendersListBox
		{
			type = 5;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.15333334;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {1,1,1,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,0.302,1};
			font = "TahomaB";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class DefendersQueue
		{
			type = 5;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.12888889;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {1,1,1,1};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,0.302,1};
			font = "TahomaB";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class JoinRaiders
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.5675;
			y = safeZoneY + safeZoneH * 0.63222223;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Присоединиться к атаке";
			borderSize = 0;
			colorBackground[] = {0.4,0.502,0.902,0.7059};
			colorBackgroundActive[] = {0.4,0.502,0.902,0.7059};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "TahomaB";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class JoinDefenders
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.2925;
			y = safeZoneY + safeZoneH * 0.63222223;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Присоединиться к защите";
			borderSize = 0;
			colorBackground[] = {0.4,0.502,0.902,0.7059};
			colorBackgroundActive[] = {0.4,0.502,0.902,0.7059};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "TahomaB";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class Quit
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4425;
			y = safeZoneY + safeZoneH * 0.63222223;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Выйти из лобби";
			borderSize = 0;
			colorBackground[] = {0.4,0.502,0.902,0.7059};
			colorBackgroundActive[] = {0.4,0.502,0.902,0.7059};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "TahomaB";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		
	};
	
};
