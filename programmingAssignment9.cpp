/* Obed Hassell - CS225 - Week 5 - Programming Assingment 9 - Exercise 10.7
   This program takes the balance of a savings account and initializes two objects
   and calculates out their interest after a year.
*/
#include <iostream>
using namespace std;

static double annualInterestRate; //declares static annual interest rate variable

//defines function allowing the function to be able to be changed
static void modifyInterestRate(double z)
{
	annualInterestRate = z / 100.0;
}

//defines savings account object class
class SavingsAccount
{
	public:

		//default constructor
		SavingsAccount()
		{
			savingsBalance = 0.0;
		}

		//calculates the monthly interest rate
		double calculateMonthlyInterest()
		{
			savingsBalance += savingsBalance * (annualInterestRate / 12.0);
			return savingsBalance;
		}

		//balance setter
		void setSavingsBalance(double b)
		{
			savingsBalance = b;
		}

		//balance getter
		double getSavingsBalance()
		{
			return savingsBalance;
		}

	private:
		double savingsBalance;
};

//start main
int main()
{
	//initializes objects
	SavingsAccount saver1;
	SavingsAccount saver2;

	//sets balances and interest rate for first round
	saver1.setSavingsBalance(2000.0);
	saver2.setSavingsBalance(3000.0);
	modifyInterestRate(3);

	cout << "Monthly interest rates: \nAccount 1: " << saver1.calculateMonthlyInterest() << "\nAccount 2: " << saver2.calculateMonthlyInterest() << endl;

	//sets balances and interest rate for second round
	saver1.setSavingsBalance(2000.0);
	saver2.setSavingsBalance(3000.0);
	modifyInterestRate(4);

	cout << "Monthly interest rates: \nAccount 1: " << saver1.calculateMonthlyInterest() << "\nAccount 2: " << saver2.calculateMonthlyInterest() << endl;
}