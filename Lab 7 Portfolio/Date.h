#pragma once
#include <iostream>
#include <cstdlib>
#include <cctype>

//This class was given to me so I did not write any comments for it

class Date {
	friend std::ostream& operator<<(std::ostream& output, Date d);

public:
	Date(int d = 0, int m = 0, int yyyy = 0) {
		setDate(d, m, yyyy);
	}
	~Date() {}

	void setDate(int  d, int m, int yyyy) {
		day = d;
		month = m;
		year = yyyy;
	}

	void someFunction() //function that uses tokenizeDate
	{
		int m, d, y;
		char charDate[20]; //holds the date the user entered in char array
		Date realDate;  //date object; holds date after tokenization	
		std::cout << "Purchase date (mm/dd/yyyy):  ";
		std::cin >> charDate;
		
		tokenizeDate(charDate, m, d, y); //separates char array into month, day, and year
		realDate.setDate(d, m, y); //sets the date of the object using the parsed values
		setDate(d, m, y);
	}

	void tokenizeDate(char* cDate, int& month, int& day, int& year)
	{
		char seps[] = "/";
		char* token = NULL;
		char* next_token = NULL;

		token = NULL;
		next_token = NULL;
		// Establish string and get the tokens:  
		token = strtok_s(cDate, seps, &next_token);
		month = atoi(token);
		token = strtok_s(NULL, seps, &next_token);
		day = atoi(token);
		token = strtok_s(NULL, seps, &next_token);
		year = atoi(token);
	}


private:
	int day;
	int month;
	int year;
};

inline std::ostream& operator<<(std::ostream& output, Date d)

{
	output << d.month << "/" << d.day << "/" << d.year;

	return output;
}
