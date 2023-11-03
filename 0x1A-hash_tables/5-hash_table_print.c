#include "./hash_tables.h"

/**
 * hash_table_print - this will print the element
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int a;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (flag == 1)
				printf(", ");
			n = ht->array[a];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
