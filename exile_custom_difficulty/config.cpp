/*

Exile Custom Difficulty by [FPS]kuplion

*/

class CfgPatches
{
	class exile_custom_difficulty
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_client","exile_server_config"};
	};
};

class CfgFunctions
{
	class exile_custom_difficulty
	{
		class exile_custom_difficulty_init
		{
			file = "exile_custom_difficulty\init";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
	};
};

class CfgDifficultyPresets
{
	class Veteran;
	defaultPreset = "ExileRegular";
	class ExileRegular: Veteran
	{
		BleedingRate = 0.0005;
		displayName = "Regular Exile";
		class Options
		{
			reducedDamage = 0;
			groupIndicators = 0;
			friendlyTags = 0;
			enemyTags = 0;
			detectedMines = 0;
			commands = 0;
			waypoints = 0;
			weaponInfo = 0;
			stanceIndicator = 0;
			staminaBar = 0;
			weaponCrosshair = 0; // Disabled Crosshair
			visionAid = 0;
			thirdPersonView = 1;
			cameraShake = 1;
			scoreTable = 0;
			deathMessages = 0;
			vonID = 0;
			squadRadar = 0;
			mapContent = 0;
			autoReport = 0;
			multipleSaves = 0;
		};
	};
	class ExileHardcore: Veteran
	{
		BleedingRate = 0.005;
		displayName = "Hardcore Exile";
		class Options
		{
			reducedDamage = 0;
			groupIndicators = 0;
			friendlyTags = 0;
			enemyTags = 0;
			detectedMines = 0;
			commands = 0;
			waypoints = 0;
			weaponInfo = 0;
			stanceIndicator = 0;
			staminaBar = 0;
			weaponCrosshair = 0;
			visionAid = 0;
			thirdPersonView = 0;
			cameraShake = 1;
			scoreTable = 0;
			deathMessages = 0;
			vonID = 0;
			squadRadar = 0;
			mapContent = 0;
			autoReport = 0;
			multipleSaves = 0;
		};
	};
};