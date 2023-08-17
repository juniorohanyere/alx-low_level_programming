#include <stdio.h>

#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h: pointer to head of the list
 *
 * Return: return the number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (i);

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
