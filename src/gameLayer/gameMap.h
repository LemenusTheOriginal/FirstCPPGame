#pragma once
#include <vector>
#include "blocks.h"

struct GameMap
{
	int w{};
	int h{};

	std::vector <Block> mapData;

	void create(int w, int h);

	Block &getBlockUnsafe(int x, int y);
	Block *getBlockSafe(int x, int y);
};