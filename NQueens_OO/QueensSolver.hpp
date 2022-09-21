#ifndef _QUEENS_SOLVER_HPP_
#define _QUEENS_SOLVER_HPP_

#define BOARD_SIZE 100

class QueensSolver
{
private:
	int _bsize;
	char _board[BOARD_SIZE][BOARD_SIZE];
public:	
	QueensSolver(int size);
	void printBoard();
	void solveBoard();
private:
	bool canPlace (int atRow, int atCol);
	bool solveBoard(int fromCol);
};

#endif