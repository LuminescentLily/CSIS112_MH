#pragma once
#include <string>
#include <array>
#include <string.h>

class Word
{
public:
	Word();						//default constructor
	Word(char *w);				//reads in the word, lowers the word, and bumps up the frequency
	~Word();					//destructor

	int getFre() const;			//returns the frequency
	void setFre(int i);			//bumps up the frequency

	char* getWord() const;		//returns the word

	void print();				//prints out the word and the frequency

	void lower();				//lowercases the word

private:
	char* word;					//pointer to the 'word' that is read in
	int frequency{ 0 };			//holds the frequency of the word

	


};
