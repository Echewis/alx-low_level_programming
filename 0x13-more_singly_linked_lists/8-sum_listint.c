#include "lists.h"

/**
 * sum_listint - will add all the list
 * @head: is the pointer head
 * Return: will return summation of the lists
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	listint_t *latest_node;

	latest_node = head;
	while (latest_node != NULL)
	{
		add += latest_node->n;
		latest_node = latest_node->next;
	}
	return (add);
}
