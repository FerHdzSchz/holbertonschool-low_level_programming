#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a structure from dog
 *
 * @d: structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{; }
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
