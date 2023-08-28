#include "lists.h"


/**
 * print_listint - the prototype
 * @h: is the pointer head
 * Return: will return the total number
 */
size_t print_listint(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;

	}
	return (number);
}
