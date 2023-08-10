#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array looking at min and max values
 * @min: The lower end array
 * @max: The upper end array
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
