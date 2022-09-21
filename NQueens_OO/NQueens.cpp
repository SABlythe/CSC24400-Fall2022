#include <iostream>
#include "QueensSolver.hpp"


using namespace std;



int main(int argc, char *argv[])
{
	cout << "How big do you want the board to be?";
	int bSize;
	cin >> bSize; 
	
	QueensSolver mySolver(bSize);	
	QueensSolver three(3);
	//initBoard(bSize);
	
	mySolver.printBoard();
	three.printBoard();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	mySolver.solveBoard();
	mySolver.printBoard();
	three.printBoard();
	
	
	return 0;
}