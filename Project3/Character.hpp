/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Character header file. Character is an abstract class
*********************************************************************/
#pragma once
#include <cstdlib>

class Character 
{
protected:
	int armor;
	int strength;
	std::string chrType;

public:
	Character();
	virtual int attack() = 0;
	virtual void defend(int damage) = 0;
	int diceRoll(int numRolls, int numSides);
	void setStength(int strength);
	int getStrength();
	std::string getType();
};