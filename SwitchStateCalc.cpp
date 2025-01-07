// display calculator title
// calculator using switch statement
// input number
// input operator
// input number
// output result

#include <iostream>

int main()
{
    std::cout << "**Calculator**" << std::endl;

    float num1, num2;
    char op;
    std::cin >> num1 >> op >> num2;
    
    switch (op)
	{
	case '+':
		std::cout << num1 << op << num2 << "=" << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 << op << num2 << "=" << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 << op << num2 << "=" << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << num1 << op << num2 << "=" << num1 / num2 << std::endl;
		break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int=((int)num1 == num1); // check if num1 is an integer
		isNum2Int=((int)num2 == num2); // check if num2 is an integer

		if (isNum1Int && isNum2Int)
		{
			std::cout << num1 << op << num2 << "=" << ((int)num1) % ((int)num2) << std::endl;
		}
		else
		{
			std::cout << "Not valid." << std::endl;
		}
		break;
	default:
		std::cout << "Invalid operator." << std::endl;
		break;
	}
}

