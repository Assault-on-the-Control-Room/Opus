#include <blofeld-private-pch.h>
#include <blofeld_field_type_override.h>

namespace blofeld
{

	TAG_GROUP_FROM_BLOCK(atmosphere_fog, ATMOSPHERE_FOG_TAG, atmosphere_definition_block_block );

	TAG_BLOCK(soloFogFunctionBlock, 1)
	{
		{ _field_custom },
		{ _field_struct, "mapping", &mapping_function_struct_definition },
		{ _field_terminator }
	};

	TAG_BLOCK(atmosphere_definition_block, k_max_atmosphere_settings)
	{
		{ _field_word_flags, "Flags", &atmosphere_flags },
		{ _field_byte_integer, "Version!" },
		{ _field_pad, "ABCDEFGH", 1 },
		{ _field_explanation, "Ambient Fog Parameters" },
		{ _field_real, "distance bias:world units#negative means into the screen" },
		{ _field_custom, "Sky Fog" },
		{ _field_struct, "sky fog", &solo_fog_parameters_struct_definition_struct_definition },
		{ _field_custom },
		{ _field_custom, "Ground Fog" },
		{ _field_struct, "ground fog", &solo_fog_parameters_struct_definition_struct_definition },
		{ _field_custom },
		{ _field_custom, "Ceiling Fog BEWARE!" },
		{ _field_struct, "ceiling fog", &solo_fog_parameters_struct_definition_struct_definition },
		{ _field_custom },
		{ _field_custom, "Fog Light" },
		{ _field_struct, "fog light", &fog_light_struct_definition_struct_definition },
		{ _field_custom },
		{ _field_explanation, "Patchy Fog Per-Cluster Parameters" },
		{ _field_real, "Sheet density" },
		{ _field_real_rgb_color, "Color tint" },
		{ _field_real_rgb_color, "Color tint inner" },
		{ _field_real, "Intensity" },
		{ _field_real, "Full intensity height" },
		{ _field_real, "Half intensity height" },
		{ _field_real_vector_3d, "Wind direction" },
		{ _field_real, "Reference plane height" },
		{ _field_custom, "Volume Fog" },
		{ _field_struct, "volume fog", &VolumeFogParametersDefinition_struct_definition },
		{ _field_custom },
		{ _field_custom, "Light Shafts" },
		{ _field_struct, "light shaft", &LightShaftParametersDefinition_struct_definition },
		{ _field_custom },
		{ _field_explanation, "Weather effect" },
		{ _field_tag_reference, "Weather effect", &global_effect_reference },
		{ _field_terminator }
	};

	TAG_STRUCT(solo_fog_parameters_struct_definition)
	{
		{ _field_real, "base height:world units" },
		{ _field_real, "fog height:world units" },
		{ _field_real, "fog thickness [0.0 to 1.0]" },
		{ _field_real, "fog falloff end{max fog distance}" },
		{ _field_real_rgb_color, "fog color" },
		{ _field_real, "fog color intensity#scales color up or down to allow for HDR values" },
		{ _field_block, "Function", &soloFogFunctionBlock_block },
		{ _field_terminator }
	};

	TAG_STRUCT(fog_light_struct_definition)
	{
		{ _field_real, "pitch angle [-90 to 90]:degree" },
		{ _field_real, "yaw angle [0 to 360]:degree" },
		{ _field_real, "angular radius [0 to 180]:degree" },
		{ _field_real_rgb_color, "tint color" },
		{ _field_real, "tint color intensity" },
		{ _field_real, "angular falloff steepness" },
		{ _field_real, "distance falloff steepness" },
		{ _field_real, "nearby cutoff percentage" },
		{ _field_terminator }
	};

	TAG_STRUCT(VolumeFogParametersDefinition)
	{
		{ _field_real_rgb_color, "volume fog color" },
		{ _field_real, "volume fog color intensity" },
		{ _field_terminator }
	};

	TAG_STRUCT(LightShaftParametersDefinition)
	{
		{ _field_real_rgb_color, "light shaft tint color" },
		{ _field_real, "light shaft intensity" },
		{ _field_real, "light shaft decay rate" },
		{ _field_real, "maximum screen distance" },
		{ _field_real, "sample density" },
		{ _field_real, "minimum caster distance" },
		{ _field_terminator }
	};

	STRINGS(atmosphere_flags)
	{
		"Sky Fog Enabled",
		"Ground Fog Enabled",
		"Ceiling Fog Enabled",
		"Fog Light Enabled",
		"Patchy Fog Enabled",
		"Sky Fog Height Camera Relative",
		"Ground Fog Height Camera Relative",
		"Use Floating Shadow for Fog Light",
		"Only use fog light for light shafts"
	};
	STRING_LIST(atmosphere_flags, atmosphere_flags_strings, _countof(atmosphere_flags_strings));

	TAG_REFERENCE(global_atmosphere_definition_reference, ATMOSPHERE_FOG_TAG);

} // namespace blofeld
