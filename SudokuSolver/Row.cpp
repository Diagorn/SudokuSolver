#include "Row.h"

Row::Row(int x, Sudoku* matrix) {
	CellList = new Cell*[9];
	for (int i = 0; i < 9; ++i) {
		CellList[i] = matrix->getCellAtIndex(x, i);
	}
}

Row::~Row() {
	delete[] CellList;
}