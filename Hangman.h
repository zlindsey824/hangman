#ifndef HANGMAN_H
#define HANGMAN_H

class HangMan
{
	public:
		HangMan();
		HangMan(int);
		void displayGallow();
		void displayHangman();
		void displayGuesses();
		void displayWord();	
		void incrementWrongGuess();
//		void setWordSize(char*);
	private:
		int maxWrong;
		int wrongGuess;
		int wordLength;
//		char *inputWord;
};

		
		
		
		
				
