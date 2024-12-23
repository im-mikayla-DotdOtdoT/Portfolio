#include <iostream>
using namespace std;

int main()
{
	cout << "A normal year has 365 days." << endl;
	cout << "366 days is a leap year. The occurance of February 29th makes a year a leap year." << endl;
	cout << "A leap year can be divided by 4 but is NOT divisible by 100. Only exception is being divisible by 400." << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "Enter a year to see if it is a leap year:" << endl;

	int year;
	cin >> year;
	
	if (year % 400 == 0)
	{
		cout << year << " is a leap year." << endl;
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		cout << year << " is a leap year." << endl;
	}
	else
	{
		cout << year << " is not a leap year." << endl;
	}
}
