#include <imgui.h>
#include "ImGUIThemes.h"

void SetupImGuiCrimsonVesuviusStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = style.Colors;

    // --- 1. Sizing and Spacing (Sleek & Sharp) ---
    style.WindowPadding = ImVec2(10.0f, 10.0f);
    style.FramePadding = ImVec2(5.0f, 3.0f);
    style.ItemSpacing = ImVec2(8.0f, 4.0f);
    style.ScrollbarSize = 13.0f;
    style.GrabMinSize = 10.0f;

    // --- 2. Borders & Rounding ---
    style.WindowRounding = 3.0f;
    style.FrameRounding = 2.0f;
    style.PopupRounding = 2.0f;
    style.ScrollbarRounding = 12.0f;
    style.GrabRounding = 2.0f;
    style.TabRounding = 3.0f;

    style.WindowBorderSize = 1.0f;
    style.FrameBorderSize = 1.0f;

    // --- 3. The Crimson Palette ---

    // Text
    colors[ImGuiCol_Text] = ImVec4(1.00f, 0.90f, 0.90f, 1.00f); // Slight pinkish tint to off-white
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.40f, 0.40f, 1.00f);

    // Backgrounds
    colors[ImGuiCol_WindowBg] = ImVec4(0.08f, 0.07f, 0.07f, 1.00f); // Deep charcoal
    colors[ImGuiCol_ChildBg] = ImVec4(0.10f, 0.09f, 0.09f, 1.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.07f, 0.07f, 0.96f);

    // Borders
    colors[ImGuiCol_Border] = ImVec4(0.25f, 0.15f, 0.15f, 0.80f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

    // Frames
    colors[ImGuiCol_FrameBg] = ImVec4(0.15f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.25f, 0.15f, 0.15f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.35f, 0.20f, 0.20f, 1.00f);

    // Title Bars
    colors[ImGuiCol_TitleBg] = ImVec4(0.12f, 0.08f, 0.08f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.25f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);

    // Menus
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.12f, 0.08f, 0.08f, 1.00f);

    // Scrollbars
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.25f, 0.12f, 0.12f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.35f, 0.15f, 0.15f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.45f, 0.20f, 0.20f, 1.00f);

    // Interactables (The High-Intensity Red)
    colors[ImGuiCol_CheckMark] = ImVec4(0.85f, 0.15f, 0.15f, 1.00f); // Sharp Red
    colors[ImGuiCol_SliderGrab] = ImVec4(0.60f, 0.12f, 0.12f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.85f, 0.15f, 0.15f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.30f, 0.12f, 0.12f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.50f, 0.18f, 0.18f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.70f, 0.25f, 0.25f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.30f, 0.12f, 0.12f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.50f, 0.18f, 0.18f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.70f, 0.25f, 0.25f, 1.00f);

    // Tabs
    colors[ImGuiCol_Tab] = ImVec4(0.15f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.50f, 0.18f, 0.18f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.35f, 0.12f, 0.12f, 1.00f);

    // Misc
    colors[ImGuiCol_PlotLines] = ImVec4(0.85f, 0.20f, 0.20f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.85f, 0.15f, 0.15f, 0.35f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.85f, 0.15f, 0.15f, 1.00f);

#ifdef IMGUI_HAS_DOCK
    colors[ImGuiCol_DockingPreview] = ImVec4(0.85f, 0.15f, 0.15f, 0.40f);
    colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.08f, 0.07f, 0.07f, 1.00f);
#endif
}

void SetupImGuiStyleWinDark()
{
	// Windark style by DestroyerDarkNess from ImThemes
	ImGuiStyle& style = ImGui::GetStyle();

	style.Alpha = 1.0f;
	style.DisabledAlpha = 0.6f;
	style.WindowPadding = ImVec2(8.0f, 8.0f);
	style.WindowRounding = 8.4f;
	style.WindowBorderSize = 1.0f;
	style.WindowMinSize = ImVec2(32.0f, 32.0f);
	style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
	style.WindowMenuButtonPosition = ImGuiDir_Right;
	style.ChildRounding = 3.0f;
	style.ChildBorderSize = 1.0f;
	style.PopupRounding = 3.0f;
	style.PopupBorderSize = 1.0f;
	style.FramePadding = ImVec2(4.0f, 3.0f);
	style.FrameRounding = 3.0f;
	style.FrameBorderSize = 1.0f;
	style.ItemSpacing = ImVec2(8.0f, 4.0f);
	style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
	style.CellPadding = ImVec2(4.0f, 2.0f);
	style.IndentSpacing = 21.0f;
	style.ColumnsMinSpacing = 6.0f;
	style.ScrollbarSize = 5.6f;
	style.ScrollbarRounding = 18.0f;
	style.GrabMinSize = 10.0f;
	style.GrabRounding = 3.0f;
	style.TabRounding = 3.0f;
	style.TabBorderSize = 0.0f;
	style.TabMinWidthForCloseButton = 0.0f;
	style.ColorButtonPosition = ImGuiDir_Right;
	style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
	style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

	style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.6f, 0.6f, 0.6f, 1.0f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.1254902f, 0.1254902f, 0.1254902f, 1.0f);
	style.Colors[ImGuiCol_ChildBg] = ImVec4(0.1254902f, 0.1254902f, 0.1254902f, 1.0f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_Border] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(0.1254902f, 0.1254902f, 0.1254902f, 1.0f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.1254902f, 0.1254902f, 0.1254902f, 1.0f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.1254902f, 0.1254902f, 0.1254902f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.3019608f, 0.3019608f, 0.3019608f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.34901962f, 0.34901962f, 0.34901962f, 1.0f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(0.0f, 0.47058824f, 0.84313726f, 1.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.0f, 0.47058824f, 0.84313726f, 1.0f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.0f, 0.32941177f, 0.6f, 1.0f);
	style.Colors[ImGuiCol_Button] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.3019608f, 0.3019608f, 0.3019608f, 1.0f);
	style.Colors[ImGuiCol_Separator] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.3019608f, 0.3019608f, 0.3019608f, 1.0f);
	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.3019608f, 0.3019608f, 0.3019608f, 1.0f);
	style.Colors[ImGuiCol_Tab] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_TabActive] = ImVec4(0.2509804f, 0.2509804f, 0.2509804f, 1.0f);
	style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.16862746f, 0.16862746f, 0.16862746f, 1.0f);
	style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.21568628f, 0.21568628f, 0.21568628f, 1.0f);
	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.0f, 0.47058824f, 0.84313726f, 1.0f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.0f, 0.32941177f, 0.6f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.0f, 0.47058824f, 0.84313726f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.0f, 0.32941177f, 0.6f, 1.0f);
	style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882353f, 0.1882353f, 0.2f, 1.0f);
	style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.30980393f, 0.30980393f, 0.34901962f, 1.0f);
	style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.22745098f, 0.22745098f, 0.24705882f, 1.0f);
	style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.06f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.0f, 0.47058824f, 0.84313726f, 1.0f);
	style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.9f);
	style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.25882354f, 0.5882353f, 0.9764706f, 1.0f);
	style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.7f);
	style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.2f);
	style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.35f);
}

void SetupImGuiStyleRedFont()
{
	// Red Font style by aiekick from ImThemes
	ImGuiStyle& style = ImGui::GetStyle();

	style.Alpha = 1.0f;
	style.DisabledAlpha = 0.6f;
	style.WindowPadding = ImVec2(8.0f, 8.0f);
	style.WindowRounding = 0.0f;
	style.WindowBorderSize = 1.0f;
	style.WindowMinSize = ImVec2(32.0f, 32.0f);
	style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
	style.WindowMenuButtonPosition = ImGuiDir_Left;
	style.ChildRounding = 0.0f;
	style.ChildBorderSize = 1.0f;
	style.PopupRounding = 0.0f;
	style.PopupBorderSize = 1.0f;
	style.FramePadding = ImVec2(4.0f, 3.0f);
	style.FrameRounding = 0.0f;
	style.FrameBorderSize = 0.0f;
	style.ItemSpacing = ImVec2(8.0f, 4.0f);
	style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
	style.CellPadding = ImVec2(4.0f, 2.0f);
	style.IndentSpacing = 21.0f;
	style.ColumnsMinSpacing = 6.0f;
	style.ScrollbarSize = 14.0f;
	style.ScrollbarRounding = 9.0f;
	style.GrabMinSize = 10.0f;
	style.GrabRounding = 0.0f;
	style.TabRounding = 4.0f;
	style.TabBorderSize = 0.0f;
	style.TabMinWidthForCloseButton = 0.0f;
	style.ColorButtonPosition = ImGuiDir_Right;
	style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
	style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

	style.Colors[ImGuiCol_Text] = ImVec4(0.7490196f, 0.7490196f, 0.7490196f, 1.0f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.34901962f, 0.34901962f, 0.34901962f, 1.0f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.94f);
	style.Colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.078431375f, 0.078431375f, 0.078431375f, 0.94f);
	style.Colors[ImGuiCol_Border] = ImVec4(0.0f, 0.0f, 0.0f, 0.5f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.54f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.36862746f, 0.13725491f, 0.13725491f, 0.67f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.3882353f, 0.2f, 0.2f, 0.67f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(0.039215688f, 0.039215688f, 0.039215688f, 1.0f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.47843137f, 0.15686275f, 0.15686275f, 1.0f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.47843137f, 0.15686275f, 0.15686275f, 1.0f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.13725491f, 0.13725491f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.019607844f, 0.019607844f, 0.019607844f, 0.53f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.30980393f, 0.30980393f, 0.30980393f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40784314f, 0.40784314f, 0.40784314f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.50980395f, 0.50980395f, 0.50980395f, 1.0f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(0.5568628f, 0.09803922f, 0.09803922f, 1.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(1.0f, 0.1882353f, 0.1882353f, 0.4f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.8862745f, 0.0f, 0.1882353f, 1.0f);
	style.Colors[ImGuiCol_Button] = ImVec4(1.0f, 0.1882353f, 0.1882353f, 0.4f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.8f, 0.16862746f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.8862745f, 0.0f, 0.1882353f, 1.0f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.32941177f, 0.34901962f, 0.35686275f, 0.53f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.75686276f, 0.2784314f, 0.4392157f, 0.67f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.46666667f, 0.46666667f, 0.46666667f, 0.67f);
	style.Colors[ImGuiCol_Separator] = ImVec4(0.31764707f, 0.31764707f, 0.31764707f, 1.0f);
	style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.31764707f, 0.31764707f, 0.31764707f, 1.0f);
	style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.31764707f, 0.31764707f, 0.31764707f, 1.0f);
	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(1.0f, 1.0f, 1.0f, 0.85f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.0f, 1.0f, 1.0f, 0.6f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(1.0f, 1.0f, 1.0f, 0.9f);
	style.Colors[ImGuiCol_Tab] = ImVec4(0.06666667f, 0.06666667f, 0.06666667f, 0.51f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.85882354f, 0.22745098f, 0.42745098f, 0.67f);
	style.Colors[ImGuiCol_TabActive] = ImVec4(0.1882353f, 0.1882353f, 0.1882353f, 0.57f);
	style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.047058824f, 0.047058824f, 0.047058824f, 0.9f);
	style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.12941177f, 0.12941177f, 0.12941177f, 0.74f);
	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.60784316f, 0.60784316f, 0.60784316f, 1.0f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.0f, 0.42745098f, 0.34901962f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.8980392f, 0.69803923f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.0f, 0.6f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882353f, 0.1882353f, 0.2f, 1.0f);
	style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.30980393f, 0.30980393f, 0.34901962f, 1.0f);
	style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.22745098f, 0.22745098f, 0.24705882f, 1.0f);
	style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.07f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25882354f, 0.5882353f, 0.9764706f, 0.35f);
	style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.9f);
	style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.25882354f, 0.5882353f, 0.9764706f, 1.0f);
	style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.7f);
	style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.2f);
	style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.35f);
}

void SetupImGuiStyleMatFlat()
{
	// Material Flat style by ImJC1C from ImThemes
	ImGuiStyle& style = ImGui::GetStyle();

	style.Alpha = 1.0f;
	style.DisabledAlpha = 0.5f;
	style.WindowPadding = ImVec2(8.0f, 8.0f);
	style.WindowRounding = 0.0f;
	style.WindowBorderSize = 1.0f;
	style.WindowMinSize = ImVec2(32.0f, 32.0f);
	style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
	style.WindowMenuButtonPosition = ImGuiDir_Left;
	style.ChildRounding = 0.0f;
	style.ChildBorderSize = 1.0f;
	style.PopupRounding = 0.0f;
	style.PopupBorderSize = 1.0f;
	style.FramePadding = ImVec2(4.0f, 3.0f);
	style.FrameRounding = 0.0f;
	style.FrameBorderSize = 0.0f;
	style.ItemSpacing = ImVec2(8.0f, 4.0f);
	style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
	style.CellPadding = ImVec2(4.0f, 2.0f);
	style.IndentSpacing = 21.0f;
	style.ColumnsMinSpacing = 6.0f;
	style.ScrollbarSize = 14.0f;
	style.ScrollbarRounding = 0.0f;
	style.GrabMinSize = 10.0f;
	style.GrabRounding = 0.0f;
	style.TabRounding = 0.0f;
	style.TabBorderSize = 0.0f;
	style.TabMinWidthForCloseButton = 0.0f;
	style.ColorButtonPosition = ImGuiDir_Left;
	style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
	style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

	style.Colors[ImGuiCol_Text] = ImVec4(0.83137256f, 0.84705883f, 0.8784314f, 1.0f);
	style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.83137256f, 0.84705883f, 0.8784314f, 0.5019608f);
	style.Colors[ImGuiCol_WindowBg] = ImVec4(0.17254902f, 0.19215687f, 0.23529412f, 1.0f);
	style.Colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.15879828f);
	style.Colors[ImGuiCol_PopupBg] = ImVec4(0.17254902f, 0.19215687f, 0.23529412f, 1.0f);
	style.Colors[ImGuiCol_Border] = ImVec4(0.20392157f, 0.23137255f, 0.28235295f, 1.0f);
	style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_FrameBg] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 0.5019608f);
	style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 0.2509804f);
	style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_TitleBg] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.019607844f, 0.019607844f, 0.019607844f, 0.0f);
	style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.53333336f, 0.53333336f, 0.53333336f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.33333334f, 0.33333334f, 0.33333334f, 1.0f);
	style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.6f, 0.6f, 0.6f, 1.0f);
	style.Colors[ImGuiCol_CheckMark] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.23921569f, 0.52156866f, 0.8784314f, 1.0f);
	style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.25882354f, 0.5882353f, 0.98039216f, 1.0f);
	style.Colors[ImGuiCol_Button] = ImVec4(0.15294118f, 0.17254902f, 0.21176471f, 0.5019608f);
	style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.15294118f, 0.17254902f, 0.21176471f, 1.0f);
	style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_Header] = ImVec4(0.15294118f, 0.17254902f, 0.21176471f, 1.0f);
	style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 0.2509804f);
	style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_Separator] = ImVec4(0.42745098f, 0.42745098f, 0.49803922f, 0.5f);
	style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.09803922f, 0.4f, 0.7490196f, 0.78f);
	style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.09803922f, 0.4f, 0.7490196f, 1.0f);
	style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 0.2509804f);
	style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_Tab] = ImVec4(0.15294118f, 0.17254902f, 0.21176471f, 1.0f);
	style.Colors[ImGuiCol_TabHovered] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 0.2509804f);
	style.Colors[ImGuiCol_TabActive] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.15294118f, 0.17254902f, 0.21176471f, 1.0f);
	style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.30980393f, 0.62352943f, 0.93333334f, 1.0f);
	style.Colors[ImGuiCol_PlotLines] = ImVec4(0.60784316f, 0.60784316f, 0.60784316f, 1.0f);
	style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.0f, 0.42745098f, 0.34901962f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.8980392f, 0.69803923f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.0f, 0.6f, 0.0f, 1.0f);
	style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 1.0f);
	style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.20392157f, 0.23137255f, 0.28235295f, 1.0f);
	style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.20392157f, 0.23137255f, 0.28235295f, 0.5021459f);
	style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
	style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.03862661f);
	style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20392157f, 0.23137255f, 0.28235295f, 1.0f);
	style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.9f);
	style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.25882354f, 0.5882353f, 0.9764706f, 1.0f);
	style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.20392157f, 0.23137255f, 0.28235295f, 0.7529412f);
	style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 0.7529412f);
	style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.105882354f, 0.11372549f, 0.13725491f, 0.7529412f);
}