#include "CustomControlClasses.h"
class BankDialog
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
		class Control2076103086_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.36625;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.29125;
			h = safeZoneH * 0.03777778;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,1};
			colorText[] = {0.302,0.302,0.302,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Control2076103086
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34125;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.04125;
			h = safeZoneH * 0.03777778;
			style = 0;
			text = "";
			colorBackground[] = {0.2,0.2,0.2,1};
			colorText[] = {0.2,0.2,0.2,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Control1968457566
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.44444445;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "Счет:";
			colorBackground[] = {1,1,1,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class moneycount
		{
			type = 13;
			idc = 1224677;
			x = safeZoneX + safeZoneW * 0.385625;
			y = safeZoneY + safeZoneH * 0.45111112;
			w = safeZoneW * 0.2625;
			h = safeZoneH * 0.02555556;
			style = 0;
			text = "123";
			size = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			colorBackground[] = {1,1,1,0};
			class Attributes
			{
				
			};
			
		};
		
	};
	class Controls
	{
		
	};
	
};