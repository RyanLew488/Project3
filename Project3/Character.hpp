#pragma once

class Character 
{
protected:
	int armor;
	int stength;
public:
	Character();
	virtual int attack() = 0;
	virtual void defend() = 0;
	int diceRoll(int numRolls, int numSides);
	int getStrength();
};