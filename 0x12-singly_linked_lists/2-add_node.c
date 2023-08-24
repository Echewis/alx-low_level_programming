#include "lists.h"

int len(const char *str);
/**
 * add_node - will add a node at the beginning
 * @head: is the beginning of the list
 * @str: is the string lenght
 * Return: will return new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)

		new->next = NULL;
	else

			new->next = *head;
		new->str = strdup(str);
		new->len = len(str);
		*head = new;

	return (*head);
}

/**
 * len - is the string lenght
 * @str: is the string
 * Return: will return the lenght
 */

int len(const char *str)
{
	int v;

	if (str == NULL)

		return (0);

	v = 0;
	while (str[v] != '\0')
	{
		v++;
	}
	return (v);
}
