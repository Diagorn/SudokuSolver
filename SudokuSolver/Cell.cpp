#include "Cell.h"

Cell::Cell() {
	Mas = new int[9];
	for (int i = 0; i < 9; ++i)
		Mas[i] = 1;//At first all values are possible
}

Cell::Cell(Cell& a) {//Copying everything from "a" cell
	this->x = a.x;
	this->y = a.y;
	this->Mas = new int[9];
	this->Mas = a.getValue();
}//Been coded for the task that has been solved in another way. That means it's useless

Cell::~Cell() {
	delete[] Mas;
}

void Cell::setValue(int value) {
	for (int i = 1; i < 10; ++i) {
		if (i == value)
			continue;
		else
			Mas[i - 1] = 0;
	}
}

void Cell::deletePossibleValue(int value) {
	Mas[value - 1] = 0;
}

int* Cell::getValue() {
	return Mas;
}

bool Cell::isPossible(int number) {
	return Mas[number];
}

bool Cell::Baned() {
	return isBaned;
}

bool Cell::isDetermined() {
	int numberOfPossibleValues = 0;
	for (int i = 0; i < 9; ++i) {
		if (Mas[i] == 1)
			numberOfPossibleValues++;
	}
	if (numberOfPossibleValues == 1)
		return true;
	else
		return false;
}