#include "Review.h"
#include <iostream>

//default constructor
Review::Review() {};	

//destructor
Review::~Review() { std::cout << "I was here....."<<std::endl; }		

void Review::AddWord(char* ptr)
//reads in the pointer to getWord then saves the word and it's frequency to the words vector
{
	Word w(ptr);
	bool alreadyExists{ false };

	for (Word &currentWord : words)
	{
		if (strcmp(currentWord.getWord(), w.getWord()) == 0)	//checks to see if the word already exists in the vector
		{
			alreadyExists = true;
			currentWord.setFre(currentWord.getFre()+1);			//bumps up the frequency if the word already exists in the vector
		}
	}

	if (!alreadyExists)
	{
		words.push_back(w);		//adds the word and frquency to the words vector
	}
}

void Review::printReview()
//prints out the word with it's frquency from the words vector
{
	for (Word w : words)
	{
		w.print();
	}
}
