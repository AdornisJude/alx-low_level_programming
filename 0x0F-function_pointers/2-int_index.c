#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int_index - returns the index of the first element
* for which the cmp function does not return 0
* @array: the array of integers to search through
* @size: the number of elements in the array
* @cmp: pointer to the function to be used to compare values
* Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
