#pragma once
#include "Character.hpp"
class BlueMen : public Character
{
public:
	BlueMen();
	~BlueMen();
	int attack();
	void defend(int damage);
};

