#pragma once
#include "CellSet.h"
#include "Sudoku.h"

class Column : public CellSet, public Sudoku {
public:
	Column(int x, Sudoku* matrix);
	~Column();
};