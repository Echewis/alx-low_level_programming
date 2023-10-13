#include "lists.h"

/**
 * delete_dnodeint_at_index - This will delete thje node in the list
 * @head: This is the pointer to the list
 * @index: is thje indwx to the list
 * Return: This will return 1 is=f its successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_n = *head;
	unsigned int count_n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_n->next;

		if (current_n->next != NULL)
			current_n->next->prev = NULL;

		free(current_n);
		return (1);
	}

	while (current_n != NULL && count_n < index)
	{
		current_n = current_n->next;
		count_n++;
	}

	if (current_n == NULL)
		return (-1);
	current_n->prev->next = current_n->prev->next;

	if (current_n->next != NULL)
		current_n->next->prev = current_n->prev;

	free(current_n);
	return (1);
}
