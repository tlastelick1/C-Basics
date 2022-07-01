#include <iostream>
#include <cmath>
using namespace std;

#ifndef H_MEASURE
#define H_MEASURE
class Measure
{
	private:
	int yards;
	int feet;
	int inches;

	public:
	//Constructors
	
	//Default constructor
	//Postcondition: initializes the instance variables to zero
	Measure()
	{	
	yards = 0;
	feet = 0;
	inches = 0;
	}
	//Non-default constructor
	// Postcondition: instance variables have been initialized to user arguments
	Measure(int y, int f, int i)
	{
	yards = y;
	feet = f;
	inches = i;
	}

	//Postcondition: converts inches values >= 12 to appropriate amount of feet. Converts feet values >= 3 to appropriate amount of yards.
	void simplify()
	{
	if (inches >= 12)
	{
		feet += (inches/12);
		inches = inches%12;
	}
	else if (inches < 0)
	{
		feet -= ((abs(inches) / 12) +1);
		inches = 12 - (abs(inches) % 12);
	}

	if (feet >= 3)
	{
		yards += (feet/3);
		feet = feet%3;
	}
	else if (feet < 0)
	{
		yards -= ((abs(feet) / 3) +1);
		feet = 3 - (abs(feet) % 3);
	}
	
	}// end simplify

	//Setters (simplifies measurements, also)
	void setYards(int y)
	{ yards = y; }

	void setFeet(int f)
	{ 
	feet = f; 
	simplify();	
	}
		
	void setInches(int i)
	{ 
	inches = i; 
	simplify();
	}

	
	//Getters
	
	int getYards()
	{ return yards; }

	int getFeet()
	{ return feet; }

	int getInches()
	{ return inches; }


	// Overloaded Assignment Operators

	//Postcondition: returns the sum of two Measurement objects. Both objects are left unchanged. 
	Measure operator+(const Measure &r)
	{
	Measure hold;
	
	hold.yards = yards + r.yards;
	hold.feet = feet + r.feet;
	hold.inches = inches + r.inches;
	hold.simplify();

	return hold;
	}	

	//Postcondition: returns the sum of a measure object and an integer value representing inches. Measure object is left unchanged. 
	const Measure operator+(int a)
	{
	Measure hold;

	hold.yards = yards;
	hold.feet = feet;
	hold.inches = inches + a;
	hold.simplify();

	return hold;
	}

	//Postcondition: subtracts argument object from invoking object. Will error message if will result in negative number.
	Measure operator-(const Measure &r)
	{
	Measure hold;

	
	hold.yards = yards - r.yards;
	hold.feet = feet - r.feet;
	hold.inches = inches - r.inches;
	hold.simplify();
	return hold;	
	
	}	

	//Postcondition: Measure Left = Measure Right. Left will take all values of Right. 
	Measure operator=(const Measure &r)
	{
	if (this != &r)	// to prevent self-assignment
	{
	yards = r.yards;
	feet = r.feet;
	inches = r.inches;
	}
	return *this;
	}

	// Overlaoded Relational Operators
	
	// Postcondition: returns true if both objects are identical
	bool operator==(const Measure &r)
	{
		bool flag;
		
		if (yards == r.yards && feet == r.feet && inches == r.inches)
		flag = true;
		else
		flag = false;
		
		return flag;
	}	
	
	//Postcondition: returns true if left object is smaller than right object. false otherwise.
	bool operator <(const Measure &r)
	{
		bool flag;
		Measure tell;

		tell = *this - r;
		if (tell.yards < 0)
		flag = true;
		else
		flag = false;
		
		return flag;
	}

	//Postcondition: returns true if left object is bigger than right object. false otherwise.
	bool operator >(const Measure &r)
	{
		bool flag;
		Measure tell;

		tell = *this - r;
		if (tell.yards < 0)
		flag = false;
		else
		flag = true;
		
		return flag;
	}

	//Postcondition: returns true if both objects are not identical. False otherwise.
	bool operator !=(const Measure &r)
	{
		if (yards != r.yards && feet != r.feet && inches != r.inches)
		return true;
		else
		return false;
	}

	//Postcondition: Permanently adds the sum of argument object to invoking object. (obj1 += obj2)
	Measure operator+=(const Measure &r)
	{
		this->yards += r.yards;
		this->yards += r.feet;
		this->yards += r.inches;
		simplify();
		return *this;
	}

	//Postcondition: Permanently adds the sum of argument object and integer variable representing inches. (obj1 += 32)
	Measure operator+=(int a)
	{
		inches += a;
		simplify();
		
		return *this;
	}

	// Overloaded Stream Operators
	// Resembles output: 5 yards 2 feet 11 inches
	friend ostream &operator << (ostream &strm, const Measure &obj)
	{
	strm << obj.yards << " yards " << obj.feet << " feet " << obj.inches << " inches " << endl;
	return strm;
	}

	// Prompts the user for Yards, Feet, and Inches and sets them as values for member variables
	friend istream &operator >> (istream &strm, Measure &obj)
	{
	cout << "Yards: ";
	strm >>obj.yards;
	
	cout << "Feet: ";
	strm >> obj.feet;

	cout << "Inches: ";
	strm >> obj.inches;

	obj.simplify();
	
	return strm;
	}


};
#endif
