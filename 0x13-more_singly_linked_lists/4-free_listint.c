#include "lists.h"

/**
 * free_listint - will free the nodes
 * @head: is the pointer head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *latest_node;

	while (head != NULL)
	{
		latest_node = head;
		head = head->next;
		free(latest_node);
	}
}
