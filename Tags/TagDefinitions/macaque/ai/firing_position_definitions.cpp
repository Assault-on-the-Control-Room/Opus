#include <tagdefinitions-private-pch.h>
#include <macaque_field_type_override.h>

namespace blofeld
{

namespace macaque
{

	#define FIRING_POSITIONS_BLOCK_ID { 0xA8B4FE85, 0xA9034300, 0xAFABFF3A, 0xA083CEF9 }
	TAG_BLOCK(
		firing_positions_block,
		"firing_positions_block",
		k_max_firing_positions_per_zone,
		"s_firing_position_definition",
		SET_POSTPROCESS_RECURSIVELY | SET_IS_MEMCPYABLE | SET_UNKNOWN15,
		TAG_MEMORY_ATTRIBUTES(MEMORY_ALLOCATION_DEFAULT, TAG_MEMORY_USAGE_WRITEABLE),
		FIRING_POSITIONS_BLOCK_ID)
	{
		FIELD_EXPLANATION("CONTROLS", nullptr, "Ctrl-N: Creates a new area and assigns it to the current selection of firing points."),
		{ _field_real_point_3d, "position (local)" },
		{ _field_custom_long_block_index, "packedKeyOffaceref" },
		{ _field_custom_long_block_index, "navMeshUIDOffaceref" },
		{ _field_word_flags, "flags", &g_firing_position_flags },
		{ _field_word_flags, "posture flags", &g_firing_position_posture_flags },
		{ _field_short_block_index, "area", &areas_block },
		{ _field_short_integer, "cluster index" },
		{ _field_short_integer, "cluster bsp" },
		{ _field_char_integer, "bits and pad" },
		FIELD_PAD("PAD1", nullptr, 1),
		{ _field_real_euler_angles_2d, "normal" },
		FIELD_CUSTOM(nullptr, nullptr, _field_id_unknown_facing),
		{ _field_angle, "facing" },
		{ _field_long_integer, "lastAbsoluteRejectionGameTime" },
		{ _field_terminator }
	};

	STRINGS(g_firing_position_flags)
	{
		"open",
		"partial",
		"closed",
		"mobile",
		"wall lean",
		"perch",
		"ground point",
		"dynamic cover point",
		"automatically generated!",
		"nav volume"
	};
	STRING_LIST(g_firing_position_flags, g_firing_position_flags_strings, _countof(g_firing_position_flags_strings));

	STRINGS(g_firing_position_posture_flags)
	{
		"corner_left",
		"corner_right",
		"bunker",
		"bunker high",
		"bunker low"
	};
	STRING_LIST(g_firing_position_posture_flags, g_firing_position_posture_flags_strings, _countof(g_firing_position_posture_flags_strings));

} // namespace macaque

} // namespace blofeld
