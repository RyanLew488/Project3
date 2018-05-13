#pragma once
#include "Character.hpp"
class Medusa : public Character
{
public:
	int attack();
	void defense(int damage);
	Medusa();
	~Medusa();
};

