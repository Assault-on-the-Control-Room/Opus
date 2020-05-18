#pragma once

namespace blofeld
{

	constexpr unsigned long INSTANCE_IMPOSTER_DEFINITION_TAG = 'iimz';

	extern s_tag_group instance_imposter_definition_group;

	extern s_tag_struct_definition instance_imposter_block_block_struct;
	extern s_tag_block_definition instance_imposter_block_block;
	extern s_tag_struct_definition instance_imposter_checksum_block_block_struct;
	extern s_tag_block_definition instance_imposter_checksum_block_block;
	extern s_tag_block_definition instance_imposter_definition_block_block;

	extern s_tag_struct_definition instance_imposter_definition_struct_definition_struct_definition; // tag group

	extern const char* instance_imposter_flags_definition_strings[];
	extern s_string_list_definition instance_imposter_flags_definition;
	extern const char* instance_imposter_element_flags_definition_strings[];
	extern s_string_list_definition instance_imposter_element_flags_definition;

	extern s_tag_reference_definition global_instance_imposter_reference;

} // namespace blofeld

