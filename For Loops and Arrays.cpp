#include <iostream>
using namespace std;

int main()
{
    // create array for grades
    float theGrades[5] = { 94.5f, 83.0f, 96.2f, 77.4f, 79.6f };

    // calculate average
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += theGrades[i];
    }
    float average = sum / 5;

    // display info
    cout << "My grades for the semester are: " << endl;
    for (int i = 0; i < 5; i++)
    {
       cout << theGrades[i] << " ";
    }
    cout << endl;
    cout << "My average grade is: " << average << endl;

}
