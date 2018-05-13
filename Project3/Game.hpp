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
	Character chr1;
	Character chr2;

public:
	Game(int type1, int type2);
	void fight();
	~Game();
};