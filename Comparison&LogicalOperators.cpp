#include <iostream> // library for standard output and input procedures

using namespace std; // allows usage of standard (std) without sxplicit std:: declaration

int main()
{
	int x = 10;
	int y = 5;
	cout << "Comparison operators: == (equal to), !=, (not equal to), > (greater than), < (less than), >= (greater than or equal to), <= (less than or equal to).\n";
	cout << "Will return 1 (true) or 0 (false)." << endl;
	cout << "Using 10 and 5, the following operations equal 0 (false): 10 == 5 = " << (x == y) << " & 10 < 5 = " << (x < y) << endl;
	cout << "Using 10 and 5, the following operations equal 1 (true): 10 != 5 = " << (x != y) << " & 10 > 5 = " << (x > y) << endl;
	cout << endl;

	cout << "&& is the logical AND operator, || is the logical OR operator, ! is the logical negation." << endl;
	cout << "&& returns TRUE is BOTH statements are TRUE, otherwise FALSE. || returns TRUE if ONE is TRUE. Returns FALSE if BOTH are FALSE. ! reverses the result." << endl;
	cout << endl;
	cout << "For example, when x = 10 & y = 5: (1 < x && 1 < y) = " << (1 < x && 1 < y) << " TRUE" << endl;
	cout << "When x = 10 & y = 5: (2 > x && 2 > y) = " << (2 > x && 2 > y) << " FALSE" << endl;
	cout << endl;

	cout << "When x = 10 & y = 5: (2 > x || 2 < y) = " << (2 > x || 2 < y) << " TRUE" << endl;
	cout << "When x = 10 & y = 5: (2 > x || 2 > y) = " << (2 > x || 2 > y) << " FALSE" << endl;
	cout << "! makes a true statement false and vice versa." << endl;
}
