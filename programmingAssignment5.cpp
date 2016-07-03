/* Obed Hassell - CS225 - Week 3 - Programming Assingment 5
   This program recieves input from the user and determines if the user is considered
   "rich" or not.  
*/
#include <iostream>	
using namespace std;

//initializes global variables to be used throughout multiple functions
int age;
int dependents;
long cash;
long debt;

//initializes prototype functions, they're further defined below the main function
void calcWealth();
bool isRich(int yourAge, int yourDeps, long yourCash, long yourDebt);

int main()
{
	cout << "Are you rich?  The results may surprise you!  Find out now with my little quiz! \n"; //banner message
	calcWealth(); //recieves user input
	
	//checks boolean value from isRich() function and outputs result
	if (isRich(age, dependents, cash, debt) == true)
	{
		cout << "Congratulations!  We consider you as being \"rich\". ";
	}
	else
	{
		cout << "I am sorry!  You are not yet \"rich\".";
	}
}//end main

//prompts user for input to be stored and checked against in isRich() function
void calcWealth()
{
	cout << "Please enter your age: ";
	cin >> age;
	cout << "Please enter the amount of cash on hand: ";
	cin >> cash;
	cout << "Please enter the amount of dependents you have: ";
	cin >> dependents;
	cout << "Please enter the amount of money you owe: ";
	cin >> debt;
}//end calcWealth

//checks values from calcWealth() function to determine if user is "rich" 
bool isRich(int yourAge, int yourDeps, long yourCash, long yourDebt)
{
	long netWorth = yourCash - yourDebt; //this is the total cash of the user, minus their debt
	long depOffset; //initializes variable that will be used for determining how much to subtract from the user's net worth depending on their number of dependents

	//subtracts the dependent offset from the user's net worth depending on their age
	if (yourAge < 40)
	{
		depOffset = yourDeps * 150000.0;
		netWorth -= depOffset;
	}
	else if (yourAge <= 50)
	{
		depOffset = yourDeps * 75000.0;
		netWorth -= depOffset;
	}
	else
	{
		depOffset = yourDeps * 25000.0;
		netWorth -= depOffset;
	}//end if statements
		
	//checks if net worth is over $1,000,000
	if (netWorth >= 1000000.0)
	{
		return true;
	}
	else
	{
		return false;
	}//end if statement
}//end isRich