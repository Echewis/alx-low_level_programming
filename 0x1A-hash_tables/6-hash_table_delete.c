#include "hash_tables.h"

/**
 * hash_table_delete - will delete the element
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_table_t *head = ht;
	hash_node_t *n, *tmp;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			n = ht->array[a];
			while (n != NULL)
			{
				tmp = node->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(head->array);
	free(head);

}
