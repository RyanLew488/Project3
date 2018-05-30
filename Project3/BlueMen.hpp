/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Bluemen header file. Bluemen is a subclass of Character
**				Bluemen overloads attack and defend.
*********************************************************************/
#pragma once
#include "Character.hpp"
class BlueMen : public Character
{
public:
	BlueMen(std::string name);
	~BlueMen();
	int attack();
	int defend(int damage);
};

