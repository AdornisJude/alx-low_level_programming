#include <stdio.h>

/**
*main - this prints the name of the program
*@argc: this counts the argunments
*@argv: this is the argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
