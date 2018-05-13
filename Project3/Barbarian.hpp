#pragma once
#include "Character.hpp"

class Barbarian : public Character
{
public:
	Barbarian();
	int attack();
	void defend(int damage)();

};