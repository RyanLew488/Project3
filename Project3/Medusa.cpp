#include "Medusa.hpp"

Medusa::Medusa()
{
	strength = 8;
	armor = 3;
}

Medusa::~Medusa()
{
}

int Medusa::attack()
{
	int atk = diceRoll(2, 6);
	if (atk = 12)
	{
		std::cout << "Medusa Glares at her opponent...It's super effective!\n";
		return 1000;
	}
	else
	{
		return atk;
	}
}

void Medusa::defense(int damage)
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
