#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to  prints strings.
 * @separator: string to be printed in- between strings.
 * @n: number of strings passed to the function.
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list variable_list;
	unsigned int a;
	char *string;

	va_start(variable_list, n);

	for (a = 0; a < n; a++)
	{
	string = va_arg(variable_list, char *);

	if (string)
	printf("%s", string);
	else
	printf("(nil)");

	if (a < n - 1)
		if (separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(variable_list);
}
