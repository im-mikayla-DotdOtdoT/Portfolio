#include <iostream>
#include <conio.h> // provide console input and output
#include <time.h> // for srand time function
#include <Windows.h>
using namespace std;

bool gameOver; // global variable; declared outside of main or any function or class. Accessed by any part of the program

// dimensions of map
constexpr int width = 20; // constant integer
constexpr int height = 20; // constant integer
int x, y, fruitX, fruitY, score; // variables for x and y positions, as well as fruit x and y positions
int tailX[100], tailY[100]; // array for tail, maximum 100
int nTail; // specify length of tail
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN }; // enum used for directional input. enum (enumeration) consists of paired name-integer constants; set of potential options
enum eDirection direct; // direct is direction of snake

// void functions do not return a value
void Setup() 
{
	gameOver = false; // no game over at start/setup
	direct = STOP; // snake will not move until game starts

	// head of snake will be centered
	x = width / 2; // position for snake head
	y = height / 2; // position for snake head

	// fruit will be placed randomly
	fruitX = rand() % width; // random position from 0 to width - 1
	fruitY = rand() % height; // random position from 0 to height - 1
	score = 0; // start of game, score is zero
}

void Draw() // draw a map
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 }); // clear screen; takes cursor to first word of top line & starts to overwrite the text so flickering from system("cls") stops. uses <windows.h>
	// remove cursor, uses <windows.h>
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

	// loop prints first row only
	for (int i = 0; i < width + 2; i++) // for loop
		cout << "#"; // top wall character
	cout << endl;

	for (int i = 0; i < height; i++) // i = height
	{
		for (int j = 0; j < width; j++) // j = width; j used in nested loop as i is being used for outer loops
		{
			if (j == 0)
				cout << "#"; // print walls
			if (i == y && j == x) // i (height) == to y && j (width) == x
				cout << "O"; // head of the snake
			else if (i == fruitY && j == fruitX) // if height and width is equal to 
				cout << "*";
			else
			{
				bool print = false; // bool if tail segment is printed or not
				for (int k = 0; k < nTail; k++) // use k for nested loop, as i and j have been used
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " "; // print open space
			}
				
			if (j == width - 1)
				cout << "#";
		}
		cout << endl; // exit and move to next line
	}

	for (int i = 0; i < width + 2; i++)
		cout << "#"; // bottom wall
		cout << endl;
		cout << "Score: " << score << endl;
}

void Input()
{
	if (_kbhit()) // if keyboard is hit/pressed; will return boolean-positive if pressed, nothing = zero
	{
		switch (_getch()) // move snake with wasd and x to quit game
		{
			case 'a':
				direct = LEFT;
				break;
			case 'd':
				direct = RIGHT;
				break;
			case 'w':
				direct = UP;
				break;
			case 's':
				direct = DOWN;
				break;
			case 'x':
				gameOver = true;
				break;
		}
	}
}

void Logic()
{
	int prevX = tailX[0]; // previous x coordinate, first tail segment follows
	int prevY = tailY[0]; // previous y coordinate, first tail segment follows
	int prev2X, prev2Y; // following segments
	tailX[0] = x; // first segment follows head
	tailY[0] = y; // first segment follows head
	for (int i = 1; i < nTail; i++) // for loop for tail; i = 1 as first tail segment is already clarified
	{
		prev2X = tailX[i]; // the segments position for the next segments
		prev2Y = tailY[i]; // the segments position for the next segments
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}

	switch (direct)
	{
	case LEFT:
		x--; // moving left decreses on x-axis. decrement operator (--)
		break;
	case RIGHT:
		x++; // moving right increases on x-axis. increment operator (++)
		break;
	case UP:
		y--; // decrement (--)
		break;
	case DOWN:
		y++; // increment y-axis (++)
		break;
	default: // nothing will happen
		break;
	}
	// snake will travel through walls and above and below for this game
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= height) y = 0; else if (y < 0) y = height - 1;

		for (int i = 0; i < nTail; i++) // loop for tail
			if (tailX[i] == x && tailY[i] == y) // if tail and head collide
			{
				gameOver = true;
				cout << "You hit yourself! Try Again!" << endl;
			}

	if (x == fruitX && y == fruitY)
	{
		fruitX = rand() % width;
		fruitY = rand() % height;
		score += 10; // add 10 to score each fruit picked up
		nTail++; // add segment to tail
	}
}

int main()
{
	srand(time(NULL)); // allows the fruit to be randomized each time
	Setup();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(120); // reduce snake movement speed; needs <windows.h>
	}
	return 0;
} // end of int main()
