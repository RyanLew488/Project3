/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Medusa implementation file. Medusa is a subclass
**				of the Character class.
*********************************************************************/
#include <iostream>
#include "Medusa.hpp"

Medusa::Medusa(std::string name)
{
	setName(name);
	strength = 8;
	armor = 3;
	chrType = "Medusa";
}

Medusa::~Medusa()
{
}

/*********************************************************************
** Description:Medusa 1 shot kills anyone on a natural 12
*********************************************************************/
int Medusa::attack()
{
	int atk = diceRoll(2, 6);
	if (atk == 12)
	{
		std::cout << getName() << " Glares at their opponent...It's super effective!\n";
		return 1000;
	}
	else
	{
		std::cout << getName() << " attacks for " << atk << std::endl;
		return atk;
	}
}

void Medusa::defend(int damage)
{
	int blocked = diceRoll(1, 6);
	std::cout << "Medusa defended " << blocked << " amount of damage\n";

	int damageTaken = damage - (blocked + armor);

	if (damageTaken > 0)
	{
		strength = strength - damageTaken;
		std::cout << "Medusa took " << damageTaken << " points of damage\n";

		if (strength <= 0)
		{
			strength = 0;
		}
		else
		{
			std::cout << "Medusa has " << strength << " points of strength left\n";
		}
	}
}
