#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate the 2nd string to the 1st
 * @s1: Destination string
 * @s2: source
 * @n: bytes
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, j, k;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j <= n)
		n = j;

	ptr = malloc((m + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];

	for (k = 0; k < n; k++)
		ptr[k + m] = s2[k];

	ptr[k + m] = '\0';

	return (ptr);
}
