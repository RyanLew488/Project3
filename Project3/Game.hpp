/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Game header file. Contains Character class
**				Objects.
*********************************************************************/
#pragma once
#include <iostream>
#include <cstdlib>
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"



class Game
{
private:
	Character* chr1;
	Character* chr2;

public:
	Game(int type1, int type2);
	void gamePlay();
	void fight(Character* turn1, Character* turn2);
	~Game();
};