#include "lists.h"

/**
 * add_nodeint - will add the nodes together
 * @head: is a double pointer to the list
 * @n: is the Nth number of the list
 * Return: will return the list in the beginning
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	if (head == NULL)
		return (NULL);

	fresh_node = (listint_t *)malloc(sizeof(listint_t));

	if (fresh_node == NULL)
		return (NULL);
	fresh_node->n = n;
	fresh_node->next = *head;
	*head = fresh_node;
	return (*head);

}
