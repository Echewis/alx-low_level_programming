#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - is a funtion that frees the dog
 * @d: is a pointer
 * Return: returns nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
