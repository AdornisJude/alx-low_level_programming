#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* main - will print the opcodes
* @argc: arguments
* @argv: arguments vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int number_of_bytes, a;
	char *func_array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func_array = (char *)main;

	for (a = 0; a < number_of_bytes; a++)
	{
		if (a == number_of_bytes - 1)
		{
			printf("%02hhx\n", func_array[a]);
			break;
		}
		printf("%02hhx ", func_array[a]);
	}
	return (0);
}
