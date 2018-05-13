#include <iostream>
#include <ctime>
#include "Game.hpp"
#include "helperFunctions.hpp"

int main()
{
	srand(time(0));
	while (yesNoValidation())
	{
		int choice1, choice2;
		menu(choice1, choice2);
		Game game(choice1, choice2);
		game.gamePlay();
	}
	return 0;
}