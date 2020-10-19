output: main.o timeclass.o
	g++ main.o timeclass.o -o output

main.o: main.cpp timeclass.h
	g++ -c main.cpp

move.o: timeclass.cpp timeclass.h
	g++ -c timeclass.cpp
	
clean: 
	rm *.o output