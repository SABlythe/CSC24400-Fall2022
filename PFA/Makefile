runMe: main2.o PFA.o
	g++ -o runMe main2.o PFA.o
	
PFA.o: PFA.cpp PFA.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 PFA.cpp 
	
main2.o: main2.cpp PFA.hpp
	g++ -c -Wall -ansi -pedantic -std=c++20 main2.cpp 