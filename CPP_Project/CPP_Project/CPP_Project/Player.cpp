#include "Player.h"

void Player::Move(int xa, int ya) {
	m_x += xa * m_speed;
	m_y += ya * m_speed;
}
