#include "TileMap.h"

TileMap::TileMap()
{
	m_TileMapWidth = 5;
	m_TileMapHeight = 5;
	m_TileWidth = 20;
	m_TileHeight = 20;

	for (int x = 0; x < m_TileMapWidth; x++)
	{
		std::vector<Tile> t;
		for (int y = 0; y < m_TileMapHeight; y++)
		{
			t.push_back(Tile(m_TileWidth, m_TileHeight, BLANK));
		}
		tiles.push_back(t);
	}
}

TileMap::TileMap(int TileMapWidth, int TileMapHeight, int TileWidth, int TileHeight)
{
	m_TileMapWidth = TileMapWidth;
	m_TileMapHeight = TileMapHeight;
	m_TileWidth = TileWidth;
	m_TileHeight = TileHeight;

	for (int x = 0; x < m_TileMapWidth; x++)
	{
		std::vector<Tile> t;
		for (int y = 0; y < m_TileMapHeight; y++)
		{
			t.push_back(Tile(m_TileWidth, m_TileHeight, BLANK));
		}
		tiles.push_back(t);
	}
}

TileMap::~TileMap()
{
}

void TileMap::Draw()
{
	for (int x = 0; x < m_TileMapWidth; x++)
	{
		for (int y = 0; y < m_TileMapHeight; y++)
		{
			tiles[x][y].Draw(x, y);
		}
	}
}

void TileMap::DrawTile(int PosX, int PosY)
{
	tiles[PosX][PosY].Draw(PosX, PosY);
}

void TileMap::SetTile(int PosX, int PosY, Color color)
{
	tiles[PosX][PosY] = Tile(m_TileWidth, m_TileHeight, color);
}

void TileMap::InitMap(Color color)
{
	for (int x = 0; x < m_TileMapWidth; x++)
	{
		for (int y = 0; y < m_TileMapHeight; y++)
		{
			SetTile(x, y, color);
		}
	}
}

int TileMap::GetTileWidth()
{
	return m_TileWidth;
}

int TileMap::GetTileHeight()
{
	return m_TileHeight;
}

int TileMap::GetMapHeight()
{
	return m_TileMapHeight;
}

int TileMap::GetMapLength()
{
	return m_TileMapWidth;
}

std::vector<std::vector<Tile>> TileMap::GetTiles()
{
	return tiles;
}
