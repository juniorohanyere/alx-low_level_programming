#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 *		  dlistint_t list
 *
 * @head: pointer to head of the list
 * @n: the new node
 *
 * Return: return the address of new element on success
 *	   return NULL on failure
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		(*head)->prev = new;
		new->next = *head;
		*head = new;
	}

	return (new);
}
