#include <iostream>
#include <raylib.h>

int main()
{
	//std::cout << "Hello\n";

	SetConfigFlags(FLAG_WINDOW_RESIZABLE); // Make window resizable
	InitWindow(800, 450, "Game Window"); // Create window
	SetTargetFPS(30);

	std::string dynamicText = "Press SPACE to change this text!";

	//main loop
	while (!WindowShouldClose())
	{
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

		EndDrawing();
	}

	CloseWindow();

	return 0;
}