#include <stdio.h>

#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 *		  dlistint_t list
 *
 * @head: the pointer to the head of the list
 *
 * Return: return the sum of all the elements in the list
 *	   return 0 if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *h;

	sum = 0;

	if (head == NULL)
		return (sum);

	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
