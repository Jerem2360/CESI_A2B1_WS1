#include "Creature.hpp"


Creature::Creature(int level) : Character(15, 6, level)
{}

void Creature::display() {
	display("Creature");
}

