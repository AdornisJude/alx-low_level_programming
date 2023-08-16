#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_iterator - prints each array element on a new line
* @array: the array itself
* @size: size of the array
* @action: pointer to the function you need to use
* Return: nothing
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
