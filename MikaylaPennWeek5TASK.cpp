#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int number;
	cin >> number;

	cout << "The factors of " << number << " are ";


	for (int i = 1; i <= number; i++) // from 1 to entered number
	{
		if (number % i == 0) // check if number is divisible by loop variable i
		{
			cout << i << " "; // display numbers
		}
	}
}
