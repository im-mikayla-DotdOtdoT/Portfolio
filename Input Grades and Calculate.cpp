#include <iostream>
using namespace std;

// function declarations (returnType Identifier(parameters))
void PopulateArray(float theArray[], int size);
float GetAverage(float theArray[], int size);
void DisplayArray(float theArray[], int size);
float GetLargest(float theArray[], int size);
float GetSmallest(float theArray[], int size);

int main()
{
    constexpr int kSize = 5;                           // set array size
    float theGrades[kSize];                           // declare variable
    cout << "Please Enter 5 Grades: " << endl;      // prompt user to enter 5 grades
    PopulateArray(theGrades, kSize);            // call function with parameters
    cout << endl;
    cout << "Here are your grades:" << endl;
    DisplayArray(theGrades, kSize);             // Display array
    cout << endl;
    float average = GetAverage(theGrades, kSize);
    cout << "The average of your grades is: " << average << endl;

    cout << "The largest of your grades is: " << GetLargest(theGrades, kSize) << endl;
    cout << "The smallest of your grades is: " << GetSmallest(theGrades, kSize) << endl;


}

// function definitions
void PopulateArray(float theArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> theArray[i];
    }
}

float GetAverage(float theArray[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += theArray[i];
    }
    return sum / size;
}

void DisplayArray(float theArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << theArray[i] << " ";
    }
}

float GetLargest(float theArray[], int size)
{
    float largest = theArray[0];    // assume largest is first in array

    for (int i = 1; i < size; i++)
    {
        if (theArray[i] > largest)  // if first spot is not largest...assign largest
        {
            largest = theArray[i];
        }
    }
    return largest;
}

float GetSmallest(float theArray[], int size)
{
    float smallest = theArray[0]; 

    for (int i = 1; i < size; i++)
    {
        if (theArray[i] < smallest)
        {
            smallest = theArray[i];
        }
    }
    return smallest;
}
