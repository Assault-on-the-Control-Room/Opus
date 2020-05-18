#include <blofeld-private-pch.h>
#include <blofeld_field_type_override.h>

namespace blofeld
{

	TAG_BLOCK(player_traits_vitality_block, 1)
	{
		{ _field_long_flags, "should apply trait", &player_traits_vitality_float_flags },
		{ _field_explanation, "damage resistance" },
		{ _field_real, "damage resistance" },
		{ _field_real, "shield multiplier" },
		{ _field_real, "body multiplier" },
		{ _field_real, "shield stun duration" },
		{ _field_real, "shield recharge rate" },
		{ _field_real, "body recharge rate" },
		{ _field_real, "overshield recharge rate" },
		{ _field_real, "vampirism percent" },
		{ _field_real, "explosive damage resistance#incoming damage multiplied by (1 - resistance)" },
		{ _field_real, "wheelman armor vehicle stun time modifier" },
		{ _field_real, "wheelman armor vehicle recharge time modifier" },
		{ _field_real, "wheelman armor vehicle emp disabled time modifier" },
		{ _field_real, "fall damage multiplier" },
		{ _field_char_enum, "headshot immunity", &player_trait_bool_enum },
		{ _field_char_enum, "assassination immunity", &player_trait_bool_enum },
		{ _field_char_enum, "deathless", &player_trait_bool_enum },
		{ _field_char_enum, "fast track armor", &player_trait_bool_enum },
		{ _field_char_enum, "powerup cancellation", &player_trait_powerup_cancellation_enum },
		{ _field_pad, "pad", 3 },
		{ _field_terminator }
	};

	TAG_BLOCK(player_traits_weapons_block, 1)
	{
		{ _field_long_flags, "should apply trait", &player_traits_weapons_float_flags },
		{ _field_real, "damage multiplier" },
		{ _field_real, "melee damage multiplier" },
		{ _field_real, "grenade recharge seconds frag" },
		{ _field_real, "grenade recharge seconds plasma" },
		{ _field_real, "grenade recharge seconds spike" },
		{ _field_real, "hero equipment energy use rate modifier" },
		{ _field_real, "hero equipment energy recharge delay modifier" },
		{ _field_real, "hero equipment energy recharge rate modifier" },
		{ _field_real, "hero equipment initial energy modifier" },
		{ _field_real, "equipment energy use rate modifier" },
		{ _field_real, "equipment energy recharge delay modifier" },
		{ _field_real, "equipment energy use recharge rate modifier" },
		{ _field_real, "equipment energy initial energy modifier" },
		{ _field_real, "switch speed modifier" },
		{ _field_real, "reload speed modifier" },
		{ _field_real, "ordnance points modifier" },
		{ _field_real, "explosive area of effect radius modifier" },
		{ _field_real, "gunner armor modifier" },
		{ _field_real, "stability armor modifier" },
		{ _field_real, "drop recon warning seconds" },
		{ _field_real, "drop recon distance modifier" },
		{ _field_real, "assassination speed modifier" },
		{ _field_char_enum, "weapon pickup allowed", &player_trait_bool_enum },
		{ _field_char_enum, "initial grenade count", &player_trait_initial_grenade_count_enum },
		{ _field_char_enum, "infinite ammo", &player_trait_infinite_ammo_enum },
		{ _field_char_enum, "equipment usage", &player_trait_equipment_usage_enum },
		{ _field_char_enum, "equipment usage excepting auto turret#false will disable all equipment except auto turret", &player_trait_equipment_usage_enum },
		{ _field_char_enum, "equipment drop", &player_trait_bool_enum },
		{ _field_char_enum, "infinite equipment", &player_trait_bool_enum },
		{ _field_char_enum, "weapons ammopack", &player_trait_bool_enum },
		{ _field_char_enum, "weapons grenadier", &player_trait_bool_enum },
		{ _field_char_enum, "weapons explode on death armormod#spawns projectile specified in globals.globals", &player_trait_bool_enum },
		{ _field_char_enum, "ordnance markers visible", &player_trait_bool_enum },
		{ _field_char_enum, "weapons ordnance reroll available", &player_trait_bool_enum },
		{ _field_char_enum, "weapons resourceful#grenade probabilities defined in grenade_list.game_globals_grenade_list", &player_trait_bool_enum },
		{ _field_char_enum, "weapons well equipped", &player_trait_bool_enum },
		{ _field_char_enum, "ordnance disabled", &player_trait_bool_enum },
		{ _field_pad, "weapons_padding", 1 },
		{ _field_explanation, "initial weapons/equipment" },
		{ _field_string_id, "initial primary weapon" },
		{ _field_string_id, "initial secondary weapon" },
		{ _field_string_id, "initial equipment" },
		{ _field_string_id, "initial tactical package" },
		{ _field_string_id, "initial support upgrade" },
		{ _field_terminator }
	};

	TAG_BLOCK(player_traits_movement_block, 1)
	{
		{ _field_long_flags, "should apply trait", &player_traits_movement_float_flags },
		{ _field_real, "speed" },
		{ _field_real, "gravity multiplier" },
		{ _field_real, "jump multiplier" },
		{ _field_real, "turn speed multiplier" },
		{ _field_char_enum, "vehicle usage", &player_trait_vehicle_usage },
		{ _field_char_enum, "double jump", &player_trait_double_jump },
		{ _field_char_enum, "sprint usage", &player_trait_bool_enum },
		{ _field_char_enum, "automatic momentum usage", &player_trait_bool_enum },
		{ _field_char_enum, "vaulting enabled", &player_trait_bool_enum },
		{ _field_char_enum, "stealthy", &player_trait_bool_enum },
		{ _field_pad, "grue", 2 },
		{ _field_terminator }
	};

	TAG_BLOCK(player_traits_appearance_block, 1)
	{
		{ _field_char_enum, "active camo", &player_trait_active_camo },
		{ _field_char_enum, "waypoint", &player_trait_waypoint },
		{ _field_char_enum, "gamertag visible", &player_trait_waypoint },
		{ _field_char_enum, "aura", &player_trait_aura },
		{ _field_explanation, "death effect/attached effect" },
		{ _field_string_id, "death effect" },
		{ _field_string_id, "attached effect" },
		{ _field_terminator }
	};

	TAG_BLOCK(player_traits_sensors_block, 1)
	{
		{ _field_long_flags, "should apply trait", &player_traits_sensors_float_flags },
		{ _field_real, "motion tracker range" },
		{ _field_real, "nemesis duration:seconds" },
		{ _field_char_enum, "motion tracker", &player_trait_motion_tracker },
		{ _field_char_enum, "motion tracker while zoomed", &player_trait_bool_enum },
		{ _field_char_enum, "directional damage indicator", &player_trait_bool_enum },
		{ _field_char_enum, "vision mode", &player_trait_bool_enum },
		{ _field_char_enum, "battle awareness", &player_trait_bool_enum },
		{ _field_char_enum, "threat view", &player_trait_bool_enum },
		{ _field_char_enum, "aural enhancement", &player_trait_bool_enum },
		{ _field_char_enum, "nemesis", &player_trait_bool_enum },
		{ _field_terminator }
	};

	TAG_BLOCK(game_engine_player_traits_block, 1)
	{
		{ _field_block, "vitality traits", &player_traits_vitality_block_block },
		{ _field_block, "weapon traits", &player_traits_weapons_block_block },
		{ _field_block, "movement traits", &player_traits_movement_block_block },
		{ _field_block, "appearance traits", &player_traits_appearance_block_block },
		{ _field_block, "sensor traits", &player_traits_sensors_block_block },
		{ _field_terminator }
	};

	TAG_BLOCK(game_engine_player_traits_list_block, 64)
	{
		{ _field_string_id, "name^" },
		{ _field_block, "vitality traits", &player_traits_vitality_block_block },
		{ _field_block, "weapon traits", &player_traits_weapons_block_block },
		{ _field_block, "movement traits", &player_traits_movement_block_block },
		{ _field_block, "appearance traits", &player_traits_appearance_block_block },
		{ _field_block, "sensor traits", &player_traits_sensors_block_block },
		{ _field_terminator }
	};

	STRINGS(player_trait_bool_enum)
	{
		"unchanged",
		"false",
		"true"
	};
	STRING_LIST(player_trait_bool_enum, player_trait_bool_enum_strings, _countof(player_trait_bool_enum_strings));

	STRINGS(player_trait_initial_grenade_count_enum)
	{
		"unchanged",
		"map_default",
		"0",
		"1_frag",
		"2_frag",
		"1_plasma",
		"2_plasma",
		"1_type2",
		"2_type2",
		"1_type3",
		"2_type3",
		"1_type4",
		"2_type4",
		"1_type5",
		"2_type5",
		"1_type6",
		"2_type6",
		"1_type7",
		"2_type7"
	};
	STRING_LIST(player_trait_initial_grenade_count_enum, player_trait_initial_grenade_count_enum_strings, _countof(player_trait_initial_grenade_count_enum_strings));

	STRINGS(player_trait_infinite_ammo_enum)
	{
		"unchanged",
		"off",
		"on",
		"bottomless_clip"
	};
	STRING_LIST(player_trait_infinite_ammo_enum, player_trait_infinite_ammo_enum_strings, _countof(player_trait_infinite_ammo_enum_strings));

	STRINGS(player_trait_equipment_usage_enum)
	{
		"unchanged",
		"off",
		"not with objectives",
		"on"
	};
	STRING_LIST(player_trait_equipment_usage_enum, player_trait_equipment_usage_enum_strings, _countof(player_trait_equipment_usage_enum_strings));

	STRINGS(player_trait_vehicle_usage)
	{
		"unchanged",
		"none",
		"passenger_only",
		"driver_only",
		"gunner_only",
		"not_passenger",
		"not_driver",
		"not_gunner",
		"full"
	};
	STRING_LIST(player_trait_vehicle_usage, player_trait_vehicle_usage_strings, _countof(player_trait_vehicle_usage_strings));

	STRINGS(player_trait_double_jump)
	{
		"unchanged",
		"off",
		"on",
		"on_plus_lunge"
	};
	STRING_LIST(player_trait_double_jump, player_trait_double_jump_strings, _countof(player_trait_double_jump_strings));

	STRINGS(player_trait_active_camo)
	{
		"unchanged",
		"off",
		"poor",
		"good",
		"excellent",
		"invisible"
	};
	STRING_LIST(player_trait_active_camo, player_trait_active_camo_strings, _countof(player_trait_active_camo_strings));

	STRINGS(player_trait_waypoint)
	{
		"unchanged",
		"off",
		"allies",
		"all"
	};
	STRING_LIST(player_trait_waypoint, player_trait_waypoint_strings, _countof(player_trait_waypoint_strings));

	STRINGS(player_trait_aura)
	{
		"unchanged",
		"off",
		"team_color",
		"black",
		"white"
	};
	STRING_LIST(player_trait_aura, player_trait_aura_strings, _countof(player_trait_aura_strings));

	STRINGS(player_trait_motion_tracker)
	{
		"unchanged",
		"off",
		"moving_friendly_bipeds_moving_neutral_vehicles",
		"moving_bipeds_moving_vehicles",
		"all_bipeds_moving_vehicles"
	};
	STRING_LIST(player_trait_motion_tracker, player_trait_motion_tracker_strings, _countof(player_trait_motion_tracker_strings));

	STRINGS(player_trait_powerup_cancellation_enum)
	{
		"unchanged",
		"none",
		"no_overshield"
	};
	STRING_LIST(player_trait_powerup_cancellation_enum, player_trait_powerup_cancellation_enum_strings, _countof(player_trait_powerup_cancellation_enum_strings));

	STRINGS(player_traits_vitality_float_flags)
	{
		"damage resistance",
		"shield multiplier",
		"body multiplier",
		"shield stun duration",
		"shield recharge rate",
		"body recharge rate",
		"overshield recharge rate",
		"vampirism percent",
		"explosive damage resistance",
		"wheelman armor vehicle stun time modifier",
		"wheelman armor vehicle recharge time modifier",
		"wheelman armor vehicle emp disabled time modifier",
		"fall damage multiplier"
	};
	STRING_LIST(player_traits_vitality_float_flags, player_traits_vitality_float_flags_strings, _countof(player_traits_vitality_float_flags_strings));

	STRINGS(player_traits_weapons_float_flags)
	{
		"damage multiplier",
		"melee damage multiplier",
		"grenade recharge seconds frag",
		"grenade recharge seconds plasma",
		"grenade recharge seconds spike",
		"hero equipment energy use rate modifier",
		"hero equipment energy recharge delay modifier",
		"hero equipment energy recharge rate modifier",
		"hero equipment initial energy modifier",
		"equipment energy use rate modifier",
		"equipment energy recharge delay modifier",
		"equipment energy use recharge rate modifier",
		"equipment energy initial energy modifier",
		"switch speed modifier",
		"reload speed modifier",
		"ordnance points modifier",
		"explosive area of effect radius modifier",
		"gunner armor modifier",
		"stability armor modifier",
		"drop recon warning seconds",
		"drop recon distance modifier",
		"assassination speed modifier"
	};
	STRING_LIST(player_traits_weapons_float_flags, player_traits_weapons_float_flags_strings, _countof(player_traits_weapons_float_flags_strings));

	STRINGS(player_traits_movement_float_flags)
	{
		"speed",
		"gravity multiplier",
		"jump multiplier",
		"turn speed multiplier"
	};
	STRING_LIST(player_traits_movement_float_flags, player_traits_movement_float_flags_strings, _countof(player_traits_movement_float_flags_strings));

	STRINGS(player_traits_sensors_float_flags)
	{
		"motion tracker range",
		"nemesis duration"
	};
	STRING_LIST(player_traits_sensors_float_flags, player_traits_sensors_float_flags_strings, _countof(player_traits_sensors_float_flags_strings));

} // namespace blofeld

