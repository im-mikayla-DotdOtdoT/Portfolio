#include <iostream>

using namespace std;

void PopulateArray(float theArray[], int size); // populate array function
float GetLargest(float theArray[], int size); // function to get largest within array 

int main()
{
	constexpr int kSize = 5; // array size
	float theNumbers[kSize]; // numbers can be decimals
	cout << "Please Enter Some Numbers: ";
	PopulateArray(theNumbers, kSize); // the numbers inputted will populate the array
	cout << "The largest number of your numbers is: " << GetLargest(theNumbers, kSize); // use the function to get the largest in array
}

void PopulateArray(float theArray[], int size) // PopulateArray function
{
	for (int i = 0; i < size; i++) // i initialized to 0; loop will continue when i is less than size of array; increment i
	{
		cin >> theArray[i];
	}
}
float GetLargest(float theArray[], int size) // GetLargest function
{
	float largest = theArray[0];

	for (int i = 1; i < size; i++)
	{
		if (theArray[i] > largest)
		{
			largest = theArray[i];
		}
	}
	return largest; // return largest within array
}
