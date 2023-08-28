#include "lists.h"
/**
 * get_nodeint_at_index -  is the prototype
 * @head: is the head pointer
 * @index: is the index of the list
 * Return: will return the node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *latest_node;

	latest_node = head;

	for (x = 0; latest_node != NULL && x < index; x++)

		latest_node = latest_node->next;

	if (x != index)
		return (NULL);

	return (latest_node);
}
