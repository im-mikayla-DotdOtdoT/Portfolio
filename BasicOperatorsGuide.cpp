#include <iostream> // Library for input and output

using namespace std; // allows usage of standard (std) input without explicit declaration of std::

int main()
{
	cout << "The are multiple types of operators and groups for them.\n";
	cout << endl;
	cout << "+ is addition; - is subtraction; * is multiplication; / is division; % is modulo. ++(variable) is increment, --(variable) is decrement.\n";
	cout << "These operators are classified as Arithmetic Operators.\n";
	cout << endl;

	cout << "Examples using 5 & 10.\n";
	int x = 10;
	int y = 5;

	cout << "Addition: " << x + y << endl;
	cout << "Subtraction: 10 - 5 = " << x - y << " or 5 - 10 = " << y - x << endl;
	cout << "Multiplication: " << x * y << endl;
	cout << "Division: 10/5 = " << x / y << " or 5/10 = " << y / x << endl;
	cout << endl;
	cout << "The modulo operator returns the division remainder. For example, 5/10 is 0.5, 0 being the quotient and 5 being the remainder.\n";
	cout << "Modulo: 10 % 5 = " << x % y << " or 5 % 10 = " << y % x << endl;
	cout << endl;

	cout << "Increment increases the value of a variable by one, while decrement decreases by 1.\n";
	cout << "To increment, use ++ with variable: With 5: " << ++y << endl;
	cout << "To decreament, us -- with variable: With 10: " << --x << endl;
	cout << endl;

	cout << "Use any above operator with = to perform the operation and assign a value: +=, -=, *=, /=, %=.\n";
}