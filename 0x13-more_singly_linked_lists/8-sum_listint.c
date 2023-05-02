#include "lists.h"

/**
 * sum_listint - function that returns the sum
 *		 of all the data of a linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: return the sum of all the data of the linked list
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
