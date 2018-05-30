/*********************************************************************
** Author:Ryan Lew
** Date: 4/10/2018
** Description: Header file for the helpful functions. Contains the
**				function prototypes.
*********************************************************************/

#include <string>

void menu(int& type);
int iValid(std::string message);
int iRangeValid(std::string message, int lowerBound, int upperBound);
bool yesNoValidation();