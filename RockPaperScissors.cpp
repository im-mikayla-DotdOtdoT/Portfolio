#include <iostream>
#include <time.h> // random generator

using namespace std;

// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;

char getComputerOption(); // computer option
char getUserOption(); // user option
void showSelectedOption(char option); // show the selected options
void chooseWinner(char uChoice, char cChoice); // choose winner between user or computer (or a tie)

int main()
{
    char uChoice; // User's choice
   
    char cChoice;  // Compter's choice

    // user's choice and showing
    uChoice = getUserOption();
    cout << "Your choice is: " << endl;
    showSelectedOption(uChoice);

    // com's choice and showing
    cout << "Computer's choice is: " << endl;
    cChoice = getComputerOption();
    showSelectedOption(cChoice);

    // check if there's a winner or a tie
    chooseWinner(uChoice, cChoice);

    return 0;
}

char getComputerOption()
{
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;

    if (num == 1) return 'r';
    if (num == 2) return 'p';
    if (num == 3) return 's';
}

char getUserOption()
{
    char input; // have user input r, p, or s
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options" << endl;
    cout << "-----------------------------------" << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> input;

    while (input != 'r' && input != 'p' && input != 's') // while loop if user inputted an invalid response
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> input;
    }
    
    return input;
}

void showSelectedOption(char option) // show the options chosen
{
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice)
{
    // chech possible win options for either the player or com.
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "Computer Wins! Paper wraps Rock." << endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS)
    {
        cout << "Computer Wins! Scissors cut Paper." << endl;
    }
    else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "Computer Wins! Rock smashes Scissors." << endl;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS)
    {
        cout << "You Win! Rock smashes Scissors." << endl;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You Win! Paper wraps Rock." << endl;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You Win! Scissors cut Paper." << endl;
    }
    else // else the game ends in a tie
    {
        cout << "It's a Tie! Play again win the Game." << endl;
    }
}
