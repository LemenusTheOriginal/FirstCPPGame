#include <iostream>
#include <raylib.h>
#include <imgui.h>
#include <rlImGui.h>

int main()
{
	//std::cout << "Hello\n";

	// Window
	SetConfigFlags(FLAG_WINDOW_RESIZABLE); // Make window resizable
	InitWindow(800, 450, "Game Window"); // Create window
	SetTargetFPS(30);

	std::string dynamicText = "Press SPACE to change this text!";

	// ImGUI
# pragma region imgui
	rlImGuiSetup(true);

	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
	io.FontGlobalScale = 2;
#pragma endregion

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

		if (IsKeyPressed(KEY_SPACE)) {
			dynamicText = "Text changed successfully!";
		}
		else if (IsKeyReleased(KEY_SPACE))
		{
			dynamicText = "Press SPACE to change this text!";
		}

		BeginDrawing();
		ClearBackground(RAYWHITE);

		DrawText(dynamicText.c_str(), 400, 200, 20, RED);

# pragma region imgui windows
		ImGui::Begin("test");
		ImGui::Text("Hello");
		if (ImGui::Button("Butt"))
		{
			std::cout << "Press\n";
		}
		ImGui::SameLine();
		if (ImGui::Button("Button 2"))
		{
			std::cout << "You've got burrito\n";
		}
		ImGui::End();

		ImGui::Begin("Second Window");
		ImGui::Text("Bababooey");
		ImGui::Separator();
		ImGui::NewLine();
		static float a = 0;
		ImGui::SliderFloat("Slider", &a, 0, 1);
		ImGui::End();
#pragma endregion

		rlImGuiEnd();
		EndDrawing();
	}


	rlImGuiShutdown();
	CloseWindow();

	return 0;
}