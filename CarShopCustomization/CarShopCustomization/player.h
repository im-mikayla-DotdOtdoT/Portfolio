#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	string name; // player name
	int initialBudget = 10000; // initial player budget
	int amountSpent = 0; // amount spent
	int amountLeft = 0; // amount left

	void updateBudget(int cost); // update budget
	void printBudget(int amountLeft); // print budget
};
