#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this function creates array
 * @size: this represents the array size
 * @c: the character to be stored
 * Return: arr.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
