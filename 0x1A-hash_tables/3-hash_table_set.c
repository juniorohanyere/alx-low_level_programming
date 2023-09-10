#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table where the key or value will be added or updated
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key
 *
 * Return: return 1 on success
 *	   return 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long i, size;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	i = key_index((const unsigned char *)key, size);

	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
