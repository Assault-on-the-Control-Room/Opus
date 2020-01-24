#pragma once

struct nicename("Particle Model") group('pmdf') s_particle_model_definition
{
	struct nicename("Meshes") s_mesh_block_definition;
	struct nicename("Compression Info") s_compression_info_block_definition;
	struct s_unknown_nodey_block_definition;
	struct s_unknown_8_block_definition;
	struct nicename("Node Maps") s_node_map_block_definition;
	struct s_unknown_yo_block_definition;
	struct nicename("Water Meshes") s_water_mesh_block_definition;
	struct s_unknown_compression_info_block_definition;
	struct s_unknown_2_block_definition;

	int32_t __unknown; 
	s_tag_block_definition<s_mesh_block_definition> nicename("Meshes") meshes_block; 
	s_tag_block_definition<s_compression_info_block_definition> nicename("Compression Info") compression_info_block; 
	s_tag_block_definition<s_unknown_nodey_block_definition> __unknown_nodey_block; 
	s_tag_block_definition<s_unknown_8_block_definition> __unknown_8_block; 
	Undefined32 __unknown2; 
	Undefined32 __unknown3; 
	Undefined32 __unknown4; 
	Undefined32 __unknown5; 
	Undefined32 __unknown6; 
	Undefined32 __unknown7; 
	s_tag_block_definition<s_node_map_block_definition> nicename("Node Maps") node_maps_block; 
	Undefined32 __unknown8; 
	Undefined32 __unknown9; 
	Undefined32 __unknown10; 
	Undefined32 __unknown11; 
	Undefined32 __unknown12; 
	Undefined32 __unknown13; 
	Undefined32 __unknown14; 
	Undefined32 __unknown15; 
	Undefined32 __unknown16; 
	s_tag_block_definition<s_unknown_yo_block_definition> __unknown_yo_block; 
	s_tag_block_definition<s_water_mesh_block_definition> nicename("Water Meshes") water_meshes_block; 
	int32_t nicename("[zone] Asset Datum") zone_asset_datum; 
	uint16_t nicename("[easy read] Index") easy_read_index; 
	uint16_t nicename("[easy read] Salt") easy_read_salt; 
	int32_t nicename("Useless Padding") useless_padding; 
	s_tag_block_definition<s_unknown_compression_info_block_definition> __unknown_compression_info_block; 
	s_tag_block_definition<s_unknown_2_block_definition> __unknown_2_block; 

	struct nicename("mesh") s_mesh_block_definition
	{
		struct nicename("Parts") s_part_block_definition;
		struct nicename("Subparts") s_subpart_block_definition;
		struct nicename("Instanced Geometry Indices") s_instanced_geometry_index_block_definition;
		struct s_unknown_water_block_definition;

		s_tag_block_definition<s_part_block_definition> nicename("Parts") parts_block; 
		s_tag_block_definition<s_subpart_block_definition> nicename("Subparts") subparts_block; 
		int16_t nicename("Vertex Buffer Index 1") vertex_buffer_index_1; 
		int16_t nicename("Vertex Buffer Index 2") vertex_buffer_index_2; 
		int16_t nicename("Vertex Buffer Index 3") vertex_buffer_index_3; 
		int16_t nicename("Vertex Buffer Index 4") vertex_buffer_index_4; 
		int16_t nicename("Vertex Buffer Index 5") vertex_buffer_index_5; 
		int16_t nicename("Vertex Buffer Index 6") vertex_buffer_index_6; 
		int16_t nicename("Vertex Buffer Index 7") vertex_buffer_index_7; 
		int16_t nicename("Vertex Buffer Index 8") vertex_buffer_index_8; 
		int16_t nicename("Index Buffer Index 1") index_buffer_index_1; 
		int16_t nicename("Index Buffer Index 2") index_buffer_index_2; 
		uint16_t nicename("Flags") flags; 
		int8_t nicename("Rigid Node") rigid_node; 
		int8_t nicename("Vertex Type") vertex_type; 
		int8_t nicename("PRT Type") prt_type; 
		int8_t __unknown; 
		int8_t nicename("Index Buffer Type") index_buffer_type; 
		int8_t __unknown2; 
		s_tag_block_definition<s_instanced_geometry_index_block_definition> nicename("Instanced Geometry Indices") instanced_geometry_indices_block; 
		s_tag_block_definition<s_unknown_water_block_definition> __unknown_water_block; 
		Undefined32 __unknown3; 
		Undefined32 __unknown4; 
		Undefined32 __unknown5; 
		Undefined32 __unknown6; 

		struct nicename("part") s_part_block_definition
		{
			int16_t nicename("Material Index") material_index; 
			int16_t nicename("'Unknown Nodey' Index") _unknown_nodey__index; 
			int32_t nicename("Index Buffer Start") index_buffer_start; 
			int32_t nicename("Index Buffer Count") index_buffer_count; 
			int16_t nicename("Subpart Start") subpart_start; 
			int16_t nicename("Subpart Count") subpart_count; 
			int8_t __unknown_enum; 
			int8_t __unknown; 
			int8_t __unknown2; 
			int8_t __unknown3; 
			int16_t nicename("Vertex Count") vertex_count; 
			int16_t __unknown4; 
		};

		struct nicename("subpart") s_subpart_block_definition
		{
			int32_t nicename("Index Buffer Start") index_buffer_start; 
			int32_t nicename("Index Buffer Count") index_buffer_count; 
			int16_t nicename("Part Index") part_index; 
			int16_t nicename("Vertex Count") vertex_count; 
			int32_t __unknown; 
		};

		struct nicename("instanced_geometry_index") s_instanced_geometry_index_block_definition
		{
			struct nicename("Instanced Geometry Mesh Contents") s_instanced_geometry_mesh_content_block_definition;

			int16_t nicename("Instanced Geometry Mesh Index 1") instanced_geometry_mesh_index_1; 
			int16_t nicename("Instanced Geometry Mesh Index 2") instanced_geometry_mesh_index_2; 
			s_tag_block_definition<s_instanced_geometry_mesh_content_block_definition> nicename("Instanced Geometry Mesh Contents") instanced_geometry_mesh_contents_block; 

			struct nicename("instanced_geometry_mesh_content") s_instanced_geometry_mesh_content_block_definition
			{
				int16_t nicename("Instanced Geometry Index") instanced_geometry_index; 
			};
		};

		struct s_unknown_water_block_definition
		{
			int16_t __unknown; 
		};
	};

	struct nicename("compression_info") s_compression_info_block_definition
	{
		int16_t __unknown; 
		int16_t __unknown2; 
		float nicename("Position Bounds X min") position_bounds_x_min; 
		float nicename("Position Bounds X max") position_bounds_x_max; 
		float nicename("Position Bounds Y min") position_bounds_y_min; 
		float nicename("Position Bounds Y max") position_bounds_y_max; 
		float nicename("Position Bounds Z min") position_bounds_z_min; 
		float nicename("Position Bounds Z max") position_bounds_z_max; 
		float nicename("Texcoord Bounds X min") texcoord_bounds_x_min; 
		float nicename("Texcoord Bounds X max") texcoord_bounds_x_max; 
		float nicename("Texcoord Bounds Y min") texcoord_bounds_y_min; 
		float nicename("Texcoord Bounds Y max") texcoord_bounds_y_max; 
		Undefined32 __unknown3; 
		Undefined32 __unknown4; 
	};

	struct s_unknown_nodey_block_definition
	{
		float __unknown; 
		float __unknown2; 
		float __unknown3; 
		float __unknown4; 
		float __unknown5; 
		float __unknown6; 
		float __unknown7; 
		float __unknown8; 
		int8_t nicename("Node Index") node_index; 
		int8_t nicename("Node Index") node_index2; 
		int8_t nicename("Node Index") node_index3; 
		int8_t nicename("Node Index") node_index4; 
		float __unknown9; 
		float __unknown10; 
		float __unknown11; 
	};

	struct s_unknown_8_block_definition
	{
		int16_t __unknown; 
		int16_t __unknown2; 
		DataReference __unknown3_data_reference; 
	};

	struct nicename("node_map") s_node_map_block_definition
	{
		struct s_unknown_block_definition;

		s_tag_block_definition<s_unknown_block_definition> __unknown_block; 

		struct s_unknown_block_definition
		{
			uint8_t nicename("Node Index") node_index; 
		};
	};

	struct s_unknown_yo_block_definition
	{
		int16_t __unknown_index; 
	};

	struct nicename("water_mesh") s_water_mesh_block_definition
	{
		int16_t nicename("Mesh Index") mesh_index; 
		int16_t __unknown; 
		float nicename("X Min") x_min; 
		float nicename("X Max") x_max; 
		float nicename("Y Min") y_min; 
		float nicename("Y Max") y_max; 
		float nicename("Z Min") z_min; 
		float nicename("Z Max") z_max; 
	};

	struct s_unknown_compression_info_block_definition
	{
		uint32_t nicename("Polyart Asset Address") polyart_asset_address; 
		Undefined32 __unknown; 
		Undefined32 __unknown2; 
	};

	struct s_unknown_2_block_definition
	{
		Undefined32 __unknown; 
		Undefined32 __unknown2; 
		Undefined32 __unknown3; 
		Undefined32 __unknown4; 
	};
};