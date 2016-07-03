/* Obed Hassell - CS225 - Week 2 - Programming Assignment 4 - Exercise 4.14
   This program prompts the user for the product number and their desired quantity
   and upon receipt of the sentinel value "-1" will print out the subtotals of 
   all products to be bought and the total purchase value.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double product1, product2, product3, product4, product5;
	int productQuant, productIn;
	double price1 = 2.98;
	double price2 = 4.50;
	double price3 = 9.98;
	double price4 = 4.49;
	double price5 = 6.87;

	while (productIn != -1)
	{
		cout << "Please enter a product number (1-5) and desired quantity. (-1 to end)" << endl;
		cin >> productIn;
		if (productIn == -1)
			break;
		cin >> productQuant;
		
		switch (productIn)
		{
		case 1 :
			product1 = static_cast<double>(productQuant * price1);
			break;
		case 2 :
			product2 = static_cast<double>(productQuant * price2);
			break;
		case 3 :
			product3 = static_cast<double>(productQuant * price3);
			break;
		case 4 :
			product4 = static_cast<double>(productQuant * price4);
			break;
		case 5 :
			product5 = static_cast<double>(productQuant * price5);
			break;
		default :
			break;
		}
	}
	
	double sum = static_cast<double>(product1 + product2 + product3 + product4 + product5);

	cout << "Subtotals are: \nProduct 1: $" << setprecision(2) << fixed << product1;
	cout << "\nProduct 2: $" << setprecision(2) << fixed << product2;
	cout << "\nProduct 3: $" << setprecision(2) << fixed << product3;
	cout << "\nProduct 4: $" << setprecision(2) << fixed << product4;
	cout << "\nProduct 5: $" << setprecision(2) << fixed << product5;
	cout << "\nTotal: $" << setprecision(2) << fixed << sum << endl;
}