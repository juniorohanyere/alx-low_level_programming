#include <stdio.h>

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
	dlistint_t *h = head;

	while (head)
	{
		head = head->next;
		free(h);
		h = head;
	}
}
