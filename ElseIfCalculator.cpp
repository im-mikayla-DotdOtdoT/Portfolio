// display calculator title
// have user input a number
// have user input an operation
// have user input another number
// display result

#include <iostream>

int main()
{
	std::cout << "**Calculator** << endl;
    float num1, num2;
	char operation;
	std::cout << "Calculator" << std::endl;
	std::cout << "Enter a number: ";
	std::cin >> num1;
	std::cout << "Enter an operation: ";
	std::cin >> operation;
	std::cout << "Enter another number: ";
	std::cin >> num2;
	if (operation == '+')
	{
		std::cout << num1 + num2;
	}
	else if (operation == '-')
	{
		std::cout << num1 - num2;
	}
	else if (operation == '*')
	{
		std::cout << num1 * num2;
	}
	else if (operation == '/')
	{
		std::cout << num1 / num2;
	}
	else
	{
		std::cout << "Invalid operation";
	}
	return 0;
}
