#include <iostream>
#include <ctime>

void drawBoard(char *spaces); // pointer to array (spaces); will keep track of markers
void playerMove(char *spaces, char player); //keep track of spaces, markers, and player character
void computerMove(char *spaces, char computer); // spaces pointer to keep track of spaces, and computer character
bool checkWinner(char *spaces, char player, char computer); // check spaces, along with player and computer characters; return true or false
bool checkTie(char *spaces); // check if game ends in tie; return true or false

int main()
{
	// array for spaces, 9 in total for the board
	char spaces[9] = {' ', ' ', ' ',
					  ' ', ' ', ' ',
					  ' ', ' ', ' '};
	char player = 'X'; // player symbol = 'X'
	char computer = 'O'; // computer symbol = 'O'
	bool running = true; // game is running

	drawBoard(spaces); // draw game board, pass in spaces array; passing in an array into a function will decay it to a pointer & draw the drawBoard function

	while (running)
	{
		playerMove(spaces, player);
		drawBoard(spaces);
		if (checkWinner(spaces, player, computer))
		{
			running = false;
			break;
		}
		else if (checkTie(spaces))
		{
			running = false;
			break;
		}

		computerMove(spaces, computer);
		drawBoard(spaces);
		if (checkWinner(spaces, player, computer))
		{
			running = false;
			break;
		}
		else if (checkTie(spaces))
		{
			running = false;
			break;
		}
	}
	std::cout << "Thanks For Playing!";
	return 0;
}

void drawBoard(char* spaces)
{
	// game board
	std::cout << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
	std::cout << "_____|_____|_____" << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
	std::cout << "_____|_____|_____" << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
	std::cout << "     |     |     " << '\n';
	std::cout << '\n';
}

void playerMove(char* spaces, char player)
{
	int number;
	do
	{
		std::cout << "You are X. Enter a spot to place your marker (1-9): "; // user is unaware that arrays start with zero, so subtract the inputted number by 1
		std::cin >> number;
		number--; // decrement number since arrays start with zero
		if (spaces[number] == ' ') // if number is equal to empty space...
		{
			spaces[number] = player; // place player marker
			break;
		}
	} while (!number > 0 || !number < 8); // user can only enter between 0-8, which corresponds to the spaces array
}

void computerMove(char* spaces, char computer)
{
	int number;
	srand(time(0)); // generate random number

	while (true)
	{
		number = rand() % 9; // random number between 0-8
		if (spaces[number] == ' ')
		{
			spaces[number] = computer;
			break;
		}
	}
}

bool checkWinner(char* spaces, char player, char computer)
{
	// '? :' = ternary operatr+or, which asks a question. asks who won for this game, player or computer
	// check which spaces are occupied by who in order to determine who won
	if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
	{
		spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
	{
		spaces[3] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
	{
		spaces[6] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
	{
		spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
	{
		spaces[1] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
	{
		spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
	{
		spaces[0] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
	{
		spaces[2] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
	}
	else
	{
		return false; // if none of above win statements happen
	}

	return true; // somebody won if not false
}

bool checkTie(char* spaces)
{
	for (int i = 0; i < 9; i++) // for loop; i < 9 as there are 9 spaces
	{
		if (spaces[i] == ' ') // check if it's an empty space
		{
			return false; // if an empty space, tie = false
		}
	}
	std::cout << "IT'S A TIE!";
	return true;
}
