#include <stdio.h>

/**
* main - This prints the number of arguments
* @argc: Counts the number of arguments
* @argv: this is the argument  vector
* Return: returns 0
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
