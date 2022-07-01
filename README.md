# C-Basics
Overview of some C++ Fundamental Concepts
Problem 1: File: circle.cpp(class declaration, implementation and main in one .cpp file)
Write Circle class, with proper instance variables and member functions. In main function, allocate an array of Circle objects. Get the size of the array from the user. Also, initialize each circle from the user. Find the largest circlein the array based on the area.

Problem 2: Files: LocationRevenue.cpp -LocationRevenue.h –restaurant.cpp
Consider a restaurant with four locations. CreateLocationRevenueclass that keeps income datafor a specific location. The class contains the following members:-a member array for holding quarterly income figures.-a static member for maintaining the restaurant's gross income-other design options are fine as well.-a member function for setting the four quarterly values. Make sure that the gross income is updated correctly.-a function that takes an integer argument and returns the corresponding quarterly income of the location. In main function (restaurant.cpp), create an array of LocationRevenueobjects. Read the income figures for each location from the user. Display each location's sale and the restaurant's sale for the year. Validate entered data.

Problem 3: Files: -Measure.cpp & Measure.h (or just Measure.h)-mainMeasure.cpp
Write and demonstrate the classMeasure. 
It has three instance variables: yards, feet, and inches.Note: 1 foot = 12 inches. 1 yard = 3 feet. Include the following member functions(refer to lecture notes, FeetInches class)-default constructor -initializes the instance variables to zeros-non-default constructor –takes the 3 arguments-setter and getter functions. Overload the following operators in Measureclass:
1.+ add two Measureobjectsand return the sum
2.+ add a Measureobjectand an integer value representing inches and return the sum
3.-subtract the argument object from the invoking object and return the difference
4.= the assignment operator 
5.compare two Measureobjectsby overloading the operators: ▪==▪<▪>▪!=
6.+= add aMeasureobjectargumentto the calling object (e.g.: obj1 +=obj2;)
7.+= add an integer valuerepresenting the inchesto the calling object (e.g.: obj1+=8;)
8.The stream operators: << & >>
