#include"Standard.h"

//Declaration of the template call
template <class integer>
//-------------------------------------------------------------------------------------------------
//SelectionSort - function to sort the array
//-------------------------------------------------------------------------------------------------
void SelectionSort(integer array[], integer sizeOfArray)
{
	//Declare the index of the least number of cases
	integer indexOfSmallest;

	//Sort through the array up until the last values
	for (integer index = 0; index < sizeOfArray - 1; index++)
	{
		//Assign the position of the smallest value in the array
		indexOfSmallest = IndexOfSmallest(array, index, sizeOfArray);

		//Swap the values to arrange the smallest listing number first
		Swap(array[index], array[indexOfSmallest]);
	}
}

//Declaration of the template call
template <class integer>
//-------------------------------------------------------------------------------------------------
//Swap - function to swap the two values passed into the array
//-------------------------------------------------------------------------------------------------
void Swap(integer& num1, integer& num2)
{
	//Copy the target data to temp so it doesn't get lost
	integer temp = num1;

	//Copy the data from the source position to the target position
	num1 = num2;

	//Move the temp data into the empty source location
	num2 = temp;
}

//Declaration of the template call
template <class integer>
//-------------------------------------------------------------------------------------------------
//IndexOfSmallest - function to return the index of the current smallest number in the array
//-------------------------------------------------------------------------------------------------
integer IndexOfSmallest(integer array[], integer index, integer sizeOfArray)
{
	//Declare the index of the smallest number
	integer smallestIndex = index;

	//Loop through the rest of the array
	for (integer minIndex = index + 1; minIndex < sizeOfArray; minIndex++)
	{
		//Compare the current number to the smallest number
		if (array[minIndex] < array[smallestIndex])
		{
			//Assign the current index to the index of the smallest number
			smallestIndex = minIndex;
		}
	}

	//Return the index of the smallest number of cases that were found
	return smallestIndex;
}