#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - is the structure
 * @d: is for initialization
 * @owner: is the name of the owner
 * @name: is the name of the dog
 * @age: is the age of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
