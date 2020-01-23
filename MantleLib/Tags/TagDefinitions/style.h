#pragma once

struct nicename("Style") group('styl') s_style_definition
{
	struct nicename("Special Movement") s_special_movement_block_definition;
	struct nicename("Behavior List") s_behavior_list_block_definition;

	char nicename("Name") name[32];
	int16_t nicename("Combat Status Decay Options") combat_status_decay_options; 
	int16_t __unknown; 
	int32_t nicename("Special Movement 1") special_movement_1; 
	int32_t nicename("Behaviors1") behaviors1; 
	int32_t nicename("Behaviors2") behaviors2; 
	int32_t nicename("Behaviors3") behaviors3; 
	int32_t nicename("Behaviors4") behaviors4; 
	int32_t nicename("Behaviors5") behaviors5; 
	int32_t nicename("Behaviors6") behaviors6; 
	int32_t nicename("Behaviors7") behaviors7; 
	int32_t nicename("Behaviors8") behaviors8; 
	s_tag_block_definition<s_special_movement_block_definition> nicename("Special Movement") special_movement_block; 
	s_tag_block_definition<s_behavior_list_block_definition> nicename("Behavior List") behavior_list_block; 

	struct nicename("special_movement") s_special_movement_block_definition
	{
		int32_t nicename("Special Movement 1") special_movement_1; 
	};

	struct nicename("behavior_list") s_behavior_list_block_definition
	{
		char nicename("Behavior Name") behavior_name[32];
	};
};
