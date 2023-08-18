#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *			      position
 *
 * @head: the pointer to the head of the list
 * @idx: the index of the list where the new node should be added, starting at
 *	 0
 * @n: the new node
 *
 * Return: return the address of the new node on success
 *	   return NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
	int n)
{
	unsigned int i;
	dlistint_t *h, *new, *p;

	if (head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;
	if (idx == 0)
	{
		if (*head)
		{
			new->next = *head;
			(*head)->prev = new, *head = new;
		}
		else
			*head = new;
		return (new);
	}
	i = 1, h = (*head)->next;
	while (h)
	{
		if (idx == i)
		{
			h->prev->next = new, new->prev = h->prev;
			new->next = h, h->prev = new;
			return (new);
		}
		p = h;
		h = h->next;
		i++;
	}
	if (h == NULL && i == idx)
	{
		p->next = new, new->prev = p;
		return (new);
	}
	free(new);
	return (NULL);
}
