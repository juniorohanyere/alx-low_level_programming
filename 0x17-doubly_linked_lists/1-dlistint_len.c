#include <stdio.h>

#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 *		  dlistint_t list.
 *
 * @h: pointer to head of the list
 *
 * Return: return the number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (i);

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
