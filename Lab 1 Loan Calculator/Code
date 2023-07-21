#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum Ratings {EXCELLENT, GOOD, FAIR, BAD};

//Function Prototypes
double getLoan(double&);
int getCreditScore(int&);
int getTerm(int&);
bool setRating(int&, Ratings&);
float CalcPayment(Ratings&, double&, double&, int&, double&);
void wait();

//main code
int main()
{
	//Variables
	double loan;	
	double interest;
	double payment;
	int creditScore;
	int term;
	Ratings rate;

	//Functions being called
	getLoan(loan);
	getCreditScore(creditScore);
	getTerm(term);
	setRating(creditScore, rate);
	CalcPayment(rate, interest, loan, term, payment);

	wait();

	return 0;
}

void wait()		
{//Checks and clears cin
	if (cin.rdbuf()->in_avail() > 0)
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	char ch;
	cout << "Press the ENTER key to continue...";
	cin.get(ch);
}

double getLoan(double& loan)		
{//Getting loan amount
	
	cout << "Hello, please enter the amount of the loan you would like. You do not need to add a $." << endl;
	cin >> loan;	//User enters the loan amount
	
	while (cin.fail() || loan < 0) //Bullet proofing
	{
		cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> loan;
	}

	return loan;
}

int getCreditScore(int& creditScore)
{//Getting credit score
	
	cout << "Please enter your credit score. You do not need to add a $." << endl;
	cin >> creditScore;		//User enters their credit score

	while (creditScore >= 850 || creditScore <= 300)	//The credit score must be in a certain range of numbers
	{

		if (cin.fail() || creditScore < 0) //If the user enters a negative number or a letter or a symbol
		{
			cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		else if(creditScore < 300) //If the credit is too low for a loan
		{
			cout << "Your credit score is too low to be able to get a loan from us. Please have a good day!" << endl;
			exit(0);	//Bye 
		}

		cout << "You must enter a credit score of 300 to 850 to continue." << endl;
		cin >> creditScore;	//User reenters an acceptable credit score

	}

	return creditScore;
}

int getTerm(int& term)
{//Getting the term of the loan
	
	cout << "What term would you like? The options are 10, 15, or 30 years." << endl;
	cin >> term;	//User selects a term available
		
	while (cin.fail() || (term != 10 && term != 15 && term != 30)) //If the user enters a nonvalid term
	{
		if (cin.fail()) //If the user enters a letter or a symbol
		{
			cout << "Please enter one of the three numbers mentioned." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (term < 0) //If the user enters a negative number
		{
			cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
		}
		else //If not 10, 15, or 30
		{
			cout << "I am sorry the only options are 10, 15, or 30 years. Please enter one of these." << endl;
		}
		cin >> term;

	}

	cout << endl;
	
	return term;
}

bool setRating(int& creditScore, Ratings& rate)
{//Sets the rate for calculations later

	if (creditScore >= 300 && creditScore <= 629)
	{
		//rating 8.76% - 10.50%
		rate = BAD;
		return true;
	}
	if (creditScore >= 630 && creditScore <= 689)
	{
		//rating 6.51% - 8.75%
		rate = FAIR;
		return true;
	}
	if(creditScore >= 690 && creditScore <= 719)
	{
		//rating 4.01% - 6.50%
		rate = GOOD;
		return true;
	}
	if (creditScore >= 720 && creditScore <= 850)
	{
		//rating 2.75% - 4.00%
		rate = EXCELLENT;
		return true;
	}
	else
		cout << "Something is broken because you shouldn't see this. I am sorry there is no help center for this code."<<endl;

	return false;
}

float CalcPayment(Ratings& rate, double& interest, double& loan,int& term, double& payment)
{//Calculates the payment
	{
		switch (rate)
		{
		case EXCELLENT:
		{	//calculates the payment if you have excellent credit
			srand(time(0));
			interest = (rand() % 400 + 275);
			interest = interest / 100;
			interest = interest / 12;
			term = term * 12;
			payment = loan * ((interest * pow((1 + interest), term)) / (pow((1 + interest), term) - 1));
			break;
		}

		case GOOD:
		{	//calculates the payment if you have good credit
			interest = (rand() % 650 + 401);
			interest = interest / 100;
			interest = interest / 12;
			term = term * 12;
			payment = loan * ((interest * pow((1 + interest), term)) / (pow((1 + interest), term) - 1));
			break;
		}

		case FAIR:
		{	//calculates the payment if you have fair credit
			interest = (rand() % 875 + 651);
			interest = interest / 100;
			interest = interest / 12;
			term = term * 12;
			payment = loan * ((interest * pow((1 + interest), term)) / (pow((1 + interest), term) - 1));
			break;
		}

		case BAD:
		{	//calculates the payment if you have bad credit
			interest = (rand() % 1050 + 876);
			interest = interest / 100;
			interest = interest / 12;
			term = term * 12;
			payment = loan * ((interest * pow((1 + interest), term)) / (pow((1 + interest), term) - 1));
			break;
		}


		}
	}
	
	cout << "Your monthly payment will be $" << fixed << showpoint << setprecision(2) << payment << endl << endl;

	return 0;
}
