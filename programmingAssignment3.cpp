/* Obed Hassell - CS225 - Week 2 - Programming Assignment 3 - Exercise 3.15
   This program takes a salesperson's weekly sales as inputs and outputs their 
   total pay plus commission by applying a formula to the input.
*/

#include <iostream> //allows for input
#include <iomanip> //allows for manipulation of the input
using namespace std;

int main()
{
	double paycheck = 200.0; //weekly amount paid regardless of sales
	double commission = 0.09; //commission rate equal to 9%
	double sales = 0.0; //initialize sales variable
	
	while (sales != -1) //start while loop with sentinel value
	{
		cout << "Enter sales in dollars: (-1 to end) ";
		cin >> sales; //takes input
		if (sales == -1) //checks input for sentinel value before applying formula
			break;
		double commissionCheck = commission * sales; //calculates total commission
		double total = static_cast< double >(paycheck + commissionCheck); //calculates total paycheck
		cout << "$" << setprecision(2) << fixed << total << endl; //prints line to a precision of 2 decimals
	}
}