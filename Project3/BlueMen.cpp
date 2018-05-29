/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Bluemen implementation file. Bluemen is a subclass
**				of the Character class.
*********************************************************************/
#include <iostream>
#include <string>
#include "BlueMen.hpp"

BlueMen::BlueMen(std::string name)
{
	setName(name);
	strength = 12;
	armor = 3;
	chrType = "BlueMen";

}

BlueMen::~BlueMen()
{
}

int BlueMen::attack()
{
	int atk = diceRoll(2,10);
	std::cout << getName() << " attacks for " << atk << std::endl;
	return atk;
}

/*********************************************************************
** Description: Bluemens lose a defend die each time they take 4 points of damage
*********************************************************************/
void BlueMen::defend(int damage)
{
	int blocked;
	int damageTaken;
	if (strength > 8)
	{
		blocked = diceRoll(3, 6);
		std::cout << "Three Blue Men block for " << blocked << std::endl;
	}
	else if (strength > 4)
	{
		blocked = diceRoll(2, 6);
		std::cout << "Two Blue Men block for " << blocked << std::endl;
	}
	else
	{
		blocked = diceRoll(1, 6);
		std::cout << "One Blue Man blocks for " << blocked << std::endl;
	}
	damageTaken = damage - (blocked + armor);
	
	if (damageTaken > 0)
	{
		strength = strength - damageTaken;

		if (strength <= 0)
		{
			strength = 0;
		}
		else
		{
			std::cout << "The Blue Men have " << strength << " points of strength left\n";
		}
	}
}
