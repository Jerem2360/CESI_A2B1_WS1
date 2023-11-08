#include "Hero.hpp"


Hero::Hero(int level) : Character(20, 4, level) 
{}

void Hero::display() {
	display("Hero");
}

