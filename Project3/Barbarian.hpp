/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Barbarian header file. Barbarian is a subclass of Character
**				Barbarian overloads attack and defend.
*********************************************************************/
#pragma once
#include "Character.hpp"

class Barbarian : public Character
{
public:
	Barbarian(std::string name);
	int attack();
	int defend(int damage);

};