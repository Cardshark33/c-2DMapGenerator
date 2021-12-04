#include "Tile.h"

void Tile::Draw(int PosX, int PosY)
{
	DrawRectangle(PosX * m_Width, PosY * m_Height, m_Width, m_Height, m_color);
}

int Tile::GetHeight()
{
	return m_Height;
}

int Tile::GetWidth()
{
	return m_Width;
}

Color Tile::GetColor()
{
	return m_color;
}
