#pragma once

namespace blofeld
{

namespace macaque
{

	extern s_tag_block_definition scenario_acoustics_palette_block_definition_block;
	extern s_tag_block_definition scenario_acoustic_sector_block;
	extern s_tag_struct_definition scenario_acoustic_sector_block_struct_definition; // scenario_acoustic_sector_block
	extern s_tag_block_definition acoustic_sector_point_block;
	extern s_tag_struct_definition acoustic_sector_point_block_struct_definition; // acoustic_sector_point_block
	extern s_tag_block_definition scenario_acoustic_transition_block;
	extern s_tag_struct_definition scenario_acoustic_transition_block_struct_definition; // scenario_acoustic_transition_block

	extern s_tag_struct_definition scenario_acoustics_palette_block_definition_struct;
	extern s_tag_struct_definition scenario_acoustics_environment_definition;
	extern s_tag_struct_definition scenario_acoustics_ambience_definition;
	extern s_tag_struct_definition scenario_acoustic_location_definition;
	extern s_tag_struct_definition scenario_acoustic_cluster_reference_definition;

	extern c_versioned_string_list background_sound_scale_flags_definition_strings;
	extern s_string_list_definition background_sound_scale_flags_definition;
	extern c_versioned_string_list acousticPaletteFlags_strings;
	extern s_string_list_definition acousticPaletteFlags;

} // namespace macaque

} // namespace blofeld
