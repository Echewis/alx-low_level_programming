#include "lists.h"

/**
 * listint_len - lists the total number of node
 * @h: is the header pointer
 * Return: will return the total number of the node
 */

size_t listint_len(const listint_t *h)
{
	int total = 0;

	while (h != NULL)
	{
		h = h->next;
		total++;
	}
	return (total);
}
