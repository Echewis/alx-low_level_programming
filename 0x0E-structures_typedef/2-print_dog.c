#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - is the function
 * struct dog - is the structure for the program
 * @d: is the parameter
 * Return: return is based on if
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	printf("Name: %s\n", d->name ? d->owner : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

