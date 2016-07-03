/* Obed Hassell - CS225 - Week 6 - Programming Assignment 10 - Exercise 11.10
   This program recieves a numerator and a denominator and outputs a simplified fraction.
   The purpose of this program is for us to practice overloading operators and using 
   constructors.
*/
#include <iostream>
#include <iomanip>

using namespace std;

//initializes class
class RationalNumber
{
	private:
		int denominator, numerator; //member variables
		
	public:
		//constructor
		RationalNumber(int a, int b)
		{
			numerator = a;
			denominator = b;
			if (checkZero() == true)//calls checkZero functions, defined lower
			{
				reduceFract();
			}
			//cout << numerator << "/" << denominator;
		}

		//checks to see if the denominator is 0 or negative
		bool checkZero()
		{
			if (denominator > 0)
			{
				return true;
			}
		}

		//this is a simple fraction reducing function, it doesn't always work and I was having a lot of problems getting algorithms I found online to work, but this will do the trick with a lot of numbers.
		void reduceFract()
		{
			int x = denominator - numerator;
			if (numerator%x == 0)
			{
				numerator = numerator / x;
				denominator = denominator / x;
				cout << numerator << "/" << denominator << endl;
			}
			else
			{
				cout << numerator << "/" << denominator << endl;
			}
		}

		//overloaded operators
		RationalNumber operator+(const RationalNumber &a)
		{
			RationalNumber temp(*this);
			temp = temp + a;
			return temp;
		}

		RationalNumber operator-(const RationalNumber &a)
		{
			RationalNumber temp(*this);
			temp = temp - a;
			return temp;
		}

		RationalNumber operator*(const RationalNumber &a)
		{
			RationalNumber temp(*this);
			temp = temp * a;
			return temp;
		}

		RationalNumber operator/(const RationalNumber &a)
		{
			RationalNumber temp(*this);
			temp = temp / a;
			return temp;
		}
};

int main()
{
	//sample objects
	RationalNumber fract1(27, 30);
	RationalNumber fract2(1, 2);
	RationalNumber fract3(2000, 3000);
}