#include <iostream>
#include <vector>
#include <string>
#include "Temperture.h"
#include <algorithm>


Temperature::Temperature()
//in case month and year are not read in
{
	month = "Month was not read in";
	year = 55655;
}
Temperature::Temperature(std::string m, int y)
//sets month and year [I'm not really sure if I need this]
{
	month = m;
	year = y;
}

void Temperature::setMonth(std::string m)
//sets month
{
	month = m;
}
std::string Temperature::getMonth() const	
//used to print or return month [getter, accessor]
{
	return month;
}

void Temperature::setYear(int y)
//sets year
{
	year = y;
}
int Temperature::getYear() const	
//used to print or return year [getter, accessor]
{
	return year;
}

void Temperature::addTemp(int num)
//adds the temperature read in to the vector 'readings'
{
	readings.push_back(num);
}
void Temperature::sortTemp()
//sorts the vector 'readings'
{
	sort(readings.begin(), readings.end());
}

float Temperature::calcAve()
//calculates the average of all the temperatures read in
{
	float hold = readings[0];
	int size = readings.size();
	for (int i{ 1 }; i < size; ++i)
	{
		hold += readings[i];
	}
	hold = hold / size;
	return hold;
}
int Temperature::findMin() const
//finds and returns the smallest number in the vector 'readings'
{
	int min = readings[0];
	for (int i = 1; i < readings.size(); ++i)
	{
		if (readings[i] < min)
			min = readings[i];
	}
	return min;
}
int Temperature::findMax() const
//finds and returns the largest number in the vector 'readings'
{
	int max = readings[0];
	for (int i = 1; i < readings.size(); ++i)
	{
		if (readings[i] > max)
			max = readings[i];
	}
	return max;
}

int Temperature::numOfTemps() const
//returns the amount of items in the vector 'readings'
{
	return readings.size();
}
int Temperature::getReadings(int i) const
//returns the items (in this case numbers) held in 'readings'
{
	return readings[i];
}