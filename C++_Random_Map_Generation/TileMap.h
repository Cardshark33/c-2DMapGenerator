#pragma once
#include "Tile.h"
#include "raylib.h"
#include <vector>

class TileMap
{
public:

	TileMap();
	/// <summary>
	/// Create a custom sized map
	/// </summary>
	/// <param name="TileMapWidth">Tile ammount on the x axis</param>
	/// <param name="TileMapHeight">Tile ammount on the y axis</param>
	/// <param name="TileWidth">Width of the tile in pixles</param>
	/// <param name="TileHeight">Height of the tile in pixles</param>
	TileMap(int TileMapWidth, int TileMapHeight, int TileWidth, int TileHeight);
	~TileMap();

	/// <summary>
	/// Draw the entire map
	/// </summary>
	void Draw();
	/// <summary>
	/// Draw a tile
	/// </summary>
	void DrawTile(int PosX, int PosY);
	/// <summary>
	/// Set a specific tile
	/// </summary>
	void SetTile(int PosX, int PosY, Color color);
	/// <summary>
	/// Initalises every tile on the map with a base colour
	/// </summary>
	/// <param name="color">The color to initalise with</param>
	void InitMap(Color color);

	int GetTileWidth();
	int GetTileHeight();
	int GetMapHeight();
	int GetMapLength();

	std::vector<std::vector<Tile>> GetTiles();
private:
	int m_TileMapWidth;
	int m_TileMapHeight;
	int m_TileWidth;
	int m_TileHeight;

	std::vector<std::vector<Tile>> tiles;
};

