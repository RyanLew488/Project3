/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Vampire implementation file. Vampire is a subclass
**				of the Character class.
*********************************************************************/
#include <iostream>
#include <string>
#include "Vampire.hpp"

Vampire::Vampire(std::string name)
{
	setName(name);
	strength = 18;
	armor = 1;
	chrType = "Vampire";
}

Vampire::~Vampire()
{

}

int Vampire::attack()
{
	int atk = diceRoll(1, 12);
	std::cout << getName() << " attacks for " << atk << std::endl;
	return atk;
}

void Vampire::defend(int damage)
{	
	int damageTaken;
	int charm = 0;

	charm = rand() % 2;

	if (charm == 1)
	{
		std::cout << getName() << " has charmed his opponent he takes no damage\n";
	}
	else
	{
		int blocked = diceRoll(1, 6);
		std::cout << "The Vampire defended " << blocked << " amount of damage\n";

		int damageTaken = damage - (blocked + armor);

		if (damageTaken > 0)
		{
			strength = strength - damageTaken;
			std::cout << "The Vampire took " << damageTaken << " points of damage\n";

			if (strength <= 0)
			{
				strength = 0;
			}
			else
			{
				std::cout << "The Vampire has " << strength << " points of strength left\n";
			}
		}
	}
}
