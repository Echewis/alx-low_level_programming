#include "lists.h"
/**
 * print_dlistint - This will print all the element in dlistint_t
 * @h: This is the head of the node
 * Return: It will return the number of nodes inthe list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}

	return (count_node);
}
