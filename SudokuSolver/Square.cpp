#include "Square.h"

Square::Square(int x, int y, Sudoku* matrix) {//Creates the 9x9 square of sudoku
	CellList = new Cell*[9];
	CellList[0] = matrix->getCellAtIndex(x, y);
	CellList[1] = matrix->getCellAtIndex(x + 1, y);
	CellList[2] = matrix->getCellAtIndex(x + 2, y);
	CellList[3] = matrix->getCellAtIndex(x, y + 1);
	CellList[4] = matrix->getCellAtIndex(x + 1, y + 1);
	CellList[5] = matrix->getCellAtIndex(x + 2, y + 1);
	CellList[6] = matrix->getCellAtIndex(x, y + 2);
	CellList[7] = matrix->getCellAtIndex(x + 1, y + 2);
	CellList[8] = matrix->getCellAtIndex(x + 2, y + 2);
}

Square::~Square() {
	delete[] CellList;
}