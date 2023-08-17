#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints number returning new line
 * @n: indicates the number of arguments
 * @...: varying number of input parameters
 * @separator: string between the numbers to be printed
 * return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arguments;

	va_start(arguments, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(arguments, int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arguments);
}
