// welcome message
// player class
// car class
// garage class
// car part choice functions
// each function takes in a set of parameters
// the car and player classes are passed by reference
// loops are used to display choices and get user input
// use enum class to store menu choices
// player can have a maximum of 3 cars
// switch statement is used to execute user choice
// do while loop is used to allow user to exit back to main menu
// able to view car after selecting parts
// able to drive car

#include <iostream>
#include <string>
#include "player.h"
#include "car.h"
#include "garage.h"

using namespace std;

enum class ShopChoice
{
	ENGINE = 1,
	TIRE = 2,
	BODY = 3,
	TRANSMISSION = 4,
	BRAKES = 5,
	VIEW_CAR = 6,
	SAVE_CAR = 7,
	VIEW_GARAGE = 8,
	NEW_CAR = 9,
	DRIVE_CAR = 10
};

int main()
{
	Player player; // player class
	Car car; // car class
	Garage garage; // garage class
	Car cars[3]; // add up to 3 cars

	int choice; // menu selection
	int partChoice = 0; // car part selection
	char exit; // allows user to exit back to main menu
	char canDrive; // allows user to drive car	

	string playerName; // user name
	cout << "Welcome to the Car Shop Customization Program!\n";
	cout << "Please enter your name: ";
	cin >> playerName; // get user name
	cout << endl;
	cout << "Hello, " << playerName << "! You have $10,000 to spend on your car parts.\nYou may only choose 1 engine, 4 tires, 1 body, 1 transmission, and 1 set of brakes.\nEnter a number to select a part:\n";
	player.name = playerName; // set player name

	do {
		// menu selection
		cout << "\t1. Engine" << endl;
		cout << "\t2. Tire" << endl;
		cout << "\t3. Body" << endl;
		cout << "\t4. Transmission" << endl;
		cout << "\t5. Brakes" << endl;
		cout << "\t6. View Car" << endl;
		cout << "\t7. Save Car to Garage" << endl;
		cout << "\t8. View Garage" << endl;
		cout << "\t9. New Car" << endl;
		cout << "\t10. Drive Car" << endl;
		cin >> choice;

		ShopChoice shopChoice; // enum class for shop choice menu
		switch (choice) // switch statement for car part selection
		{
		case 1:shopChoice = ShopChoice::ENGINE; // case for engine
		{
			string partName = "Engine"; // part name
			string choices[] = { "Howler 2.0", "Windstream", "Dragon's Cry" }; // part choices
			int prices[] = { 2300, 2000, 2100 }; // part prices
			int numChoices = 3; // number of choices
			car.engineChoice(car, player, partName, choices, prices, numChoices); // call engineChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 2:shopChoice = ShopChoice::TIRE; // case for tire
		{
			string partName = "Tire. NOTE: You will purchase 4 tires of the same brand automatically:"; // part name
			string choices[] = { "Skaters 0.8", "Byebye V2", "Night n Day" }; // part choices
			int prices[] = {40, 55, 50}; //	part prices
			int numChoices = 3; // number of choices
			car.tireChoice(car, player, partName, choices, prices, numChoices); // call tireChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 3:shopChoice = ShopChoice::BODY; // case for body
		{
			string partName = "Body"; // part name
			string choices[] = { "Burgundy Blood", "Silver and Gold", "Pink Lemonade" }; // part choices
			int prices[] = { 500, 300, 400 }; // part prices
			int numChoices = 3; // number of choices
			car.bodyChoice(car, player, partName, choices, prices, numChoices); // call bodyChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 4:shopChoice = ShopChoice::TRANSMISSION; // case for transmission
		{
			string partName = "Transmission"; // part name
			string choices[] = { "Gears 5", "Gears 6", "Gears 7" }; // part choices
			int prices[] = { 150, 160, 170 }; // part prices
			int numChoices = 3; // number of choices
			car.transmissionChoice(car, player, partName, choices, prices, numChoices); // call transmissionChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 5:shopChoice = ShopChoice::BRAKES; // case for brakes
		{
			string partName = "Brakes"; // part name
			string choices[] = { "Quick Stop 1.0", "Steady Stop", "Defense Stop" }; // part choices
			int prices[] = { 120, 130, 100 }; // part prices
			int numChoices = 3; // number of choices
			car.brakesChoice(car, player, partName, choices, prices, numChoices); // call brakesChoice function
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 6:shopChoice = ShopChoice::VIEW_CAR; // case for view car
		{
			cout << "View Car" << endl;
			car.viewCar(); // view car
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 7:shopChoice = ShopChoice::SAVE_CAR; // case for saving car
		{
			if (car.isComplete()) // if car is complete
			{
				if (garage.getCarCount() == 0) // if garage is empty
				{
					garage.addCar(car); // save car1 to garage
				}
				else if (garage.getCarCount() == 1) // if garage has 1 car
				{
					garage.addCar(car); // save car2 to garage
				}
				else if (garage.getCarCount() == 2) // if garage has 2 cars
				{
					garage.addCar(car); // save car3 to garage
				}
				else
				{
					cout << "Garage is full. Cannot save more cars." << endl;
				}
			}
			else // if car is not complete
			{
				cout << "You must purchase all parts before saving your car." << endl;
			}
			cout << "Press X to continue: ";
			cin >> exit;
			break;
		}
		case 8:shopChoice = ShopChoice::VIEW_GARAGE; // case for view garage
		{
				cout << "View Garage" << endl;
				garage.viewGarage(); // view garage
			break;
		}
		case 9:shopChoice = ShopChoice::NEW_CAR; // case for drive car
		{
			car = Car(); // create new car, reset the current car's state
			cout << "New Car Created! You can only make 3 cars." << endl;
			break;
		}
		case 10:shopChoice = ShopChoice::DRIVE_CAR; // case for drive car
		{
			garage.driveCar(); // call the modified driveCar function
			cout << "Press X to continue: ";
			cin >> exit;
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