#pragma once
#include <iostream>
#include <vector>
#include <string>

class Temperature
{
public:
	Temperature();							//in case month and year are not read in
	Temperature(std::string m, int y);		//sets month and year

	void setMonth(std::string m);			//sets month
	std::string getMonth() const;			//used to print or return month [getter, accessor]

	void setYear(int y);					//sets year
	int getYear() const;					//used to print or return year [getter, accessor]

	void addTemp(int);						//adds the temperature read in to the vector 'readings'
	void sortTemp();						//sorts the vector 'readings'					

	float calcAve();						//calculates the average of all the temperatures read in
	int findMin() const;					//finds and returns the smallest number in the vector 'readings'				
	int findMax() const;					//finds and returns the largest number in the vector 'readings'

	int numOfTemps() const;					//returns the amount of items in the vector 'readings'
	int getReadings(int i) const;			//returns the items (in this case numbers) held in 'readings'


private:
	std::string month;
	int year;
	int file;
	std::vector<int> readings;
};