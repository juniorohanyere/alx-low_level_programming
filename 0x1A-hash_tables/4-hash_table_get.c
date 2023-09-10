#include <stdio.h>
#include <string.h>

#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table to be looked into
 * @key: the key to look for
 *
 * Return: return the value associated with the element
 *	   return NULL if the key couldn't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
