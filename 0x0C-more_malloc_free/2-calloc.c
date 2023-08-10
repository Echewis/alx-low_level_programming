#include <stdlib.h>
#include <stdio.h>
#include "main.h"


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < nmemb * size; a++)
	{
		*((char *)ptr + a) = 0;
	}
	return (ptr);
}
