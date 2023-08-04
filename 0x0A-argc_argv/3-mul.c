#include <stdio.h>
#include <stdlib.h>

/**
* main -  This helps to print the product of two numbers
* @argc: Counts the number of arguments used
* @argv: This represents the argument vector
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int First_Number, Second_Number, Prod = 0;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		First_Number = atoi(argv[1]);
		Second_Number = atoi(argv[2]);

		Prod = First_Number * Second_Number;
		printf("%d\n", Prod);
	}
	return (0);
}
