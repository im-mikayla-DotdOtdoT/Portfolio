#include <iostream> // input and output stream
#include <string> // include the string library; std namespace
#include <vector> // std namespace; vector is a dynamic array that can resize itself automatically when elements are added or removed

using namespace std;

class User // class for user login
{
private: // not accessible outside the class
	string username;
	string password;
public: // accessable outside the class
	User(string username, string password)
	{
		this->username = username; // access the private variable through pointer
		this->password = password; // access the private variable through pointer
	}
	string getUsername() { return username; }
	string getPassword() { return password; }
};

class UserManager // class for seeing users' profiles (search, select, and/or delete)
{
private:
	vector<User> users; // vector of user objects
public:
	void registerUser(string username, string password) // void return type (nothing returned). registerUser, taking in username and password
	{
		cout << "\tEnter Username: "; // prompt user to enter username
		cin >> username; // user inputs username (function parameter)
		cout << "\tEnter Password: "; // prompt user to enter password
		cin >> password; // user inputs password (function parameter)
		User user(username, password); // store username and password in user vector
		users.push_back(user); // add user object to vector

		cout << "\tUser Registered Successfully" << endl;
	}
	bool loginUser(string username, string password)// void return type (nothing returned). loginUser, taking in username and password
	{
		for (User user : users) // for each user in the vector
		{
			if (user.getUsername() == username && user.getPassword() == password) // if the username and password match
			{
				cout << "\tLogin Successful" << endl;
				return true; // return true
			}
		}
		cout << "\tLogin Failed. Invalid Username or Password" << endl;
		return false;
	}
	void showUsers() // void return type (nothing returned). showUserProfile, taking in username
	{
		cout << "\t\t-----User List-----" << endl;
		for (int i = 0; i < users.size(); i++) // for each user in the vector
		{
			cout << "\t\t" << users[i].getUsername() << endl; // display users
		}
	}
	void searchUser(string username) // void return type (nothing returned). searchUser, taking in username
	{
		cout << "\tEnter Username: ";
		cin >> username; // user inputs username
		for (User user : users) // for each user in the vector
		{
			if (user.getUsername() == username) // if the username matches
			{
				cout << "\tUser Found" << endl;
			}
			else // if the username does not match
			{
				cout << "\tUser Not Found" << endl;
			}
		}
	}
	void deleteUser(string username) // void return type (nothing returned). deleteUser, taking in username
	{
		cout << "\tEnter Username: ";
		cin >> username; // user inputs username
		for (int i = 0; i < users.size(); i++) // for each user in the vector
		{
			if (users[i].getUsername() == username) // if the username matches
			{
				users.erase(users.begin() + i); // remove user from vector
				cout << "\tUser Deleted Successfully" << endl;
			}
		}
	}
};

int main()
{
	UserManager userManager;

	// Enter menu option
	int option; // option variable
	char choice; // yes or no variable
	do
	{
		// menu options
		cout << "\t\t1.) Register User" << endl;
		cout << "\t\t2.) Login User" << endl;
		cout << "\t\t3.) Show User List" << endl;
		cout << "\t\t4.) Search User" << endl;
		cout << "\t\t5.) Delete User" << endl;
		cout << "\t\t6.) Exit" << endl;
		cout << "\tEnter Choice: ";
		cin >> option; // user inputs choice

		switch (option) //swtitch statement based on menu options
		{
			case 1: // choice 1 is to register a user
			{
				userManager.registerUser("username", "password");
				break;
			}
			case 2:// choice 2 is to login a user
			{
				string username = " ", password = " ";
				cout << "\tEnter Username: ";
				cin >> username;
				cout << "\tEnter Password: ";
				cin >> password;
				userManager.loginUser(username, password);
				break;
			}
			case 3: // choice 3 is to show user list
			{
				userManager.showUsers();
				break;
			}
			case 4: // choice 4 is to search for a user
			{
				string username = " ";
				cout << "Enter Username to Search: ";
				cin >> username;
				userManager.searchUser(username);
				break;
			}
			case 5: // choice 5 is to delete a user
			{
				string username = " ";
				cout << "Enter Username to Delete: ";
				cin >> username;
				userManager.deleteUser(username);
				break;
			}
			case 6: // choice 6 is to exit
			{
				exit(0);
				return 0;
			}
		}

		cout << "\tDo you want to continue? 'y' (yes) or 'n' (no): "; // asking user if they want to continue with options
		cin >> choice;
	} while (choice == 'y'); // loop continues if user inputs 'y' (yes)

}