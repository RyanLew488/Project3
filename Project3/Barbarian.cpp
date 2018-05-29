/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Barbarian implementation file. Barbarian is a subclass
**				of the Character class.
*********************************************************************/
#include <iostream>
#include "Barbarian.hpp"

Barbarian::Barbarian(std::string name)
{
	setName(name);
	strength = 12;
	armor = 0;
	chrType = "Barbarian";
}

int Barbarian::attack()
{
	int atk = diceRoll(2, 6);
	std::cout << getName() << " attacks for " << atk << std::endl;
	return atk;
}

void Barbarian::defend(int damage)
{
	int blocked = diceRoll(2, 6);
	std::cout << "The Barbarian defended " << blocked << " amount of damage\n";

	int damageTaken = damage - (blocked + armor);

	if (damageTaken > 0)
	{
		strength = strength - damageTaken;
		std::cout << "The Barbarian took " << damageTaken << " points of damage\n";
		
		if (strength <= 0)
		{
			strength = 0;
		}
		else
		{
			std::cout << "The Barbarian has " << strength << " points of strength left\n";
		}
	}
}
