#include "CustomControlClasses.h"
class StatatsDialog
{
	idd = -1;
	onLoad = "escKeyEH = (_this select 0) displayAddEventHandler [""KeyDown"", ""if (((_this select 1) == 21)) then {true};""];_this call FRAME_02_Load;";
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

		class UrStatBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.15888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class OtherPlayerStatBackground
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.54375;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.1375;
			h = safeZoneH * 0.15888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};

		class n1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.27222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "1";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.32111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "2";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n3
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num3
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text3
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.37;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "3";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n4
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num4
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text4
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.41888889;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "4";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n5
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num5
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text5
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.46777778;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "5";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n6
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num6
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text6
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.51666667;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "6";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n7
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num7
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text7
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.56555556;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "7";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n8
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num8
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.291875;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text8
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.295625;
			y = safeZoneY + safeZoneH * 0.61444445;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "8";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n9
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num9
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text9
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.27222223;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "9";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n10
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num10
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text10
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.32111112;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "10";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n11
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num11
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text11
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.37;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "11";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n12
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num12
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text12
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.41888889;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "12";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n13
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num13
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text13
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.46777778;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "13";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n14
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num14
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text14
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.51666667;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "14";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n15
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num15
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text15
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.56555556;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "15";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class n16
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Num16
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.416875;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.02125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.7};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Text16
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.420625;
			y = safeZoneY + safeZoneH * 0.61444445;
			w = safeZoneW * 0.0125;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "16";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t1
		{
			type = 0;
			idc = 100;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t2
		{
			type = 0;
			idc = 101;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t3
		{
			type = 0;
			idc = 102;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t4
		{
			type = 0;
			idc = 103;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t5
		{
			type = 0;
			idc = 104;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t6
		{
			type = 0;
			idc = 105;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t7
		{
			type = 0;
			idc = 106;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t8
		{
			type = 0;
			idc = 107;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t9
		{
			type = 0;
			idc = 108;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t10
		{
			type = 0;
			idc = 109;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t11
		{
			type = 0;
			idc = 110;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t12
		{
			type = 0;
			idc = 111;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t13
		{
			type = 0;
			idc = 112;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t14
		{
			type = 0;
			idc = 113;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t15
		{
			type = 0;
			idc = 114;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class t16
		{
			type = 0;
			idc = 115;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class YourStats
		{
			type = 0;
			idc = 116;
			x = safeZoneX + safeZoneW * 0.546875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.088125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class kills
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "Ваша статистика";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Rating
		{
			type = 0;
			idc = 117;
			x = safeZoneX + safeZoneW * 0.5475;
			y = safeZoneY + safeZoneH * 0.37;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
		class YourStats_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.546875;
			y = safeZoneY + safeZoneH * 0.54222223;
			w = safeZoneW * 0.088125;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "Убийств:";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class kills_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56875;
			y = safeZoneY + safeZoneH * 0.49333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Выберите игрока";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class Rating_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.5475;
			y = safeZoneY + safeZoneH * 0.59;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "Рейтинг:";
			colorBackground[] = {0.3255,0.3137,0.2353,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class button1
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button2
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button3
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button4
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button5
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button6
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button7
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button8
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.31875;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button9
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.27333334;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button10
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.32222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button11
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.37111112;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button12
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.42;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button13
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.46888889;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button14
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.51777778;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button15
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.56666667;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		class button16
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.44375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0.6353,0.2549,0.8275,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.3647,0.7451,0.1725,0};
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
			
		};
		
	};
	
};