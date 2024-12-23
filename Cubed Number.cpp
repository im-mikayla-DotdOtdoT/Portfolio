#include <iostream>
using namespace std;

// function declaration
int Cubed(int number);

int main()
{
	// function calls
	cout << "Input a number for a cubed result: ";
	int number;
	cin >> number;
	int result = Cubed(number);
	cout << number << " cubed is " << result << endl;
}

// function definition
int Cubed(int number)
{
	return (number * number * number);
}
