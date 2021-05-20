#pragma once
class Player
{
	// Variables within a class have private access specifier by default
public:
	int m_x, m_y;
	int m_speed;
public:
	void Move(int xa, int ya);
};

