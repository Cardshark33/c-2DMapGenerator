#pragma once
#include "raylib.h"

class Tile
{
public:
	//tile constructor
	Tile(int TileWidth, int TileHeight, Color color)
	{
		m_Height = TileHeight;
		m_Width = TileWidth;
		m_color = color;
	}

	~Tile() {};

	/// <summary>
	/// Draw the tile
	/// </summary>
	/// <param name="PosX"></param>
	/// <param name="PosY"></param>
	void Draw(int PosX, int PosY);

	int GetHeight();

	int GetWidth();

	Color GetColor();

private:
	//height of tile in pixles
	int m_Height;
	//width of tile in pixles
	int m_Width;
	//color of tile
	Color m_color;
};

