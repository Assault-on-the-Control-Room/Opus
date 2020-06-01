#pragma once

namespace blofeld
{
	namespace haloreach
	{
		struct s_bitmap_block_struct;
	}
}


class c_mantle_bitmap_gui_tab :
	public c_mantle_gui_tab
{
public:
	c_mantle_bitmap_gui_tab() = delete;
	c_mantle_bitmap_gui_tab(const c_mantle_bitmap_gui_tab&) = delete;
	c_mantle_bitmap_gui_tab& operator=(const c_mantle_bitmap_gui_tab&) = delete;

	c_mantle_bitmap_gui_tab(c_cache_file& cache_file, c_mantle_gui_tab* parent_tab, v_tag_interface<blofeld::haloreach::s_bitmap_block_struct>& bitmap_tag_interface);
	virtual ~c_mantle_bitmap_gui_tab();

	c_cache_file& cache_file;
	c_mantle_gui_tab* parent_tab;
	v_tag_interface<blofeld::haloreach::s_bitmap_block_struct>& bitmap_tag_interface;


	ID3D11Texture2D* pTexture;
	ID3D11ShaderResourceView* shader_resource_view;
	char* dds_texture_buffer;
	char* decompressed_buffer;
protected:
	void render_tab_contents_gui() override;
};
