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

