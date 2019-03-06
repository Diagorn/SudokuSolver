#include "CellSet.h"

int getNumberOfOnes(int* Array, int Dimension) {
	int result = 0;
	for (int i = 0; i < Dimension; ++i) {
		if (Array[i] == 1)
			result++;
	}
	return result;
}

bool arraysEqual(int* Array1, int* Array2, int Dimension) {
	bool arrayEquality = true;
	for (int k = 0; k < 9; ++k) {
		if (Array1[k] != Array2[k])//Checking the equality of two arrays
			arrayEquality = false;
	}
	return arrayEquality;
}

CellSet::CellSet(Cell* a, Cell* b, Cell* c, Cell* d, Cell* e, Cell* f, Cell* g, Cell* h, Cell* i) {
	CellList = new Cell*[9];
	CellList[0] = a;
	CellList[1] = b;
	CellList[2] = c;
	CellList[3] = d;
	CellList[4] = e;
	CellList[5] = f;
	CellList[6] = g;
	CellList[7] = h;
	CellList[8] = i;
}

CellSet::~CellSet() {
	delete[] CellList;
}

void CellSet::deleteDeterminedValue(int value) {
	for (int i = 0; i < 9; ++i)
		CellList[i]->deletePossibleValue(value);
}

void CellSet::deleteEqualValuesNumber() {
	for (int i = 0; i < 8; ++i) {//Checking all the cells(not including the group consisting of 1 cell)
		int counterOfCells = 1;
		int* upperTransitionalArray = CellList[i]->getValue();//Array that containts numbers looked for in a cell group; transitionalArray compares to it
		for (int j = i + 1; j < 9; ++j) {//Checking all the other cells
			int* transitionalArray = CellList[j]->getValue();//Array containing 1s and 0s of a particular cell
			if (arraysEqual(upperTransitionalArray, transitionalArray, 9)) {
				counterOfCells++;//Finding the number of equal cells
			}
		}
		if (counterOfCells == getNumberOfOnes(upperTransitionalArray, 9)) {//If the main idea of this function is True
			for (int j = i + 1; j < 9; ++j) {
				if (!arraysEqual(upperTransitionalArray, CellList[j]->getValue(), 9)) {//If the cell is not in the group
					for (int k = 0; k < 9; ++k) {
						if (upperTransitionalArray[k] == 1)
							CellList[k]->deletePossibleValue(k);//Remove all the cell group values from the other cells
					}
				}
			}
		}
	}
}