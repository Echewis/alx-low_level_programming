#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - is the new struct
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner
 * Return: will return d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
