all: myp
myp: Measure.h mainMeasure.o
	g++ -std=c++11 Measure.h mainMeasure.o -o myp
mainMeasure.o: mainMeasure.cpp
	g++ -std=c++11 mainMeasure.cpp -c
clean:
	rm -rf *.o dist

