#pragma once
#include <cstdlib>
#include <iostream>
#include <string>
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"

struct CharacterNode
{
	Character* fighter;
	CharacterNode *prev;
	CharacterNode *next;

	CharacterNode(int type, std::string name)
	{
		case 1: //vampire
		{
			fighter = new Vampire(name);
			break;
		}

		case 2:
		{
			fighter = new Barbarian(name);
			break;
		}

		case 3:
		{
			fighter = new BlueMen(name);
			break;
		}

		case 4:
		{
			fighter = new Medusa(name);
			break;
		}

		case 5:
		{
			fighter = new HarryPotter(name);
			break;
		}

		prev = nullptr;
		next = nullptr;
	}
	~CharacterNode()
	{
		delete fighter;
	}
};