#include "assetManager.h"

void AssetManager::loadAll()
{
	dirt = LoadTexture(RESOURCES_PATH "textures/dirt.png");
	textures = LoadTexture(RESOURCES_PATH "textures/textures.png");
}