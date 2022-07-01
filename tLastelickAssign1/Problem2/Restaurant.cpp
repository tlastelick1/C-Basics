//*************************************************************************
//Name: Trevor Lastelick
//Class: COSC 2437 F20
//Instructor: Marwa Hassan
//Assignment 1
//Date: 12/12/20
//Program description: Asks the user how many franchises of one restaurant we are looking at. Gets the 4 quarterly incomes for each location. Outputs each locations quarterly incomes. Outputs the total income of a single location. Outputs the gross income of the total restaurant chain. 
//*************************************************************************

#include <iostream>
#include "LocationRevenue.h"
using namespace std;

int main()
{
	int size = 0;
	cout << "How many locations are there: "; 
	cin >> size;
	while (size < 0)
	{
	cout << "Number of locations cannot be less than 0: ";
	cin >> size;
	}
	LocationRevenue jack[size];
	
	for (int i= 0; i<size; i++)
	{
	cout << "Location " << i+1 << ":" << endl;	
	jack[i].setIncomes();	
	}	
	// display each locations quarterly income 	
	for (int i=0; i<size; i++)
	{
	cout << "Location " << i+1 << ":" << endl;
	for (int j=1; j<=4; j++)
	{
	cout << "Quarter " << j << ": $" << jack[i].getQuarterly(j) << endl;	
	if (j==4)
	cout << "Location " << i+1 << "'s yearly revenue: $" << jack[i].getTotal() << endl;
	} // end j for
	} // end i for
	cout << "Restaurants gross income for the year: $" << jack[1].getGross() << endl;
	return 0;
}
