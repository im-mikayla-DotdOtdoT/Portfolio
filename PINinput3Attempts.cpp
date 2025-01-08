#include <iostream>
using namespace std;

int main()
{
	int userPin = 1234, pin, errorCounter = 0; // initialize variables
	cout << "Enter a 4 digit PIN: "; // prompt user for input
	cin >> pin; // take input

	if(pin == userPin) // if input is correct
	{
		cout << "Access Granted" << endl;
	}
	else
	{
		while (pin != userPin && errorCounter < 3) // if input is incorrect (3 attempts)
		{
			cout << "Access Denied" << endl;
			errorCounter++; // increment error counter
			cout << "Enter a 4 digit PIN: ";
			cin >> pin;
		}
		if (pin == userPin)
		{
			cout << "Access Granted" << endl;
		}
	}
}