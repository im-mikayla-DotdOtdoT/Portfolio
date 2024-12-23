#include <iostream>
using namespace std;

// constant variables
constexpr int kHeight = 5;
constexpr int kWidth = 6;

void DisplayMap(char map[kHeight][kWidth]);	//DisplayMap function declaration

int main()
{
	char myMap[kHeight][kWidth] = {'+', '-', '-', '-', '-', '+',
								   '|', '@', ' ', ' ', ' ', '|',
								   '|', ' ', ' ', ' ', ' ', '|',
								   '|', ' ', ' ', ' ', 'X', '|',
								   '+', '-', '-', '-', '-', '+',};	// map layout
	DisplayMap(myMap);	// display map
}

void DisplayMap(char map[kHeight][kWidth])	// function definition
{
	for (int y = 0; y < kHeight; y++)	// display for 2dim array
	{
		for (int x = 0; x < kWidth; x++);
	}
}
