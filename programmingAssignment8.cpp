/* Obed Hassell - CS225 - Week 5 - Programming Assignment 8
   This program uses object-oriented programming to output the surface area of two cylinders.
   The first cylinder receives the radius and height of a cylinder as input from the user to
   compute the surface area.  The second cylinder uses the height of the first cylinder and 
   a default radius of 10.0 that was hard-coded into the object.
*/
#include <iostream>
#include <iomanip>
using namespace std;

//start of the cylinder class
class cylinder
{
	public:
		//this is constant because pi will never change
		const double pi = 3.14;
		
		//default constructor, sets radius to a default value of 3.0
		cylinder() 
		{
			setRadius(3.0);
		};

		//radius setter
		void setRadius(double a)
		{
			radius = a;
		}

		//height setter
		void setHeight(double b)
		{
			height = b;
		}

		//radius getter
		double getRadius()
		{
			return radius;
		}
		
		//height getter
		double getHeight()
		{
			return height;
		}

		//function that returns the surface area of the cylinder
		double surfaceArea()
		{
			surface = 2 * pi*radius*radius + 2 * pi*radius*height;
			return surface;
		}
	
	//private variables
	private:
			double radius = 3.0;
			double height, surface = 0.0;
		
};

/* This is the start of the TestCylinder class, I'm not sure why this was required but 
   I think it was because the program required two objects with different radius's, but 
   that doesn't make sense because it essentially defeats the purpose of OOP because it 
   is really easy to change the radius of a second cylinder object
*/
class TestCylinder
{
	public:
		//creates constant pi
		const double pi = 3.14;

		//default constructor with a radius of 10
		TestCylinder()
		{
			setRadius(10.0);
		};

		//radius setter
		void setRadius(double a)
		{
			radius = a;
		}

		//height setter
		void setHeight(double b)
		{
			height = b;
		}

		//radius getter
		double getRadius()
		{
			return radius;
		}
		
		//height getter
		double getHeight()
		{
			return height;
		}

		//surface area function
		double surfaceArea()
		{
			surface = 2 * pi*radius*radius + 2 * pi*radius*height;
			return surface;
		}

	//private variables
	private:
		double radius = 3.0;
		double height, surface = 0.0;
};

//start main function
int main()
{
	//local variables to store input
	double rad;
	double hei;
	
	//initializes the two cylinder objects
	cylinder cyl1;
	TestCylinder cyl2;
	
	//prompts the user for radius and height
	cout << "Please enter the radius: ";
	cin >> rad;
	cout << "Please enter the height: ";
	cin >> hei;

	//sets the radius and height for both objects (does not set the radius for the second object)
	cyl1.setRadius(rad);
	cyl1.setHeight(hei);
	cyl2.setHeight(hei);

	//displays results
	cout << "The cylinder with a radius of " << cyl1.getRadius() << " and height of " << cyl1.getHeight() << " has a surface area of: " << cyl1.surfaceArea() << endl;
	cout << "The cylinder with a radius of " << cyl2.getRadius() << " and height of " << cyl2.getHeight() << " has a surface area of: " << cyl2.surfaceArea() << endl;
}//end main