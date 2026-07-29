#include <iostream>

#include <raylib.h>

#include "gameMain.h"
#include "debug.h"

struct GameData
{
	Texture dirtTexture;
}gameData;
GameData &getGameData() { return gameData; }

bool initGame()
{
	writeLog("Start");

	return true;
}

bool updateGame()
{
	float deltaTime = GetFrameTime();
	if (deltaTime > 1.f / 5) deltaTime = 1 / 5.f;

	return true;
}

void closeGame()
{
	writeLog("Closed");
}