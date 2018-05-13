#include "Vampire.hpp"



Vampire::Vampire()
{
	strength = 18;
	armor = 1;
}


Vampire::~Vampire()
{

}

int Vampire::attack()
{
	int atk;
	atk = 
	return 0;
}

void Vampire::defense(int damage)
{
	int blocked;
	int damageTaken;
	int charm;

	charm = rand() % 2;

	if (charm = 1)
	{
		std::cout << "The Vampire has charmed his opponent he takes no damage\n";
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
