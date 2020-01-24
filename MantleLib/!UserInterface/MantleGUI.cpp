#include "mantlelib-private-pch.h"

bool MantleGUI::s_unknownItemsVisible = false;
std::vector<MantleTab*> MantleGUI::s_pMantleTabs;
std::vector<MantleGUI::OnCloseCallback> MantleGUI::s_guiCloseCallbacks;
bool MantleGUI::s_inGameMode;

void MantleGUI::Init(bool inGameMode)
{
	s_inGameMode = inGameMode;
	AddTabItem(*new MantleMapTab("45_aftship.map", "Map #1", L"haloreach/maps/45_aftship.map"));
	AddTabItem(*new MantleMapTab("52_ivory_tower.map", "Map #2", L"haloreach/maps/52_ivory_tower.map"));
	AddTabItem(*new MantleMapTab("cex_timberland.map", "Map #3", L"haloreach/maps/cex_timberland.map"));
	AddTabItem(*new MantleMapTab("m70_a.map", "Map #4", L"haloreach/maps/m70_a.map"));
	AddTabItem(*new MantleMapTab("ff45_corvette.map", "Map #5", L"haloreach/maps/ff45_corvette.map"));
}

void MantleGUI::Render(int width, int height)
{
	if (s_inGameMode)
	{
		ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Once);
		ImGui::SetNextWindowSize(ImVec2(static_cast<float>(width), static_cast<float>(height)), ImGuiCond_Once);
	}
	else
	{
		ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Always);
		ImGui::SetNextWindowSize(ImVec2(static_cast<float>(width), static_cast<float>(height)), ImGuiCond_Always);
	}

	// Main body of the Demo window starts here.
	static bool isReachDebugWindowOpen = true;

	ImGuiWindowFlags windowFlags = 0;
	windowFlags |= ImGuiWindowFlags_NoCollapse;
	windowFlags |= ImGuiWindowFlags_MenuBar;
	windowFlags |= ImGuiWindowFlags_NoSavedSettings;
	if (!s_inGameMode)
	{
		windowFlags |= ImGuiWindowFlags_NoTitleBar;
		windowFlags |= ImGuiWindowFlags_NoMove;
		windowFlags |= ImGuiWindowFlags_NoResize;
	}

	bool isCloseRequested = false;
	MantleTab* pSetSelectedRootTab = nullptr;

	if (ImGui::Begin("Mantle", &isReachDebugWindowOpen, windowFlags))
	{
		if (ImGui::BeginMenuBar())
		{
			if (ImGui::BeginMenu("File"))
			{
				if (ImGui::MenuItem("Open File", "Ctrl+O"))
				{
					//#TODO: Open a new map tab dialog

					for (MantleTab* pTab : s_pMantleTabs)
					{
						if (strcmp(pTab->GetTitle(), "45_aftship.map") == 0)
						{
							pSetSelectedRootTab = pTab;
							break;
						}
					}

					if (pSetSelectedRootTab == nullptr) //not selecting an existing tab
					{
						MantleTab* pTab = new MantleMapTab("45_aftship.map", "Map #1", L"45_aftship.map");
						AddTabItem(*pTab);
						pSetSelectedRootTab = pTab;
					}
				}
				ImGui::Separator();
				if (ImGui::MenuItem("Exit"))
				{
					//#TODO: Determine if we should close here
					isCloseRequested = true;
				}

				ImGui::EndMenu();
			}
			if (ImGui::BeginMenu("View"))
			{
				if (ImGui::MenuItem(s_unknownItemsVisible ? "Hide Unknown Items" : "Show Unknown Items", "Ctrl+O"))
				{
					s_unknownItemsVisible = !s_unknownItemsVisible;
				}

				ImGui::EndMenu();
			}
			ImGui::EndMenuBar();
		}
		if (ImGui::BeginTabBar("RootTabBar"))
		{
			for (MantleTab* pTab : s_pMantleTabs)
			{
				assert(pTab != nullptr);

				bool setSelected = false;
				if (pSetSelectedRootTab == pTab)
				{
					setSelected = true;
					pSetSelectedRootTab = nullptr;
				}

				
				/*
				if (ImGui::BeginTabItem("<TITLE>"))
				{

					...contents...

					ImGui::EndTabItem();
				}
				*/
				pTab->Render(setSelected);
			}

			ImGui::EndTabBar();
		}
	}
	ImGui::End();

	if (isCloseRequested)
	{
		OnClose();
	}
}

void MantleGUI::Deinit()
{
	// delete the first tab in the vector until non remain
	// tabs are removed from vector via the TabClosedCallback
	while (s_pMantleTabs.size()) 
	{
		delete *s_pMantleTabs.begin();
	}
}

void MantleGUI::AddTabItem(MantleTab& rMantleTab)
{
	s_pMantleTabs.push_back(&rMantleTab);
	rMantleTab.AddTabClosedCallback(RemoveTabItem);
}

void MantleGUI::RemoveTabItem(MantleTab& rMantleTab)
{
	VectorEraseByValueHelper(s_pMantleTabs, &rMantleTab);
}

void MantleGUI::RegisterOnCloseCallback(OnCloseCallback callback)
{
	s_guiCloseCallbacks.push_back(callback);
}

void MantleGUI::UnregisterOnCloseCallback(OnCloseCallback callback)
{
	VectorEraseByValueHelper(s_guiCloseCallbacks, callback);
}

void MantleGUI::OnClose()
{
	for (OnCloseCallback callback : s_guiCloseCallbacks)
	{
		callback();
	}
}

