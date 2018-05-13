#pragma once
#include "Character.hpp"
class Vampire : public Character
{
public:
	Vampire();
	~Vampire();
	int attack();
	void defense(int damage);
};

