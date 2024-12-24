#include <iostream> // Object-Oriented Library that provides input and output functionality

using namespace std; // allows usage of standard (std) namespace without needing std::

int main()
{
	cout << "iostream header file allows input and output operations to function such as cout (output) & cin (input).\n";
	cout << endl;

	// variable syntax: type variableName = value
	int myNumber = 10; // int stores whole numbers
	cout << "Integers are whole numbers, use the 'int' variable type to store these values.\n";
	cout << "For example... " << myNumber << endl;
	cout << endl;

	float fDecim = 7.23; // float stores a floating point/decimal value
	double dDecim = 9.453; // double also stores decimal values like float, but double is more precise
	cout << "Float and Double both store decimal values.\n";
	cout << "For example... " << fDecim << " & " << dDecim << endl;
	cout << endl;

	char myChar = 'z'; // use single quotes for char variables
	cout << "The char variable type stores a single character, such as 'M', '$', 'b', or '4'. Remember to use single quotes around the character.\n";
	cout << "For example... " << myChar << endl;
	cout << endl;

	string myMssg = "Hello World!"; // string variables use double quotes
	cout << "To store a sentence or sequence, use the string variable type. Remember to use double quotes around the sentence.\n";
	cout << "For example... " << myMssg << endl;
	cout << endl;

	bool myBool = true; // bool variables store values as true or false
	cout << "The boolean variable type (bool) is used to declare whether it is true or false. Syntax is: bool variableName = true/false. Will display 1 (true) 0 (false)\n";
	cout << "For example... " << myBool << endl;
	cout << endl;

	cout << "To have a boolean value display the words 'true or false' rather than 1 or 0, use the 'std::boolalpha manipulator.\n";
	cout << "For example... " << boolalpha << myBool << endl;
}

