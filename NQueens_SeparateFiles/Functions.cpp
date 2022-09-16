#include <iostream>
#include "Functions.hpp"

#define BOARD_SIZE 100

using namespace std;

char board[BOARD_SIZE][BOARD_SIZE];

void initBoard(int size)
{
	for (int row=0; row < size; row++)
	{
		for (int col=0; col < size; col++)
		{
			board[row][col] = ' ';
		}
	}
}

void printRowBorder(int numCols)
{
	cout << "+"; 
	
	for (int numCells=0; numCells < numCols; numCells++)
		cout << "-+"; 	
	
	cout << endl;
}
void printBoard(int width)
{
	printRowBorder(width);
	for (int row=width-1; row >=0 ; row--)
	{
		cout << "|";
		for (int col=0; col < width; col++)
		{
			cout << board[row][col] << "|";
		}
		cout << endl;
		printRowBorder(width);
	}
	
}
bool canPlace (int atRow, int atCol, int bSize)
{
	// check the row ....
	for (int col=0; col<atCol; col++)
	{
		// is there a Q in this row at some other column ???
		if (board[atRow][col] == 'Q')
			return false;
	}
	// if we get here, there was no other queen in this row ...	
	
	// check the UL (upper left)	diagonal
	int offset = 1;
	while( atRow-offset >=0 && atCol-offset >=0 )
	{
		if (board[atRow-offset] [atCol-offset] == 'Q')
			return false;
		offset++;
	}
	
	// check the LL (lower left)	diagonal
	offset = 1;
	while( atRow+offset < bSize && atCol-offset >=0 )
	{
		if (board[atRow+offset] [atCol-offset] == 'Q')
			return false;
		offset++;
	}
	return true;
}

bool solveBoard(int fromCol, int size)
{
	if (fromCol>=size)
		return true;	
	
	else
	{
		for (int possibleRow =0; possibleRow<size; possibleRow++ )
		{
			// is this location OK relative to everything already on board? 
			if (canPlace (possibleRow, fromCol, size) )
			{
				// try to place a queen here ...
				board[possibleRow][fromCol] = 'Q';



				bool worked = solveBoard(fromCol+1, size);
			
				if (worked)
				{
					return true;
				}
				else
				{
					// solution couldn't be found with queen at this location ...
					//    remove the queen. 
					board[possibleRow][fromCol] = ' ';
				}
			}	
		}
		return false;
	}
}

void solveBoard(int size)
{
	solveBoard(0, size);
}


