#include <iostream>
using namespace std;

int main()
{
    // prompt user to enter distance in cm
    cout << "Please enter a distance in centimeters:";

    // get cm
    float inCenti;
    cin >> inCenti;

    // feet in given centimeters and just in feet
    float inFeet = (inCenti / 30.48f);
    int onlyFeet = (int)inFeet;

    // convert to inches    
    int onlyInches = (int)((inFeet - onlyFeet) * 12);

    // display user
    cout << "Centimeters = " << inCenti << endl;
    cout << "Feet = " << onlyFeet << endl;
    cout << "Inches = " << onlyInches << endl;
}
