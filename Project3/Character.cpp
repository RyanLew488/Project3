/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Character implementation file. Character is a subclass
**				of the Character class.
*********************************************************************/
#include <string>
#include "Character.hpp"


Character::Character()
{
}

int Character::diceRoll(int numRolls, int numSides)
{
	int accumulator = 0;

	for (int i = 0; i < numRolls; i++)
	{
		accumulator += (rand() % numSides) + 1;  //rand() will be seeded in main.
	}
	return accumulator;
}

void Character::setStength(int strength)
{
	this->strength = strength;
}

int Character::getStrength()
{
	return strength;
}

std::string Character::getType()
{
	return chrType;
}
