all: myProg1 
myProg1: LocationRevenue.h Restaurant.o LocationRevenue.o
	g++ -std=c++11 LocationRevenue.h Restaurant.o LocationRevenue.o -o myProg1
Restaurant.o: Restaurant.cpp
	g++ -std=c++11 Restaurant.cpp -c
LocationRevenue.o: LocationRevenue.cpp
	g++ -std=c++11 LocationRevenue.cpp -c
clean:
	rm -rf *.o dist


