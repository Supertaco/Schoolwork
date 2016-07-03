/* Obed Hassell - CS225 - Week 4 - Programming Assignment 6
   This program takes input from the user on the prices of 10 cars and outputs a 
   chart of the frequency of the prices being within defined ranges and also some
   calculations summarizing the prices.
*/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

//initializes prototype functions
void printPrices(int priceArray[]);
void priceCalc(int priceArray2[]);

//beginning of main function
int main()
{
	int carPrice[10]; //initializes array that will hold the prices for each car

	//for loop that prompts user for car prices
	for (int x = 0; x < 10; x++)
	{
		cout << "Please enter the price of Automobile #" << x + 1 << ": ";
		cin >> carPrice[x];
		
		//control statement checking entered value
		if (carPrice[x] < 0 || carPrice[x] > 100000)
		{
			carPrice[x - 1] = 0;
			x--;
		}
	}

	//calls functions that print results
	printPrices(carPrice);
	priceCalc(carPrice);
}

//receives car prices and outputs the chart of the frequency of prices within a range
void printPrices(int priceArray[])
{
	int priceGaps[10] = { 0 }; //initializes array that will hold the numbers of prices within each range

	//for loop that determines which range a price fits into
	for (int x = 0; x < 10; x++)
	{
		if (priceArray[x] < 100000 && priceArray[x] > 89999) //checks range
		{
			priceGaps[9]++; //increments the specified array index by 1 if the price fits in the defined range
		}
		else if (priceArray[x] < 90000 && priceArray[x] > 79999)
		{
			priceGaps[8]++;
		}
		else if (priceArray[x] < 80000 && priceArray[x] > 69999)
		{
			priceGaps[7]++;
		}
		else if (priceArray[x] < 70000 && priceArray[x] > 59999)
		{
			priceGaps[6]++;
		}
		else if (priceArray[x] < 60000 && priceArray[x] > 49999)
		{
			priceGaps[5]++;
		}
		else if (priceArray[x] < 50000 && priceArray[x] > 39999)
		{
			priceGaps[4]++;
		}
		else if (priceArray[x] < 40000 && priceArray[x] > 29999)
		{
			priceGaps[3]++;
		}
		else if (priceArray[x] < 30000 && priceArray[x] > 19999)
		{
			priceGaps[2]++;
		}
		else if (priceArray[x] < 20000 && priceArray[x] > 9999)
		{
			priceGaps[1]++;
		}
		else if (priceArray[x] < 10000 && priceArray[x] > 1)
		{
			priceGaps[0]++;
		}
	}

	//prints out results for this function
	cout << "\nThe number of cars in the $1 - $9999 range is: " << priceGaps[0] << "\n";
	cout << "The number of cars in the $10000 - $19999 range is: " << priceGaps[1] << "\n";
	cout << "The number of cars in the $20000 - $29999 range is: " << priceGaps[2] << "\n";
	cout << "The number of cars in the $30000 - $39999 range is: " << priceGaps[3] << "\n";
	cout << "The number of cars in the $40000 - $49999 range is: " << priceGaps[4] << "\n";
	cout << "The number of cars in the $50000 - $59999 range is: " << priceGaps[5] << "\n";
	cout << "The number of cars in the $60000 - $69999 range is: " << priceGaps[6] << "\n";
	cout << "The number of cars in the $70000 - $79999 range is: " << priceGaps[7] << "\n";
	cout << "The number of cars in the $80000 - $89999 range is: " << priceGaps[8] << "\n";
	cout << "The number of cars in the $90000 - $99999 range is: " << priceGaps[9] << "\n";
}

//function that performs some calculations and prints out their results
void priceCalc(int priceArray2[])
{
	int priceHigh;
	int priceLow;
	double priceAvg; //declared as a double so as to better round later in function
	double sum;

	//for loop that sums all values in the array
	for (int y = 0; y < 10; y++)
	{
		sum += priceArray2[y];
	}

	priceAvg = round(sum / 10.0); //finds the average of the array and rounds it to the nearest int

	//prints out results for this function
	cout << "The highest price is: " << *max_element(priceArray2, priceArray2 + 10) << endl;
	cout << "The lowest price is: " << *min_element(priceArray2, priceArray2 + 10) << endl;
	cout << "The average price of all the cars is: $" << priceAvg << endl;
}