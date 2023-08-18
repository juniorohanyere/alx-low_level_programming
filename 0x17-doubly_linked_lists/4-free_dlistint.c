#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: return nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h, *mem;

	h = head;
	while (h != NULL)
	{
		mem = h->next;
		free(h);
		h = mem;
	}
}
