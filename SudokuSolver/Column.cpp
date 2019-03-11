#include "Column.h"

Column::Column(int x, Sudoku* matrix) {
	CellList = new Cell*[9];
	for (int i = 0; i < 9; ++i) {
		CellList[i] = matrix->getCellAtIndex(i, x);
	}
}

Column::~Column() {
	delete[] CellList;
}