#include <string.h>
#include <iostream>
#include "Word.h"

//default constructor
Word::Word() { *word = NULL; }	

//destructor
Word::~Word() { }	

Word::Word(char* w)
//reads in the word, lowers the word, and bumps up the frequency
{
	word = w;				//sets the word pointer to the pointer passed in
	lower();				//lowercases the word
	setFre(getFre()+1);		//bumps up the frequency
}

int Word::getFre() const
//returns the frequency
{
	return frequency;
}

void Word::setFre(int i)
//bumps up the frequency
{
	frequency = i;
}

char* Word::getWord() const
//returns the word
{
	return word;
}


void Word::print()
//prints out the word and the frequency
{
	std::cout<<getWord()<<' '<<getFre()<<std::endl;
}

void Word::lower()
//lowercases the word
{
	
	for (int i{ 0 }; i < 100; i++)
	{
		word[i] = tolower(word[i]);
	}
}

