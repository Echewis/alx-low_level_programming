#include "lists.h"

/**
 * sum_dlistint - Thos will add all the data in the list
 * @head: This is the pointer to the head of the list
 * Return: It will return all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
