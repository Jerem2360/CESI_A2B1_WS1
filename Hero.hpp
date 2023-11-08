#pragma once
#include "Character.hpp"


class Hero : public Character {
	using Character::display;

public:
	Hero(int level);

	void display() override;
};

