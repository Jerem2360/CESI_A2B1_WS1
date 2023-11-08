#include "Character.hpp"
#include <iostream>


Character::Character(int max_hp, int damage, int level) :
	hp(max_hp), max_hp(max_hp), damage(damage), level(level), alive(1)
{}

void Character::display() {
	display("Character");
}

void Character::attack(Character* target) {
	if (target->alive)
		target->takeDamage(damage);
}

void Character::takeDamage(int amount) {
	hp -= amount;
	if (hp <= 0) {
		alive = 0;
		hp = 0;
	}
}

void Character::display(const char* name) {
	std::cout << name << " {hp: " << hp << "/" << max_hp;
	std::cout << ",damage: " << damage;
	std::cout << ",level: " << level << "}\n";
}
