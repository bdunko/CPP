#pragma once
#include <vector>
#include <memory>
#include <string>

class Player {
public:
	Player();
	bool is_alive();
	void damage(int damage_amount);

private:
	const static int HEALTH = 10;
	int m_maxHealth;
	int m_health;
	std::vector<std::shared_ptr<std::string>> m_inventory;
};