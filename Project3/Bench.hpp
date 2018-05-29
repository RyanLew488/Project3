#pragma once
#include <iostream>
#include "CharacterNode.hpp"
#include "Character.hpp"

class Bench
{
private:
	CharacterNode* front;
	CharacterNode* back;

public:
	Bench();
	void addFighter(int type, std::string name);
	Character* getFront();
	CharacterNode* removeFront();
	void addBack(CharacterNode* fighter);
	void print();
	~Bench();
};