/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Medusa header file. Medusa is a subclass of Character
**				Medusa overloads attack and defend.
*********************************************************************/
#pragma once
#include "Character.hpp"
class Medusa : public Character
{
public:
	int attack();
	void defend(int damage);
	Medusa();
	~Medusa();
};

