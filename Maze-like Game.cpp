#include <iostream>
#include "Game.h"
#include "AudioManager.h"

using namespace std;

int main()
{
	Game myGame;

	if (myGame.Load())
	{
		while (!myGame.isGameOver())
		{
			myGame.Run();
		}

		if (myGame.DidUserQuit())
		{
			cout << "Thanks For Playing!!!" << endl;
		}
		else if (myGame.GetPlayerLives() < 0)
		{
			cout << "YOU LOSE!!!" << endl;
			AudioManager::GetInstance()->PlayLoseSound();
		}
		else
		{
			cout << "YOU WIN!!!" << endl;
			AudioManager::GetInstance()->PlayWinSound();
		}
	}
	else
	{
		cout << "Game did not load. Terminating now." << endl;
	}

	AudioManager::DestroyInstance();

	return 0;
}
