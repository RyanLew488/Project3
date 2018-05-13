#include "Game.hpp"
#include <string>


Game::Game(int chr1, int chr2)
{
	switch (chr1)
	{
	case 1:
		{
			Vampire * vampire1 = new Vampire;
			this->chr1 = vampire1;
			break;
		}

	case 2:
		{
			Barbarian * barbarian1 = new Barbarian;
			this->chr1 = barbarian1;
			break;
		}

	case 3:
		{
			BlueMen * blueMen1 = new BlueMen;
			this->chr1 = blueMen1;
			break;
		}

	case 4:
		{
			Medusa * medusa1 = new Medusa;
			this->chr1 = medusa1;
			break;
		}

	case 5:
		{
			HarryPotter * harryPotter1 = new HarryPotter;
			this->chr1 = harryPotter1;
			break;
		}
	}

	switch (chr2)
	{
	case 1:
		{
			Vampire * vampire2 = new Vampire;
			this->chr2 = vampire2;
			break;
		}

	case 2:
		{
			Barbarian * barbarian2 = new Barbarian;
			this->chr2 = barbarian2;
			break;
		}

	case 3:
		{
			BlueMen * blueMen2 = new BlueMen;
			this->chr2 = blueMen2;
			break;
		}

	case 4:
		{
			Medusa * medusa2 = new Medusa;
			this->chr2 = medusa2;
			break;
		}

	case 5:
		{
			HarryPotter * harryPotter2 = new HarryPotter;
			this->chr2 = harryPotter2;
			break;
		}
	}
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
