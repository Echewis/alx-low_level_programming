#include "lists.h"

/**
 * list_len - Is the lenght of the str
 * @h: is the head of the list
 * Return: will return the lenght
 */
size_t list_len(const list_t *h)
{
	unsigned int z;

	if (h == NULL)
		return (0);

	for (z = 1; h->next != 0; z++)
	h = h->next;
	return (z);

}
