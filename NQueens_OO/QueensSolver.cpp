// !!!WARNING!!! Does not (yet) compile!

#include <iostream>
#include "QueensSolver.hpp"



using namespace std;



QueensSolver::QueensSolver(int size)
{
	_bsize = size;
	for (int row=0; row < size; row++)
	{
		for (int col=0; col < size; col++)
		{
			_board[row][col] = ' ';
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

void 
QueensSolver::printBoard()
{
	printRowBorder(_bsize);
	for (int row=_bsize-1; row >=0 ; row--)
	{
		cout << "|";
		for (int col=0; col < _bsize; col++)
		{
			cout << _board[row][col] << "|";
		}
		cout << endl;
		printRowBorder(_bsize);
	}
	
}

bool 
QueensSolver::canPlace (int atRow, int atCol)
{
	// check the row ....
	for (int col=0; col<atCol; col++)
	{
		// is there a Q in this row at some other column ???
		if (_board[atRow][col] == 'Q')
			return false;
	}
	// if we get here, there was no other queen in this row ...	
	
	// check the UL (upper left)	diagonal
	int offset = 1;
	while( atRow-offset >=0 && atCol-offset >=0 )
	{
		if (_board[atRow-offset] [atCol-offset] == 'Q')
			return false;
		offset++;
	}
	
	// check the LL (lower left)	diagonal
	offset = 1;
	while( atRow+offset < _bsize && atCol-offset >=0 )
	{
		if (_board[atRow+offset] [atCol-offset] == 'Q')
			return false;
		offset++;
	}
	return true;
}

bool 
QueensSolver::solveBoard(int fromCol)
{
	if (fromCol>=_bsize)
		return true;	
	
	else
	{
		for (int possibleRow =0; possibleRow<_bsize; possibleRow++ )
		{
			// is this location OK relative to everything already on board? 
			if (canPlace (possibleRow, fromCol) )
			{
				// try to place a queen here ...
				_board[possibleRow][fromCol] = 'Q';



				bool worked = solveBoard(fromCol+1);
			
				if (worked)
				{
					return true;
				}
				else
				{
					// solution couldn't be found with queen at this location ...
					//    remove the queen. 
					_board[possibleRow][fromCol] = ' ';
				}
			}	
		}
		return false;
	}
}

void 
QueensSolver::solveBoard()
{
	solveBoard(0);
}


