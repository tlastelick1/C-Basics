//*************************************************************************
//Name: Trevor Lastelick
//Class: COSC 2437 F20
//Instructor: Marwa Hassan
//Assignment 1
//Date: 12/12/20
//Program Description: Creates an array of circles (size designated by user). Asks user for radius of each circle. Program finds the area of each circle and outputs which circle has the biggest area, along with size of the biggest area.
//**************************************************************************
#include <iostream>
#ifndef H_CIRCLE
#define H_CIRCLE
using namespace std;

class Circle
{
	private:
	double area;
	double radius;
	double pie;
	
	public:
	// default constructor
	// Postcondition: sets member variables to 0 except pie to 3.14. 
	Circle()
	{
	pie = 3.14;
	radius = 0;
	area = 0;
	}

	//Setters
	// Postcondition: radius member variable is set to user argument
	void setRadius(double r)
	{ radius = r; }
	
	void setArea()
	//Postcondition: area member variable is set to circle area formula
	{ area = pie*(radius*radius); }
	
	//Getters
	//Postcondition: returns member variable area
	double getArea()
	{ return area; }

};
#endif	 

int main()
{
	// used to find largest area
	double largestArea = 0.0;
	int index = 0;
	double r = 0.0;

	// create list of circles of user requested size
	int size = 0;
	cout << "How many circles in the list: ";
	cin >> size;
	Circle circArr[size];

	// initialize radius and area of each circle
	for (int i=0; i<size; i++)
	{
	cout << "What is radius for Circle " << i+1 << ": ";
	cin >> r;
	circArr[i].setRadius(r);
	circArr[i].setArea();
	}

	// find largest area of all circles in list
	largestArea = circArr[0].getArea();
	for (int i=0; i<size; i++)
	{
	if (circArr[i].getArea() > largestArea)	
	{
	largestArea = circArr[i].getArea();
	index = i;
	}
	} // end for 
	
	// cout largest circle index with its area value
	cout << "The largest area is Circle " << index+1 << " with an area"
	     << " of " << largestArea << endl;

	return 0;
} 
