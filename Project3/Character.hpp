#pragma once
#include <cstdlib>

class Character 
{
protected:
	int armor;
	int strength;

public:
	Character();
	virtual int attack() = 0;
	virtual void defend(int damage) = 0;
	int diceRoll(int numRolls, int numSides);
	void setStength(int strength);
	int getStrength();
};