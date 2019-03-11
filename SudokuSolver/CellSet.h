#pragma once
#include "Cell.h"
class CellSet {
protected:
	Cell** CellList;//List of Cells attached to CellSet
public:
	//CellSet(Cell* a, Cell* b, Cell* c, Cell* d, Cell* e, Cell* f, Cell* g, Cell* h, Cell* i);//Constructor
	//~CellSet(); //Destructor
	void deleteDeterminedValue(int value);//Deleting the one value of 
	void deleteEqualValuesNumber();//Looking for a subgroup of cells that has equal number and number of possible values; deleting these values from other cells
};