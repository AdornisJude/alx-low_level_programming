#include <stdlib.h>
#include "dog.h"

/**
* free_dog - a function to free allocated memory
* @d: pointer to struct dog to free
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
