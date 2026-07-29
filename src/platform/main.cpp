#include <iostream>

#include <raylib.h>

#include <rlImGui.h>
#include <imgui.h>
#include "ImGUIThemes.h"
#include "debug.h"

#include "gameMain.h"
#include "asserts.h"

int main()
{
#if PRODUCTION_BUILD == 1
	SetTraceLogLevel(LOG_NONE);
#endif

#ifdef _MSVC_LANG
	std::cout << "_MSVC_LANG: " << _MSVC_LANG << '\n';
#endif
	std::cout << "__cplusplus: " << __cplusplus << '\n';

	// Window
	SetConfigFlags(FLAG_WINDOW_RESIZABLE); // Make window resizable
	InitWindow(1366, 768, "Game Window"); // Create window
	SetTargetFPS(240);
	SetExitKey(KEY_NULL);

	// ImGUI
# pragma region imguiSettings
	rlImGuiSetup(true);

	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
	//io.FontGlobalScale = 1.6f;
	SetupImGuiCrimsonVesuviusStyle();
#pragma endregion

	if (!initGame()) return 0;

	//main loop
	while (!WindowShouldClose())
	{
# pragma region imgui
		rlImGuiBegin();

		// ImGUI Docking
		ImGui::PushStyleColor(ImGuiCol_WindowBg, {});
		ImGui::PushStyleColor(ImGuiCol_DockingEmptyBg, {});
		ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
		ImGui::PopStyleColor(2);
#pragma endregion

		BeginDrawing();
		ClearBackground(BLACK);

		if (!updateGame()) CloseWindow();

		//imguiDebug();

		rlImGuiEnd();
		EndDrawing();
	}

	CloseWindow();
	closeGame();
	rlImGuiShutdown();

	return 0;
}