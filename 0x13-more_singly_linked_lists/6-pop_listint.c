#include "lists.h"

/**
 * pop_listint - will return the data of the hred node
 * @head: is the pointer head
 * Return: will return the data of the head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
