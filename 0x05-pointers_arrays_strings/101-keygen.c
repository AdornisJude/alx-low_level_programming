#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main(void) 
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++) 
	{
		password[i] = 'A' + (rand() % 26);
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated password: %s\n", password);

	return 0;
}
