#include"Functions.h"

void ScreenMenu(ifstream & fin, ofstream & fout)
{
	// Variable
	int fileChoice;
	bool fileExist = true;

	// While not given valid answer
	while (fileExist)
	{
		// Output message for choice
		cout << "Please choose a file from the following list." << endl
			<< "1. SmallRan.txt" << endl
			<< "2. Descend.txt" << endl
			<< "3. Ascend.txt" << endl
			<< "4. LargeRan.txt" << endl;

		// Intake choice
		cin >> fileChoice;

		// Check choice condition
		switch (fileChoice)
		{
		case 1:
			// Open files
			fin.open("SmallRan.txt");
			fout.open("Out1.txt");

			fileExist = false;

			// Output message
			cout << "You have selected SmallRan.txt" << endl
				<< "The output has been sent to Out1.txt" << endl;

            // Output the divider to the console
            PrintDivider(static_cast<ofstream&>(cout), 40, '-');
			break;

		case 2:
			// Open files
			fin.open("Descend.txt");
			fout.open("Out2.txt");

			fileExist = false;

			// Output message
			cout << "You have selected Descend.txt" << endl
				<< "The output has been sent to Out2.txt" << endl;

            // Output the divider to the console
            PrintDivider(static_cast<ofstream&>(cout), 40, '-');
			break;

		case 3:
			// Open files
			fin.open("Ascend.txt");
			fout.open("Out3.txt");

			fileExist = false;

			// Output message
			cout << "You have selected Ascend.txt" << endl
				<< "The output has been sent to Out3.txt" << endl;

            // Output the divider to the console
            PrintDivider(static_cast<ofstream&>(cout), 40, '-');
			break;

		case 4:
			// Open files
			fin.open("LargeRan.txt");
			fout.open("Out4.txt");

			fileExist = false;

			// Output message
			cout << "You have selected LargeRan.txt" << endl
				<< "The output has been sent to Out4.txt" << endl;

            // Output the divider to the console
            PrintDivider(static_cast<ofstream&>(cout), 40, '-');
			break;

		default:
			// Output message
			cout << "Not a valid file, please choose again." << endl << endl;

            // Output the divider to the console
            PrintDivider(static_cast<ofstream&>(cout), 40, '-');
			break;
		}
	}
}

void InputArrayValues(ifstream & fin, int array[], int & size)
{
	// Variable
	size = 0;

    // Input a number (primer)
    fin >> array[size];

	// While file still has data
	while (fin && size < MAX_ARRAY_SIZE)
	{
        // Increment
		size++;

		// Intake data (changer)
		fin >> array[size];
	}
}

void CopyArray(int array[], int newArray[], int size)
{
	// For loop to copy array
	for (int count = 0; count < size; count++)
	{
		// Copy element
		newArray[count] = array[count];
	}
}

void PrintArrayValues(ofstream& fout, int array[], int numberOfValues, string message)
{
    // Print divider to the screen
    PrintDivider(fout, 100, '-');

    // Output the message to the screen
    PrintCenteredMessage(fout, message, 100);

    // Print divider to the screen
    PrintDivider(fout, 100, '-');

    // Set the output to be printed on the right for setw and set the fill to a space
    fout << right << setfill(' ');

    // For loop to print the array values to the screen
    for (int index = 0; index < numberOfValues; index++)
    {
        // If statement to determine if the number of values is divisible by 4
        if (index % 4 == 0)
        {
            // Move the cursor down a line
            fout << endl;
        }

        // Output the number to the screen
        fout << setw(5) << array[index];
    }

    // Move the cursor down a line
    fout << endl;

    // Print divider to the screen
    PrintDivider(fout, 100, '-');
}