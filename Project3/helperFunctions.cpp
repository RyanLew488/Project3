/*********************************************************************
** Author:Ryan Lew
** Date: 4/10/2018
** Description: A collection of helpful functions. Contains input validation
**				and a general menu function that can be edited for other programs
*********************************************************************/

#include <iostream>
#include <sstream>
#include <string>

/*********************************************************************
** Description:Integer check. 
*********************************************************************/
int iValid(std::string message) {

	bool valid = false;
	int validInteger = 0;
	std::string input = "";
	
	do {

		std::cout << message;
		std::getline(std::cin, input);
		std::stringstream check(input);

		if (check >> validInteger)	{
			valid = true;
		}


	} while (valid == false);

	return validInteger;
}

/*********************************************************************
** Description: Range validation check. 
*********************************************************************/
int iRangeValid(std::string message, int lowerBound, int upperBound) {

	bool valid = false;
	int validInteger = 0;
	std::string input = "";

	do {

		std::getline(std::cin, input);
		std::stringstream check(input);

		if (check >> validInteger) {

			if (validInteger < lowerBound || validInteger > upperBound) {

				std::cout << "The number you entered exceeded boundaries \n";
				std::cout << "Please enter a number between " << lowerBound << " and " << upperBound << std::endl;

			}
			else {

				valid = true;

			}
		}

		else {

			std::cout << "Please enter an integer." << std::endl;

		}


	} while (valid == false);
	return validInteger;
}

/*********************************************************************
** Description: This function only accepts Y/y or N/n as a valid input.
*********************************************************************/

bool yesNoValidation() {

	std::cout << "Welcome to the Monster fighter game\n";
	std::cout << "Would you like to fight some monsters?\n";
	bool answer = false;
	bool valid = false;
	std::string input;

	do {
	
 		std::cin >> input;

		if (input == "y" || input == "Y") {
			answer = true;
			valid = true;
		}

		else if (input == "n" || input == "N") {
			valid = true;
		}

		if (valid == false) {
			std::cout << "Please enter y or n" << std::endl;
		}
		
	} while (valid == false);

	return answer;
}

/*********************************************************************
** Description: Menu function passes all values by reference so you can
**				use those values in statements in the calling function.
**				allows you to edit multiple things instead of returning
**				a single value.
*********************************************************************/

void menu(int& chr1, int& chr2) 
{
	std::cout << "Please choose the first characters type \n";
	std::cout << "---------------------\n";
	std::cout << "1: Vampire\n";
	std::cout << "2: Barbarian\n";
	std::cout << "3: Bluemen\n";
	std::cout << "4: Medusa\n";
	std::cout << "5: Harry Potter\n";
	chr1 = iRangeValid("", 1, 5);

	std::cout << "Please choose the second characters type \n";
	std::cout << "---------------------\n";
	std::cout << "1: Vampire\n";
	std::cout << "2: Barbarian\n";
	std::cout << "3: Bluemen\n";
	std::cout << "4: Medusa\n";
	std::cout << "5: Harry Potter\n";
	chr2 = iRangeValid("", 1, 5);
}
