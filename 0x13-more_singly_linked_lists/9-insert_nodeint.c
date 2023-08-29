#include "lists.h"

/**
 * insert_nodeint_at_index - will insert a node a given position
 * @head: is a double pointer
 * @idx: is the index of insertion
 * @n: is the nth number
 * Return: will return the new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	listint_t *latest_node = NULL;
	unsigned int x = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		latest_node = (listint_t *)malloc(sizeof(listint_t));
		if (latest_node == NULL)
		{
			return (NULL);
		}
		latest_node->n = n;
		latest_node->next = current;

		*head = latest_node;
		return (latest_node);
	}
	while (current != NULL && x < idx)
	{
		previous = current;
		current = current->next;
		x++;
	}
	if (x < idx)
	{
		return (NULL);
	}
	latest_node = (listint_t *)malloc(sizeof(listint_t));
	if (latest_node == NULL)
	{ return (latest_node); }
	latest_node->n = n;
	latest_node->next = current;
	previous->next = latest_node;
	return (latest_node);
}
