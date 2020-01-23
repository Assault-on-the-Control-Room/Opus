#pragma once

struct nicename("Decorator Set") group('dctr') s_decorator_set_definition
{
	struct nicename("Parts") s_part_block_definition;

	TagReference nicename("Lod Model 1") lod_model_1_reference; 
	TagReference nicename("Lod Model 2") lod_model_2_reference; 
	TagReference nicename("Lod Model 3") lod_model_3_reference; 
	TagReference nicename("Lod Model 4") lod_model_4_reference; 
	s_tag_block_definition<s_part_block_definition> nicename("Parts") parts_block; 
	int32_t __unknown; 
	TagReference nicename("Texture") texture_reference; 
	int16_t nicename("Affects Visibility") affects_visibility; 
	int16_t __unknown2; 
	float nicename("Color? r") color_r; 
	float nicename("Color? g") color_g; 
	float nicename("Color? b") color_b; 
	Undefined32 __unknown3; 
	Undefined32 __unknown4; 
	Undefined32 __unknown5; 
	Undefined32 __unknown6; 
	Undefined32 __unknown7; 
	float nicename("Brightness (Base)") brightness_base; 
	float nicename("Brightness (Shadow)") brightness_shadow; 
	Undefined32 __unknown8; 
	Undefined32 __unknown9; 
	Undefined32 __unknown10; 
	Undefined32 __unknown11; 
	Undefined32 __unknown12; 
	Undefined32 __unknown13; 
	Undefined32 __unknown14; 
	Undefined32 __unknown15; 
	Undefined32 __unknown16; 
	int16_t nicename("Is Visible? (Can Crash Xbox!)") is_visible_can_crash_xbox; 
	int16_t nicename("Lod Type") lod_type; 
	float nicename("Lod 1 ...?") lod_1_; 
	float nicename("Lod 1 ...?") lod_1_2; 
	float nicename("Lod 1 Activation Distance (negative)") lod_1_activation_distance_negative; 
	float nicename("Lod 1 Range") lod_1_range; 
	float nicename("Lod 2 ...?") lod_2_; 
	float nicename("Lod 2 ...?") lod_2_2; 
	float nicename("Lod 2 Activation Distance (negative)") lod_2_activation_distance_negative; 
	float nicename("Lod 2 Range") lod_2_range; 
	float nicename("Lod 3 ...?") lod_3_; 
	float nicename("Lod 3 ...?") lod_3_2; 
	float nicename("Lod 3 Activation Distance (negative)") lod_3_activation_distance_negative; 
	float nicename("Lod 3 Range") lod_3_range; 
	float nicename("Lod 4 ...?") lod_4_; 
	float nicename("Lod 4 ...?") lod_4_2; 
	float nicename("Lod 4 Activation Distance (negative)") lod_4_activation_distance_negative; 
	float nicename("Lod 4 Range") lod_4_range; 
	Undefined32 __unknown17; 
	Undefined32 __unknown18; 
	Undefined32 __unknown19; 

	struct nicename("part") s_part_block_definition
	{
		string_id nicename("Name") name; 
	};
};
