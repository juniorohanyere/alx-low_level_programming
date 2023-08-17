#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 *		      list
 *
 * @head: pointer to head of the list
 * @n: the new node
 *
 * Return: return the address of new element on success
 *	   return NULL on failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else if ((*head)->next == NULL)
	{
		(*head)->next = new;
		new->prev = *head;
	}

	else
	{
		h = *head;
		while (h->next)
			h = h->next;
		h->next = new;
		new->prev = h;
	}

	return (new);
}
