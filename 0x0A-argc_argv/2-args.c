#include <stdio.h>

/**
* main - This prints all the arguments
* @argc: Counts the arguments
* @argv: arguments vector position
* Return: Always returns 0
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0 ; a < argc ; a++)
		printf("%s\n", argv[a]);
	return (0);
}
