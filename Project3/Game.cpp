/*********************************************************************
** Author:Ryan Lew
** Date: 5/10/2018
** Description: Game implementation file. Contains Character class 
**				Objects.
*********************************************************************/
#include <string>
#include "Game.hpp"
#include "Bench.hpp"
#include "helperFunctions.hpp"


Game::Game(int benchSize)
{
	this->benchSize = benchSize;
	Bench* losers;
}

void Game::fillBench(int player)
{
	int type;
	std::string name;
	Bench* temp = new Bench();

	std::cout << "Player " << player << " select "<< benchSize << " fighters.\n";

	for (int i = 0; i < benchSize; i++)
	{
		std::cout << "Please select fighter number " << i + 1 << std::endl;
		menu(type);
		std::cout << "What do you want to call this fighter? " << std::endl;
		std::getline(std::cin, name);
		temp->addFighter(type, name);
	}
	switch (player)
	{
	case 1:
		p1Bench = temp;
		break;
	case 2:
		p2Bench = temp;
		break;
	}
}

void Game::gamePlay() 
{
	int p1Score = 0;
	int p2Score = 0;
	int round = 1;

	Character* p1Fighter = p1Bench->getFront();
	Character* p2Fighter = p2Bench->getFront();

	while (p1Fighter != nullptr && p2Fighter != nullptr)
	{
		int p1dmg = 0;
		int p2dmg = 0;

		int first = (rand() % 2) + 1;
		switch (first)
		{
			case 1: //p1 goes first
			{
				std::cout << "Round: " << round << "P1 will attack first.\n";
				while (p1Fighter->getStrength() != 0 && p2Fighter->getStrength() != 0)
				{
					p2dmg += p2Fighter->defend(p1Fighter->attack()); //p1 attacks
					p1dmg += p1Fighter->defend(p1Fighter->attack()); //p2 attacks
				}
				break;
			}
			case 2:
			{
				std::cout << "Round: " << round << "P1 will attack first.\n";
				while (p1Fighter->getStrength() != 0 && p2Fighter->getStrength() != 0)
				{
					p1dmg += p1Fighter->defend(p1Fighter->attack()); //p1 attacks
					p2dmg += p2Fighter->defend(p1Fighter->attack()); //p2 attacks
				}
				break;
			}
		}
		if (p1Fighter->getStrength() == 0)
		{
			std::cout << "|| Player 2's fighter " << p2Fighter->getName() << " Wins!  ||\n";
			p2Score++;
			p2Fighter->recover(p2dmg);

			p1Bench->removeFront();
		}
		if (p2Fighter->getStrength() == 0)
		{
			std::cout << "|| Player 1's fighter " << p1Fighter->getName() << " Wins!  ||\n";
			p1Score++;
			p1Fighter->recover(p2dmg);

			p2Bench->removeFront();
		}
	}
}
Game::~Game()
{

}
