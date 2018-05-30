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
#include "Bench.hpp"

class Game
{
private:
	Bench* p1Bench;
	Bench* p2Bench;
	Bench* losers; 
	int benchSize;

public:
	Game(int benchSize);
	void fillBench(int player);
	void gamePlay();
	void fight();
	~Game();
};