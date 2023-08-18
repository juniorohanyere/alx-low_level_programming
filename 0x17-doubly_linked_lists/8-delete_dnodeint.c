#include <stdio.h>

#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at given index of
 *			      a linked list
 *
 * @head: the pointer to the head of the list
 * @index: the index of the node that should be deleted, starting at 0
 *
 * Return: return 1 on success
 *	   return -1 on failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		h = *head, *head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
		h = NULL;
		return (1);
	}
	i = 1, h = (*head)->next;
	if (h)
	{
		while (h->next)
		{
			if (index == i)
			{
				h->prev->next = h->next;
				h->next->prev = h->prev;
				free(h);
				h = NULL;
				return (1);
			}
			i++, h = h->next;
		}
	}
	if (h && index == i)
	{
		h->prev->next = NULL;
		free(h);
		return (1);
	}
	return (-1);
}
