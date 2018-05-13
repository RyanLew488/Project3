#include "Game.hpp"

Game::Game(int chr1, int chr2)
{
	switch (chr1)
	{
	case 1:
		Vampire * vampire1 = new Vampire;
		this->chr1 = vampire1;
		break;
	case 2:
		Barbarian * barbarian1 = new Barbarian;
		this->chr1 = barbarian1;
		break;
	case 3:
		BlueMen * blueMen1 = new BlueMen;
		this->chr1 = blueMen1;
		break;
	case 4:
		Medusa * medusa1 = new Medusa;
		this->chr1 = medusa1;
		break;
	case 5:
		HarryPotter * harryPotter1 = new HarryPotter;
		this->chr1	 = harryPotter1
		break;
	}

	switch (chr2)
	{
	case 1:
		Vampire * vampire1 = new Vampire;
		this->chr2 = vampire1;						
		break;
	case 2:
		Barbarian * barbarian1 = new Barbarian;
		this->chr2 = barbarian1;
		break;
	case 3:
		BlueMen * blueMen1 = new BlueMen;
		this->chr2 = blueMen1;
		break;
	case 4:
		Medusa * medusa1 = new Medusa;
		this->chr2 = medusa1;
		break;
	case 5:
		HarryPotter * harryPotter1 = new HarryPotter;
		this->chr2 = harryPotter1;
		break;
	}
}

void Game::fight()
{
}

Game::~Game()
{
}
