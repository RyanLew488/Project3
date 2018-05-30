/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Vampire header file. Vampire is a subclass of Character 
**				Vampire overloads attack and defend.
*********************************************************************/
#pragma once
#include "Character.hpp"
class Vampire : public Character
{
public:
	int attack();
	int defend(int damage);
	Vampire(std::string name);
	~Vampire();
};

