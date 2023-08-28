#include "lists.h"

/**
 * free_listint2 - will free the list
 * @head: is the head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *latest_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		latest_node = *head;
		*head = (*head)->next;
		free(latest_node);
	}
	*head = NULL;
}
