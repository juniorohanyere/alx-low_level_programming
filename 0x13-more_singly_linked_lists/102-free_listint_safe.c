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
	listint_t *list, *node;

	if (h == NULL || *h == NULL)
		return (0);
	list = *h;
	*h = NULL;
	while (list != NULL)
	{
		p++;
		node = list->next;
		if (node >= list)
			break;
		list = node;
		free(list);
	}
	return (p);
}
