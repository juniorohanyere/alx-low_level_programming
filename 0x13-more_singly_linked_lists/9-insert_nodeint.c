#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 *			     at a given position
 *
 * @head: pointer to the first node of the linked list
 * @idx: the position where the new node is to be inserted
 * @n: the element to be added to the node
 *
 * Return: return the address of the new node
 *	   return NULL if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node;
	unsigned int i;

	node = *head;
	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);
	new_node->n = n;
	for (i = 0; head != NULL && i < idx - 1; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (node->next)
	{
		new_node->next = node->next;
		node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		node->next = new_node;
	}
	return (new_node);
}
