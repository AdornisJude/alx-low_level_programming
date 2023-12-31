#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copies a string to newly allocated memory space
* @str: the string to be copied
* Return: a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int a;

	if (str == NULL)
	return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
	}
	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
	return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
	copy[a] = str[a];
	}
	copy[a] = '\0';

	return (copy);
}

