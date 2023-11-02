#include "hash_tables.h"
/**
 * hash_table_set - This will add element at the hash table
 * @ht: the hash table
 * @key: this is the key
 * @value: this is the value
 * Retrun: it will retuen positive
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node;
	hash_node_t *node = ht->array[index];

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
/*	hash_node_t *node = ht->array[index];*/

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
