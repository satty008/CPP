#pragma once
class Player
{
	// Variables within a class have private access specifier by default
public:
	int m_x = 1 , m_y = 2;
	int m_speed = 4;
public:
	void Move(int xa, int ya);
};

