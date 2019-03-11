#pragma once
class Cell {
private:
	int* Mas;//Array of possible numbers in a cell
	int x, y;//Coordinates of a cell
	bool isBaned;//True if the cell is in the group of cells which has an equal number of possible variants and it's number is equal to the number of cells
public:
	Cell();//Constructor
	Cell(Cell& a);//Copy constructor
	~Cell();//Destructor
	void setValue(int value);//Set value if it is determined
	void deletePossibleValue(int value);//Delete the value which is no more possible for this cell
	int* getValue();//Returns value of Mas
	bool isPossible(int number);//Returns True if this number is possible in the cell
	bool Baned();//True if the cell is baned
	bool isDetermined();//Check if there is only one possible number in the cell
};