/* Obed Hassell - CS225 - Week 1 - Programming Assignment 2 - Exercise 3.12
   The purpose of this project is to determine what is the output of this program.
   As this program does not take input, it will always have the same output.
   The output is as follows:
   1
   4
   9
   16
   25
   36
   49
   64
   81
   100
   Total is 385
*/

// Exercise 3.12: ex03_12.cpp
// What does this program print?
#include <iostream>
using namespace std;

int main()
{
	int y; // declare y
	int x = 1; // initialize x
	int total = 0; // initialize total

	while (x <= 10) // loop 10 times
	{
		y = x * x; // perform calculation
		cout << y << endl; // output result
		total += y; // add y to total
		x++; // increment counter x
	} // end while

	cout << "Total is " << total << endl; //display result
}