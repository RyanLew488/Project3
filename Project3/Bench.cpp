#include "Bench.hpp"

Bench::Bench()
{
	front = nullptr;
	back = nullptr;
}

void Bench::addFighter(int type, std::string name)
{
	if (front == nullptr)
	{
		front = new CharacterNode(type, name);
		back = front;
		front->next = back;
		front->prev = back;
		back->next = front;
		back->prev = front;
	}
	else
	{
		CharacterNode* temp = new CharacterNode(type, name);
		front->prev = temp;
		back->next = temp;
		temp->prev = back;
		temp->next = front;
		back = temp;

	}
}

Character * Bench::getFront()
{
	if (front == nullptr)
	{
		return nullptr;
	}
	else
	{
		return front->fighter;
	}
}

CharacterNode * Bench::removeFront()
{
	if (front == nullptr)
	{
		return nullptr;
	}
	else if (front == back)
	{
		CharacterNode* temp = front;
		front = nullptr;
		back = nullptr;
		return temp;
	}
	else
	{
		CharacterNode* temp = front;

		front = front->next;
		front->prev = back;
		back->next = front;
		return temp;
	}
}

void Bench::addBack(CharacterNode * fighter)
{
	if (front == NULL)
	{
		front = fighter;
		
		back = front;      
		front->next = back;
		front->prev = back;
		back->next = front;
		back->prev = front;
	}
	else
	{
	
		CharacterNode *temp = fighter;
		front->prev = temp;
		back->next = temp;
		temp->prev = back;
		temp->next = front;
		back = temp;
	}
}

