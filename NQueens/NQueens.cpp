#include <iostream>

#define BOARD_SIZE 8

using namespace std;

char board[BOARD_SIZE][BOARD_SIZE];

void initBoard()
{
	for (int row=0; row < BOARD_SIZE; row++)
	{
		for (int col=0; col < BOARD_SIZE; col++)
		{
			board[row][col] = ' ';
		}
	}
}

void printRowBorder()
{
	cout << "+"; 
	
	for (int numCells=0; numCells < BOARD_SIZE; numCells++)
		cout << "-+"; 	
	
	cout << endl;
}
void printBoard()
{
	printRowBorder();
	for (int row=0; row < BOARD_SIZE; row++)
	{
		cout << "|";
		for (int col=0; col < BOARD_SIZE; col++)
		{
			cout << board[row][col] << "|";
		}
		cout << endl;
		printRowBorder();
	}
	
}

void solveBoard()
{
	board[3][6] = 'Q';
	board[1][2] = 'Q'; 
	board[1][0] = 'Q';
}


int main(int argc, char *argv[])
{
	initBoard();
	printBoard();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	solveBoard();
	printBoard();
	
	return 0;
}