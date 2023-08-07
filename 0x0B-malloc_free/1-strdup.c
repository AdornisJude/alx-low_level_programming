#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copies string to newly allocated memory space
* @str: this is the string to copy to the new memory
* Return: returns a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	int a = 0, b, c = 0;
	char *newStr = NULL;

	while (str[c] != '\0')
	{
	a++;
	c++;
	}

	newStr = malloc(a * sizeof(char));

	if (str == NULL)
	return (NULL);

	for (b = 0; b <= a; b++)
	{
		newStr[b] = str[b];
	}
	return (newStr);
}
