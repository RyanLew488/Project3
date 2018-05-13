#include <iostream>
#include "HarryPotter.hpp"


HarryPotter::HarryPotter()
{
	strength = 10;
	armor = 0;
	chrType = "HarryPotter";
}


HarryPotter::~HarryPotter()
{
}

int HarryPotter::attack()
{
	int atk = diceRoll(2, 6);
	std::cout << "Harry attacks for " << atk << std::endl;
	return atk;
}

void HarryPotter::defend(int damage)
{
	int blocked = diceRoll(2, 6);
	std::cout << "Harry Potter defended " << blocked << " amount of damage\n";

	int damageTaken = damage - (blocked + armor);

	if (damageTaken > 0)
	{
		strength = strength - damageTaken;
		std::cout << "Harry Potter took " << damageTaken << " points of damage\n";

		if (strength <= 0)
		{
			strength = 0;
		}
		else
		{
			std::cout << "Harry Potter has " << strength << " points of strength left\n";
		}
	}
	if (strength == 0 && hogwarts)
	{
		std::cout << "Harry came back to life!\n";
		strength = 20;
	}
}

