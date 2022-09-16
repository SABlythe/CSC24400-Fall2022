#include <iostream>
#include "Functions.hpp"


using namespace std;



int main(int argc, char *argv[])
{
	cout << "How big do you want the board to be?";
	int bSize;
	cin >> bSize; 
	
	initBoard(bSize);
	printBoard(bSize);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	solveBoard(bSize);
	printBoard(bSize);
	
	return 0;
}