#include <iostream>
#include <time.h>

using namespace std;

constexpr int g_kPlayMenu = 1;
constexpr int g_KQuitMenu = 2;

constexpr int g_kMaleGender = 1;
constexpr int g_kFemaleGender = 2;
constexpr int g_kOtherGender = 3;

int DisplayWelcomeMessage ();
void DisplayMessage(string message);
void PlayGame();
string GetUserName();
int AskForGender();
int GetAge();
string GenerateNickname(int gender, int age);
int GetGuess(int turn, string nickname);
bool ReviewGuess(int guess, int randomNumber);
void DisplayGameOver(int randomNumber, string nickname);

int main()
{
	srand((unsigned)time(0));

	int input = DisplayWelcomeMessage();

	switch (input)
	{
		case g_kPlayMenu:
		{
			PlayGame();
			break;
		}
		case g_KQuitMenu:
		{
			DisplayMessage("Goodbye!");
			break;
		}
		default:
		{
			DisplayMessage("Invalid Input. Goodbye!");
			break;
		}
	}
}

int DisplayWelcomeMessage()
{
	cout << "------- Welcome to 1 . 2 . 20 Number Guessing Game! -------" << endl;
	cout << "You have 2 guesses to find the correct number between 1 to 20." << endl;
	cout << "1) Play Game" << endl;
	cout << "2) Quit" << endl;
	cout << "Press 1 or 2: ";

	int input;
	cin >> input;
	return input;
}

void DisplayMessage(string message)
{
	cout << message << endl;
}

void PlayGame()
{
	string name = GetUserName();

	cout << "Welcome, " << name << endl << endl;

	int gender = AskForGender();

	if (g_kMaleGender >= 1 && g_kOtherGender <= 3)
	{
		int age = GetAge();

		string nickname = GenerateNickname(gender, age);

		int randomNumber = 1 + rand() % 20;
		cout << randomNumber << endl;
		int guess = GetGuess(1, nickname);
		bool didGuessCorrect = ReviewGuess(guess, randomNumber);
		if (didGuessCorrect == false)
		{
			guess = GetGuess(2, nickname);
			didGuessCorrect = ReviewGuess(guess, randomNumber);
			if (didGuessCorrect == false)
			{
				DisplayGameOver(randomNumber, nickname);
			}
		}
	}
	else
	{
		DisplayMessage("Invalid Input. Goodbye!");
	}

}

string GetUserName()
{
	cout << "What is your name?" << endl;
	string name;
	cin >> name;
	return name;
}

int AskForGender()
{
	cout << "What is your gender?" << endl;
	cout << "	1) Male" << endl;
	cout << "	2) Female" << endl;
	cout << "	3) Other" << endl;
	cout << "Press 1, 2, or 3: ";
	int gender;
	cin >> gender;
	return gender;
}

int GetAge()
{
	cout << "How old are you?" << endl;
	int age;
	cin >> age;
	return age;
}

string GenerateNickname(int gender, int age)
{
	string nickname;
	if (gender == g_kMaleGender)
	{
		if (age > 60)
		{
			nickname = "Old Man";
		}
		else if (age < 10)
		{
			nickname = "Little Man";
		}
		else
		{
			nickname = "Bud";
		}
	}
	else if (gender == g_kFemaleGender)
	{
		if (gender == g_kFemaleGender)
		{
			if (age > 60)
			{
				nickname = "Old Lady";
			}
			else if (age < 10)
			{
				nickname = "Little Lady";
			}
			else
			{
				nickname = "Ma'am";
			}
		}
	}
	else
	{
		nickname = "Friend";
	}
	return nickname;
}

int GetGuess(int turn, string nickname)
{
	cout << "Guess " << turn << ": " << "Alright, " << nickname << ", guess a number." << endl;
	int guess;
	cin >> guess;
	return guess;
}

bool ReviewGuess(int guess, int randomNumber)
{
	if (guess == randomNumber)
	{
		DisplayMessage("Amazing! You are correct!");
		return true;
	}
	else
	{
		if (guess > randomNumber)
		{
			DisplayMessage("Incorrect. Your guess is too high.");
		}
		else
		{
			DisplayMessage("Incorrect. Your guess is too low.");
		}
		return false;
	}
}

void DisplayGameOver(int randomNumber, string nickname)
{
	cout << "Too bad, " << nickname << ", :( the number was " << randomNumber << endl;
	DisplayMessage("Better luck next time!");
}
