#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable
 * @d: pointer to structure
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
