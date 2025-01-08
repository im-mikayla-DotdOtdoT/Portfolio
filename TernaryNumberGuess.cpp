#include <iostream>
using namespace std;
int main()
{
    int hostNum, guestNum; //hostNum = host number, guestNum = guest number
	cout << "Enter the host number: "; // prompts the user to enter the host number
	cin >> hostNum;
	system("cls"); // clear screen after the user enters the host number
	cout << "Enter the guest number: "; // prompts the user to enter the guest number
	cin >> guestNum;
	(hostNum == guestNum) ? cout << "The numbers are the same" : cout << "The numbers are different"; // uses the ternary operator to determine if the numbers are the same
}
