//**********************************************************************
//Name: Trevor Lastelick
//Class: COSC 2437 F20
//Instructor: Marwa Hassan
//Assignment 1
//Date: 12/12/20
//Program description: Adds two Measure objects, returns the sum. Adds one Measure object and one integer value representing inches, returns the sum. Subtracts user integer from Measure object, returns the difference. Overloads = operator so one Measure object equals another Measure object. Overloads and compares via ==, <. >, != operators. Outputs results that test operators. Permanently Adds and outputs a Measure object argument to the calling object. Permanently adds and outputs a Measure object and an integer value representing inches to the calling object (obj1 +=8;). Overloads stream operators << & >> for easy input and output of Measure objects.
//***********************************************************************

#include <iostream>
#include "Measure.h"

using namespace std;

int main()
{
	// Creating some initial Measure objects to play with
	Measure one(1, 6, 3);
	Measure two(3, 2, 11);
	Measure kitchen;


	// demonstrating operator+ with Measure object
	// and also with integer value representing inches.
	kitchen = one + two;
	cout << "Measure object one has 1 yards, 6 feet, 3 inches. " << endl;
	cout << "Measure object two has 3 yards, 2 feet, 11 inches. " << endl;
	cout << "Creating new Measure object kitchen and initializing it with the sum of values of one and two: " << endl;	
	cout << "Yards: " << kitchen.getYards() << endl;
	cout << "Feet: " << kitchen.getFeet() << endl;
	cout << "inches: " << kitchen.getInches() << endl;
	cout << "Adding 20 inches to kitchen object: " << endl;
	kitchen = kitchen + 20;
	cout << "Yards: " << kitchen.getYards() << endl;
	cout << "Feet: " << kitchen.getFeet() << endl;
	cout << "inches: " << kitchen.getInches() << endl;

	Measure bedroom;	// another Measure object to test opeartor-

	// Demonstrating operator- subtracting argument object from invoking object.
	// Showing what happens when resulting number is both positive and negative.
	cout << "Subtracting Measure object one from Measure object two: " <<endl;
	bedroom = two - one;
	cout << bedroom.getYards() << " yards " << bedroom.getFeet() << " feet " << bedroom.getInches() << " inches" << endl;
	cout << "Subtracting Measure object two from Measure object one: ";
	bedroom = one - two;
	cout << bedroom.getYards() << " yards " << bedroom.getFeet() << " feet " 	 << bedroom.getInches() << " inches" << endl;
	
// testing operator =
	bedroom = kitchen;
	cout << "bedroom = kitchen. Now bedroom object equals exact same dimensions as kitchen:" << endl;
	cout << "Yards: " << bedroom.getYards() << endl;
	cout << "Feet: " << bedroom.getFeet() << endl;
	cout << "inches: " << bedroom.getInches() << endl;

	// testing operator == 
	cout << "Testing operator ==. Will return true if bedroom is identical to kitchen dimensions:" << endl;
	if (bedroom == kitchen)
	cout << "Is equal." << endl;
	else
	cout << "Is not equal. " << endl;

	// testing operator <
	cout << "Testing operator <. Will return true if left object (one) has smaller dimensions than right object (two):" << endl;
	if (one < two)
	cout << "Is smaller than" << endl;
	else	
	cout << "Is not smaller than" << endl;

	// testing operator >
	cout << "Testing operator >. Will return false if left object (one) has bigger dimensions than right object (two):" << endl;
	if (one > two)
	cout << "Is smaller than" << endl;
	else	
	cout << "Is not smaller than" << endl;
	
	// testing operator !=
	cout << "Testing operator != on objects one and two. Will return true if objects are not identical. False otherwise." << endl;
	if (one != two)
	cout << "Are not identical." << endl;
	else
	cout << "Are identical. " << endl;

	// testing operator += on another measure object
	cout << "Object one += object two. Will permanently change one." << endl;
	one += two;
	cout << "New values of one: " << one.getYards() << " yards " << one.getFeet() << " feet " << one.getInches() << " inches" << endl;

	// testing operator += on an integer value representing inches
	cout << "Testing object one += 32. Will permanently change one." << endl;
	one += 32;
	cout << "New values of one: " << one.getYards() << " yards " << one.getFeet() << " feet " << one.getInches() << " inches" << endl;

	// Creating new Measure object room to test stream operators
	Measure room;
	cin >> room;
	cout << room;

	return 0;
}
