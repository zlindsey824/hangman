#include "Hangman.h"
#include <iostream>
#include <iomanip>

using namespace std;

	HangMan::Hangman()
	{
	}

	Hangman::HangMan(int sizeofword)
	{
		maxWrong = 6;
		wrongGuess = 0;
		if ( ( sizeofword > 0 ) && ( sizeofword < 20 ) )
			wordLength = sizeofword;
		else
			cout << "incorrect constructor entry" << endl;
	}

	void HangMan::displayGallow()
	{
	}
	
	void HangMan::displayHangman()
	{
	}

	void HangMan::displayGuesses()
	{
	}

	void HangMan::displayWord()
	{
	}

	void HangMan::incrementWrongGuess()
	{
	}
	
