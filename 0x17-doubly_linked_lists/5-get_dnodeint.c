#include <stdio.h>

#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 *			   linked list
 *
 * @head: pointer to the head of the list
 * @index: the index of the node starting from 0
 * Return: return the nth node of the list on success
 *	   return NULL on failure
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h;

	i = 0;

	if (head == NULL)
		return (NULL);

	h = head;
	while (h)
	{
		if (index == i)
			return (h);
		h = h->next;
		i++;
	}

	return (NULL);
}
