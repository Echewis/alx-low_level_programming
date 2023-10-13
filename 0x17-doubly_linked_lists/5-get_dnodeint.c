#include "lists.h"

/**
 * get_dnodeint_at_index - This will return the Nth node of a list
 * @head: This is a pointer to the list
 * @index: This is the index of the node
 * Return: It will return the Nth node of the list or
 * NULL when it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count_n = 0;

	while (head != NULL)
	{
		if (count_n == index)
			return (head);

		head = head->next;
		count_n++;
	}

	return (NULL);
}
