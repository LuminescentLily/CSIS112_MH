#pragma once
#include <vector>
#include "Word.h"

class Review
{
public:
	Review();						//default constructor
	~Review();						//destructor

	void AddWord(char *ptr);		//reads in the pointer to getWord then saves the word and it's frequency to the words vector
	void printReview();				//prints out the word with it's frquency from the words vector

private:
	std::vector<Word> words;		//vector that holds the word and it's frequency

};
