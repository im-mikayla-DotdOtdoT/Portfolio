#include <iostream>
#include <string>
#include "car.h"
#include "player.h"

using namespace std;

int partChoice = 0;

void Car::engineChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices)
{
	if (car.enginePurchased) { // if already purchased
		cout << "You have already purchased an engine. Please select a different part." << endl;
		return;
	}
	system("cls");
	cout << "Choose a " << partName << ": " << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < numChoices; i++) // display choices
	{
		cout << (i + 1) << ".) " << choices[i] << " - $" << prices[i] << endl;
	}
	cin >> partChoice;
	if (partChoice > 0 && partChoice <= numChoices)
	{
		cout << "You have selected " << choices[partChoice - 1] << "." << endl;
		car.engine = choices[partChoice - 1]; // set engine to selected choice
		car.enginePurchased = true; // set engine purchased to true
		player.updateBudget(prices[partChoice - 1]); // update player's budget
		player.printBudget(int(player.amountLeft)); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void Car::tireChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices)
{
	if (car.tirePurchased) { // if already purchased
		cout << "You have already purchased tires. Please select a different part." << endl;
		return;
	}
	system("cls");
	cout << "Choose a " << partName << ": " << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < numChoices; i++) // display choices
	{
		cout << (i + 1) << ".) " << choices[i] << " - $" << prices[i] << endl;
	}
	cin >> partChoice;
	if (partChoice > 0 && partChoice <= numChoices) {
		cout << "You have selected " << choices[partChoice - 1] << "." << endl;
		car.tire = choices[partChoice - 1]; // set engine to selected choice
		car.tirePurchased = true; // set engine purchased to true
		player.updateBudget(prices[partChoice - 1]); // update player's budget
		player.printBudget(int(player.amountLeft)); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void Car::bodyChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices) // allows user to select body
{
	if (car.bodyPurchased) { // if already purchased
		cout << "You have already purchased a body. Please select a different part." << endl;
		return;
	}
	system("cls");
	cout << "Choose a " << partName << ": " << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < numChoices; i++) // for loop to display choices
	{
		cout << (i + 1) << ".) " << choices[i] << " - $" << prices[i] << endl;
	}
	cin >> partChoice;
	if (partChoice > 0 && partChoice <= numChoices)
	{
		cout << "You have selected " << choices[partChoice - 1] << "." << endl;
		car.body = choices[partChoice - 1]; // set engine to selected choice
		car.bodyPurchased = true; // set engine purchased to true
		player.updateBudget(prices[partChoice - 1]); // update player's budget
		player.printBudget(int(player.amountLeft)); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void Car::transmissionChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices) // allows user to select body
{
	if (car.transmissionPurchased) { // if engine is already purchased
		cout << "You have already purchased a transmission. Please select a different part." << endl;
		return;
	}
	system("cls");
	cout << "Choose a " << partName << ": " << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < numChoices; i++) // display choices
	{
		cout << (i + 1) << ".) " << choices[i] << " - $" << prices[i] << endl;
	}
	cin >> partChoice;
	if (partChoice > 0 && partChoice <= numChoices) {
		cout << "You have selected " << choices[partChoice - 1] << "." << endl;
		car.transmission = choices[partChoice - 1]; // set engine to selected choice
		car.transmissionPurchased = true; // set engine purchased to true
		player.updateBudget(prices[partChoice - 1]); // update player's budget
		player.printBudget(int(player.amountLeft)); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void Car::brakesChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices) // allows user to select brakes
{
	if (car.brakesPurchased) { // if engine is already purchased
		cout << "You have already purchased brakes. Please select a different part." << endl;
		return;
	}
	system("cls");
	cout << "Choose a " << partName << ": " << endl;
	cout << "---------------------" << endl;
	for (int i = 0; i < numChoices; i++) // display choices
	{
		cout << (i + 1) << ".) " << choices[i] << " - $" << prices[i] << endl;
	}
	cin >> partChoice;
	if (partChoice > 0 && partChoice <= numChoices) {
		cout << "You have selected " << choices[partChoice - 1] << "." << endl;
		car.brakes = choices[partChoice - 1]; // set engine to selected choice
		car.brakesPurchased = true; // set engine purchased to true
		player.updateBudget(prices[partChoice - 1]); // update player's budget
		player.printBudget(int(player.amountLeft)); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}
string viewCar(const Car& car)
{
	cout << "Your Customized Car: " << endl;
	cout << "---------------------" << endl;
	cout << "Engine: " << car.engine << endl; // set chosen parts to car class
	cout << "Tire: " << car.tire << endl;
	cout << "Body: " << car.body << endl;
	cout << "Transmission: " << car.transmission << endl;
	cout << "Brakes: " << car.brakes << endl;
	return "";
}
void driveCar(Car& car)
{
	if (car.enginePurchased && car.tirePurchased && car.bodyPurchased && car.transmissionPurchased && car.brakesPurchased) // check if all parts have been purchased
	{
		cout << "You have successfully customized your car!" << endl;
		cout << "You have: \n" << car.engine << "\n" << car.tire << "\n" << car.body << "\n" << car.transmission << "\n" << car.brakes << " installed on your car." << endl;
	}
}