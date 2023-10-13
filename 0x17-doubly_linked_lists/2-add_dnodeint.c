#include "lists.h"

/**
 * add_dnodeint - This will add a node at the beginning of the list
 * @head: This is the pointer to the head of the list
 * @n: This is the Nth integer to be stored on the node
 * Return: It will return the new address of=r NUll when it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = *head;

	if (*head != NULL)
		(*head)->prev = new_n;

	*head = new_n;

	return (new_n);
}
