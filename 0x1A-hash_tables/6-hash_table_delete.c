#include <stdio.h>
#include <stdlib.h>

#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: the hash table
 *
 * Return: return nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
