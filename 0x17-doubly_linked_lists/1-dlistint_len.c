#include "lists.h"

/**
 * dlistint_len - This will return the lenght of element in the list
 * @h: this is the header pointer
 * Return: It will return the number nodess in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}

	return (count_node);
}
