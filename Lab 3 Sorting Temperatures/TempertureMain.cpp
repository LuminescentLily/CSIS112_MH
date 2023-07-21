#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Temperture.h"

using namespace std;

int main()
{
	Temperature t;
	fstream temp;
	int num{ 0 };
	string m;
	string file;
	int y;

	cout << "Please enter the name of the file: ";
	getline(cin,file);											//user inputs the file they want to use
	temp.open(file);
	if (!temp)													//checks to see if the file can be opened
	{
		cout << "Could not open the temp file." << endl;
		exit(1);												//exit the program with a value other than 1
	}

	temp >> m;													//first line of file selected read
	t.setMonth(m);												//first line set as month
	temp >> y;													//second line of file selected read
	t.setYear(y);												//second line set as year

	temp >> num;												//third line of file selected read 
	while (!temp.fail())										//rest of the lines read from file
	{
		t.addTemp(num);
			temp >> num;
		if (temp.fail() && !temp.eof())							//checks for non number variables read in from file
		{
			cout << "A non-numeric value was found in the file...Exiting program. " << endl;
			return 0;
		}
		else if (temp.fail() && temp.eof())						//checks for the end of the file
		{
			cout << "End of file reached." << endl;
		}
		
	}

	t.sortTemp();												//calls function that sorts the vector

	cout << t.numOfTemps() << " temperatures were recorded for "
		<< t.getMonth() << '.' << endl << endl;					//tells user how many temps were read into the vector
	cout << "File Data ";										//tells user what is about to be printed out
	for (int n{ 0 }; n < 30; ++n)								//extra style
	{
		cout << '~';
	}cout << endl;

	cout << "Average: " << t.calcAve() << endl;					//tells user the average of all the elements in the vector
	cout << "Lowest temperature: " << t.findMin() << endl;		//tells user the minumim of all the elements in the vector
	cout << "Highest temperature: " << t.findMax() << endl;		//tells user the maximum of all the elements in the vector

	cout << endl;

	cout << "Temperatures for  " << t.getMonth() 
		<<' '<< t.getYear() <<':'<< endl;						//outputs the month and year that was read in from the file
	for (int i{ 0 }; i < t.numOfTemps(); ++i)					//prints out everything in the vector
	{
		cout << t.getReadings(i) << endl;
	}

	system("pause");
	return 0;
}