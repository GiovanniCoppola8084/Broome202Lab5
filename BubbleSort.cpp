#include"Standard.h"

//Declaration of the template call
template <class integer>
//-------------------------------------------------------------------------------------------------
//BubbleSort - function to sort the array via bubble sort
//-------------------------------------------------------------------------------------------------
void BubbleSort(integer array[], integer sizeOfArray)
{
	//For loop to loop through all elements of the array
	for (integer index = 0; index < sizeOfArray - 1; index++)
	{
		//For loop to loop down to the element that has already been sorted
		for (integer value = 0; value < sizeOfArray - index - 1; value++)
		{
			//If the current element is less than the element before it
			if (array[value] > array[value + 1])
			{
				//Create a temporary variable to swap the two variables
				integer temporary = array[value];
				array[value] = array[value + 1];
				array[value + 1] = temporary;
			}
		}
	}
}