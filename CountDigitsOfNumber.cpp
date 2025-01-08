#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number: "; // prompts the user to enter a number
	cin >> number;
	int count = 0; // counts the number of digits
	while (number > 0) // while the number is greater than 0
	{
		number /= 10; // divides the number by 10
		count++; // adds 1 to the count
	}
	cout << "The number of digits is: " << count << endl; // prints the number of digits
	return 0;
}