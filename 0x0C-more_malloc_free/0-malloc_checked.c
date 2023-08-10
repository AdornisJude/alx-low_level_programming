#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Creates an array
 * @b: Value passed in for array creation
 * Return: Always returns 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
