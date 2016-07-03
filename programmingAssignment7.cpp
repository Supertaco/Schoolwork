/* Obed Hassell - CS225 - Week 4 - Programming Assignment 7 - Exercise 6.22 & 7.9-7.11
   This program receives the values for sales in a company, performs some calculations and prints
   the results out in a formatted table.

   Additionally, the answers to 7.9-7.11 are in comment text at the bottom of the file.
*/

#include <iostream>

using namespace std;

int main()
{
	int personTotal1, personTotal2, personTotal3, personTotal4;
	int productTotal1, productTotal2, productTotal3, productTotal4, productTotal5;
	int x, y, z = 0;
	int sales[4][5] = {0};

	cout << "Enter the employee number, product number, and total sale value in dollars.  Ex: 1 5 230. (-1 to exit)" << endl;

	while (x != -1)
	{
		cin >> x;
		if (x == -1)
			break;
		cin >> y;
		cin >> z;
		
		sales[x-1][y-1] += z;
	}

	productTotal1 = sales[0][0] + sales[1][0] + sales[2][0] + sales[3][0];
	productTotal2 = sales[0][1] + sales[1][1] + sales[2][1] + sales[3][1];
	productTotal3 = sales[0][2] + sales[1][2] + sales[2][2] + sales[3][2];
	productTotal4 = sales[0][3] + sales[1][3] + sales[2][3] + sales[3][3];
	productTotal5 = sales[0][4] + sales[1][4] + sales[2][4] + sales[3][4];

	personTotal1 = sales[0][0] + sales[0][1] + sales[0][2] + sales[0][3] + sales[0][4];
	personTotal2 = sales[1][0] + sales[1][1] + sales[1][2] + sales[1][3] + sales[1][4];
	personTotal3 = sales[2][0] + sales[2][1] + sales[2][2] + sales[2][3] + sales[2][4];
	personTotal4 = sales[3][0] + sales[3][1] + sales[3][2] + sales[3][3] + sales[3][4];

	cout << "\t\tSales Person 1\tSales Person 2\tSales Person 3\tSales Person 4\tProduct Total\n";
	cout << "Product 1\t$" << sales[0][0] << "\t\t$" << sales[1][0] << "\t\t$" << sales[2][0] << "\t\t$" << sales[3][0] << "\t\t$" << productTotal1 << endl;
	cout << "Product 2\t$" << sales[0][1] << "\t\t$" << sales[1][1] << "\t\t$" << sales[2][1] << "\t\t$" << sales[3][1] << "\t\t$" << productTotal2 << endl;
	cout << "Product 3\t$" << sales[0][2] << "\t\t$" << sales[1][2] << "\t\t$" << sales[2][2] << "\t\t$" << sales[3][2] << "\t\t$" << productTotal3 << endl;
	cout << "Product 4\t$" << sales[0][3] << "\t\t$" << sales[1][3] << "\t\t$" << sales[2][3] << "\t\t$" << sales[3][3] << "\t\t$" << productTotal4 << endl;
	cout << "Product 5\t$" << sales[0][4] << "\t\t$" << sales[1][4] << "\t\t$" << sales[2][4] << "\t\t$" << sales[3][4] << "\t\t$" << productTotal5 << endl;
	cout << "Person Total\t$" << personTotal1 << "\t\t$" << personTotal2 << "\t\t$" << personTotal3 << "\t\t$" << personTotal4 << "\t\t" << endl;

	return 0;
}


/*7.9
  a) long *longPtr;
  b) longPtr = &value1;
  c) cout << *longPtr;
  d) value2 = *longPtr;
  e) cout << value2;
  f) cout << &value1;
  g) cout << longPtr; Yes it's the same address

  7.10
  a) void zero(long int *bigIntegers);
  b) void zero(long int *);
  c) int add1AndSum(int *oneTooSmall);
  d) int add1AndSum(int *);

  7.11
  a) this prints the variable's address instead of it's value, put an asterisk before "number"
  b) this assigns one address to another, it's impossible to do this, instead there should be asterisks before each pointer's name
  c) this initializes a pointer and an int at the same time and then tries to assign the address of "*x" to equal "y", instead there should either be an asterisk before "x" or a "&" before "y".
  d) the incrementer in line 2 doesn't increment the value of s, it tries to increment the address
  e) *genericPtr is a void pointer and therefore can't be manipulated with math
  f) no pointer was actually initialized, so the &x does not work.
  
*/