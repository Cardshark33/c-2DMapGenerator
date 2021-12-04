#pragma once
#include "TileMap.h"
#include "../MathLby/Vector2.h"

class Walker
{
public:
	Walker(TileMap& TMap, Color color);
	Walker(TileMap& TMap, Color color, int PosX, int PosY, int tilesToWalk);
	~Walker();
	void Move();
private:
	TileMap* m_Map = nullptr;

	Color m_Color;

	int m_TilesToWalk;

	int m_MaxHeight;
	int m_MaxLength;
	MathLbry::Vector2 m_Pos;
	MathLbry::Vector2 m_Dir;
};

