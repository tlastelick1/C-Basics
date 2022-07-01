#include <iostream>
#include "LocationRevenue.h"
using namespace std;

	// initialize gross variable to 0
	double LocationRevenue::gross = 0;

	// Postcondition: initializes entire array quarterlyIncome to 0.0.
	LocationRevenue::LocationRevenue()
	{ 
	for (int i =0; i<4; i++)
	quarterlyIncome[i] = 0.0;
	}

	//setters
	//Postcondition: initializes array quarterlyIncome to user inputed numbers
	void LocationRevenue::setIncomes()
	{
	for (int i=0; i<4; i++)
	{
	double num =0;
	cout << "What is quarter "<< i+1 << "'s income: ";
	cin >> num;
	while (num < 0)
	{	
	cout << "Must be a positive number: ";
	cin >> num;
	}// end while
	quarterlyIncome[i] = num;
	gross += num;
	}//end for
	}

	// getters 
	// Postcondition: returns whichever quarter (1-4) user would want to see. 
	double LocationRevenue::getQuarterly(int j)
	{ 
	while (j > 4 || j < 1)
	{
	cout << "Invalid. Must choose first, second, third or fourth quarter. " 
	<< " 1, 2, 3, or 4 " << endl
	<< "What quarter's numbers would you like: "; 
	cin >> j;	
	}
	return quarterlyIncome[j-1];
	}

	// Precondition: All quarters must first be set (or will return 0 for that quarter).
	//Postcondition: returns the total of all four quarters.
	double LocationRevenue::getTotal()
	{
	double total = 0;
	for (int i=0; i<4; i++)
		total += quarterlyIncome[i];
	return total;	
	}
	
	// Postcondition: returns static variable gross; returns the total of all the locations quarters. 
	double LocationRevenue::getGross()
	{ return gross; }
