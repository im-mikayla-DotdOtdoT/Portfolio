#include <iostream>
using namespace std;

int main()
{
    // prompt user to enter temp in celsius
    cout << "Please enter a temperature in celsius." << endl;

    // get temp in celsius
    float celstemp;
    cin >> celstemp;

    // convert temp to fahrenheit
    float fahrentemp = (celstemp * 9.0f) / 5.0f + 32;

    // display info
    cout << celstemp << " in celsius is " << fahrentemp << " in fahrenheit.";
}
