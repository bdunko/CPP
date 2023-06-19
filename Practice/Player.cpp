#include "Player.h"

Player::Player()
{
	m_maxHealth = HEALTH;
	m_health = m_maxHealth;
}

bool Player::is_alive()
{
	return m_maxHealth > 0;
}

void Player::damage(int damage_amount)
{
	m_health -= damage_amount;
}