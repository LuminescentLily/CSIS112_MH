#include <fstream>
#include <iostream>
#include "Review.h"
#include <string>


using namespace std;

int main()
{
	char sentence[1000];											//holds the characters read in from the file
	string fileName;												//holds the file's name that the user enters
	fstream temp;													//variable used to open the file
	Review r;														//used to access the functions in Review

	cout << "Please enter the name of the file: ";
	getline(cin, fileName);											//user inputs the file they want to use
	temp.open(fileName);
	if (!temp)														//checks to see if the file can be opened
	{
		cout << "Could not open the temp file." << endl;
		exit(1);													//exit the program with a value other than 1
	}
	while (!temp.fail() && !temp.eof())								//checks to see if the file fails or is at the end
	{
		temp.getline(sentence, 999);								//reads in the first line of a file to be saved to the sentence
	}
	temp.close();													//closes the file when done with it
	cout << "File was closed." << endl << endl;


	char* hold{ NULL };
	char* hold2{ NULL };
	char seps[]{ " ,\t\n.!?" };										//this variable holds all the characters that will be skipped

	hold = strtok_s(sentence, seps, &hold2);						//this is the beginning of where the string read in is taken apart into tokens so that
	while (hold != NULL)											//the code can count how many times the word appears
	{
		if (hold != NULL)
		{
			cout << hold << ' ';
			r.AddWord(hold);										//sends the token made to the addWord function
			hold = strtok_s(NULL, seps, &hold2);
		}
	}
	cout << endl;

	r.printReview();											   	//prints out the word with it's frquency from the words vector

	system("pause");												//pauses the system before ending
	return 0;
}
