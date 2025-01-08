#include <iostream>
using namespace std;

int main()
{
	int userPin = 1234, pin, errorCounter = 0; // initialize variables
	cout << "Enter a 4 digit PIN: "; // prompt user for input
	cin >> pin; // take input

	do {
		if (pin != userPin) // if user input is incorrect
		{
			errorCounter++; // increment error counter
			cout << "Incorrect PIN. You have " << 3 - errorCounter << " attempts left." << endl; // print error message
			cin >> pin; // take input
		}
	} while (pin != userPin && errorCounter < 3); // loop until user input is correct or error counter is 3
	if (pin == userPin) // if user input is correct
	{
		cout << "Access granted." << endl; // print success message
	}
	else // if user input is incorrect
	{
		cout << "Access denied. Blocked for 24 hours." << endl; // print error message
	}
}
