// welcome message
// player class
// car class
// car part choice functions
// each function takes in a set of parameters
// the car and player classes are passed by reference
// loops are used to display choices and get user input
// switch statement is used to execute user choice
// do while loop is used to allow user to exit back to main menu
// able to view car after selecting parts
// able to drive car

#include <iostream>
#include <string>

using namespace std;

// global variables
int partChoice = 0;

// Player class
class Player
{
public:
	string name; // player name
	int initialBudget = 10000; // initial player budget
	int amountSpent = 0; // amount spent
	int amountLeft = initialBudget - amountSpent; // amount left

	void updateBudget(int cost)
	{
		amountSpent += cost; // update budeget based on amount spent
		amountLeft = initialBudget - amountSpent; // calculate amount left
	}

	void printBudget()
	{
		cout << "Your remaining budget is $" << amountLeft << endl; // print amount left
	}
};
// Car class
class Car
{
public: // names for each part (uses strings)
	string engine;
	string tire;
	string body;
	string transmission;
	string brakes;
	// flags to track whether each part has been purchased
	bool enginePurchased = false;
	bool tirePurchased = false;
	bool bodyPurchased = false;
	bool transmissionPurchased = false;
	bool brakesPurchased = false;
};

void engineChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices)
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
		player.printBudget(); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void tireChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices)
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
		player.printBudget(); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void bodyChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices) // allows user to select body
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
		player.printBudget(); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void transmissionChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices) // allows user to select body
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
		player.printBudget(); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

void brakesChoice(Car& car, Player& player, string partName, string choices[], int prices[], int numChoices) // allows user to select brakes
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
		player.printBudget(); // print player's remaining budget
	}
	else
	{
		cout << "Invalid choice. Please try again." << endl;
	}
}

string viewCar(Car& car)
{
	system("cls");
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
	system("cls");
	if (car.enginePurchased && car.tirePurchased && car.bodyPurchased && car.transmissionPurchased && car.brakesPurchased) // check if all parts have been purchased
	{
		cout << "You have successfully customized your car!" << endl;
		cout << "You have: \n" << car.engine << "\n" << car.tire << "\n" << car.body << "\n" << car.transmission << "\n" << car.brakes << " installed on your car." << endl;
	}
}

int main()
{
	Car car; // car class
	Player player; // player class
	int partChoice = 0; // car part selection
	char exit; // allows user to exit back to main menu
	char canDrive; // allows user to drive car	

	string playerName; // user name
	int shopChoice = 0; // menu selection
	cout << "Welcome to the Car Shop Customization Program!\n";
	cout << "Please enter your name: ";
	cin >> playerName; // get user name
	cout << endl;
	cout << "Hello, " << playerName << "! You have $10,000 to spend on your car parts.\nYou may only choose 1 engine, 4 tires, 1 body, 1 transmission, and 1 set of brakes.\nEnter a number to select a part:\n";
	player.name = playerName;

	do {
		// menu selection
		cout << "\t1. Engine" << endl;
		cout << "\t2. Tire" << endl;
		cout << "\t3. Body" << endl;
		cout << "\t4. Transmission" << endl;
		cout << "\t5. Brakes" << endl;
		cout << "\t6. View Car" << endl;
		cout << "\t7. Drive Car" << endl;
		cin >> shopChoice;

		switch (shopChoice) // switch statement for car part selection
		{
		case 1:
		{
			string partName = "Engine"; // part name
			string choices[] = { "Howler 2.0", "Windstream", "Dragon's Cry" }; // part choices
			int prices[] = { 2800, 2440, 2700 }; // part prices
			int numChoices = 3; // number of choices
			engineChoice(car, player, partName, choices, prices, numChoices); // call engineChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 2:
		{
			string partName = "Tire. NOTE: You will purchase 4 tires of the same brand automatically."; // part name
			string choices[] = { "Skaters 0.8", "Byebye V2", "Night n Day" }; // part choices
			int prices[] = {55, 60, 50}; //	part prices
			int numChoices = 3; // number of choices
			tireChoice(car, player, partName, choices, prices, numChoices); // call tireChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 3:
		{
			string partName = "Body"; // part name
			string choices[] = { "Burgundy Blood", "Silver and Gold", "Pink Lemonade" }; // part choices
			int prices[] = { 2800, 2200, 2500 }; // part prices
			int numChoices = 3; // number of choices
			bodyChoice(car, player, partName, choices, prices, numChoices); // call bodyChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 4:
		{
			string partName = "Transmission"; // part name
			string choices[] = { "Gears 5", "Gears 6", "Gears 7" }; // part choices
			int prices[] = { 500, 600, 700 }; // part prices
			int numChoices = 3; // number of choices
			transmissionChoice(car, player, partName, choices, prices, numChoices); // call transmissionChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 5:
		{
			string partName = "Brakes"; // part name
			string choices[] = { "Quick Stop 1.0", "Steady Stop", "Defense Stop" }; // part choices
			int prices[] = { 260, 240, 220 }; // part prices
			int numChoices = 3; // number of choices
			brakesChoice(car, player, partName, choices, prices, numChoices); // call brakesChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 6:
		{
			cout << "View Car" << endl;
			viewCar(car); // view car
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 7:
		{
			driveCar(car);
			cout << "Would you like to drive your car? (y/n): "; // ask user if they would like to drive their car
			cin >> canDrive; // user input
			if (canDrive == 'y') // if user input is y
			{
				cout << "You have successfully driven your car!" << endl;
				return 0; // exit
			}
			else // if user input is n
			{
				cout << "You have not driven your car." << endl;
			}
			break;
		}
		default:
		{
			cout << "Invalid choice" << endl;
			break;
		}
		}
	} while (exit == 'x' || exit == 'X'); // loop menu
	if (exit != 'x' && exit != 'X') // if user input is not x
	{
		cout << "Invalid input, try again." << endl;
	}
}
