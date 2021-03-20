#include "CustomControlClasses.h"
class RaidLobby
{
	idd = 20999;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 21)) then {true};""]; _this call PENA_Raid_OnLoad;"
	
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
			text = "images\tabletempty.paa";
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
			y = safeZoneY + safeZoneH * 0.40444445;
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
		class CountDefMembers //сччитает кол-во тех кто в лобби защиты
		{
			type = 0;
			idc = 20015;
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
			y = safeZoneY + safeZoneH * 0.40444445;
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
		class CountAttackMembers //считает кол-во тех кто в лобби атаки
		{
			type = 0;
			idc = 20014;
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
			y = safeZoneY + safeZoneH * 0.40444445;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Очередь Атаки";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class CountAttackQueue // число игроков в очередни в атаку
		{
			type = 0;
			idc = 20013;
			x = safeZoneX + safeZoneW * 0.669375;
			y = safeZoneY + safeZoneH * 0.40444445;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "1";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class CountDefQueue //число игроков в очереди на деф
		{
			type = 0;
			idc = 20012;
			x = safeZoneX + safeZoneW * 0.394375;
			y = safeZoneY + safeZoneH * 0.40444445;
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
			idc = 20012;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.45333334;
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
			idc = 20011;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.50222223;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Атака: 8";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TimerTitle //до начала или до конца
		{
			type = 0;
			idc = 20010;
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
		class Timer //часы
		{
			type = 0;
			idc = 20009;
			x = safeZoneX + safeZoneW * 0.444375;
			y = safeZoneY + safeZoneH * 0.30666667;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.08555556;
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
		class RaidersListBox//лобби атакующих
		{
			type = 5;
			idc = 20008;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.10444445;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {1,1,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
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
		class RaidersQueue //очередь атаки
		{
			type = 5;
			idc = 20007;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.10444445;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {1,1,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
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
		class DefendersListBox// лобби защиты
		{
			type = 5;
			idc = 20006;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.10444445;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {1,1,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
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
		class DefendersQueue //очередь защиты
		{
			type = 5;
			idc = 20005;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.10444445;
			style = 16;
			colorBackground[] = {0,0,0,0.7059};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {1,1,0.302,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
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
		class JoinAttack
		{
			type = 1;
			idc = 20004;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Присоединиться к атаке";
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
			action = "[20004]remoteExec['PENA_JoinToLobbyRaid', player, false];";
		};
		class JoinAttackSquad
		{
			type = 1;
			idc = 20003;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Присоединиться отрядом";
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
			action = "[20003]remoteExec['PENA_JoinToLobbyRaid_Squad', player, false];";
		};
		class JoinDef
		{
			type = 1;
			idc = 20002;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Присоединиться к защите";
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
			action = "[20002]remoteExec['PENA_JoinToLobbyDef', player, false];";
		};

		class JoinDefSquad
		{
			type = 1;
			idc = 20001;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Присоединиться отрядом";
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
			action = "[20001]remoteExec['PENA_JoinToLobbyDef_Squad', player, false];";
		};
		class quit
		{
			type = 1;
			idc = 20000;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Выйти из лобби";
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
			action = "[20000, player]remoteExec['PENA_QuitFromLobby_Queue', player, false];";
		};
		
	};
	
};
