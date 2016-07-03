/* Obed Hassell - CS225 - Week 1 - Programming Assignment 1 - Exercise 2.19 
   The purpose of this program is to take an input of three integers
   and print out the sum, average, product, smallest, and largest number.
*/

#include <iostream> // allows input and output
#include <algorithm> // allows for use of the algorithm library (specifically std::min and max)

int main()
{
	int number1, number2, number3; // initializes our three integers that will be manipulated

	std::cout << "Input three different integers: ";
	std::cin >> number1 >> number2 >> number3; // takes the input to assign integers
		
	int sum = number1 + number2 + number3; // finds sum
	int average = sum / 3; // finds average
	int product = number1 * number2 * number3; // finds product
	int small = std::min({ number1, number2, number3 }); // finds the smallest integer
	int large = std::max({ number1, number2, number3 }); // finds the largest integer

	// the below statement will print the final output
	std::cout << "Sum is " << sum << "\nAverage is " << average << "\nProduct is " << product << "\nSmallest is " << small << "\nLargest is " << large << std::endl;

	return 0;
}