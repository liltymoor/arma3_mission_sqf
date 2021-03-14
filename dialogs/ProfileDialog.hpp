#include "CustomControlClasses.h"
class ProfileDialog
{
	idd = 15000;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 21)) then {true};""]; _this call FRAME_03_Load; _this call PENA_PARTY_ONLOAD;"
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
		class imgBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.24888889;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.18333334;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};

		class img
		{
			type = 0;
			idc = 221;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.24888889;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.18333334;
			style = 0+48;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Name
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Имя";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class NameText
		{
			type = 0;
			idc = 231;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Rank
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Ранг";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class RankText
		{
			type = 0;
			idc = 224;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Titul
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Титул";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class TitulText
		{
			type = 0;
			idc = 222;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Sponsor
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0375;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Спонсор";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class SponsorText
		{
			type = 0;
			idc = 223;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.1125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Name_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.24888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Доступные титулы";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class ListBox
		{
			type = 5;
			idc = 3614;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.29777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.3;
			style = 16;
			colorBackground[] = {0,0,0,0.7};
			colorDisabled[] = {0,0,0,0.7};
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
			class PickRole
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Выбрать титул";
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
			action = "call Freddy_fnc_pickRole;";
			
		};
			class OnlinePlayers
		{
			type = 5;
			idc = 15666;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.24888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.12888889;
			style = 16;
			colorBackground[] = {0,0,0,0.7};
			colorDisabled[] = {0,0,0,0.7};
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
		class Invite
		{
			type = 1;
			idc = 15001;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.39555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0+2;
			text = "Пригласить";
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
			action = "[15001]remoteExec['PENA_SEND_INVITE', player, false];";
			
		};
		class PlayersInSquad
		{
			type = 5;
			idc = 15003;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.12888889;
			style = 16;
			colorBackground[] = {0,0,0,0.7};
			colorDisabled[] = {0,0,0,0.7};
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
		class create
        {
            type = 1;
            idc = 15002;
            x = safeZoneX + safeZoneW * 0.59375;
            y = safeZoneY + safeZoneH * 0.61555556;
            w = safeZoneW * 0.0875;
            h = safeZoneH * 0.03666667;
            style = 0+2;
            text = "Создать группу";
            borderSize = 0;
            colorBackground[] = {0.502,0.6,1,1};
            colorBackgroundActive[] = {1,1,1,1};
            colorBackgroundDisabled[] = {1,1,1,1};
            colorBorder[] = {0,0,0,0};
            colorDisabled[] = {0.2,0.2,0.2,1};
            colorFocused[] = {0.2,0.2,0.2,1};
            colorShadow[] = {0,0,0,1};
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
            action = "[15002]remoteExec['PENA_CREATE_PARTY', player, false];";
        };
		
	};
	
};