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
	unsigned long int index, a;
	hash_node_t *new_node;
	char *copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
