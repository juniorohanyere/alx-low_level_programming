#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 *
 * @h: pointer to the head of a node of a linked list
 *
 * Description: this function can free lists with a loop
 *		the function sets the head to NULL
 *
 * Return: return the size of the list that was free'd
*/

size_t free_listint_safe(listint_t **h)
{
	size_t p = 0;
	listint_t *list = NULL;

	if (h == NULL || *h == NULL)
		return (p);
	while (*h)
	{
		p++;
		if (*h > (*h)->next)
		{
			list = *h;
			*h = (*h)->next;
			free(list);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (p);
}
