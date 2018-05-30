#include <iostream>
#include <ctime>
#include "Game.hpp"
#include "helperFunctions.hpp"

int main()
{
	srand(time(0));
	while (yesNoValidation())
	{
		std::cout << "Please select how many fighters each player should have.\n";
		int benchSize = iValid("");
		Game game(benchSize);

		game.fillBench(1);
		game.fillBench(2);
		game.gamePlay();
	}
	return 0;
}