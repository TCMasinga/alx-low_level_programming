#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable
 * @name: input value name
 * @age: input valu age
 * @owner: input value owner
 * @d: pointer to initialise
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
