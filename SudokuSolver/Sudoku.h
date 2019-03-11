#pragma once
#include "Cell.h"
class Sudoku {
private:
	Cell*** Matrix;//The matrix of sudoku consisting of 1..9 int arrays
public:
	Sudoku();//Constructor 
	Sudoku(Sudoku& a);//Copy constructor
	~Sudoku();//Destructor
	void fill(int i, int j, int value);//Fill the matrix with elements user has put
	int* getElement(int i, int j);//Get the needed element
	Cell* getCellAtIndex(int i, int j);//Get the needed cell
	bool isSolved();//Check if sudoku is solved
};