#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - Adds positive numbers
* @argc: counts the arguments
* @argv: Gives the arguments vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (a = 1 ; a < argc ; a++)
		{
			for (b = 0 ; argv[a][b] != '\0' ; b++)
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);

}
