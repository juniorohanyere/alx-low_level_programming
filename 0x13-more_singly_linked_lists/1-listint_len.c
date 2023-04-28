#include "lists.h"

/**
 * listint_len - function that returns the number of element in a linked list
 *
 * Return: return the number of the elements (count)
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != 0)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
