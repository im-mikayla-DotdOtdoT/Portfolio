// Welcome message
// have user input name
// user has $10,000 to spend on car parts
// first select item to buy
// allow user to view car
// allow user to drive car ONLY if car is full customized
// engine, tire, body, transmission, and brakes
// 3 different parts for each
// user can not overspend
// loop menu

#include <iostream>
#include <string>

using namespace std;

// global variables
int initialBudget = 10000;
int amountSpent = 0;
int amountLeft = initialBudget - amountSpent;
int partChoice = 0;

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

void engineChoice(Car& car) // allows user to select engine (reference car class)
{
	if (car.enginePurchased) // if engine is already purchased
	{
		cout << "You have already purchased an engine. Please select a different part." << endl;
		return;
	}
	system("cls");
	cout << "Choose an Engine: " << endl;
	cout << "---------------------" << endl;
	// 3 different engines & prices
	cout << "1.) Howler 2.0 - $2,800\n";
	cout << "2.) Windstream - $2,440\n";
	cout << "3.) Dragon Cry - $2,700\n";
	cin >> partChoice;
	if (partChoice == 1)
	{
		cout << "You have selected Howler 2.0." << endl;
		car.engine = "Howler 2.0"; // set engine to Howler 2.0
		car.enginePurchased = true; // set engine purchased to true
		amountSpent = 2800; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 2)
	{
		cout << "You have selected Windstream" << endl;
		car.engine = "Windstream"; // set engine to Windstream
		car.enginePurchased = true; // set engine purchased to true
		amountSpent = 2440; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 3)
	{
		cout << "You have selected Dragon Cry" << endl;
		car.engine = "Dragon Cry"; // set engine to Dragon Cry
		car.enginePurchased = true; // set engine purchased to true
		amountSpent = 2100; // set amount spent
		amountLeft = initialBudget - amountSpent; 
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
}

void tireChoice(Car& car) // allows user to select tires
{
	if (car.tirePurchased) // if tires are already purchased
	{
		cout << "You have already purchased tires. Please select a different part." << endl;
		return;
	}
	system("cls");
	// 3 different tires & prices for one tire (multplied by 4 when purchased)
	cout << "Choose a pair of 4 tires: " << endl;
	cout << "---------------------" << endl;
	cout << "1.) Skaters 0.8 - $55\n";
	cout << "2.) Byebye V2 - $60\n";
	cout << "3.) Night n Day - $50\n";
	cin >> partChoice;
	if (partChoice == 1)
	{
		cout << "You have selected 4 Skaters 0.8" << endl;
		car.tire = "Skaters 0.8";
		car.tirePurchased = true; // set tire purchased to true
		amountSpent = 220; // set amount spent (55 * 4)
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 2)
	{
		cout << "You have selected 4 Byebye V2" << endl;
		car.tire = "Byebye V2";
		car.tirePurchased = true;
		amountSpent = 240; // set amount spent (60 * 4)
		amountLeft = initialBudget - amountSpent; 
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 3)
	{
		cout << "You have selected 4 Night n Day" << endl;
		car.tire = "Night n Day"; // set tire to Night n Day
		car.tirePurchased = true; // set tire purchased to true
		amountSpent = 200; // set amount spent (50 * 4)
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
}

void bodyChoice(Car& car) // allows user to select body
{
	if (car.bodyPurchased) // if body is already purchased
	{
		cout << "You have already purchased a body. Please select a different part." << endl;
		return;
	}
	system("cls");
	// 3 different bodies
	cout << "Choose a Body: " << endl;
	cout << "---------------------" << endl;
	cout << "1.) Burgundy Blood - $2,800\n";
	cout << "2.) Silver and Gold - $2,200\n";
	cout << "3.) Pink Lemonade - $2,500\n";
	cin >> partChoice;
	if (partChoice == 1)
	{
		cout << "You have selected Midnight Purple" << endl;
		car.body = "Burgundy Blood"; // set body to Burgundy Blood
		car.bodyPurchased = true; // set body purchased to true
		amountSpent = 2800; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 2)
	{
		cout << "You have selected Silver and Gold" << endl;
		car.body = "Silver and Gold"; // set body to Silver and Gold
		car.bodyPurchased = true; // set body purchased to true
		amountSpent = 2200; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 3)
	{
		cout << "You have selected Pink Lemonade" << endl;
		car.body = "Pink Lemonade"; // set body to Pink Lemonade
		car.bodyPurchased = true; // set body purchased to true
		amountSpent = 2500; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
}

void transmissionChoice(Car& car) // allows user to select transmission
{
	if (car.transmissionPurchased) // if transmission is already purchased
	{
		cout << "You have already purchased a transmission. Please select a different part." << endl;
		return;
	}
	system("cls");
	// 3 different transmissions
	cout << "Choose a Transmission: " << endl;
	cout << "---------------------" << endl;
	cout << "1.) Gears 5 - $500\n";
	cout << "2.) Gears 6 - $600\n";
	cout << "3.) Gears 7 - $700\n";
	cin >> partChoice;
	if (partChoice == 1)
	{
		cout << "You have selected Gears 5" << endl;
		car.transmission = "Gears 5"; // set transmission to Gears 5
		car.transmissionPurchased = true; // set transmission purchased to true
		amountSpent = 500; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 2)
	{
		cout << "You have selected Gears 6" << endl;
		car.transmission = "Gears 6"; // set transmission to Gears 6
		car.transmissionPurchased = true; // set transmission purchased to true
		amountSpent = 600; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 3)
	{
		cout << "You have selected Gears 7" << endl;
		car.transmission = "Gears 7"; // set transmission to Gears 7
		car.transmissionPurchased = true; // set transmission purchased to true
		amountSpent = 700; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
}

void brakesChoice(Car& car) // allows user to select brakes
{
	if (car.brakesPurchased) // if brakes are already purchased
	{
		cout << "You have already purchased brakes. Please select a different part." << endl;
		return;
	}
	system("cls");
	// 3 different brakes
	cout << "Choose a pair of Brakes: " << endl;
	cout << "---------------------" << endl;
	cout <<	"1.) Quick Stop 1.0 - $260\n";
	cout << "2.) Steady Stop - $240\n";
	cout << "3.) Defense Stop - $220\n";
	cin >> partChoice;
	char exit;
	if (partChoice == 1)
	{
		cout << "You have selected Quick Stop 1.0" << endl;
		car.brakes = "Quick Stop 1.0"; // set brakes to Quick Stop 1.0
		car.brakesPurchased = true; // set brakes purchased to true
		amountSpent = 260; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 2)
	{
		cout << "You have selected Steady Stop" << endl;
		car.brakes = "Steady Stop"; // set brakes to Steady Stop
		car.brakesPurchased = true; // set brakes purchased to true
		amountSpent = 240; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
	}
	else if (partChoice == 3)
	{
		cout << "You have selected Defense Stop" << endl;
		car.brakes = "Defense Stop"; // set brakes to Defense Stop
		car.brakesPurchased = true; // set brakes purchased to true
		amountSpent = 220; // set amount spent
		amountLeft = initialBudget - amountSpent;
		initialBudget = amountLeft; // set initial budget to amount left
		cout << "Your remaining budget is $" << amountLeft << endl;
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
	int partChoice = 0; // car part selection
	char exit; // allows user to exit back to main menu
	char canDrive; // allows user to drive car	

	string name; // user name
	int shopChoice = 0; // menu selection
	cout << "Welcome to the Car Shop Customization Program!\n";
	cout << "Please enter your name: ";
	cin >> name;
	cout << endl;
	cout << "Hello, " << name << "! You have $10,000 to spend on your car parts.\nYou may only choose 1 engine, 4 tires, 1 body, 1 transmission, and 1 set of brakes.\nEnter a number to select a part:\n";

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
			engineChoice(car);
			cout << "Press X to continue: ";
			cin >> exit;
			break;
			}
		case 2:
			{
			tireChoice(car);
			cout << "Press X to continue: ";
			cin >> exit;
			break;
			}
		case 3:
			{
			bodyChoice(car);
			cout << "Press X to continue: ";
			cin >> exit;
			break;
			}
		case 4:
			{
			transmissionChoice(car);
			cout << "Press X to continue: ";
			cin >> exit;
			break;
			}
		case 5:
			{
			brakesChoice(car);
			cout << "Press X to continue: ";
			cin >> exit;
			break;
			}
		case 6:
			{
			cout << "View Car" << endl;
			viewCar(car);
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