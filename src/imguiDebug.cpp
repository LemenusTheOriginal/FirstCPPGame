#include <imgui.h>
#include <rlImGui.h>
#include <iostream>
#include "imguiDebug.h"
#include "ImGUIThemes.h"

// Initialization of ImGUI outside of main loop
void imguiInit()
{
	rlImGuiSetup(true);
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
	//io.FontGlobalScale = 1.6f;
	SetupImGuiCrimsonVesuviusStyle();
}

// ImGUI settings, place inside of main loop
void imguiSettings()
{
	rlImGuiBegin();

	// ImGUI Docking
	ImGui::PushStyleColor(ImGuiCol_WindowBg, {});
	ImGui::PushStyleColor(ImGuiCol_DockingEmptyBg, {});
	ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
	ImGui::PopStyleColor(2);
}

// ImGUI windows, place inside of main loop
void imguiDebug()
{
	//ImGui::ShowDemoWindow();
	ImGui::Begin("Food dispencer");
	{
		ImGui::Text("Press to get food of your choice");
		if (ImGui::Button("Pizza"))
		{
			std::cout << "You've got pizaa\n";
		}
		ImGui::SameLine();
		if (ImGui::Button("Burrito"))
		{
			std::cout << "You've got burrito\n";
		}
	}
	ImGui::End();

	ImGui::Begin("Second Window");
	{
		ImGui::Text("Prank em John");
		ImGui::Separator();
		ImGui::NewLine();
		static float a = 0;
		ImGui::SliderFloat("How loud we gonna do it?", &a, 0, 1);
		if (ImGui::Button("Do the thing"))
		{
			std::cout << "Bababooey\n";
		}
	}
	ImGui::End();

	ImGui::Begin("Everything else");
	{
		// Radio Button
		if (ImGui::CollapsingHeader("Radio Button"))
		{
			static int selOpt = 0;
			ImGui::RadioButton("A", &selOpt, 0);
			ImGui::SameLine();
			ImGui::RadioButton("B", &selOpt, 1);
			ImGui::SameLine();
			ImGui::RadioButton("C", &selOpt, 2);

			if (ImGui::Button("Execute"))
			{
				static constexpr char* BExecMessage[] = {
					"A is the option",
					"B is fine too",
					"C is pretty cool"
				};
				std::cout << BExecMessage[selOpt] << '\n';
			}
		} // Radio Button end

		// CheckBox
		if (ImGui::CollapsingHeader("CheckBox "))
		{
			static bool CheckTest = false;
			ImGui::Checkbox("CheckBox test", &CheckTest);
			if (ImGui::Button("Check the Check"))
			{
				if (CheckTest) std::cout << "Checkbox is on\n";
				else std::cout << "Checkbox is off\n";
			}

			ImGui::Spacing();

			static bool lightState{ false };
			if (ImGui::Checkbox("Lightswitch", &lightState))
			{
				if (lightState) std::cout << "Lights On!\n";
				else std::cout << "Lights off!\n";
			}
		}

		//InputInt
		if (ImGui::CollapsingHeader("InputInt"))
		{
			static int apples{ 0 };
			if (ImGui::InputInt("Apples", &apples))
			{
				std::cout << "We got " << apples << " apples now\n";
			}
		}

		// DragFloat
		if (ImGui::CollapsingHeader("DragFloat"))
		{
			static float pointPos[]{ 0.0f, 0.0f, 0.0f };
			ImGui::DragFloat3("3D Point", pointPos);
		}

		// Sliders
		if (ImGui::CollapsingHeader("Sliders"))
		{
			static float VsndVol{};
			static float sndVol{};
			ImGui::VSliderFloat("Volume", ImVec2(30, 150), &VsndVol, 0.0f, 100.0f);
			ImGui::SameLine();
			ImGui::SliderFloat("Volume 2", &sndVol, 0.0f, 100.0f);
		}

		//Color
		if (ImGui::CollapsingHeader("Color"))
		{
			static float colorTest[]{ 0.0f, 0.0f, 0.0f, 0.0f };
			ImGui::ColorEdit3("Color", colorTest);
			ImGui::ColorPicker4("Color Pick", colorTest);
		}

		// Progress Bar
		if (ImGui::CollapsingHeader("Progress Bar"))
		{
			static float myProgress{ 0.45f };
			ImGui::ProgressBar(myProgress, ImVec2(-1.0f, 0.0f));
		}

	}
	ImGui::End();
}