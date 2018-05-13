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

