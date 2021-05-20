#include<iostream>
#include "Player.h"

void Player::Move(int xa, int ya) {
	m_x += xa * m_speed;
	m_y += ya * m_speed;

	std::cout << " m_x Value : " << m_x << std::endl;
	std::cout << " m_y Value : " << m_y << std::endl;

}
