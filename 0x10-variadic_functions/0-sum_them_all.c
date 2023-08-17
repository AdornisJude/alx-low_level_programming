#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all - a function that provides the sum
* @n: the arguments inputs
* @...: varying parameter counts  in the inputs
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list func_arg;
	unsigned int a, sum = 0;

	va_start(func_arg, n);
	if (n == 0)
		return (0);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(func_arg, const unsigned int);
	}
	va_end(func_arg);

	return (sum);
}
