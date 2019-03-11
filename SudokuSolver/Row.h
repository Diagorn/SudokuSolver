#pragma once
#include "CellSet.h"
#include "Sudoku.h"

class Row : public CellSet, public Sudoku {//Class of c Row of cells in sudoku
public:
	Row(int x, Sudoku* matrix); //Constructor; x stands for the number of the row in the column
	~Row(); //Destructor
};