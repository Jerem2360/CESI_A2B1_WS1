#pragma once


class Character {
	int hp;
	int max_hp;
	int damage;
	int level;
	bool alive;

public:
	Character(int max_hp, int damage, int level);
	virtual void display();
	void attack(Character* target);

protected:
	void takeDamage(int amount);
	void display(const char* name);
};

