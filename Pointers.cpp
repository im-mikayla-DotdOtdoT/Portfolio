#include <iostream>
using namespace std;

int main()
{
	// Get two integers
	int a;
	int b;
	cout << "Enter two integers: " << endl;
	cin >> a;
	cin >> b;

	// Pointers
	int* ptrA = &a;
	int* ptrB = &b;

	// Display
	cout << "Value of A: " << a << endl;
	cout << "Value of B: " << b << endl;
	cout << "A Pointer: " << ptrA << endl;
	cout << "B Pointer: " << ptrB << endl;

	cout << endl;
	//Get Variable, Assign Pointer, Display Value
	int variable;
	int* pointer;

	cout << "Enter a variable: " << endl;
	cin >> variable;
	pointer = &variable;

	cout << "The value using a pointer is: " << *pointer << endl;
	
}
