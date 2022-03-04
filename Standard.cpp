//-------------------------------------------------------------------------------------------------
//File Name: Standard.cpp
//Associated File: Standard.h
//Contains:
// Definition of method in Standard.h
//
//-------------------------------------------------------------------------------------------------

// Includes
#include"Standard.h"

//-------------------------------------------------------------------------------------------------
// Function definitions
//-------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////////////////////////////
// PrintDivider: Output a divider using width and character given
/////////////////////////////////////////////////////////////////////////////////////////
void PrintDivider(ofstream & fout, int width, char letter)
{
	// Output a Divider
	fout << setfill(letter) << setw(width + 1) << ' ' << setfill(' ') << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////
// PrintFileName: Output type and name of file
/////////////////////////////////////////////////////////////////////////////////////////
void PrintFileName(ofstream & fout, string fileName, string type)
{
	// Ouput message
	fout << "The " + type + " file can be found in the file, " + fileName << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////
// PrintCenteredMessage: Output the string to center of given width
/////////////////////////////////////////////////////////////////////////////////////////
void PrintCenteredMessage(ofstream & fout, string message, int width)
{
	// Output message to center
	fout << setw((width + message.length()) / 2) << message << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////
// PrintCourseHeading: Output course information
/////////////////////////////////////////////////////////////////////////////////////////
void PrintCourseHeading(ofstream & fout, string college, string myName, string course,
	string labNumber, int width)
{
	// Set course and lab information
	string lab = course + " - " + labNumber;

	PrintDivider(fout, width, '*');

	// Output college to the center
	PrintCenteredMessage(fout, college, width);

	// Output the myName to the center
	PrintCenteredMessage(fout, myName, width);

	// Output the course and lab to the center
	PrintCenteredMessage(fout, lab, width);

	PrintDivider(fout, width, '*');

	// Double space
	fout << endl << endl;
}

