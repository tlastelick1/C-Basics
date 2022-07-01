#include <iostream>
#ifndef H_LOCATIONREVENUE
#define H_LOCATIONREVENUE

using namespace std;

class LocationRevenue
{
	private:
	double quarterlyIncome[4];
	static double gross;
	
	public:
	// default constructor
	// Postcondition: initializes entire array quarterlyIncome to 0.0.
	LocationRevenue();

	//setters
	//Postcondition: initializes array quarterlyIncome to user inputed numbers
	void setIncomes();
	//getters
	// Postcondition: returns whichever quarter (1-4) user would want to see. 
	double getQuarterly(int j);
	// Precondition: All quarters must first be set (or will return 0 for that quarter).
	//Postcondition: returns the total of all four quarters.	
	double getTotal();
	// Postcondition: returns static variable gross; returns the total of all the locations quarters. 
	double getGross();

};
#endif
