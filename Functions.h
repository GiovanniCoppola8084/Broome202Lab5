#ifndef Functions_h
#define Functions_h

#include"Standard.h"

// Prototype
void ScreenMenu(ifstream & fin, ofstream & fout);
void InputArrayValues(ifstream & fin, int array[], int & size);
void CopyArray(int array[], int newArray[], int size);
void PrintArrayValues(ofstream& fout, int array[], int numberOfValues, string message);

#endif
