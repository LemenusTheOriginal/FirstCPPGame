#include <raylib.h>
#include <string_view>
#include "gameMain.h"

bool initGame()
{
	return true;
}

bool updateGame()
{
	std::string_view static dynamicText = "Press SPACE to change this text!";

	if (IsKeyPressed(KEY_SPACE)) {
		dynamicText = "Text changed successfully!";
	}
	else if (IsKeyReleased(KEY_SPACE))
	{
		dynamicText = "Press SPACE to change this text!";
	}
	DrawText(dynamicText.data(), 400, 200, 20, RED);

	DrawRectangle(75, 75, 100, 100, { 0, 255, 0, 127 });
	DrawRectangle(50, 50, 100, 100, { 255, 0, 0, 127 });

	return true;
}

void closeGame()
{
}