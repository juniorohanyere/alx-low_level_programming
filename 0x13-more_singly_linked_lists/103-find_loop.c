#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: return the address of the node where the loop starts
 *	   return NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL)
		return (NULL);
	a = b = head;
	while (b->next && (b->next)->next)
	{
		a = a->next;
		b = (b->next)->next;
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
