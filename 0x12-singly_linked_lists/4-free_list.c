#include "lists.h"

/**
 * free_list - frees the memory
 * @head: ie the pointer to the beginning of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
