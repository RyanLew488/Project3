#include "Game.hpp"

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

void Game::gamePlay()
{
	int coinflip = rand() % 2;
	switch (coinflip)
	{
	case 1: //chr1 goes first.
		fight(chr1, chr2);
		break;

	case 2: //chr2 goes first.
		fight(chr2, chr1);
		break;
	}
	
}
void Game::fight(Character* turn1,Character* turn2)
{
	while (turn1->getStrength() > 0 && turn2->getStrength() > 0)
	{

	}

}

Game::~Game()
{
}
