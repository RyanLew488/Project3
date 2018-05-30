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
	std::string name;

public:
	Character();
	void setName(std::string name);
	std::string getName();
	virtual int attack() = 0;
	virtual int defend(int damage) = 0;
	int diceRoll(int numRolls, int numSides);
	void setStength(int strength);
	int getStrength();
	void recover(int dmgtaken);
	std::string getType();
};