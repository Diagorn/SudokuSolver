#pragma once
#include "CellSet.h"
#include "Sudoku.h"

class Square : public CellSet, public Sudoku {
public:
	Square(int x, int y, Sudoku* matrix);
	~Square();
};