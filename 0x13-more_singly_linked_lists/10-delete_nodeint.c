#include "lists.h"


/**
 * delete_nodeint_at_index - will delete node at index
 * @head: is the head pointer
 * @index: is the index where deletion will happen
 * Return: will return either negative or positive
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;

	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && x < index)
	{
		previous = current;
		current = current->next;
		x++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);

	return (1);
}
