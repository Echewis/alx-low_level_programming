#include "lists.h"


int len(const char *str);
list_t *create_new(const char *str);
/**
 * add_node_end - is a pointer to the structure
 * @head: is the beginning of the list
 * @str: is the ponter to the string
 * Return: will return the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new = create_new(str);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)

	{
		*head = new;
		return (*head);

	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}

/**
 * create_new - This is new list that is to be added
 * @str: is the ponter to the strings
 * Return: will return the new list
 */

list_t *create_new(const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len(str);
	new->next = NULL;
	return (new);
}

/**
 * len - is th3e lenght of the strings
 * @str: is the address of the string
 * Return: will return the lenght of the strings
 */

int len(const char *str)
{
	int x;

	if (str == NULL)
	return (0);
	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
