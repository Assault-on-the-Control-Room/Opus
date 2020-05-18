#pragma once

namespace blofeld
{

	constexpr unsigned long KILLCAMCAMERAPARAMTER_TAG = 'kccd';

	extern s_tag_group KillCamCameraParamter_group;
	constexpr unsigned long PROJECTILE_TAG = 'proj';

	extern s_tag_group projectile_group;

	extern s_tag_block_definition KillCamCameraParamter_block_block;
	extern s_tag_struct_definition old_projectile_material_response_block_block_struct;
	extern s_tag_block_definition old_projectile_material_response_block_block;
	extern s_tag_struct_definition projectile_material_response_block_block_struct;
	extern s_tag_block_definition projectile_material_response_block_block;
	extern s_tag_struct_definition brute_grenade_block_block_struct;
	extern s_tag_block_definition brute_grenade_block_block;
	extern s_tag_struct_definition fire_bomb_grenade_block_block_struct;
	extern s_tag_block_definition fire_bomb_grenade_block_block;
	extern s_tag_struct_definition conical_projection_block_block_struct;
	extern s_tag_block_definition conical_projection_block_block;
	extern s_tag_struct_definition ProjectileSoundRTPCBlock_block_struct;
	extern s_tag_block_definition ProjectileSoundRTPCBlock_block;
	extern s_tag_block_definition projectile_block_block;

	extern s_tag_struct_definition KillCamCameraParamter_struct_definition_struct_definition; // tag group
	extern s_tag_struct_definition projectile_group_struct_definition; // tag group
	extern s_tag_struct_definition super_detonation_damage_struct_struct_definition;
	extern s_tag_struct_definition angular_velocity_lower_bound_struct_struct_definition;

	extern const char* effect_scale_enum_strings[];
	extern s_string_list_definition effect_scale_enum;
	extern const char* material_response_strings[];
	extern s_string_list_definition material_response;
	extern const char* material_possible_response_flags_strings[];
	extern s_string_list_definition material_possible_response_flags;
	extern const char* projectile_flags_strings[];
	extern s_string_list_definition projectile_flags;
	extern const char* secondary_projectile_flags_strings[];
	extern s_string_list_definition secondary_projectile_flags;
	extern const char* projectile_detonation_timer_modes_strings[];
	extern s_string_list_definition projectile_detonation_timer_modes;

	extern s_tag_reference_definition behavior_object_reference;

} // namespace blofeld

