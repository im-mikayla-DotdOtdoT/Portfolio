#include <iostream>
#include <string>
#include "player.h"

using namespace std;

void Player::updateBudget(int cost) // update budget
{
    this->amountSpent += cost; // update budget based on amount spent
    this->amountLeft = this->initialBudget - this->amountSpent; // calculate amount left
}

void Player::printBudget(int amountLeft)
{
    cout << "Your remaining budget is $" << amountLeft << endl; // print amount left
};