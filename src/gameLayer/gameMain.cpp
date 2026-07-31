#include <iostream>
#include <raylib.h>
#include "gameMain.h"
#include "debug.h"
#include "assetManager.h"
#include "gameMap.h"
#include "helpers.h"

struct GameData
{
	GameMap gameMap;
	Camera2D camera;

}gameData;

AssetManager assetManager;

bool initGame()
{
	writeLog("Start");

	assetManager.loadAll();

	gameData.gameMap.create(30, 10);
	gameData.gameMap.getBlockUnsafe(0, 0).type = Block::dirt;
	gameData.gameMap.getBlockUnsafe(1, 1).type = Block::grass;
	gameData.gameMap.getBlockUnsafe(2, 2).type = Block::goldBlock;
	gameData.gameMap.getBlockUnsafe(3, 3).type = Block::glass;
	gameData.gameMap.getBlockUnsafe(4, 4).type = Block::platform;

	gameData.camera.target = {0,0};
	gameData.camera.rotation = 0.0f;
	gameData.camera.zoom = 100.0f;

	return true;
}

bool updateGame()
{
	float deltaTime = GetFrameTime();
	if (deltaTime > 1.f / 5) deltaTime = 1 / 5.f;

	gameData.camera.offset = { GetScreenWidth() / 2.0f, GetScreenHeight() / 2.0f };

	ClearBackground({ 75,75,150,255 });

	BeginMode2D(gameData.camera);

#pragma region cameraMovement

	if (IsKeyDown(KEY_LEFT)) gameData.camera.target.x -= 7.f * deltaTime;
	if (IsKeyDown(KEY_RIGHT)) gameData.camera.target.x += 7.f * deltaTime;
	if (IsKeyDown(KEY_UP)) gameData.camera.target.y -= 7.f * deltaTime;
	if (IsKeyDown(KEY_DOWN)) gameData.camera.target.y += 7.f * deltaTime;

#pragma endregion

	for(int y = 0; y < gameData.gameMap.h; y++)
		for (int x = 0; x < gameData.gameMap.w; x++)
		{
			auto& b = gameData.gameMap.getBlockUnsafe(x, y);

			if (b.type != Block::air)
			{

				DrawTexturePro(
					assetManager.textures,
					getTextureAtlas(b.type, 0, 32, 32),
					{ (float)x, (float)y, 1,1},
					{ 0,0 },
					0.0f,
					WHITE
				);
			}
		}

	
	// fucking dot in 0,0 ruined everything
	// DrawTexturePro(assetManager.dirt, { 0,0,(float)assetManager.dirt.width, (float)assetManager.dirt.height }, { 50, 50, 100, 100 }, {}, 0, WHITE);
	EndMode2D();
	 
	return true;
}

void closeGame()
{
	writeLog("Closed");
}