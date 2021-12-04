#include "Walker.h"

Walker::Walker(TileMap& TMap, Color color)
{
	m_Map = &TMap;
	m_Color = color;

	m_MaxHeight = TMap.GetMapHeight();
	m_MaxLength = TMap.GetMapLength();

	m_TilesToWalk = 10;

	m_Pos = MathLbry::Vector2((float)m_MaxLength / 2, (float)m_MaxHeight / 2);
}

Walker::Walker(TileMap& TMap, Color color, int PosX, int PosY, int tilesToWalk)
{
	m_Map = &TMap;
	m_Color = color;

	m_MaxHeight = TMap.GetMapHeight();
	m_MaxLength = TMap.GetMapLength();

	m_TilesToWalk = tilesToWalk;

	m_Pos = MathLbry::Vector2((float)PosX, (float)PosY);
}

Walker::~Walker()
{
}

void Walker::Move()
{
	//check if the walker is in the bounds of the map
	if (m_Pos.X >= (float)m_MaxLength)
		m_Pos.X = (float)m_MaxLength - 1;

	if (m_Pos.X <= 0)
		m_Pos.X = 0;

	if (m_Pos.Y >= (float)m_MaxHeight)
		m_Pos.Y = (float)m_MaxHeight - 1;

	if (m_Pos.Y <= 0)
		m_Pos.Y = 0;


	for (int i = 0; i < m_TilesToWalk; i++)
	{
		//get new random direction
		int RandPos = rand() % 4;

		//set position of walker and color of tile
		//accoring to the random direction
		switch (RandPos)
		{
		case 0:
			if (m_Pos.X >= (float)m_MaxLength - 1)
				m_Pos.X = (float)m_MaxLength - 2;

			m_Map->SetTile((int)(m_Pos.X += 1), (int)m_Pos.Y, m_Color);
			break;
		case 1:
			if (m_Pos.X <= 0)
				m_Pos.X = 1;

			m_Map->SetTile((int)(m_Pos.X -= 1), (int)m_Pos.Y, m_Color);
			break;
		case 2:
			if (m_Pos.Y >= (float)m_MaxHeight - 1)
				m_Pos.Y = (float)m_MaxHeight - 2;

			m_Map->SetTile((int)m_Pos.X, (int)(m_Pos.Y += 1), m_Color);
			break;
		case 3:
			if (m_Pos.Y <= 0)
				m_Pos.Y = 1;

			m_Map->SetTile((int)m_Pos.X, (int)(m_Pos.Y -= 1), m_Color);
			break;
		}
	}
}
