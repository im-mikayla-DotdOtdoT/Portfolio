#include <iostream>

using namespace std;

void PopulateArray(float theArray[], int size);
float GetLargest(float theArray[], int size);

int main()
{
	constexpr int kSize = 5;
	float theNumbers[kSize];
	cout << "Please Enter Some Numbers: ";
	PopulateArray(theNumbers, kSize);
	cout << "The largest number of your numbers is: " << GetLargest(theNumbers, kSize);
}

void PopulateArray(float theArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> theArray[i];
	}
}
float GetLargest(float theArray[], int size)
{
	float largest = theArray[0];

	for (int i = 1; i < size; i++)
	{
		if (theArray[i] > largest)
		{
			largest = theArray[i];
		}
	}
	return largest;
}
