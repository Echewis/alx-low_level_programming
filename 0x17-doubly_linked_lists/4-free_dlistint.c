#include "lists.h"

/**
 * free_dlistint - This will free the list
 * @head: This is the pointer to the head in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_n = head;

	while (current_n != NULL)
	{
		head = head->next;
		free(current_n);
		current_n = head;
	}
}
