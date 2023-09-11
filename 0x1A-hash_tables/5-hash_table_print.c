#include <stdio.h>

#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 *
 * Return: return nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *node;

	if (ht != NULL)
	{
		i = 0;
		printf("{");
		for (j = 0; j < ht->size; j++)
		{
			node = ht->array[j];

			while (node != NULL)
			{
				if (i == 1)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
