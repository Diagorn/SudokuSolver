#include "Sudoku.h"

Sudoku::Sudoku() {//Building a 9x9x9 array
	Matrix = new Cell**[9];//Matrix: rows
	for (int i = 0; i < 9; ++i) {
		Matrix[i] = new Cell*[9];//Matrix: cols
		for (int j = 0; j < 9; ++j) {
			Matrix[i][j] = new Cell();
		}
	}
}

Sudoku::Sudoku(Sudoku& a) {
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			this->Matrix[i][j] = a.getCellAtIndex(i, j);
		}
	}
}

Sudoku::~Sudoku() {//Just freeing the memory
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			Matrix[i][j]->~Cell();
		}
		delete[] Matrix[i];
	}
	delete[] Matrix;
}

void Sudoku::fill(int i, int j, int value) {//If any number is possible in the Cell, so be it. If it is determined, only one "1" will be in the array;
											//If Cell[i] == 1, then i is the possible number in this cell
	if (value != 0) {
		Matrix[i][j]->setValue(value);
	}
}

int* Sudoku::getElement(int i, int j) {
	return Matrix[i][j]->getValue();
}

Cell* Sudoku::getCellAtIndex(int i, int j) {
	return Matrix[i][j];
}

bool Sudoku::isSolved() {
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (!Matrix[i][j]->isDetermined())
				return false;
		}
	}
	return true;
}