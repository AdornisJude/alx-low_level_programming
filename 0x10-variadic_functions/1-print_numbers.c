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
	va_list arguments;
	unsigned int a;
	const char *s_rator;

	if (separator == NULL || *separator == 0)
		s_rator = " ";
	else
		s_rator = (char *) separator;

	va_start(arguments, n);

	for (a = 0; a < n; a++)
	{
		printf("%s%d", s_rator, va_arg(arguments, unsigned int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arguments);
}
