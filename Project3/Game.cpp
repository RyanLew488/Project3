/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Game implementation file. Contains Character class 
**				Objects.
*********************************************************************/
#include <string>
#include "Game.hpp"
#include "Bench.hpp"


Game::Game()
{
	
}

void Game::gamePlay() //"flip a coin" to see who goes first
{
	int coinflip = rand() % 2;
	switch (coinflip)
	{
	case 0: //chr1 goes first.
		fight(chr1, chr2);
		break;

	case 1: //chr2 goes first.
		fight(chr2, chr1);
		break;
	}
}
void Game::fight(Character* turn1,Character* turn2)
{
	std::cout << turn1->getType() << " vs " << turn2->getType() << std::endl;
	int roundCount = 1;
	bool noWinner = true;
	while (noWinner)
	{
		std::cout << "----------Round " << roundCount << "----------\n";
		std::cout << "Player 1: \n"
				  << "Strength: " << turn1->getStrength() << std::endl;
		std::cout << "Player 2: \n"
				  << "Strength: " << turn2->getStrength() << std::endl;
		
		turn2->defend(turn1->attack());
		if (turn2->getStrength() == 0)
		{
			std::cout << "Player 1 has defeated Player 2\n";
			noWinner = false;
		}
		else
		{
			std::cout << "Player 2 has " << turn2->getStrength() << "strength left\n";
			
			turn1->defend(turn2->attack()); //player 2 attacks if they haven't been killed
			if (turn1->getStrength() == 0)
			{
				std::cout << "Player 2 has defeated Player 1\n";
				noWinner = false;
			}
			else
			{
				std::cout << "Player 1 has " << turn2->getStrength() << "strength left\n";
			}
		}
		std::cout << "Press enter to play the next round \n";
		std::cin.get();
	}
}
Game::~Game()
{
	delete chr1;
	delete chr2;
}
