#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the memory.
 * @old_size: The size in bytes of the allocated space.
 * @new_size: The size in bytes for the new memory.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.         
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	unsigned int i, lower = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		lower = new_size;
	else
		lower = old_size;
	point = malloc(new_size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < lower; i++)
	{

		point[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (point);
}
