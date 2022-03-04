//-------------------------------------------------------------------------------------------------
//File Name: Standard.h
//Associated File: Standard.cpp
//Contains:
// Constant and headers
//
//-------------------------------------------------------------------------------------------------
#ifndef Standard_h
#define Standard_h

// Includes
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

// Header information
const string NAME = "Gino Coppola, Liz Akulis, Guanxun Chen";
const string COLLEGE = "SUNY Broome";
const string COURSE = "CST 202";
const string LAB = "Lab 5";

//Constant
const int SCREEN_WIDTH = 100;
const int MAX_ARRAY_SIZE = 50;

//Functions
void PrintDivider(ofstream & fout, int width, char letter);
void PrintFileName(ofstream & fout, string fileName, string type);
void PrintCenteredMessage(ofstream & fout, string message, int width);
void PrintCourseHeading(ofstream & fout, string college, string myName, string course,
	string labNumber, int width);

#endif
