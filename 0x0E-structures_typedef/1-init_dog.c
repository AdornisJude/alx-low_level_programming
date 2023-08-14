#include <stdlib.h>
#include "dog.h"


/**
* init_dog - initializes the variable of type struct dog
* @d: pointer to struct dog
* @name: to initialize name
* @age: to initialize age
* @owner: to initialize owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
