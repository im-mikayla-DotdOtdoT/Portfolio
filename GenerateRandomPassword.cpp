// TASKS
// have user input password length
// generate random characters for password
// have the password randomize each time
// have randomized password fit inputted length
// display password

#include <iostream> // for cin and cout
#include <cstdlib> // for rand and srand
#include <ctime> // for time (randomize)
#include <string> // for string input and output
using namespace std;

string getPassword(int passwordLength) // function to generate password based on user inputted length
{
	string password = " "; // string to hold password
	string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*_+"; // acceptable characters (may alter
	int charactersLength = characters.length(); // set length of generated password
	srand(time(0)); // randomize
	for (int i = 0; i < passwordLength; i++) // loop to generate password of user inputted length
	{
		password += characters[rand() % charactersLength]; // add random character to password
	}
	return password; // return generated password
}

int main()
{
	int passwordLength; // variable to hold user inputted password length
	cout << "Enter the length of the password: "; // prompt for user input
	cin >> passwordLength; // get user input
	string password = getPassword(passwordLength); // use getPassword function
	cout << "Generated Password: " << password; // display generated password

	return 0;
}
