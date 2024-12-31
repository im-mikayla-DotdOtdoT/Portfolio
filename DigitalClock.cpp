// TASKS
// digital clock class (DigiClock)
// Member functions
// have user input the hours and minutes (12 hour clock)
// display the time on the screen (HH:MM:SS A.M or P.M) 0-11 am 12-24 pm (military time)
#include <iostream>
#include <iomanip> // for setw
using namespace std;

class DigiClock // class for digital clock
{
private: // data members; not accessible outside the class
	int hours;
	int minutes;
	int seconds;
	string am;
	string pm;
public: 
	DigiClock(int h, int m, int s) // constructor takes in hours, minutes and seconds
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	void displayTime() // display the time
	{
		if (hours < 10)
		{
			cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " " << endl;
			// setfill('0') adds leading zero to the number if it is less than 10; setw(2) adds 2 spaces
		}
		else if (minutes < 10)
		{
			cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " " << endl;
		}
		else if (seconds < 10)
		{
			cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << " " << endl;
		}

		if (hours >= 12) // if hours is greater than or equal to 12, then it is pm (military time)
		{
			cout << "PM" << endl;
		}
		else // if hours is less than 12, then it is am
		{
			cout << "AM" << endl;
		}
	}
};

int main()
{
	// prompt user for hours, minutes and seconds
    int hours, minutes, seconds;
	cout << "Enter the hours: ";
	cin >> hours;
	cout << "Enter the minutes: ";
	cin >> minutes;
	cout << "Enter the seconds: ";
	cin >> seconds;
	DigiClock clock(hours, minutes, seconds); // calling the constructor
	clock.displayTime(); // calling the displayTime function

	return 0;
}