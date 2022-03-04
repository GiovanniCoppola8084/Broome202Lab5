#include<iostream>
#include<iomanip>
#include<fstream>

#include"Functions.h"
#include"BubbleSort.cpp"
#include"SelectionSort.cpp"

// Main
int main(void)
{
	// Variables
	ifstream fin;
	ofstream fout;
	int sizeOfArray = 0;
	int array[MAX_ARRAY_SIZE];
	int selectionDataArray[MAX_ARRAY_SIZE];
	int bubbleDataArray[MAX_ARRAY_SIZE];

	// Call PrintCourseHeading to screen
	PrintCourseHeading(static_cast<ofstream&>(cout), COLLEGE, NAME, COURSE, LAB, SCREEN_WIDTH);

	// Call ScreenMenu
	ScreenMenu(fin, fout);

	cout << endl;

	// Call PrintCourseHeading to output file
	PrintCourseHeading(fout, COLLEGE, NAME, COURSE, LAB, SCREEN_WIDTH);

	// Read in the data
	InputArrayValues(fin, array, sizeOfArray);
	CopyArray(array, selectionDataArray, sizeOfArray);
	CopyArray(array, bubbleDataArray, sizeOfArray);

    // Call the selection sort function
    SelectionSort<int>(selectionDataArray, sizeOfArray);

	// Call to the bubble sort function
    BubbleSort<int>(bubbleDataArray, sizeOfArray);

    // Print the unsorted array
    PrintArrayValues(fout, array, sizeOfArray, "Bubble Data Unsorted - " + to_string(sizeOfArray) + " Values");
    // Print the sorted array - by bubble sort
    PrintArrayValues(fout, bubbleDataArray, sizeOfArray, "Bubble Data Sorted - " + to_string(sizeOfArray) + " Values");

    // Print the unsorted array
    PrintArrayValues(fout, array, sizeOfArray, "Selection Data Unsorted - " + to_string(sizeOfArray) + " Values");
    // Print the sorted array - by bubble sort
    PrintArrayValues(fout, selectionDataArray, sizeOfArray, "Selection Data Sorted - " + to_string(sizeOfArray) + " Values");

	return 0;
}