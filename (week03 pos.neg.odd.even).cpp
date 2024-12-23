#include <iostream>
using namespace std;

int main()
{
   // Prompt user to enter a number
	cout << "Please enter a number: ";
	int usrnmbr;
	cin >> usrnmbr;

	// see if number is positive
	if (usrnmbr > 0)
	{
		cout << "The number you have entered is positive." << endl;
	}

	// see if number is negative
	if (usrnmbr < 0)
	{
		cout << "The number you have entered is negative." << endl;
	}

	// see if number is zero
	if (usrnmbr == 0)
	{
		cout << "The number you have entered is zero." << endl;
	}

	// see if number is even or odd
	if (usrnmbr > 0 && usrnmbr % 2 == 0)
		{
		cout << "The number you have entered is even." << endl;
		}
	else if (usrnmbr == 0)
	{
		cout << "The number zero is neither positive nor negative is even." << endl;
	}
	if (usrnmbr < 0 && usrnmbr % 2 == 0)
	{
		cout << "The number you have entered is even." << endl;
	}
	if (usrnmbr % 2 != 0)
	{
		cout << "The number you have entered is odd." << endl;
	}
}