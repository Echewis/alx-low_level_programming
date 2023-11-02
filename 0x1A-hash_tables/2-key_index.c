#include "hash_tables.h"
/**
 * key_index - This function gives the index of a key
 * @key: This is the key
 * @size: this is the size
 * Return: will return the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
