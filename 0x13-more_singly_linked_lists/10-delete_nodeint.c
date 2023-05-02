#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that deletes a node
 *			     at index index of a linked list
 *
 * @head: pointer to the first node of the linked list
 * @index: index of the node that should be deleted
 *
 * Description: Index starts at 0
 *
 * Return: return 1 on success
 *	   return -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node, *node;

	if (!head || !*head)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		node = node->next;
		if (node == NULL)
		return (-1);
	}
	new_node = node->next;
	node->next = new_node->next;
	free(new_node);
	return (1);
}
