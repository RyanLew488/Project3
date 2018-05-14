/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Harry Potter header file. Harry Potter is a subclass of Character
**				Harry Potter overloads attack and defend.
*********************************************************************/
#pragma once
#include "Character.hpp"
class HarryPotter : public Character
{
public:
	int attack();
	void defend(int damage);
	bool hogwarts;
	HarryPotter();
	~HarryPotter();
};

