#include "lists.h"

/**
 * add_nodeint_end - adds nodes at the end of list
 * @head: is the head of the node
 * @n: is the n number of the list
 * Return: will return the list with the new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_node, *end_node;

	if (head == NULL)
		return (NULL);

	fresh_node = (listint_t *)malloc(sizeof(listint_t));

	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;

	if (*head == NULL)
		*head = fresh_node;

	else
	{
		end_node = *head;

		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = fresh_node;
	}
	return (fresh_node);
}
