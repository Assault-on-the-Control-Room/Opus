#pragma once

#define IGameEngineHostCreateBarrierDefinition(index) virtual void Function##index() final; 

void IGameEngineHostEmptyFunction();

#pragma pack(push, 1)

struct s_session_membership;
struct s_session_info_part;

enum IGameEngineHostVirtualFunctionIndex
{
	__game_engine_virtual_function_frame_begin,
	__game_engine_virtual_function_frame_end,
	__game_engine_virtual_function_function2,
	__game_engine_virtual_function_engine_state_update_handler,
	__game_engine_virtual_function_game_shutdown_handler,
	__game_engine_virtual_function_game_save_handler,
	__game_engine_virtual_function_game_results_submission_handler,
	__game_engine_virtual_function_game_pause_handler,
	__game_engine_virtual_function_function8,
	__game_engine_virtual_function_function9,
	__game_engine_virtual_function_game_events_get,
	__game_engine_virtual_function_game_variant_save_handler,
	__game_engine_virtual_function_map_variant_save_handler,
	__game_engine_virtual_function_function13,
	__game_engine_virtual_function_function14,
	__game_engine_virtual_function_function15,
	__game_engine_virtual_function_next_mission_info_get,
	__game_engine_virtual_function_function17,
	__game_engine_virtual_function_function18,
	__game_engine_virtual_function_engine_load_status_handler,
	__game_engine_virtual_function_function20,
	__game_engine_virtual_function_local_machine_identifier_get,
	__game_engine_virtual_function_function22,
	__game_engine_virtual_function_function23,
	__game_engine_virtual_function_session_info_get,
	__game_engine_virtual_function_session_membership_update_handler,
	__game_engine_virtual_function_function26,
	__game_engine_virtual_function_function27,
	__game_engine_virtual_function_graphical_settings_update_handler,
	__game_engine_virtual_function_player_configuration_get,
	__game_engine_virtual_function_player_configuration_update_handler,
	__game_engine_virtual_function_input_update_handler,
	__game_engine_virtual_function_function32,
	__game_engine_virtual_function_function33,
	__game_engine_virtual_function_xinput_set_state_handler,
	__game_engine_virtual_function_player_name_update_handler,
	__game_engine_virtual_function_function36,
	__game_engine_virtual_function_function37,
	__game_engine_virtual_function_network_sendto_handler,
	__game_engine_virtual_function_network_recvfrom_handler,
	__game_engine_virtual_function_function40,
	__game_engine_virtual_function_function41,
	__game_engine_virtual_function_function42,
	__game_engine_virtual_function_firefight_new_handler,
	__game_engine_virtual_function_function44,
	__game_engine_virtual_function_path_by_type_get,
	__game_engine_virtual_function_wide_path_by_type_get,
	__game_engine_virtual_function_function47,
	__game_engine_virtual_function_function48,
	__game_engine_virtual_function_function49,
	__game_engine_virtual_function_function50,
	__game_engine_virtual_function_function51,
	__game_engine_virtual_function_function52,
	__game_engine_virtual_function_function53,
};

class IGameEngineHost
{
public:
	static constexpr size_t kTableSize = 128;
	void* __vtbl_dynamic;

	IGameEngineHost(e_engine_type engine_type, e_build build, IGameEvents* game_events);
	IGameEngineHost* GetDynamicGameEngineHost();

	enum class PathType : int
	{
		DebugLogs,
		Config,
		Temporary,
		Root
	};

	enum class NetworkID : unsigned __int64
	{
		Invalid,
		Unknown1,
		Unknown2,
		Unknown3,
		k_NumNetworkID
	};

#pragma pack(push, 1)
	enum class InputSource : int
	{
		Gamepad,
		MouseAndKeyboard
	};

	struct InputBuffer
	{

		InputSource		inputSource;
		char			keyboardState[256];
		float			MouseX;
		float			MouseY;
		float			UnknownA;
		float			UnknownB;
		char			mouseButtonBits;
		char			__padding[3];
		DWORD           wButtons;
		BYTE            bLeftTrigger;
		BYTE            bRightTrigger;
		SHORT           sThumbLX;
		SHORT           sThumbLY;
		SHORT           sThumbRX;
		SHORT           sThumbRY;
		char			__padding2[2];
	};
	CHECK_STRUCTURE_SIZE(InputBuffer, 0x128);
#pragma pack(pop)

	struct s_game_results
	{
		char unknown0[0x58738];
	};
	CHECK_STRUCTURE_SIZE(s_game_results, 0x58738);

	struct s_function22_data
	{
		char data[0x110];
	};
	CHECK_STRUCTURE_SIZE(s_function22_data, 0x110);

#pragma pack(push, 1)
	struct s_graphical_settings
	{
		int VIDEO_SizeX;
		int VIDEO_SizeY;
		int VIDEO_TextureQuality;					 // between 0 and 2
		int VIDEO_AF_Qual;							 // between 0 and 2
		int VIDEO_SSAOQuality;						 // between 0 and 2
		int unknown10_4;
		int VIDEO_ShadowMapQual;					 // between 0 and 2
		int VIDEO_LodDistQualityFactor;				 // between 0 and 2
		int unknown20;
		int WindowMode;
		bool VIDEO_UseEdgeAA;
		bool VIDEO_Wait_VSync;
		bool VIDEO_FPS_Lock;
		char unknown2B;
		char unknown2C[168]; // unknown
		float unknownD4_0;
		float unknownD4_4;
		float unknownD4_8;
		float unknownD4_C;
		float unknownD4_10;
		float unknownD4_14;
		float unknownD4_18;
		float unknownD4_1C;
		float unknownD4_20;
		float unknownD4_24;
		float unknownD4_28;
		float unknownD4_2C;
		float unknownD4_30;
		float unknownD4_34;
		float unknownD4_38;
		float unknownD4_3C;
		float unknownD4_40;
		float unknownD4_44;
		float unknownD4_48;
		float unknownD4_4C;
		float unknownD4_50;
		float unknownD4_54;
		float unknownD4_58;
		float unknownD4_5C;
		float unknownD4_60;
		float unknownD4_64;
		float unknownD4_68;
		float unknownD4_6C;
		float unknownD4_70;
		float unknownD4_74;
		float unknownD4_78;
		float unknownD4_7C;
		float unknownD4_80;
		float unknownD4_84;
		long unknownD4_88;
		long unknownD4_8C;
		long unknownD4_90;
		long unknownD4_94;
		long unknownD4_98;
		long unknownD4_9C;
		long unknownD4_A0;
		long unknownD4_A4;
		long unknownD4_A8;
	};
	CHECK_STRUCTURE_SIZE(s_graphical_settings, 0x180);
#pragma pack(pop)

	struct s_transport_address;

	/* 0  */ virtual char frame_begin();
	/* 1  */ virtual void frame_end(IDXGISwapChain* swap_chain, _QWORD);
	/* 2  */ virtual void function02(__int64 player_identifier, unsigned int, __int64, float, float, float, float);
	/* 3  */ virtual void engine_state_update_handler(e_engine_state state);
	/* 4  */ virtual __int64 game_shutdown_handler(unsigned int, char*, int);
	/* 5  */ virtual __int64 __fastcall game_save_handler(LPVOID buffer, size_t buffer_size);
	/* 6  */ virtual void game_results_submission_handler(s_game_results* game_results_data);
	/* 7  */ virtual void game_pause_handler(unsigned int);
	/* 8  */ virtual void function08(const wchar_t*, const wchar_t*);
	/* 9  */ virtual void Function09(wchar_t[1024], wchar_t[1024]);
	/* 10 */ virtual IGameEvents* game_events_get();
	/* 11 */ virtual void game_variant_save_handler(IGameVariant* game_variant);
	/* 12 */ virtual void map_variant_save_handler(IMapVariant* map_variant);
	/* 13 */ virtual void function13(const wchar_t*, const wchar_t*, const void*, unsigned int);
	/* 14 */ virtual char controller_inverted_look_update_handler(int controller_index, bool inverted);
	/* 15 */ virtual char game_specific_bindings_get(int controller_index, char(*buffer)[256]);
	/* 16 */ virtual char next_mission_info_get(e_map_id* map_id, int* campaign_insertion_point, FILETIME* file_time, _DWORD*);
	/* 17 */ virtual bool function17(int);
	/* 18 */ virtual void function18(int);
	/* 19 */ virtual __int64 __fastcall engine_load_status_handler(__int64, __int64, float);
	/* 20 */ virtual void function20(__int64, __int8);
	/* 21 */ virtual __int64 __fastcall local_machine_identifier_get(_QWORD);
	/* 22 */ virtual __int64 function22(s_function22_data* buffer, __int64);
	/* 23 */ virtual char function23(__int64, __int64);
	/* 24 */ virtual void session_info_get(s_session_info_part* session_info_part);
	/* 25 */ virtual void __fastcall session_membership_update_handler(s_session_membership* session_membership, uint32_t player_count);
	/* 26 */ virtual bool __fastcall function26();
	/* 27 */ virtual bool __fastcall function27();
	/* 28 */ virtual bool __fastcall graphical_settings_update_handler(s_graphical_settings* update_graphics_data);
	/* 29 */ virtual c_player_configuration* __fastcall player_configuration_get(__int64 value);
	/* 30 */ virtual __int64 __fastcall player_configuration_update_handler(wchar_t player_names[4][16], c_player_configuration* player_configuration);
	/* 31 */ virtual bool __fastcall input_update_handler(_QWORD, InputBuffer* input_buffer);
	/* 32 */ virtual void function32(_QWORD, float*);
	/* 33 */ virtual void function33();
	/* 34 */ virtual void xinput_set_state_handler(DWORD user_index, XINPUT_VIBRATION* xinput_vibration);
	/* 35 */ virtual bool __fastcall player_name_update_handler(__int64*, wchar_t player_names[4][16], size_t data_size);
	/* 36 */ virtual void __fastcall function36(const wchar_t*, const wchar_t*);
	/* 37 */ virtual bool __fastcall function37(wchar_t*, __int64);
	/* 38 */ virtual __int64 __fastcall network_sendto_handler(NetworkID network_id, char* buffer, uint32_t buffer_size, int a4);
	/* 39 */ virtual __int64 __fastcall network_recvfrom_handler(char* buffer, uint32_t buffer_size, __int64, s_transport_address* pTransportAddress);
	/* 40 */ virtual char* __fastcall function40(unsigned int);
	/* 41 */ virtual int __fastcall function41(BYTE* buffer);
	/* 42 */ virtual bool __fastcall function42(signed int, __int64, __int64);
	/* 43 */ virtual void __fastcall firefight_new_handler(__int64, float);
	/* 44 */ virtual BOOL __fastcall function44(__int64, __int64);
	/* 45 */ virtual bool __fastcall path_by_type_get(PathType path_type, LPSTR buffer, size_t buffer_length);
	/* 46 */ virtual bool __fastcall wide_path_by_type_get(PathType path_type, LPWSTR buffer, size_t buffer_length);
	/* 47 */ virtual unsigned __int8* __fastcall function47(_QWORD, unsigned __int8*, _QWORD);
	/* 48 */ virtual __int64 __fastcall function48(_QWORD, __int64);
	/* 49 */ virtual char* __fastcall function49(char* str); /* added in 1377 */
	/* 50 */ virtual __int64  __fastcall function58(); /* added in 1629 */
	/* 51 */ virtual __int64 __fastcall function59(__int64 a1, unsigned int a2); /* added in 1629 */
	/* 52 */ virtual __int64  __fastcall function60(__int64 a1); /* added in 1658 */
	/* 53 */ virtual void __fastcall function61(__int64 a1); /* added in 1658 */

	/* barrier functions to prevent new versions of games calling our functions */
	IGameEngineHostCreateBarrierDefinition(50);
	IGameEngineHostCreateBarrierDefinition(51);
	IGameEngineHostCreateBarrierDefinition(52);
	IGameEngineHostCreateBarrierDefinition(53);
	IGameEngineHostCreateBarrierDefinition(54);
	IGameEngineHostCreateBarrierDefinition(55);
	IGameEngineHostCreateBarrierDefinition(56);
	IGameEngineHostCreateBarrierDefinition(57);

	// IGameEngineHost data
	IGameEvents* game_events_ptr = nullptr;
	QWORD data1[5863] = {};

	// begin custom data
	e_engine_type engine_type;
	e_build build;
	bool game_engine_host_configured;
	void ConfigureGameEngineHost();

	void* __vtbl_dynamic_data[kTableSize];
	/*
	These two values make up known addresses. If a virtual function is called and the expected value of __vtbl_known_address1 is found __vtbl_known_address0
	then that means that the virtual function being called has had its 'this' value shifted to offset the __vtbl to use __vtbl_dynamic.
	This check allows each virtual function to run itself and correct the address
	*/
	static constexpr uintptr_t known_address0 = static_cast<uintptr_t>(0xe23a921724befda0);
	static constexpr uintptr_t known_address1 = static_cast<uintptr_t>(0xdaeb9e926aca55b7);
	uintptr_t __vtbl_known_address0 = known_address0;
	uintptr_t __vtbl_known_address1 = known_address1;

	bool PlayerConfigurationFromBuild(e_build build, c_player_configuration** player_configuration);
	void ConfigurePlayerConfiguration(c_player_configuration& player_configuration);
};
//CHECK_STRUCTURE_SIZE(IGameEngineHost, 0xB748);
#pragma pack(pop)

#undef IGameEngineHostCreateBarrierDefinition

