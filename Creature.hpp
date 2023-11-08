#pragma once
#include "Character.hpp"


class Creature : public Character {
	using Character::display;

public:
	Creature(int level);
	void display() override;
};
